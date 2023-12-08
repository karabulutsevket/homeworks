# Şevket KARABULUT 02205076038

import requests

url = "https://api.n.exchange/en/api/v1/price/BTCUSD/latest/?market_code=nex"

response = requests.get(url)

if response.status_code == 200:
    
    data = response.json()
    
    bid_value = data[0]["ticker"]["bid"]

    
    print("1 BTC = ", bid_value)
else:
    print("Error:", response.status_code)