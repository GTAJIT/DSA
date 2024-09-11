import openai
from github import Github

# Replace with your OpenAI API key
openai.api_key = 

def generate_info(points):
    prompt = f"Generate a README section based on the following points:\n{points}\n\n### README Content:"
    
    response = openai.Completion.create(
        model="text-davinci-003",  # Use a valid model name, adjust if needed
        prompt=prompt,
        max_tokens=500,  # Adjust as needed
        temperature=0.7  # Adjust creativity level
    )
    
    return response.choices[0].text.strip()

def main():
    points = """
    - Project Name: LeetCode Solutions
    - Description: Collection of solutions to various LeetCode problems
    - Features: Python solutions, organized by problem categories
    - Current Status: Actively maintained
    """
    
    generated_info = generate_info(points)
    
    print("Generated Information to Add:\n")
    print(generated_info)
    
    while True:
        user_input = input("Do you want to proceed with this information? (Y/N): ").strip().upper()
        
        if user_input == 'Y':
            # Replace with your GitHub token
            token = 
            
            g = Github(token)
            repo = g.get_repo("GTAJIT/LeetCode-Projects")
            readme_path = "README.md"
            
            try:
                readme = repo.get_contents(readme_path)
                new_content = readme.decoded_content.decode() + "\n\n" + generated_info
                repo.update_file(readme.path, "Update README", new_content, readme.sha)
                print(f"README updated successfully at {readme_path}.")
            except Exception as e:
                print(f"An error occurred: {e}")
                print("Creating a new README file...")
                repo.create_file(readme_path, "Create README", generated_info)
                print(f"README created successfully at {readme_path}.")
            break  # Exit the loop after successful update
        elif user_input == 'N':
            print("Regenerating information...")
            generated_info = generate_info(points)
            print("Generated Information to Add:\n")
            print(generated_info)
        else:
            print("Invalid input. Please enter 'Y' or 'N'.")

if __name__ == "__main__":
    main()