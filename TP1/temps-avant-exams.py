from datetime import datetime
exam_dates = [
    "09/01/2024 13:00 Base de données",
    "10/01/2024 13:00 Outils Formels de l'Informatique",
    "15/01/2024 08:00 Programmation en C et structures de données",
    "17/01/2024 08:00 Introduction à l'intelligence artificielle"
]

current_date = datetime.now()

for exam_date in exam_dates:
    exam_datetime = datetime.strptime(exam_date.split(" ", 1)[0], "%d/%m/%Y")
    time_left = exam_datetime - current_date
    print(f"Time left until {exam_date.split(' ', 1)[1]}: {time_left}")
