import React, { useEffect, useLayoutEffect, useState } from 'react'
import { useLoaderData } from 'react-router-dom'

function Github() {
    /*
    const [data,setData] = useState([])

    useEffect(()=>{
        fetch('https://api.github.com/users/GTAJIT')
        .then(response=>response.json())
        .then(data=>{
            setData(data)
        })
    },[])
    */
    const data = useLoaderData()
  return (
    <div className='text-center flex justify-center items-center flex-col bg-gray-700 p-4 text-3xl text-white'>
        <img src={data.avatar_url} alt="Git Pic" className='' width={300}/>
        Github Followers: {data.followers}
    </div>
  )
}

export default Github

export const githubInfoLoader = async ()=> {
    const response = await fetch("https://api.github.com/users/GTAJIT")
    return response.json()
}