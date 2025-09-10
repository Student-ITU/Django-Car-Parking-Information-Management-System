// Topic render list
import PropTypes from 'prop-types';

function List (props) {
    const fruits = ["apple", "orange", "banana", "coconut", "pineapple"];

    // return (fruits); -> appleorangebananacoconutpineapple  is trha a rha answer

    // Now we r going to convert our array of strings into an array of list item elements

    const listItems = fruits.map(fruit => <li>{fruit}</li>)

    const fruitss = [
        {id: 1, name: "apple", calories: 95},
        {id: 2, name: "orange", calories: 45},
        {id: 3, name: "banana", calories: 105},
        {id: 4, name: "coconut", calories: 159},
        {id: 5, name: "pineapple", calories: 37} // id is lie rakha ke name me conflict a sakta to key unique hone chaye, warna naming conflict a sakta
    ];

  // Sorting examples (commented)
//   fruitss.sort((a, b) => a.name.localeCompare(b.name)); // ALPHABETICAL
//   fruitss.sort((a, b) => b.name.localeCompare(a.name)); // REVERSE ALPHABETICAL
//   fruitss.sort((a, b) => a.calories - b.calories); // NUMERIC
//   fruitss.sort((a, b) => b.calories - a.calories); // REVERSE NUMERIC

    const listItemss = fruitss.map(fruit =>
        <li key={fruit.id}>
        {fruit.name} &nbsp;
        <b>{fruit.calories}</b>
        </li>
    );

// Hign cal nikala ese he low bhe nikaal sakte
    const highCalFruits = fruitss.filter(fruit => fruit.calories >= 100);
    
    const listItemsss = highCalFruits.map(highCalFruits =>
        <li key={highCalFruits.id}>
        {highCalFruits.name} &nbsp;
        <b>{highCalFruits.calories}</b>
        </li>
    );



    const category = props.category;
    const itemList = props.items; //items is our fruit array dekh lo app.jsx me ja ke, jab return kr rhy the

    const listItemssss = itemList.map(item => 
        <li key={item.id}>
            {item.name}: &nbsp;
            <b>{item.calories}</b>
        </li>
    );

    return (
    <>
        <h3>{category}</h3>
        <ol>{listItemssss}</ol>
    </>
    );


    // return (<ol>{listItemsss}</ol>); // return apply last wale ke lie ho rha listItemss ke lie agar listItems kia to uper wale ke lie a jaye ga

    /*
    AB RESULT ESA AYA 
    apple
    orange
    banana
    coconut
    pineapple
    */
}
List.propTypes = {
    categoy: PropTypes.string,
    items: PropTypes.arrayOf(PropTypes.shape({
        id: PropTypes.number,
        name: PropTypes.string,
        calories: PropTypes.number
    })),
} // Ab agar koi galat hua like int string hua to console me error mile ga

List.defaultProps = {
    categoy: "Category",
    items: [],
}


export default List