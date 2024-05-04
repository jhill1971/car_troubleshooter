# Car Issue Troubleshooter

This C program helps diagnose common car issues based on user input regarding symptoms and conditions. It guides the user through a series of questions to identify potential problems and provides appropriate recommendations.

## Usage

1. Compile the program:
gcc car_issue_troubleshooter.c -o car_issue_troubleshooter


2. Run the executable:
./car_issue_troubleshooter


3. Follow the prompts to answer questions about the car's symptoms and conditions by entering either 'y' for yes or 'n' for no.

## Troubleshooting Process

The program follows these steps to identify and troubleshoot car issues:

1. **Is the car silent when you turn the key?**
- If yes, it checks the battery terminals' condition.
- If no, it checks the status of the battery.

2. **Battery Terminals Condition**
- If the battery terminals are corroded, it recommends cleaning them and trying again.
- If not corroded, it suggests replacing cables and trying again.

3. **Battery Status**
- If the car makes a clicking sound, it recommends replacing the battery.
- If not, it checks whether the car is cranking.

4. **Crank Status**
- If the car cranks but fails to start, it recommends checking the spark plug connections.
- If not, it checks if the engine starts and then dies.

5. **Injector Status**
- If the car has fuel injection, it recommends getting it in for service.
- If not, it suggests checking to ensure the choke is opening and closing.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


