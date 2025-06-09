# agileProject1
Agile Development, Final Project User Stories
 

Title: Menu
As a developer, I want to code a menu, so that end users can select an option.

 

      Acceptance Criteria

The menu must accommodate five options. (Exact text to be determined upon integration with application.)
The screen should be cleared before displaying the five options.
The selected option must be returned as an integer.
The integer function should be named "menu".
 

Title: Option Selector
As a developer, I want to code an option selector that integrates with the menu, so that functions in separate files can be called.

      

      Acceptance Criteria

The option selector must accommodate 4 options.
The file must include the 4 pertinent header files.
The void function must be named "mainLoop" and have an integer "option" as an input. 
 

Title: Write to File Function
As a developer, I want to code a function that writes to a file, so that information can be outputted.

      

      Acceptance Criteria

The void function must be named "writeFile" with no inputs.
Attempt to open file and display an error message if not successful. 
Successfully output data into the file.
Close the file once the information has been written.
 

Title: Read File Function
As a developer, I want to write a function that reads a file, so that information can be retrieved.

 

      Acceptance Criteria:

The void function must be named "readFile" and may not have any inputs.
The file must be opened with the "fopen" function that acceptstwo inputs.
The file must be closed with the "fclose" function that accepts one input.
The void function must utilize the "fgetc" function that acceptsone input.
The void function must utilize a loop until the "End of File" has been detected.
The contents of the file should be printed to the console.
 

Title: Calculation 1 Function
As a developer, I want to code a function that performs a calculation, so that the result can be rendered to the console.

      Acceptance Criteria:

The void function must be named "firstCalculation" and must have two integer inputs.
The void function must perform a mathematical computation.
The resulting calculation must be displayed to the console.
 

Title: Calculation 2 Function
As a developer, I want to code another function that performs a calculation, so that the result can be rendered to the console.

      Acceptance Criteria:

The void function must be named "secondCalculation" and must have two integer inputs.
The void function must perform a mathematical computation that differs from "firstCalculation".
The resulting calculation must be displayed to the console.
 

 

Title: Main Integration Function
As a developer, I want to code a main function, so that all functions can be integrated and possibly called.

 

      Acceptance Criteria:

The integer function must be named "main" and have no inputs.
The integer function must return zero upon normal and complete execution.
The integer function must receive an option from the "menu" function.
The integer function must continuously loop the "mainLoop" function until an exit condition has been selected.
The integer function must utilize the two pertinent header files in addition to the standard headers.
 

Finally, there will be a  code inspection requirement (one for each user story), so in Jira,   you will see 14 user stories in total.

 

As a senior developer, I want to verify all additional code, so that the application runs according to the user story acceptance criteria.
