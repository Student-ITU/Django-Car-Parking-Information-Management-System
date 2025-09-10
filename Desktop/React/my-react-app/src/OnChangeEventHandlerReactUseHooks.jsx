import React, {useState} from 'react';

// input, textarea, select and radio pe kia onchange event handler.

function OnChangeEventHandlerReactUseHooks () {
    const [name, setName] = useState("Guest");
    const [quantity, setQuantity] = useState(1);
    const [comment, setComment] = useState("");
    const [payment, setPayment] = useState("");
    const [shipping, setShipping] = useState("");

    function handleNameChange (event) {
        setName (event.target.value);
    }

    function handleQuantityChange (event) {
        setQuantity (event.target.value);
    }

    function handleCommentChange (event) {
        setComment (event.target.value);
    }

    function handlePaymentChange (event) {
        setPayment (event.target.value);
    }

    function handleShippingChange (event) {
        setShipping (event.target.value);
    }

    return (
        <div>
            <input value={name} onChange={handleNameChange}/>
            <p>Name: {name}</p>

            <input type="number" value={quantity} onChange={handleQuantityChange}/>
            <p>Quantity: {quantity}</p>

            <textarea value={comment} onChange=              {handleCommentChange} placeholder='Enter delivery instructions'></textarea>
            <p>Comment: {comment}</p>

            <select value={payment} onChange={handlePaymentChange}>
                <option value="">Select an option</option>
                <option value="Visa">Visa</option>
                <option value="Mastercard">Mastercard</option> 
                {/* Acha is case me value se mil rha p ko name lakin agar value hata dein to uper setvalue se mil rha, to agar value me is time mmm likh do ge mastercard select krne ke baad neeche mmm a jaye ga para me lakin agar value hata to to uper wale value ai ge jo mastercard hai */}
                <option value="Giftcardd">Giftcard</option>
            </select>
            <p>Payment: {payment}</p>

            <label>
                <input type="radio" value="Pick Up" checked={shipping === "Pick Up"}
                onChange={handleShippingChange}/>
                
                Pick Up
            </label>
            <br />
            <label>
                <input type="radio" value="Delivery" checked={shipping === "Delivery"} onChange={handleShippingChange}/>

                Delivery
            </label>
                <p>Shipping: {shipping}</p>
        </div>
    );
}
export default OnChangeEventHandlerReactUseHooks