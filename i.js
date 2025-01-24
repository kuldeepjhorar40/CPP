// JavaScript to track mouse movement and change background color
document.addEventListener('mousemove', function(event) {
    const x = event.clientX / window.innerWidth;
    const y = event.clientY / window.innerHeight;

    // Use the mouse position to create a color effect
    const red = Math.floor(x * 255);
    const green = Math.floor(y * 255);
    const blue = 150;  // You can customize this value

    // Apply the new background color
    document.body.style.backgroundColor = `rgb(${red}, ${green}, ${blue})`;
});
