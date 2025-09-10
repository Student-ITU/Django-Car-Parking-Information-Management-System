import React, { useState } from 'react';

function UpdateObjects() {
  const [car, setCar] = useState({
    year: 2024,
    make: "Ford",
    model: "Mustang"
  });

  function handleYearChange(event) {
    setCar(c => ({
      ...c, // purani saari properties copy
      year: event.target.value // sirf year change
    }));
  }

  function handleMakeChange(event) {
    setCar(c => ({
      ...c, make: event.target.value
    }));
  }
    //   function handleMakeChange(event) {
    //     setCar(
    //     {make: event.target.value} Agar ese likhta or wo ...c wala kaam na karta to jab bhe make ke input me kuch likhta to pure list na ate and yeh esa dikhta   Your favorite car is: For  to yeh reason ke pura likhna
    //     );
    //   }

  function handleModelChange(event) {
    setCar(c => ({
      ...c, model: event.target.value
    }));
  }

  return (
    <div>
      <p>Your favorite car is: {car.year} {car.make} {car.model}</p>

      <input type="number" value={car.year} onChange={handleYearChange} />
      <input type="text" value={car.make} onChange={handleMakeChange} />
      <input type="text" value={car.model} onChange={handleModelChange} />
    </div>
  );
}

export default UpdateObjects;
