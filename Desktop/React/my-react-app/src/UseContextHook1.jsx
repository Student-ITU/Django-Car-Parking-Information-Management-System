import React from 'react';
import UseContextHook2 from './UseContextHook2';

function UseContextHook1() {
  return (
    <div className="box" id="use-context-hook-1">
      <h2>UseContextHook1</h2>
      <UseContextHook2 /> {/* ← Render UseContextHook2 */}
    </div>
  );
}

export default UseContextHook1;
