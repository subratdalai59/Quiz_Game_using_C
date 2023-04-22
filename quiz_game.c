#include <stdio.h>

int main(){

    int i;
    int  ans1,ans2,ans3,ans4,ans5;
    int pt1,pt2,pt3,pt4,pt5;
    int pt01,pt02,pt03,pt04,pt05;
    int total=0;

    printf("   Welcome to the game   \n\n");
    printf(">  Press 7 to start the game .\n") ;
    printf(">  Press 0 to quit the game .\n");
    
    scanf("%d",&i);

    if(i==7){
        printf("the game has started .\n\n");

        printf("1 . Which one is the  first search engine ?\n\n");
        printf("1.Google\n2.Archie\n3.wais\n4.Altavista\n");
        printf("Enter Your Answer : \n");
        scanf("%d",&ans1);

        if(ans1==2){
            printf("Correct Answer\n");
            pt1=5;
            total+=pt1;
            printf("You have scored %d point\n ",pt1);
        }
        else{
            printf("Incorrect Answer\n");
            pt01=0;
            total+=pt01;
            printf("You have scored %d point\n ",pt01);

        }

        printf("2 . Which one is the  first web browser invented in 1990 . ?\n\n");
        printf("1.Internet Explorer\n2.Mosaic\n3.Mozilla\n4.Nexus\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans2);

        if(ans2==4){
            printf("Correct Answer\n");
            pt2=5;
            total+=pt2;
            printf("You have scored %d point\n ",pt2);
        }
        else{
            printf("Incorrect Answer\n");
            pt02=0;
            total+=pt02;
            printf("You have scored %d point\n ",pt02 );

        }

        printf("3 . First Computer virus is known as ?\n\n");
        printf("1.Rabbit\n2.Crepeer Virus\n3.Elk Cloner\n4.SCA virus\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans3);

        if(ans3==2){
            printf("Correct Answer\n");
            pt3=5;
            total+=pt3;
            printf("You have scored %d point\n ",pt3);
        }
        else{
            printf("Incorrect Answer\n");
            pt03=0;
            total+=pt03;
            printf("You have scored %d point\n ",pt03 );

        }
        
        printf("4 . Firewall in computer used for ?\n\n");
        printf("1.Security\n2.Data Transmission\n3.Monitoring\n4.Authentication\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans4);

        if(ans4==1){
            printf("Correct Answer\n");
            pt4=5;
            total+=pt4;
            printf("You have scored %d point\n ",pt4);
        }
        else{
            printf("Incorrect Answer\n");
            pt04=0;
            total+=pt04;
            printf("You have scored %d point\n ",pt04 );

        }

        printf("5 . Which of the following is not a database management software ?\n\n");
        printf("1.Mysql\n2.Oracle\n3.Cobal\n4.Sybase\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans5);

        if(ans5==3){
            printf("Correct Answer\n");
            pt5=5;
            total+=pt5;
            printf("You have scored %d point\n ",pt5);
        }
        else{
            printf("Incorrect Answer\n");
            pt05=0;
            total+=pt05;
            printf("You have scored %d point\n ",pt05 );

        }

        printf("Your total score is %d .",total);


    }
    else if(i==0){
        printf("the game has ended .\n\n");
    }
    else{
        printf("Invalid Input\n\n");
    }

    

    return 0;

}