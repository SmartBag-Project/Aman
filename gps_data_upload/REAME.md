1. data.csv is the gps data collected everytime the accelerometer has a sudden change in its values.

2. main.py is the python script to upload this data to dynamodb.

3. main.py uses batch_write to write the data and DictReader as a buffer.

4. gps_data is the name of the table in dynamodb.

5. you need python3 to run the program and should have awscli configured on your raspberry pi.