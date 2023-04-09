# Item Purchase Information

This is a simple C program that prompts the user to enter information about a purchased item, including the item number, unit price, quantity, and purchase date. The program then calculates the total amount of the purchase and displays the formatted output of the entered information.
How to Run

To run the program, you will need a C compiler installed on your system. Once you have a compiler installed, you can follow these steps:

    Open a terminal or command prompt and navigate to the directory where the program is saved.
    Use the compiler to compile the program by entering the following command: gcc item_purchase.c -o item_purchase
    Run the program by entering the following command: ./item_purchase
    Follow the prompts to enter the item information and view the output.

Program Description

The program first declares variables to hold the item number, unit price, quantity, purchase date, and total amount of the purchase.

Then, the program prompts the user to enter the item information and reads the input using scanf.

Next, the program calculates the total amount of the purchase by multiplying the unit price and quantity.

Finally, the program displays the formatted output of the entered information using printf.
Input Requirements

The program expects the user to enter the following information:

    Item number: an integer
    Unit price: a float
    Quantity: an integer
    Purchase date: a string in the format mm/dd/yyyy

Output

The program outputs the formatted product information entered by the user, including the item number, unit price, quantity, purchase date, and total amount.
