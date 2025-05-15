# GahanAI_task2
Serial Sensor Integration with ROS2

* The program uses an esp32 to get data from a IR sensor and then display it on the serial monitor.
* The closer our hand is to the sensor, the lower the value displayed will be.

### Directory Structure

```
GahanAI_task2/
└── src/
    └── training/
        └── training/
            ├── serial_reader.py   # Reads serial and publishes to /sensor_data
```

### How to compile and run

1. Connect the esp32 via USB.

2. Upload esp32 sketch that prints IR sensor data over serial
   Example Arduino output:

```
sensor: 23.4
sensor: 23.6
```

3. Source your ROS 2 workspace:

```bash
source ~/GahanAI_task2/install/setup.bash
```

4. Run the serial reader node:

```bash
ros2 run training serial_reader
```

5. Open a new terminal tab and source again:

```bash
source ~/GahanAI_task2/install/setup.bash
```

6. Echo the topic to see data:

```bash
ros2 topic echo /sensor_data
```

7. Confirm the output using:

```bash
screen /dev/ttyUSB0 9600
```
