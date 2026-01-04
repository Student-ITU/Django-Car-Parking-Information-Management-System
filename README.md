
Car Parking Information Management System
A web-based application designed to streamline parking operations, track vehicle entries/exits, and manage parking slots efficiently. This project is deployed on Amazon Web Services (AWS) using a robust cloud architecture.

🚀 Deployment Details
Cloud Provider: Amazon Web Services (AWS)

Instance Type: EC2 t2.micro (Ubuntu 24.04)

Web Server: Nginx (Reverse Proxy)

Backend Framework: Django

Database: SQLite

🛠 Key Features
Real-time Tracking: Monitor current parking occupancy.

Vehicle Management: Easy entry and exit logging for vehicles.

Admin Dashboard: Centralized control for parking administrators.

Secure Access: Configured with AWS Security Groups to allow authorized traffic only.

🏗 System Architecture
The application follows a standard production-grade deployment:

User Request: Hits the AWS Public IP.

Nginx: Acts as a reverse proxy, handling incoming traffic on Port 80.

Gunicorn/Nohup: Forwards the request to the Django application running on Port 8000.

Django: Processes the logic and interacts with the SQLite database.

📥 Installation & Setup
To run this project locally or on a new server, follow these steps:

Clone the repository:

Bash

git clone https://github.com/Student-ITU/Django-Car-Parking-Information-Management-System.git
cd Django-Car-Parking-Information-Management-System
Set up Virtual Environment:

Bash

python3 -m venv env
source env/bin/activate
Install Dependencies:

Bash

pip install -r requirements.txt
Run Migrations:

Bash

python manage.py migrate
Start the Server:

Bash

python manage.py runserver 0.0.0.0:8000
🔐 Security Configuration (AWS)
The following ports are enabled in the AWS Security Group:

Port 80 (HTTP): Public web access.

Port 22 (SSH): Remote management.

Port 8000 (Custom TCP): Backend testing.
