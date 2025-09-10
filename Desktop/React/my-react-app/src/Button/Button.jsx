// CSS style krne ke 3  -->  methods   1) External   2) Modules   3) Inline

import styles from './Button.module.css' // module me hota yeh hai ke jo aap component button banate ho us ka folder bana lete, Button.jsx ko us me bhejte and use button me us ke Button.module.css file banate to aik folder me Button.jsx and us ke specific css hote, baki path change kr dena button ka, and css ko import bhe krna agar module wala kaam kar rhy to us ke file ko button.jsx me krna import, so use bhe ise ko he kr rha wo external wale ko use nhi kr rha 

function Button () {
    return (
        (<button className={styles.butt}>Click Me</button> )
    );
}

export default Button