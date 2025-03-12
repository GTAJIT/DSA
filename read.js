const http = require("http");
const express= require("express");
const path= require("path");
const app=express();
const server= http.createServer(app);


app.use(express.static(path.resolve("D:\Codes\LeetCode-Projects\public")));
app.get("/",(req,req1)=>{
    return req1.sendFile("D:\Codes\LeetCode-Projects\publicic/index.html");
})
server.listen(9000,() =>console.log(`Server opened on port 6000`));


