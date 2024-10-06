#include<stdio.h> 

  

int main() { 

    float physics, chemistry, maths, marks, score; 

    char choice; 

    char name[50];  // Array to store the user's name 

  

    // Prompt for the user's name 

    printf("Enter your name: "); 

    scanf("%49s", name);   

  

    // Display a welcome message with the user's name 

    printf("Hello, %s!\n", name); 

  

    do { 

        printf("Welcome to SSN Institute of Engineering, Pune\n"); 

        printf("Check your admission status by entering your respective marks\n"); 

  

        // Input with validation 

        do { 

            printf("Enter your physics marks (0-100): "); 

            scanf("%f", &physics); 

        } while (physics < 0 || physics > 100); 

  

        do { 

            printf("Enter your chemistry marks (0-100): "); 

            scanf("%f", &chemistry); 

        } while (chemistry < 0 || chemistry > 100); 

  

        do { 

            printf("Enter your maths marks (0-100): "); 

            scanf("%f", &maths); 

        } while (maths < 0 || maths > 100); 

  

        // Calculate total marks and average 

        marks = physics + chemistry + maths; 

        float average = marks / 3; 

  

        // Display average marks 

        printf("Your total marks: %.2f\n", marks); 

        printf("Your average marks: %.2f\n", average); 

  

// Determine letter grade 

        char grade; 

        if (marks >= 270) { 

            grade = 'A'; 

        } else if (marks >= 240) { 

            grade = 'B'; 

        } else if (marks >= 210) { 

            grade = 'C'; 

        } else if (marks >= 180) { 

            grade = 'D'; 

        } else { 

            grade = 'F'; 

        } 

        printf("Your grade: %c\n", grade); 

  

        // Check eligibility using nested if-else condition 

        if (marks >= 150) { 

            printf("You are eligible to take admission in our college.\n"); 

            printf("Please enter your entrance exam score: "); 

            scanf("%f", &score);  

  

            if (score >= 90) { 

                printf("Congrats, you are eligible for all CS, IT, E&TC, MECH\n"); 

            } else if (score >= 80) { 

                printf("Congrats, you are eligible for IT, E&TC, MECH\n"); 

            } else if (score >= 70) { 

                printf("Congrats, you are eligible for E&TC, MECH\n"); 

            } else if (score >= 60) { 

                printf("Congrats, you are eligible for MECH\n"); 

            } else { 

                printf("Sorry, you are not qualified\n"); 

            } 

  

        } else { 

            printf("Sorry, you cannot take admission in our college\n"); 

        } 

  

        // Ask if the user wants to check again 

        printf("Do you want to check admission status again? (Y/N): "); 

        scanf(" %c", &choice); // Note the space before %c to consume any newline characters 

    } while (choice == 'Y' || choice == 'y'); 
    if (choice == 'N' || choice == 'n') 

 { printf("Thank you, have a nice day!\n"); } 

    return 0; 

  

  } 

 