#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice;
    do{
        printf("Bus Reservation System\n");
        printf("1. Display Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter Your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                // displayAvailableSeats();
                break;
            case 2:
                // bookSeat();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");

        }
    }while (choice != 3);
    return 0;
}