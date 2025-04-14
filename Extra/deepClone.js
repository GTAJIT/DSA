const original = {
    name: "Alice",
    details: { age: 25, hobbies: ["reading", "cycling"] },
  };
  function deepClone(obj){
      if (obj === null || typeof obj !== "object"){
          return obj
      }
      let clone = Array.isArray(obj) ? []:{}
      for (let key in obj){
          if (obj.hasOwnProperty(key)){
              clone[key] = deepClone(obj[key])
          }
      }
      return clone
  }
  const copied = deepClone(original);
  // console.log(copied);
  
  copied.details.age = 30;
  copied.details.hobbies.push("swimming");
  
  console.log(original.details.age); // 25 (should not be affected)
  console.log(original.details.hobbies); // ["reading", "cycling"] (should not be affected)
  