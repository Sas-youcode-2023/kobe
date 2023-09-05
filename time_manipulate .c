#include <stdio.h>
#include <stdlib.h>

int Now_h,Now_m,Now_s;
int New_h,New_m,New_s;
int pick,increase_pick,decrease_pick;
int h_increase,m_increase,s_increase,h_decrease,m_decrease,s_decrease;
int Total_seconds;

// Function to convert time to seconds
int TimeConverter(int hours,int minuts,int seconds){
    Total_seconds=hours*3600+minuts*60+seconds;
    return Total_seconds;
}
// Function to convert seconds to hours, minutes, and seconds
int rebuilder(int time_in_seconds){
    New_h=time_in_seconds/3600;
    New_m=(time_in_seconds%3600)/60;
    New_s=time_in_seconds%60;

}
//Function to display a message and wait for user input
void tryAgain(){
    printf("Press ENTER to try again...");
    getchar();
    getchar();
}
// Function to check and update time values
int checker(){
    if (New_h !=0 || New_m!=0 || New_s!=0)
        {
        Now_h=New_h;
        Now_m=New_m;
        Now_s=New_s;
        }
}
// MAIN  MENU options list
void menu(){
    printf("the current time is : \n\t%dh : %dm : %ds \n",Now_h,Now_m,Now_s);
    printf("pick what you want to change about the time\n \t- 1) increase the time \n \t- 2) decrease the time \n \t- 3) exit\n");
    printf("choose your pick from 1 to 3 : ");
    scanf("%d",&pick);
    system("cls");
}
// Function to increase time
int increase(){
    system("cls");
    printf("the current time is : \n\t%dh : %dm : %ds \n",Now_h,Now_m,Now_s);
    printf("what parameter you want to increase\n \t- 1) hours \n \t- 2) minuts \n \t- 3) seconds \n \t- 4) all the three parameters\n \t- 5) return\n \t- 6) exit\n");
    printf("choose your pick from 1 to 3 : ");
    scanf("%d",&increase_pick);
    if (increase_pick==1)
    {
        printf("how many hour you want to increase ? : ");
        scanf("%d",&h_increase);
        Now_h=Now_h+h_increase;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (increase_pick==2)
    {
        printf("how many minute you want to increase ? : ");
        scanf("%d",&m_increase);
        Now_m=Now_m+m_increase;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (increase_pick==3)
    {
        printf("how many second you want to increase ? : ");
        scanf("%d",&s_increase);
        Now_s=Now_s+s_increase;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (increase_pick==4)
    {
        printf("how many hour you want to increase ? : ");
        scanf("%d",&h_increase);
        Now_h=Now_h+h_increase;
        printf("how many minute you want to increase ? : ");
        scanf("%d",&m_increase);
        Now_m=Now_m+m_increase;
        printf("how many second you want to increase ? : ");
        scanf("%d",&s_increase);
        Now_s=Now_s+s_increase;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    }else if (increase_pick==6)
    {
        system("cls");
        printf("exited successfully");
        exit(EXIT_FAILURE);
    }
    system("cls");
}
// Function to decrease time
int decrease(){
    system("cls");
    printf("the current time is : \n\t%dh : %dm : %ds \n",Now_h,Now_m,Now_s);
    printf("what parameter you want to decrease\n \t- 1) hours \n \t- 2) minuts \n \t- 3) seconds \n \t- 4) all the three parameters\n \t- 5) return\n \t- 6) exit\n");
    printf("choose your pick from 1 to 3 : ");
    scanf("%d",&decrease_pick);
    if (decrease_pick==1)
    {
        printf("how many hour you want to decrease ? : ");
        scanf("%d",&h_decrease);
        Now_h=Now_h-h_decrease;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (decrease_pick==2)
    {
        printf("how many minute you want to decrease ? : ");
        scanf("%d",&m_decrease);
        Now_m=Now_m-m_decrease;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (decrease_pick==3)
    {
        printf("how many second you want to decrease ? : ");
        scanf("%d",&s_decrease);
        Now_s=Now_s-s_decrease;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    } else if (decrease_pick==4)
    {
        printf("how many hour you want to decrease ? : ");
        scanf("%d",&h_decrease);
        Now_h=Now_h-h_decrease;
        printf("how many minute you want to decrease ? : ");
        scanf("%d",&m_decrease);
        Now_m=Now_m-m_decrease;
        printf("how many second you want to decrease ? : ");
        scanf("%d",&s_decrease);
        Now_s=Now_s-s_decrease;
        printf("Totale senconds is : %d\n",TimeConverter(Now_h,Now_m,Now_s));
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        printf("the updated time is : \n\t%dh : %dm : %ds \n",New_h,New_m,New_s);
        system("PAUSE");
    }else if (decrease_pick==6)
    {
        system("cls");
        printf("exited successfully");
        exit(EXIT_FAILURE);
    }
    system("cls");
}
//the main function take unputs from users and manipulate it using the functions above
int main(){
do
{
    printf("Enter the time that you want increase or decrease\n[hours(min:0 , max: Infinity)] [minuts(min:0 , max: 59)] [seconds(min:0 , max: 59)] : ");//set the time ex: "2 31 13"
    scanf("%d %d %d",&Now_h,&Now_m,&Now_s);
    if (Now_h<0||Now_m<0||Now_s<0)
    {
        printf("Error: Negative number entered\n");
        tryAgain();
    }
    system("cls");
} while (Now_h<0||Now_m<0||Now_s<0);
    // Check for exceeding 60 minutes or seconds
    if (Now_m>=60 || Now_s>=60){
        rebuilder(TimeConverter(Now_h,Now_m,Now_s));
        Now_h=New_h;
        Now_m=New_m;
        Now_s=New_s;
    }
    
    

    do {
        menu();
        if (pick==1)
        {
            do
            {
                increase();
                checker();
            } while (increase_pick!=5);

        } else if (pick==2)
        {
            do
            {
                decrease();
                checker();
            } while (decrease_pick!=5);
        }
        
    } while (pick!=3);
    return 0;
}
