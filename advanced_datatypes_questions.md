# Advanced Datatypes - Questions

---

## Question: What is an Advanced Datatype

**Short Humorous Scenario:**
Martin has just discovered that there are more datatypes than just `int` and `float`. He's confused because he thought those were the only ones. *"I see all these things called structs, enums, and unions. What are these? And have I already used advanced datatypes without knowing it?"* he asks.

**What they currently know:**
- Basic datatypes: `int`, `float`, `char`, `double`
- Variable declaration
- Arrays

**The Task:**

1. Define what an advanced datatype is
2. List examples of advanced datatypes you have already seen
3. Explain the purpose of advanced datatypes

4. **PBL:** Martin asks: *"Can you think of a real-world analogy for a struct? Like a container that holds different types of items?"*

**Hints:**
- Advanced datatypes allow you to combine multiple datatypes
- They help organize related data
- Examples: structs, enums, unions, arrays
- Functions can also be considered an advanced concept

**What you must never do:**
- Confuse primitive datatypes with advanced datatypes
- Say that pointers are not advanced datatypes
- Claim that only user-defined types are advanced

---

## Question: Patient Struct

**Short Humorous Scenario:**
Martin needs to create a patient management system, but he doesn't know how to organize all the patient information. *"I have patient IDs, ages, heights, weights... How do I keep all this together?"* he asks. *"And can you make a program that prints all this information?"*

**What they currently know:**
- `struct` keyword
- Member variables
- Dot operator (`.`) for struct access
- Variable declaration and initialization
- `printf` with format specifiers

**The Task:**

1. Define a struct template called `Patient` with the following member variables:
   - `int id`
   - `int age`
   - `float heightM`
   - `float weightKg`
2. Create a variable `tommy` of type `struct Patient` with the following data:
   - `.id = 1`
   - `.age = 21`
   - `.heightM = 1.8`
   - `.weightKg = 55.0`
3. Print each member variable individually for `tommy`

4. **PBL:** Martin asks: *"Can you create a second patient variable and print both patients' information in a loop?"*

**Hints:**
- A struct name is typically plural (e.g., Patient)
- A struct member variable is typically singular (e.g., id, not ids)
- Use dot notation to access members: `tommy.id`
- Remember to print each variable on its own line

**What you must never do:**
- Forget the struct keyword when declaring
- Use array notation `[]` for individual patients
- Forget to initialize all member variables

---

## Question: Simple Sensor Struct

**Short Humorous Scenario:**
Martin is working on a biomedical system that needs to handle sensor data. *"I need to store sensor IDs and temperature readings together. Can you make a struct for this?"* he asks. *"And make a program that creates a sensor and prints its data."*

**What they currently know:**
- `struct` definition
- Member variables
- Variable declaration
- `printf` function

**The Task:**

1. Define a struct called `TempSensor` that contains:
   - `int id` - the sensor's ID
   - `float temperature` - measured temperature in degrees Celsius
2. In `main()`:
   - Create one variable `sensor` of type `TempSensor`
   - Assign values to the fields manually
   - Print the values to the screen

3. **PBL:** Martin asks: *"Can you modify this to handle multiple sensors in an array?"*

**Hints:**
- This is similar to the patient struct
- Assign realistic values (e.g., id = 1, temperature = 23.5)
- Print both id and temperature

**What you must never do:**
- Use the same name for struct and variable
- Forget to assign values before printing
- Use wrong datatype for temperature

---

## Question: ESP32 Enumerate

**Short Humorous Scenario:**
Martin is working with ESP32 buttons and wants to use proper names instead of magic numbers. *"I have left and right buttons on pins 0 and 35. Can you make this more readable with enums?"* he asks. *"And send the button values to the computer."*

**What they currently know:**
- `enum` keyword
- Pin configuration with `pinMode`
- `INPUT_PULLUP` flag
- `digitalRead` function
- `Serial.print` / `Serial.println`
- `delay` function

![files/esp32](files/esp32_board.jpg)


**The Task:**

1. Define an enum called `ButtonPins` with values:
   - `Left = 0`
   - `Right = 35`
2. Activate left and right buttons with `INPUT_PULLUP` flag
3. In `loop()` function:
   - Read the digital value of left and right buttons
   - Set a delay of 100ms
   - Send the values to your computer from ESP32
4. See the values printed in Serial Monitor

5. **PBL:** Martin asks: *"Can you modify this to print 'Left pressed' or 'Right pressed' instead of just the values?"*

**Hints:**
- Find how to activate buttons: https://docs.arduino.cc/language-reference/
- Use enum values instead of magic numbers
- Remember: LOW = pressed (with INPUT_PULLUP)
- Use if-statements to check button state

**What you must never do:**
- Use magic numbers directly in pinMode or digitalRead
- Forget to set up Serial.begin()
- Forget to configure pin modes

---

## Question: Patient Array

**Short Humorous Scenario:**
Martin has realized he needs to handle multiple patients, not just one. *"I need to store information for 7 patients. Can you help me create an array of structs?"* he asks. *"And print all information for each patient using a loop."*

**What they currently know:**
- Struct definition and usage
- Arrays
- Loops (`for`)
- `sizeof` operator for array size

**The Task:**

1. Using `patient1` as a starting point
2. Define a `struct Patient` array that can contain 7 elements
3. Populate the array with the following patient information:
   - id 99, age 18, heightM 1.82, weightKg 88.0
   - id 93, age 35, heightM 1.63, weightKg 69.0
   - id 89, age 25, heightM 1.80, weightKg 75.0
   - id 83, age 31, heightM 1.51, weightKg 70.0
   - id 46, age 29, heightM 1.75, weightKg 63.0
   - id 16, age 56, heightM 1.52, weightKg 54.0
   - id 17, age 16, heightM 1.65, weightKg 50.0
4. Using a loop, print all information for each patient

5. **PBL:** Martin asks: *"Can you calculate and print the total number of patients in the array?"*

**Hints:**
- See: https://www.w3schools.com/c/c_structs.php
- Use a for loop to iterate through the array
- Access members with: `patients[i].id`
- Array size can be calculated with: `sizeof(patients) / sizeof(patients[0])`

**What you must never do:**
- Forget to populate all 7 elements
- Access array out of bounds
- Forget to use the loop variable

---

## Question: Patient Statistics

**Short Humorous Scenario:**
Martin wants to analyze his patient data. *"I need to calculate the average and standard deviation for age, height, and weight. Can you help?"* he asks. *"And print all the descriptive information."*

**What they currently know:**
- Struct arrays
- Loops
- Arithmetic operations
- Math libraries: `math.h`
- Functions: `sqrt()`, `pow()`

**The Task:**

1. Using `patient2` as a starting point
2. Consider which libraries to use for x² and sqrt(x)
3. Calculate mean and standard deviation for age, height, and weight
4. Print descriptive information in the terminal, along with the number of patients

Formulas:
- Mean: $\bar{x} = \frac{1}{N} \sum\_{t=1}^{n} x\_{t}$
- Variance: $\sigma^2 = \frac{1}{N-1} \sum\_{t=1}^{n} (x\_{t} - \bar{x})^2$
- Standard deviation: $\sigma = \sqrt{\sigma^2}$

5. **PBL:** Martin asks: *"Can you also calculate the minimum and maximum values for each measurement?"*

**Hints:**
- Include `<math.h>` for sqrt()
- You've done these calculations before
- Store sum and sum of squares for each measurement
- Print in format: "mean (std)" for each measurement

**What you must never do:**
- Forget to include math.h
- Use N instead of N-1 for standard deviation
- Calculate mean incorrectly

---

## Question: Patient with Gender Enum

**Short Humorous Scenario:**
Martin wants to add gender information to his patient data. *"I need to store whether each patient is male or female. Can you add an enum for this?"* he asks. *"And calculate statistics separately for men and women."*

**What they currently know:**
- Struct definition
- Enum definition
- Arrays
- Statistics calculation

**The Task:**

1. Using `patient3` as a starting point
2. Define an enum type `Gender` that contains: `Male`, `Female`
3. Add a member variable `gender` of type `enum Gender` to the Patient struct
4. Create an array with the following patients:
   - id 1999, age 18, heightM 1.82, weightKg 88, Male
   - id 1993, age 35, heightM 1.63, weightKg 69, Female
   - id 899, age 25, heightM 1.80, weightKg 75, Male
   - id 9783, age 31, heightM 1.51, weightKg 70, Female
   - id 6446, age 29, heightM 1.75, weightKg 63, Female
   - id 16, age 56, heightM 1.52, weightKg 54, Female
   - id 16, age 16, heightM 1.65, weightKg 50, Male
5. Calculate and print mean and standard deviation for age, height, and weight for men and women individually

6. **PBL:** Martin asks: *"Can you also count and print the number of male and female patients?"*

**Hints:**
- See: https://www.tutorialspoint.com/cprogramming/index.htm
- Consider storing the count of observations for men/women in the statistical struct
- Modify patient3 calculations to handle gender separation
- Think about how to handle whether it's a man/woman and how patient3 calculations should change

**What you must never do:**
- Use string for gender (use enum)
- Calculate statistics for all patients together
- Forget to handle male/female separation

---

## Question: Time Module

**Short Humorous Scenario:**
Martin is confused about how time is represented in C. *"When did the C time counter start? And how big is the time structure?"* he asks. *"Can you make a program to figure this out?"*

**What they currently know:**
- `time_t` datatype
- `struct tm` structure
- `ctime()` function
- `asctime()` function
- `sizeof` operator

**The Task:**

1. Create a program `example_timemodule.c`
2. Find and import the library where you can find `struct tm`, `time_t`, and functions `asctime` and `ctime`
3. Define a variable `time_t epoch = 0`
4. Print the number of bytes that `struct tm` contains (Hint: use `sizeof`)
5. Print the string that `ctime(epoch)` creates in the terminal

6. **PBL:** Martin asks: *"Can you print the current time using time() and ctime()?"*

**Hints:**
- See cs50 manual
- `time.h` contains time-related types and functions
- `time_t` represents calendar time
- `ctime()` converts time_t to readable string

**What you must never do:**
- Forget to include time.h
- Use wrong function for time conversion
- Print epoch as integer instead of string

---

## Question: Union Basics

**Short Humorous Scenario:**
Martin has seen a union being used in some code and doesn't understand how it works. *"I see data.i = 10 and data.f = -220.5, but they don't seem to affect the output. What's going on?"* he asks confused.

**What they currently know:**
- `union` keyword
- Memory allocation
- Different datatypes (int, float, char[])
- Pointers and addresses

**The Task:**

1. Based on `union1.c`, answer the following questions:
   - Why does `data.i = 10` and `data.f = -220.5` not affect what is printed by printf?
   - Explain the relationship between `data.i` and `data.str`? (optionally print data.i as a hex-value)
   - How much space does this union occupy (what determines this and why exactly this number)?
   - Why does `data.f` not produce any output?

2. **PBL:** Martin asks: *"Can you create a union that can hold either an int or a float, and write a program that demonstrates the memory overlap?"*

**Hints:**
- When you write "abc", what is at index 3 (the exponent)?
- A union shares the same memory for all its members
- Only one member can be active at a time
- The size of a union is the size of its largest member

**What you must never do:**
- Confuse union with struct
- Think multiple values can be stored simultaneously
- Forget that unions share memory space
