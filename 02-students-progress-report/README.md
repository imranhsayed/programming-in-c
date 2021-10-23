## Problem: 
*Write an algorithm and its corresponding C program to generate students’ Progress-Report
for VIII standard (section of 20 students) of a CBSE school for all its 4 terms. Use Structures concept.
Assumptions can be made wherever necessary.*

### Algorithm

* Step One - Create a struct called 'Student', containing roll Number, name and result datatype.
* Step Two - Create a variable called student with struct Student.
* Step Three - Create a integer variable i and position with value -1.
* Step Four - Create a function displayUserInputMenu that displays user input menus.
* Step Five- Create a function handleUserChoice that handles user input choices. This function will insert results for choice 1, display result for choice 2 and exit when the user puts choice 3
* Step Six - Call displayUserInputMenu and handleUserChoice
* Step Seven - If user selects the insert result, increment the position by one, ask for roll number and name and set it as values for the roll no and name of struct student.
* Step Eight - Start a loop that runs 4 times ( for 4 semesters ),  takes and inserts marks for 5 different subjects - English, Computers, Mathematics, Science and Geography.
* Step Nine  - If the users selects option 2, display the results. In this process, ask the user for roll number, loop through all the students and when the roll number matches the givenRollNo, print the result of all 5 subjects for 4 semesters in tabular alignment.
* Step Ten - If the student roll number is not found, display a message saying Student not found please try agin.
