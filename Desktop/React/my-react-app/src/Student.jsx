import PropTypes from 'prop-types'

function Student (props) {
    const styling = {
        border: "1px solid",
        marginTop: "10px",
    }
    return (
        <div style={styling}>
            <p>Name: {props.name}</p>
            <p>Age: {props.age}</p>
            <p>Description: {props.description}</p>
            <p>Student: {props.isStudent ? "Yes": "No"}</p> {/* Yes no is lie likha cz boolean ka true false ka result screen par nhi ata*/}
        </div>
    );
}

Student.propTypes = {
    name: PropTypes.string.isRequired, 
    description: PropTypes.string.isRequired,
    age: PropTypes.number,
    isStudent:  PropTypes.bool,         
};
// Ab proptypes ko ham ne keh dia ke agar ab yeh na hua to console me error ai ga wese code chale ga, to agar age ="30" kr dia to error ai ga


export default Student