#include<stdio.h>
#include<stdlib.h>

#define TOTAL_SEATS 10

int seats[TOTAL_SEATS] = {0};

void displayAvailableSeats(){
    printf("Available seats: ");
 
    for(int i=0;i<TOTAL_SEATS;i++){
        if(seats[i] == 0){
            printf("%d ", i+1);
        }
    }
    printf("\n");
}
void bookSeat() {
    int seatNumber;
    //displayAvailableSeats();

    printf("Enter the seat number you want to book: ");
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number. Please choose a seat between 1 and %d.\n", TOTAL_SEATS);
        return;
    }

    if (seats[seatNumber - 1] == 1) {
        printf("Sorry, the seat is already booked. Please choose another seat.\n");
    } else {
        seats[seatNumber - 1] = 1;
        printf("Seat %d booked successfully.\n", seatNumber);
    }
}
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
                displayAvailableSeats();
                break;
            case 2:
                bookSeat();
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