import React, { useState, useRef, useEffect } from 'react';

function UseRefStopWatch() {

    const [count, setCount] = useState(0);
    let timeRef = useRef(null);

    function handleStart() {
        timeRef.current = setInterval (() => {
            setCount(c => c + 1);
        }, 1000);
    }

    function handleStop() {
        clearInterval(timeRef.current);
        timeRef.current = null; // Reset the ref to null when stopped
    }

    function handleReset() {
        handleStop ();
        setCount(0);
    }

    return (
        <div className="divInside">
            <h1>StopWatch: {count} seconds</h1>
            <button onClick={handleStart}>Start</button>
            <button onClick={handleStop}>Stop</button>
            <button onClick={handleReset}>Reset</button>
        </div>
    )
}

export default UseRefStopWatch;