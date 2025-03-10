import './App.css'
import React, { useState } from 'react'


export default function App() {
  let [currentVal, setVal] = useState(10)

  const addVal = () => {
    if (currentVal === 20) {
      alert('Value can not be greater than 20')
    } else{
      setVal(currentVal + 1)
    }
  }
  const subVal = () => {
    if (currentVal === 0) {
      alert('Value can not be less than 0')
    } else{
      setVal(currentVal - 1)
    }
  }

  return (
    <div id='main'>
      <h1>Value Updater</h1>
      <h3>current value: {currentVal}</h3>
      <div id='btns'>
      <button onClick={addVal}>Increment</button>
      <button onClick={() => setVal(10)}>Reset</button>
      <button onClick={subVal}>Decrement</button>
      </div>
    </div>
  )
}
