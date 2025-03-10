import React from 'react'
import Card from './components/Card.jsx'
// import CardData from './DB/CardDetails.jsx'

const DB = [
  {
    username: "Jit",
    title: 'Card Title',
    description: 'Card Description',
    image: 'https://via.placeholder.com/150'
  },
  {
    username: "sumit",
    title: 'Card Title',
    description: 'Card Description',
    image: 'https://via.placeholder.com/250'
  },
  {
    username: "rohan",
    title: 'Card Title',
    description: 'Card Description',
    image: 'https://via.placeholder.com/50'
  }
]

function App() {
  return (
    <>
      <h1>MultiCard</h1>
      <Card data={DB[0]}/>
      <Card data={DB[1]}/>
      <Card data={DB[2]}/>
    </>
  )
}

export default App