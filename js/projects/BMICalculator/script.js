const Input = document.querySelector('#btn')

Input.addEventListener('click',(i)=>{
    const Height = parseInt(document.querySelector('#height').value)
    const weight = parseInt(document.querySelector('#weight').value)
    const ans = document.querySelector('.ans')
    const body = document.querySelector('body')

    if(Height === '' || Height<0 || isNaN(Height)){
        alert(`Invalid Number ${Height}`)
    } else if (weight === '' || weight<0 || isNaN(weight)){
        alert(`Invalid Number ${weight}`)
    } else{
        const result = (weight/((Height*Height)/10000))
        ans.innerHTML = `${result.toFixed(2)}`
    }
})