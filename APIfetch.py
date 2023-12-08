import requests

# Define the API URL
url = "https://api.n.exchange/en/api/v1/price/BTCUSD/latest/?market_code=nex"

# Send a GET request
response = requests.get(url)

# Check for successful response
if response.status_code == 200:
    # Convert the response to JSON
    data = response.json()
    # Access the data
    bid_value = data[0]["ticker"]["bid"]

    # Print the bid value
    print("1 BTC = ", bid_value)
else:
    print("Error:", response.status_code)