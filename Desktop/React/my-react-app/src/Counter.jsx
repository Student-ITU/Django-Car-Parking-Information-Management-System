import React, {useState} from 'react';

function Counter () {
    const [count, setCount] = useState(0);

    const increment = () => {
        // setCount (count + 1);
        // setCount (count + 1); is trha karne se count + 2 nhi kre ga count = 0 + 1 and 0 + 1 he rhy ga, yeh me bata rha cz ham aage parhne lage updater function, behtr hota ke updater function use kro, neeche jo or funcins hai un me bhe kr sakte me abhi kr nhi rha and is ke mutalik me ne kuch batein notes me likhe parh lena

        setCount(rec => rec + 1)
    }

    const decrement = () => {
        setCount (count - 1);
    }

    const reset = () => {
        setCount (0);
    }

    return (<div className="counter-container">
        <p className="count-display">{count}</p>
        <button className="counter-button" onClick={decrement}>Decrement</button>
        <button className="counter-button" onClick={reset}>Reset</button>
        <button className="counter-button" onClick={increment}>Increment</button>
    </div>)
}

export default Counter