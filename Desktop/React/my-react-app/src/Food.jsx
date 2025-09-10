function Food () {
    const food1 = 'orange'
    const food2 = 'banana'

    return (
        <ul>
            <li>Apple</li>
            <li>{food1}</li>
            <li>{food2.toUpperCase()}</li> 
            {/* Ab return ke andar to js {} ke andar he likhne lakin return ke bahir jese dekho wo const wale line likhe to js withour {} likhe, but the main reason of commenting this is to explain what will happen if i dont write food1 and food2 like this {food1} and {food2} respectively, writing like this food1 it will print food1 on screen not it's value but if i write like this {food1} then the actual value which is orange can be seen, .toUpperCase() making all char capital */}
        </ul>
    );
}

export default Food