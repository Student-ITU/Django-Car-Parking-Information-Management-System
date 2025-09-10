function ClickEvents () {
    // const handleClick = () => console.log ("OUCH!");

    // Arow funciton vs normal function 
        // function handleClick() {
        //     console.log("OUCH!");
        // }


    // return (<button onClick={handleClick}>Click Me 😌</button>);

    // const handleClick2 = (name) => console.log(`${name} stop clicking me`);

    // return (<button onClick={handleClick2("Sameer")}>Click Me 😌</button>);

    // Ab is me issue yeh a rha ke button khud click ho rha agr inspect krein to agar ham call back yani handleclick2 ke aage paranthesis laga dein ge to wo khud call hota rhy ga, to ham esa nhi krein ge 

    // return (<button onClick={() => handleClick2("Sameer")}>Click Me 😌</button>);
    // Ab theek ho jaye ga is trha function ko argument bhejna
    
    // Ab neeche dekho 

    // let count = 0;

    // const handleClick3 = (name) => {
    //     if (count < 3) {
    //         count++;
    //         console.log ( `${name} you clicked me ${count} time/s`);
    //     } else {
    //         console.log (`${name} stop clicking me!`);
    //     }
    // };

    // return (<button onClick={() => handleClick3("Bro")}>Click me 😌</button>)

    //Neeche dekho

    // const handleClick4 = (e) => console.log(e);
    const handleClick4 = (e) => e.target.textContent = "OUCH! 🤕"

    return (<button onDoubleClick={(e)=> handleClick4(e)}>Click me 😌</button>);
    // onClick ke jaga agar onDoubleClick kr dein ge to 2 click pe change ho ga
    
}

export default ClickEvents