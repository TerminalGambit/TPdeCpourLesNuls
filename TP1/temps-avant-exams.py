import datetime

exam_date = datetime.datetime(2024, 1, 15, 8, 0)
current_date = datetime.datetime.now()

remaining_time = exam_date - current_date

print("Time remaining until the C exam:")
print(remaining_time)
