import React, { useCallback, useEffect, useRef, useState } from "react";

function App() {
  const [length, setLength] = useState(8);
  const [num, setNum] = useState(false);
  const [char, setChar] = useState(false);
  const [password, setPassword] = useState("");

  const passwordRef = useRef(null);

  const passwordGenerator = useCallback(() => {
    let pass = "";
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    if (num) str += "0123456789";
    if (char) str += "!@#$%^&*_+";

    for (let i = 1; i <= length; i++) {
      let char = Math.floor(Math.random() * str.length + 1);
      pass += str.charAt(char);
    }

    setPassword(pass);
  }, [length, num, char, setPassword]);

  const copyPasstoClip = useCallback(() => {
    passwordRef.current?.select();
    passwordRef.current?.setSelectionRange(0, 20);
    window.navigator.clipboard.writeText(password)
  }, [password]);

  useEffect (()=>{
    passwordGenerator();
  },[length, num, char, passwordGenerator])
  return (
    <>
      <div className="w-full h-screen bg-gray-900 p-5 cursor-default">
        <div className="w-full max-w-md mx-auto shadow-md rounded-lg p-5 m-8 text-orange-500 bg-gray-600 gap-2">
          <h1 className="capitalize text-4xl text-center text-white mb-5">
            password generator
          </h1>
          <div className="flex shadow rounded-lg overflow-hidden bg-white w-full">
            <input
              type="text"
              value={password}
              className="outline-none w-full py-1 px-3 cursor-default"
              placeholder="Password"
              readOnly
              ref={passwordRef}
            />
            <button
              onClick={copyPasstoClip}
              className="outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0 hover:scale-102 cursor-pointer"
            >copy</button>
          </div>
          <div className="flex text-sm gap-x-2 mt-5 gap-5">
            <div className="flex items-center gap-x-1">
              <input
                type="range"
                min = {6}
                max = {20}
                value = {length}
                className="cursor-pointer"
                onChange={(e)=>{setLength(e.target.value)}}
                // label="length"
              />
              <label>length: {length}</label>
            </div>
            <div className="flex items-center gap-x-1">
                <input 
                type="checkbox"
                defaultChecked={num}
                id="numInput"
                onChange={()=>{setNum((prev)=>!prev)}}
                className="cursor-pointer"
                />
                <label htmlFor="numInput">Numbers</label>
            </div>
            <div className="flex items-center gap-x-1">
                <input 
                type="checkbox"
                defaultChecked={char}
                id="charInput"
                onChange={()=>{setChar((prev)=>!prev)}}
                className="cursor-pointer"
                />
                <label htmlFor="charInput">Characters</label>
            </div>

          </div>
        </div>
      </div>
    </>
  );
}

export default App;
