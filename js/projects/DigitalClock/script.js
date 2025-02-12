const result = document.getElementById('ans')

setInterval(()=>{
    let date = new Date()
    result.innerHTML = date.toLocaleTimeString()
}, 1000)