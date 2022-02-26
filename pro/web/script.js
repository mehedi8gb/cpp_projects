function callFunction(data) {
    const incomePut = document.getElementById('income-put').value;
    const foodPut = document.getElementById('food-put').value;
    const rentPut = document.getElementById('rent-put').value;
    const clothPut = document.getElementById('clothes-put').value;
    if (incomePut != "") {
        const totalPrice = parseFloat(foodPut) + parseFloat(rentPut) + parseFloat(clothPut);
        const balancePrice = incomePut - totalPrice;
        document.getElementById('total-exp').innerText = totalPrice;
        document.getElementById('balance').innerText = balancePrice;
        document.getElementById('balanceInput').setAttribute("value", balancePrice);
    } else if (incomePut > 5) {
        alert("Address cannot be more than 150 characters");

    } else if (/[0-9]|\./.test(incomePut)) {
        alert('Address can only contain alphanumeric characters, hyphens(-) and back slashs(\)');

    } else {
        alert("ahh");
    }
}

function saving() {
    const saving = document.getElementById('put-saving-parsnt').value;
    const balancePrice = parseFloat(document.getElementById('income-put').value);
    const balance = parseFloat(document.getElementById('balanceInput').value);

    var totalSave = percentage(balancePrice, saving);
    var remaining = parseFloat(balance - totalSave);
    document.getElementById('saving-amount').innerText = totalSave;
    document.getElementById('remaining-balance').innerText = remaining;

}

function percentage(totalBalance, saving) {
    var totalSave = (parseFloat(totalBalance) * parseFloat(saving)) / 100;
    return parseFloat(totalSave)
}