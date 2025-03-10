import React from 'react'

function Card(props) {
  console.log(props);
  
  return (
    <>
        <h1>cardData: {props.data.username}</h1>
        <h1>cardData: {props.data.title}</h1>
        <h1>cardData: {props.data.image}</h1>
        <h1>yo</h1>
    </>
  )
}

export default Card