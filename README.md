COURSE: Pogramming In Practice(PAP) 
PROJECT: Municipal Management System 
 
 
GROUP MEMBERS AND THEIR RESPONSIBILITIES 
STUDEN NAME 	STUDENT NUMBER 	RESPONSIBILTY 
Sakaria Hipandwa 	225050617 	Employee Management 
Selma Nandago 	225132214 	Budget Management 
Tafadzwa Mutakiwa 	226029522 	Suppliers 
Ula Amadhila 	224069853 	Asset Management 
Emmanuel Ladzagla 	225132923 	Reports 
Sakaria Hipandwa 	225050617 	Functions, Intergration And Validation 
Kundiiko V Niclaus 	225170175 	Testing, Documentation And Git Coordination 
 
Project Description 
The Municipal Financial Management System (MFMS) is a C-based system developed for managing basic municipal financial information. The system provides different modules for managing employees, budgets, suppliers, assets and reports. It allows users to enter, store, search and display information while performing basic calculations and validation of user input. 
The project is developed using ANSI C (C99) and demonstrates programming concepts such as variables, data types, conditions, loops, arrays, strings, functions and input validation. 
 
 
System Features 
The Municipal Financial Management System provides the following features: 
Employee Management 
•	Add employee information 
•	Display employees 
•	Search for an employee 
•	Calculate employee salary information 
•	Display relevant employee information 
Budget Management 
•	Enter departmental budgets 
•	Enter expenditure 
•	Calculate remaining budget 
•	Determine whether expenditure is within budget 
•	Identify departments that have exceeded their allocated budget 
•	Display budget information 
Supplier Management 
•	Add suppliers 
•	Display suppliers 
•	Search for suppliers 
•	Store supplier information such as supplier ID, name, email, telephone number and location 
Asset Management 
•	Add municipal assets 
•	Display assets 
•	Search for assets 
•	Store asset information such as asset ID, name, type, purchase value, department and condition 
Reports 
•	Generate employee reports 
•	Generate budget reports 
•	Display registered suppliers 
•	Display registered municipal assets Input Validation 
•	Handle invalid menu choices 
•	Prevent negative salary values 
•	Prevent negative budget values 
•	Handle empty names appropriately 
•	Detect invalid numerical values where possible 
 
 
 
 
Compilation Instructions 
The system is written in ANSI C (C99) and can be compiled using GCC. 
Open the project folder in Visual Studio Code and open the terminal. 
Compile the program using: 
gcc main.c employees.c budget.c suppliers.c assets.c reports.c -o MFMS 
If the compilation is successful, an executable file named MFMS will be created. 
 
HOW TO RUN THE SYSTEM 
After successfully compiling the program, run the executable from the terminal. 
On Linux or macOS: 
./MFMS 
On Windows: 
MFMS.exe 
After starting the program, the Municipal Financial Management System main menu will be displayed. The user can select the required option by entering the corresponding menu number. 
 
 
