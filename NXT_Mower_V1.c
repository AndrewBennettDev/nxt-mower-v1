#pragma config(Sensor, S4,     sonarSensor,    sensorSONAR)

task main()
{
	int turns = 1;
	while(true){
		if(SensorValue[sonarSensor] > 30)
		{
			motor[motorB] = 75;
			motor[motorC] = 75;
		} else {
				if(turns % 2 == 0){
					motor[motorB] = 50;
					motor[motorC] = -50;
					wait(.75);

					motor[motorB] = 75;
					motor[motorC] = 75;
					wait(.95);

					motor[motorB] = 50;
					motor[motorC] = -50;
					wait(.77);

					turns++;
			} else {
					motor[motorB] = -50;
					motor[motorC] = 50;
					wait(.75);

					motor[motorB] = 75;
					motor[motorC] = 75;
					wait(.95);

					motor[motorB] = -50;
					motor[motorC] = 50;
					wait(.75);
					turns++;
			}
		}
	}
}
