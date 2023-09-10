#include <stdio.h>
#include <stdlib.h>

int Now_h, Now_m, Now_s;
int New_h, New_m, New_s;
int pick, increase_pick, decrease_pick;
int h_increase, m_increase, s_increase, h_decrease, m_decrease, s_decrease;
int Total_seconds;

// Function to convert time to seconds
int TimeConverter(int hours, int minutes, int seconds) {
    Total_seconds = hours * 3600 + minutes * 60 + seconds;
    return Total_seconds;
}

// Function to convert seconds to hours, minutes, and seconds
int rebuilder(int time_in_seconds) {
    New_h = time_in_seconds / 3600;
    New_m = (time_in_seconds % 3600) / 60;
    New_s = time_in_seconds % 60;
}

// Function to display a message and wait for user input
void tryAgain() {
    printf("Press ENTER to try again...");
    getchar();
    getchar();
}

// Function to check and update time values
int checker() {
    if (New_h != 0 || New_m != 0 || New_s != 0) {
        Now_h = New_h;
        Now_m = New_m;
        Now_s = New_s;
    }
}

// Main MENU options list
void menu() {
    printf("The current time is:\n\t%dh : %dm : %ds\n", Now_h, Now_m, Now_s);
    printf("Pick what you want to change about the time:\n");
    printf("\t1) Increase the time\n");
    printf("\t2) Decrease the time\n");
    printf("\t3) Exit\n");
    printf("Choose your pick from 1 to 3: ");
    scanf("%d", &pick);
    system("cls");
}

// Function to increase time
int increase() {
    system("cls");
    printf("The current time is:\n\t%dh : %dm : %ds\n", Now_h, Now_m, Now_s);
    printf("What parameter do you want to increase?\n");
    printf("\t1) Hours\n");
    printf("\t2) Minutes\n");
    printf("\t3) Seconds\n");
    printf("\t4) All three parameters\n");
    printf("\t5) Return\n");
    printf("\t6) Exit\n");
    printf("Choose your pick from 1 to 6: ");
    scanf("%d", &increase_pick);

    if (increase_pick == 1) {
        printf("How many hours do you want to increase? : ");
        scanf("%d", &h_increase);
        Now_h += h_increase;
    } else if (increase_pick == 2) {
        printf("How many minutes do you want to increase? : ");
        scanf("%d", &m_increase);
        Now_m += m_increase;
    } else if (increase_pick == 3) {
        printf("How many seconds do you want to increase? : ");
        scanf("%d", &s_increase);
        Now_s += s_increase;
    } else if (increase_pick == 4) {
        printf("How many hours do you want to increase? : ");
        scanf("%d", &h_increase);
        Now_h += h_increase;
        printf("How many minutes do you want to increase? : ");
        scanf("%d", &m_increase);
        Now_m += m_increase;
        printf("How many seconds do you want to increase? : ");
        scanf("%d", &s_increase);
        Now_s += s_increase;
    } else if (increase_pick == 6) {
        system("cls");
        printf("Exited successfully\n");
        exit(EXIT_FAILURE);
    }

    printf("Total seconds: %d\n", TimeConverter(Now_h, Now_m, Now_s));
    rebuilder(TimeConverter(Now_h, Now_m, Now_s));
    printf("The updated time is:\n\t%dh : %dm : %ds\n", New_h, New_m, New_s);
    system("PAUSE");
    system("cls");
}

// Function to decrease time
int decrease() {
    system("cls");
    printf("The current time is:\n\t%dh : %dm : %ds\n", Now_h, Now_m, Now_s);
    printf("What parameter do you want to decrease?\n");
    printf("\t1) Hours\n");
    printf("\t2) Minutes\n");
    printf("\t3) Seconds\n");
    printf("\t4) All three parameters\n");
    printf("\t5) Return\n");
    printf("\t6) Exit\n");
    printf("Choose your pick from 1 to 6: ");
    scanf("%d", &decrease_pick);

    if (decrease_pick == 1) {
        printf("How many hours do you want to decrease? : ");
        scanf("%d", &h_decrease);
        Now_h -= h_decrease;
    } else if (decrease_pick == 2) {
        printf("How many minutes do you want to decrease? : ");
        scanf("%d", &m_decrease);
        Now_m -= m_decrease;
    } else if (decrease_pick == 3) {
        printf("How many seconds do you want to decrease? : ");
        scanf("%d", &s_decrease);
        Now_s -= s_decrease;
    } else if (decrease_pick == 4) {
        printf("How many hours do you want to decrease? : ");
        scanf("%d", &h_decrease);
        Now_h -= h_decrease;
        printf("How many minutes do you want to decrease? : ");
        scanf("%d", &m_decrease);
        Now_m -= m_decrease;
        printf("How many seconds do you want to decrease? : ");
        scanf("%d", &s_decrease);
        Now_s -= s_decrease;
    } else if (decrease_pick == 6) {
        system("cls");
        printf("Exited successfully\n");
        exit(EXIT_FAILURE);
    }

    printf("Total seconds: %d\n", TimeConverter(Now_h, Now_m, Now_s));
    rebuilder(TimeConverter(Now_h, Now_m, Now_s));
    printf("The updated time is:\n\t%dh : %dm : %ds\n", New_h, New_m, New_s);
    system("PAUSE");
    system("cls");
}

// The main function takes inputs from users and manipulates them using the functions above
int main() {
    do {
        printf("Enter the time that you want to increase or decrease\n[hours (min: 0, max: Infinity)] [minutes (min: 0, max: 59)] [seconds (min: 0, max: 59)]: ");
        // Set the time format as: "2 31 13"
        scanf("%d %d %d", &Now_h, &Now_m, &Now_s);

        if (Now_h < 0 || Now_m < 0 || Now_s < 0) {
            printf("Error: Negative number entered\n");
            tryAgain();
        }
        system("cls");
    } while (Now_h < 0 || Now_m < 0 || Now_s < 0);

    // Check for exceeding 60 minutes or seconds
    if (Now_m >= 60 || Now_s >= 60) {
        rebuilder(TimeConverter(Now_h, Now_m, Now_s));
        Now_h = New_h;
        Now_m = New_m;
        Now_s = New_s;
    }

    do {
        menu();
        if (pick == 1) {
            do {
                increase();
                checker();
            } while (increase_pick != 5);
        } else if (pick == 2) {
            do {
                decrease();
                checker();
            } while (decrease_pick != 5);
        }
    } while (pick != 3);

    return 0;
}
