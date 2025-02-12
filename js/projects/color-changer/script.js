const btns = document.querySelectorAll(".button");
const body = document.querySelector("body");
// console.log(btns);

btns.forEach((btn)=>{
    console.log(btn);
    btn.addEventListener('click', (i)=>{
        console.log(i);
        console.log(i.target);

        if(i.target.id === "white"){
            body.style.backgroundColor = i.target.id;
        } else if (i.target.id === "pink") {
            body.style.backgroundColor = i.target.id;
        } else if (i.target.id === "red") {
            body.style.backgroundColor = i.target.id;
        } else if (i.target.id === "green") {
            body.style.backgroundColor = i.target.id;
        } else if (i.target.id === "blue") {
            body.style.backgroundColor = i.target.id;
        } else if (i.target.id === "yellow") {
            body.style.backgroundColor = i.target.id;
        }
    })
})
