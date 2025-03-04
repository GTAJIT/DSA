/** @type {import('tailwindcss').Config} */
module.exports = {
    content: ["./src/**/*.{html,js,ts,tsx,jsx}"], // Adjust paths based on your project structure
    theme: {
      extend: {
        colors: {
          dark: {
            100: "#000000",
            200: "#111827",
          },
          light: {
            100: "#ffffff",
            200: "#E5E7EB",
          },
        },
      },
    },
    plugins: [],
  };