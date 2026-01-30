function updateMoisture() {
  const value = Math.floor(Math.random() * 100);
  document.getElementById("moisture").textContent = value + " %";
}
