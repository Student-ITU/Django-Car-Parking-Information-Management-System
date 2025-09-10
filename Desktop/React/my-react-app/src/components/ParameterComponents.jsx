import React from "react";
import { useParams } from "react-router-dom";

const ParameterComponents = () => {
  const { id } = useParams();
  return <div>Params: {id}</div>;
};

export default ParameterComponents;

// www.google.com/student/123 -> Route parameter hota yeh 
// www.google.com/student/id=123 -> Query parameter hota yeh, is me & ? jese cheze lagte 