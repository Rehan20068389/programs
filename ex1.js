function checkBaggage() {
    let weight = parseInt(document.getElementById("weight").value);

   
    if (weight > 15) {
        alert("Baggage Overweight!");
    } else {
        alert("Baggage Allowed");
    }
}
