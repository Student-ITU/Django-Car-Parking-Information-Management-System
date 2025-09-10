import React, { useState } from 'react';

function UpdateArrayOfObjectsInState() {
  const [cars, setCars] = useState([
    { year: 2024, make: "Ford", model: "Mustang" },
    { year: 2020, make: "Toyota", model: "Corolla" },
  ]);

  const [carYear, setCarYear] = useState(2023);
  const [carMake, setCarMake] = useState("");
  const [carModel, setCarModel] = useState("");

  function handleYearChange(event) {
    setCarYear(event.target.value);
  }

  function handleMakeChange(event) {
    setCarMake(event.target.value);
  }

  function handleModelChange(event) {
    setCarModel(event.target.value);
  }

  function handleAddCar() {
    const newCar = {
      year: carYear,
      make: carMake,
      model: carModel
    };
    setCars(cars => [...cars, newCar]);

    setCarYear(2023);
    setCarMake("");
    setCarModel("");
  }

  function handleRemoveCar(index) {
    setCars(cars.filter((_, i) => i !== index));
  }

  return (
    <div>
      <h2>List of Car Objects</h2>
      <ul>
        {cars.map((car, index) => (
          <li key={index} onClick={() => handleRemoveCar(index)}>
            {car.year} {car.make} {car.model}
          </li>
        ))}
      </ul>

      <input 
        type="number"
        value={carYear}
        onChange={handleYearChange}
        placeholder="Enter car year"
      />
      <br />

      <input 
        type="text"
        value={carMake}
        onChange={handleMakeChange}
        placeholder="Enter car make"
      />
      <br />

      <input 
        type="text"
        value={carModel}
        onChange={handleModelChange}
        placeholder="Enter car model"
      />
      <br />

      <button onClick={handleAddCar}>Add Car</button>
    </div>
  );
}

export default UpdateArrayOfObjectsInState;
