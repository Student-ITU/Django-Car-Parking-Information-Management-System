from django.shortcuts import render
import requests  # ← internet se data laane ke liye

def index(request):
    data = {}  # default empty data

    if request.method == 'POST':
        city = request.POST.get('city')

        url = f'https://api.openweathermap.org/data/2.5/weather?q={city}&appid=YOUR_API_KEY&units=metric'

        response = requests.get(url)
        weather = response.json()

        if weather.get("cod") != "404":  
            data = {
                'country_code': weather['sys']['country'],
                'coordinate': f"{weather['coord']['lon']}, {weather['coord']['lat']}",
                'temp': weather['main']['temp'],
                'pressure': weather['main']['pressure'],
                'humidity': weather['main']['humidity'],
            }

    return render(request, 'index.html', {'data': data, 'city': request.POST.get('city', '')})




