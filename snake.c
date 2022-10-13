
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

#define max 100
#define ENTER 13
#define BKSP 8
char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void loadingBar()

{

    // 0 - black background,

    // A - Green Foreground

    system("color 0A"); // 0A - system color

    // Initialize char for printing

    // loading bar

    char a = 177, b = 219;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t"

           "Loading...\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print initial loading bar

    for (int i = 0; i < 26; i++)

        printf("%c", a);

    // Set the cursor again starting

    // point of loading bar

    printf("\r");

    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print loading bar progress

    for (int i = 0; i < 26; i++)
    {

        printf("%c", b);

        // Sleep for 1 second

        Sleep(1000);
    }
}

// FLAMES

// void flames()
// {
//     int i, j, k, l = 1, n, m, sc = 0, tc, rc = 0, fc = 5;

//     char a[25], b[25], q[25], w[25], c;

//     char f[] = "flames";

//     for (int i = 0; i < 20; i++)
//     {
//         printf("\n");
//     }

//     printf("\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO THE GAME OF\n\n");

//     printf("\t\t\t\t\t\t\t\t\t\t\t\t  -----FLAMES-----\n\n\n\n");

//     printf("\t\t\t\t\t\t\t\t\t\tEnter first name :-  ");

//     scanf("%s", a);

//     printf("\t\t\t\t\t\t\t\t\t\tEnter second name :-  ");

//     scanf("%s", b);

//     strcpy(q, a);

//     strcpy(w, b);

//     n = strlen(a);

//     m = strlen(b);

//     tc = n + m;

//     for (i = 0; i < n; i++)

//     {

//         c = a[i];

//         for (j = 0; j < m; j++)

//         {

//             if (c == b[j])

//             {

//                 a[i] = -1;

//                 b[j] = -1;

//                 sc = sc + 2;

//                 break;
//             }
//         }
//     }

//     rc = tc - sc;

//     for (i = 0;; i++)

//     {

//         if (l == (rc))

//         {

//             for (k = i; f[k] != '\0'; k++)

//             {

//                 f[k] = f[k + 1];
//             }

//             f[k + 1] = '\0';

//             fc = fc - 1;

//             i = i - 1;

//             l = 0;
//         }

//         if (i == fc)

//         {

//             i = -1;
//         }

//         if (fc == 0)

//         {

//             break;
//         }

//         l++;
//     }

//     if (f[0] == 'f')

//         printf("\t\t\t\t\t\t\t\t\t\tThey are friends.\n");

//     else if (f[0] == 'l')

//         printf("\t\t\t\t\t\t\t\t\t\tThey are in love.\n");

//     else if (f[0] == 'a')

//         printf("\t\t\t\t\t\t\t\t\t\tThey are having affair.\n");

//     else if (f[0] == 'm')

//         printf("\t\t\t\t\t\t\t\t\t\tThey are married.\n");

//     else if (f[0] == 'e')

//         printf("\t\t\t\t\t\t\t\t\t\tThey are enemies.\n");

//     else

//         printf("\t\t\t\t\t\t\t\t\t\tThey are SISTERS/BROTHERS.\n");

//     printf("\n\n\n\t\t\t\t\t\t\t\t\t\tLOL ! and you thought FLAMES was for real :)\n");
//     printf("\t\t\t\t\t\t\t\t\t\tPoor You\n");

//     getch();
// }

// // TIC-TAC-TOE

// void board()
// {
//     system("cls"); // clear output at every step // header - stdlib.h

//     for (int i = 0; i < 15; i++)
//     {
//         printf("\n");
//     }

//     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Tic Tac Toe\n\n");

//     printf("\t\t\t\t\t\t\t\t\t\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n");

//     printf("\t\t\t\t\t\t\t\t\t\t\t             |     |     \n");
//     printf("\t\t\t\t\t\t\t\t\t\t\t          %c  |  %c  |  %c \n", square[1], square[2], square[3]);

//     printf("\t\t\t\t\t\t\t\t\t\t\t        _____|_____|______\n");
//     printf("\t\t\t\t\t\t\t\t\t\t\t             |     |     \n");

//     printf("\t\t\t\t\t\t\t\t\t\t\t          %c  |  %c  |  %c \n", square[4], square[5], square[6]);

//     printf("\t\t\t\t\t\t\t\t\t\t\t        _____|_____|______\n");
//     printf("\t\t\t\t\t\t\t\t\t\t\t             |     |     \n");

//     printf("\t\t\t\t\t\t\t\t\t\t\t          %c  |  %c  |  %c \n", square[7], square[8], square[9]);

//     printf("\t\t\t\t\t\t\t\t\t\t\t             |     |     \n\n");
// }
// int checkwin()
// {
//     if (square[1] == square[2] && square[2] == square[3])
//         return 1;

//     else if (square[4] == square[5] && square[5] == square[6])
//         return 1;

//     else if (square[7] == square[8] && square[8] == square[9])
//         return 1;

//     else if (square[1] == square[4] && square[4] == square[7])
//         return 1;

//     else if (square[2] == square[5] && square[5] == square[8])
//         return 1;

//     else if (square[3] == square[6] && square[6] == square[9])
//         return 1;

//     else if (square[1] == square[5] && square[5] == square[9])
//         return 1;

//     else if (square[3] == square[5] && square[5] == square[7])
//         return 1;

//     else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
//              square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

//         return 0;
//     else
//         return -1;
// }
// void tictac()
// {
//     int player = 1, i, choice;

//     char mark;
//     do
//     {
//         board();
//         player = (player % 2) ? 1 : 2;

//         for (int i = 0; i < 3; i++)
//         {
//             printf("\n");
//         }

//         printf("\t\t\t\t\t\t\t\t\t\t\t  Player %d, enter a number:  ", player);
//         scanf("%d", &choice);

//         mark = (player == 1) ? 'X' : 'O';

//         if (choice == 1 && square[1] == '1')
//             square[1] = mark;

//         else if (choice == 2 && square[2] == '2')
//             square[2] = mark;

//         else if (choice == 3 && square[3] == '3')
//             square[3] = mark;

//         else if (choice == 4 && square[4] == '4')
//             square[4] = mark;

//         else if (choice == 5 && square[5] == '5')
//             square[5] = mark;

//         else if (choice == 6 && square[6] == '6')
//             square[6] = mark;

//         else if (choice == 7 && square[7] == '7')
//             square[7] = mark;

//         else if (choice == 8 && square[8] == '8')
//             square[8] = mark;

//         else if (choice == 9 && square[9] == '9')
//             square[9] = mark;

//         else
//         {
//             printf("Invalid move ");

//             player--;
//             getch();
//         }
//         i = checkwin();

//         player++;
//     } while (i == -1);

//     board();

//     if (i == 1)
//         printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t  ==>\aPlayer %d win ", --player);
//     else
//         printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t  ==>\aGame draw");

//     getch();
// }

// // VIRTUAL DUMB CHARADES

// int Virtual_Charades()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int l = 0;
//     int m = 0;
//     int n = 0;
//     int o = 0;

//     char ch1;
//     char ch2;
//     char ch3;
//     char ch4;
//     char ch5;
//     char ch6;
//     char ch7;

//     //variables declaration :

//     //integer variables :
//     //r = rounds to be played
//     //mw = no of words in movie
//     //md = date of release , old new or medium
//     //p = to enter the movie type in switch case
//     //b1 = to ask for options of hints or another try
//     //hint = to store the number of hints left
//     //won = to store the no of wins
//     //point1 = points of first team
//     //point2 = points of 2nd team
//     //round = shows which round is going on

//     //strings/character variables :
//     //T1 = name of team A
//     //T2 = name of team B
//     //name = name of movie
//     //genre = genre of the movie
//     //ma = movie age
//     //an = actor's name
//     //rn = reel name of the actor
//     //cn = co actor name
//     //loc = movie location
//     //sn = song name
//     //s = to check and compare the answers
//     //guess = to make guess of team B
//     //swap = to swap the points
//     int r, mw, md, b1, p = 0, hint = 1, won = 0, round = 0, swap;

//     int point1 = 0, point2 = 0;
//     //team names
//     char T1[max], T2[max];
//     //basic hints
//     char movie[max], ma[max], genre[max];
//     //main hints
//     char an[max], rn[max], cn[max], loc[max], sn[max];
//     //guess for team B
//     char guess[max];

//     char old[max] = "OLD";
//     char med[max] = "MEDIUM";
//     char new[max] = "NEW";

//     printf("\n\n\t\t\t\t\t\tHELLO !!!!!!\n\t\t\t\t\t\tWELCOME PEEPS!\n");
//     printf("\n\nThis game is called as 'DUMB-CHARADES'.\n\nThe rules of the game are very simple as follows : \n");
//     printf("1) We would be having two teams , first is TEAM A and second is TEAM B.\n");
//     printf("2) TEAM A would be guessing the movie and giving the hints.\n\nHints are also of two type: \n\ti)Basic Hints : These hints involve\n\t\tA)the number of words in movie\n\t\tB)The age of movie whether it is NEW,MEDIUM or OLD\n\t\tC)Movie genre \n\n\n\tii)Scoring Hints: These would be the 5 hints provided by TEAM A to TEAM B to guess the movie:\n\t\tA)ACTOR/ACTRESS Name\n\t\tB)Name of actor in that movie \n\t\tC)Co-Star name \n\t\tD)Location of movie \n\t\tE)Any name of song from that movie\n");
//     printf("\n\tGuessing Team would be given 5 chances to guess the correct name.\n\n");
//     printf("\tPoints Distribution is as follow:\n\n");
//     printf(" If guessed the correct movie without any HINT +200 points are rewarded to TEAM B and -100 points for TEAM A \n");
//     printf(" If guessed the correct movie in 1st HINT +175 points are rewarded to TEAM B and -80 points for TEAM A. \n");
//     printf(" If guessed the correct movie in 2nd HINT +150 points are rewarded to TEAM B and -60 points for TEAM A. \n");
//     printf(" If guessed the correct movie in 3rd HINT +125 points are rewarded to TEAM B and -40 points for TEAM A. \n");
//     printf(" If guessed the correct movie in 4th HINT +100 points are rewarded to TEAM B and -20 points for TEAM A. \n");
//     printf(" If guessed the correct movie in 5th HINT +50 points are rewarded to TEAM B and -10 points for TEAM A. \n\n");
//     // printf(" If TEAM B is unable to guess without using any hint then +200 points are rewarded to TEAM A and -10 points for TEAM B\n");
//     // printf(" If TEAM B is unable to guess after using 1st HINT then +200 points are rewarded to TEAM A and -20 points to TEAM B\n");
//     // printf(" If TEAM B is unable to guess after using 5th hint then +200 points are rewarded to TEAM A and -100 points to TEAM B\n");
//     // printf(" If TEAM B is unable to guess after using 2nd HINT then +200 points are rewarded to TEAM A and -40 points to TEAM B\n");
//     // printf(" If TEAM B is unable to guess after using 3rd hint then +200 points are rewarded to TEAM A and -60 points to TEAM B\n");
//     // printf(" If TEAM B is unable to guess after using 4th hint then +200 points are rewarded to TEAM A and -80 points to TEAM B\n");

//     printf("\n\n\t\t\t\tSO LET US BEGIN THE GAME\n");

//     printf("\nEnter Team A name - ");
//     getchar();
//     gets(T1);
//     printf("\nEnter Team B name - ");
//     gets(T2);

//     printf("\nEnter the number of rounds to be played: ");
//     scanf("%d", &r);

//     while (r--)
//     {
//         round++;
//         // fgets(name, max, stdin);
//         printf("\nEnter the name of movie: ");
//         // fgets(name, max, stdin);
//         while (1)
//         {
//             ch1 = getch();

//             if (ch1 == ENTER)
//             {
//                 movie[i] = '\0';
//                 break;
//             }

//             else if (ch1 == BKSP)
//             {
//                 if (i > 0)
//                 {
//                     i--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 movie[i++] = ch1;
//                 printf("* \b");
//             }
//         }

//         printf("\nEnter total words in movie name: ");
//         scanf("%d", &mw);

//         // fgets(genre, max, stdin);
//         printf("\nEnter the movie Genre: ");
//         // fgets(genre, max, stdin);
//         while (1)
//         {
//             ch2 = getch();

//             if (ch2 == ENTER)
//             {
//                 genre[j] = '\0';
//                 break;
//             }

//             else if (ch2 == BKSP)
//             {
//                 if (j > 0)
//                 {
//                     j--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 genre[j++] = ch2;
//                 printf("* \b");
//             }
//         }
//         printf("\n");
//         printf("Enter age of movie wheather it is OLD, MEDIUM or NEW.\n\tFor OLD enter 1\n\tFor MEDIUM enter 2\n\tFor NEW enter 3\n");
//         scanf("%d", &md);

//         do
//         {
//             switch (md)
//             {
//             case 1:
//                 p = 1;
//                 strcpy(ma, old);
//                 break;
//             case 2:
//                 p = 1;
//                 strcpy(ma, med);
//                 break;
//             case 3:
//                 p = 1;
//                 strcpy(ma, new);
//                 break;
//             default:
//                 printf("Enter valid choice :\n");
//                 scanf("%d", &md);
//             }
//         } while (p == 0);

//         printf("\nEnter the 5 hints:\n");
//         // fgets(an, max, stdin);
//         printf("1) Main Actor or Actress Name : ");
//         // fgets(an, max, stdin);
//         while (1)
//         {
//             ch3 = getch();

//             if (ch3 == ENTER)
//             {
//                 an[k] = '\0';
//                 break;
//             }

//             else if (ch3 == BKSP)
//             {
//                 if (k > 0)
//                 {
//                     k--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 an[k++] = ch3;
//                 printf("* \b");
//             }
//         }

//         printf("\n2) Name of that Actor or Actress in movie : ");
//         // fgets(rn, max, stdin);
//         while (1)
//         {
//             ch4 = getch();

//             if (ch4 == ENTER)
//             {
//                 rn[l] = '\0';
//                 break;
//             }

//             else if (ch4 == BKSP)
//             {
//                 if (l > 0)
//                 {
//                     l--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 rn[l++] = ch4;
//                 printf("* \b");
//             }
//         }

//         printf("\n3) Co-Star name : ");
//         // fgets(cn, max, stdin);
//         while (1)
//         {
//             ch5 = getch();

//             if (ch5 == ENTER)
//             {
//                 cn[m] = '\0';
//                 break;
//             }

//             else if (ch5 == BKSP)
//             {
//                 if (m > 0)
//                 {
//                     m--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 cn[m++] = ch5;
//                 printf("* \b");
//             }
//         }

//         printf("\n4) Location of movie in story : ");
//         // fgets(loc, max, stdin);
//         while (1)
//         {
//             ch6 = getch();

//             if (ch6 == ENTER)
//             {
//                 loc[n] = '\0';
//                 break;
//             }

//             else if (ch6 == BKSP)
//             {
//                 if (n > 0)
//                 {
//                     n--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 loc[n++] = ch6;
//                 printf("* \b");
//             }
//         }

//         printf("\n5) Any song name in the movie : ");
//         // fgets(sn, max, stdin);
//         while (1)
//         {
//             ch7 = getch();

//             if (ch7 == ENTER)
//             {
//                 sn[o] = '\0';
//                 break;
//             }

//             else if (ch7 == BKSP)
//             {
//                 if (o > 0)
//                 {
//                     o--;
//                     printf("\b \b");
//                 }
//             }
//             else
//             {
//                 sn[o++] = ch7;
//                 printf("* \b");
//             }
//         }

//         for (int i = 0; i < 6; i++)
//         {
//             printf("\n");
//         }

//         printf("  Here are your basic hints:\n\n");
//         printf("  No of Words in the name of movie : %d \n", mw);
//         printf("  Movie Genre : %s \n", genre);
//         printf("  Movie type : ");
//         for (int p = 0; ma[p] != '\0'; p++)
//         {
//             printf("%c", ma[p]);
//         }

//         printf("\n");

//         //loop using i to give 5 chances to team B to guess the movie name
//         for (int a = 0; a < 5; a++)
//         {
//             printf("\nTRY = %d\n", (a + 1));
//             printf("Enter your guess TEAM B : ");
//             // scanf("%d", &b1);
//             getchar();
//             gets(guess);
//             // printf("%s", guess);
//             // fgets(guess, max, stdin);
//             //s = to check and compare the answers
//             int s = strcmp(guess, movie);
//             if (s == 0)
//             {
//                 printf("\n\nCONGRATULATIONS, TEAM B YOU GUESSED THE MOVIE\n\n");
//                 won++;
//                 break;
//             }
//             else
//             {
//                 printf("  Your guess was incorrect .\n  Please try again or you can use the HINTS. For getting HINTS enter '0' or for again trying enter any other number than 0.\n");

//                 scanf("%d", &b1);
//                 if (b1 == 0)
//                 {
//                     if (hint == 1)
//                     {
//                         printf("  HINT %d \n  Main Actor or Actress Name %s\n", hint, an);
//                         hint++;
//                     }
//                     else if (hint == 2)
//                     {
//                         printf("  HINT %d \n  Name of that Actor or Actress in movie : %s\n", hint, rn);
//                         hint++;
//                     }
//                     else if (hint == 3)
//                     {
//                         printf("  HINT %d \n  Co-Star name: %s\n", hint, cn);
//                         hint++;
//                     }
//                     else if (hint == 4)
//                     {
//                         printf("  HINT %d \n  Location of story in movie: %s\n", hint, loc);
//                         hint++;
//                     }
//                     else if (hint == 5)
//                     {
//                         printf("  HINT %d \n  Name of any song in the movie: %s\n", hint, sn);
//                         hint++;
//                     }
//                     printf("\n\n ");
//                 }
//             }
//             // gets(guess);
//         }
//         hint--;

//         if (hint == 0 && won == 1)
//         {
//             point2 = point2 + 200;
//             point1 = point1 - 100;
//         }
//         else if (hint == 1 && won == 1)
//         {
//             point2 = point2 + 175;
//             point1 = point1 - 80;
//         }
//         else if (hint == 2 && won == 1)
//         {
//             point2 = point2 + 150;
//             point1 = point1 - 60;
//         }
//         else if (hint == 3 && won == 1)
//         {
//             point2 = point2 + 125;
//             point1 = point1 - 40;
//         }
//         else if (hint == 4 && won == 1)
//         {
//             point2 = point2 + 100;
//             point1 = point1 - 20;
//         }
//         else if (hint == 5 && won == 1)
//         {
//             point2 = point2 + 50;
//             point1 = point1 - 10;
//         }
//         else if (won == 0)
//         {
//             point1 = point1 + 200;

//             if (hint == 0)
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie); // changed
//                 point2 = point2 - 10;
//             }
//             else if (hint == 1)
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie);
//                 point2 = point2 - 20;
//             }
//             else if (hint == 2)
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie);
//                 point2 = point2 - 40;
//             }
//             else if (hint == 3)
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie);
//                 point2 = point2 - 60;
//             }
//             else if (hint == 4)
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie);
//                 point2 = point2 - 80;
//             }
//             else
//             {
//                 printf(" Oops! TEAM couldn't guess the correct movie.\n Correct movie was : %s \n", movie);
//                 point2 = point2 - 100;
//             }
//         }

//         printf(" Scores after round %d are as follow:\n\n Points of TEAM %s = %d\n Points of TEAM %s = %d\n", round, T1, point1, T2, point2);
//         //printf("\n\nPress Enter to Continue with the 2nd team\n(TEAM 1 becomes TEAM 2 and TEAM 2 becomes TEAM 1 now)");
//         for (int i = 0; i < 5; i++)
//         {
//             printf("\n");
//         }

//         swap = point1;
//         point1 = point2;
//         point2 = swap;
//         hint = 1;
//         won = 0;
//     }

//     return 0;
// }

// SNAKE GAME

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int length;
int bend_no;
int len;
char key;
void record();
void load();
int life;
void Delay(long double);
void Move();
void Food();
int Score();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x, int y);
void Bend();
void Boarder();
void Down();
void Left();
void Up();
void Right();
void ExitGame();
int Scoreonly();

struct coordinate
{
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500], food, body[30];

void Move() // movement of snake
{
    int a, i;

    do
    {

        Food();
        fflush(stdin);

        len = 0;

        for (i = 0; i < 30; i++)

        {

            body[i].x = 0;

            body[i].y = 0;

            if (i == length)

                break;
        }

        Delay(length);

        Boarder();

        if (head.direction == RIGHT)

            Right();

        else if (head.direction == LEFT)

            Left();

        else if (head.direction == DOWN)

            Down();

        else if (head.direction == UP)

            Up();

        ExitGame();

    } while (!kbhit()); // used to check whether the key has been pressed or not - conio.h

    a = getch();

    if (a == 27)

    {

        system("cls");

        exit(0);
    }
    key = getch();

    if ((key == RIGHT && head.direction != LEFT && head.direction != RIGHT) || (key == LEFT && head.direction != RIGHT && head.direction != LEFT) || (key == UP && head.direction != DOWN && head.direction != UP) || (key == DOWN && head.direction != UP && head.direction != DOWN))

    {

        bend_no++;

        bend[bend_no] = head;

        head.direction = key;

        if (key == UP)

            head.y--;

        if (key == DOWN)

            head.y++;

        if (key == RIGHT)

            head.x++;

        if (key == LEFT)

            head.x--;

        Move();
    }

    else if (key == 27)

    {

        system("cls");

        exit(0);
    }

    else

    {

        printf("\a");

        Move();
    }
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a, b);
}
void load()
{
    int row, col, r, c, q;
    gotoxy(36, 14);
    printf("loading...");
    gotoxy(30, 15);
    for (r = 1; r <= 20; r++)
    {
        for (q = 0; q <= 100000000; q++)
            ; //to display the character slowly
        printf("%c", 177);
    }
    getch();
}
void Down()
{
    int i;
    for (i = 0; i <= (head.y - bend[bend_no].y) && len < length; i++)
    {
        GotoXY(head.x, head.y - i);
        {
            if (len == 0)
                printf("v");
            else
                printf("*");
        }
        body[len].x = head.x;
        body[len].y = head.y - i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y++;
}
void Delay(long double k)
{
    Score();
    long double i;
    for (i = 0; i <= (10000000); i++)
        ;
}
void ExitGame()
{
    int i, check = 0;
    for (i = 4; i < length; i++) //starts with 4 because it needs minimum 4 element to touch its own body
    {
        if (body[0].x == body[i].x && body[0].y == body[i].y)
        {
            check++; //check's value increases as the coordinates of head is equal to any other body coordinate
        }
        if (i == length || check != 0)
            break;
    }
    if (head.x <= 10 || head.x >= 70 || head.y <= 10 || head.y >= 30 || check != 0)
    {
        life--;
        if (life >= 0)
        {
            head.x = 25;
            head.y = 20;
            bend_no = 0;
            head.direction = RIGHT;
            Move();
        }
        else
        {
            system("cls");
            // printf("All lives completed\nBetter Luck Next Time!!!\nPress any key to quit the game\n");
            record();
            exit(0);
        }
    }
}
void Food()
{
    if (head.x == food.x && head.y == food.y)
    {
        length++;
        time_t a;
        a = time(0);
        srand(a);
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)

            food.y += 11;
    }
    else if (food.x == 0) /*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x = rand() % 70;
        if (food.x <= 10)
            food.x += 11;
        food.y = rand() % 30;
        if (food.y <= 10)
            food.y += 11;
    }
}
void Left()
{
    int i;
    for (i = 0; i <= (bend[bend_no].x - head.x) && len < length; i++)
    {
        GotoXY((head.x + i), head.y);
        {
            if (len == 0)
                printf("<");
            else
                printf("*");
        }
        body[len].x = head.x + i;
        body[len].y = head.y;
        len++;
    }
    Bend();
    if (!kbhit())
        head.x--;
}
void Right()
{
    int i;
    for (i = 0; i <= (head.x - bend[bend_no].x) && len < length; i++)
    {
        //GotoXY((head.x-i),head.y);
        body[len].x = head.x - i;
        body[len].y = head.y;
        GotoXY(body[len].x, body[len].y);
        {
            if (len == 0)
                printf(">");
            else
                printf("*");
        }
        /*body[len].x=head.x-i;
        body[len].y=head.y;*/
        len++;
    }
    Bend();
    if (!kbhit())
        head.x++;
}
void Bend()
{
    int i, j, diff;
    for (i = bend_no; i >= 0 && len < length; i--)
    {
        if (bend[i].x == bend[i - 1].x)
        {
            diff = bend[i].y - bend[i - 1].y;
            if (diff < 0)
                for (j = 1; j <= (-diff); j++)
                {
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y + j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff; j++)
                {
                    /*GotoXY(bend[i].x,(bend[i].y-j));
                    printf("*");*/
                    body[len].x = bend[i].x;
                    body[len].y = bend[i].y - j;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
        else if (bend[i].y == bend[i - 1].y)
        {
            diff = bend[i].x - bend[i - 1].x;
            if (diff < 0)
                for (j = 1; j <= (-diff) && len < length; j++)
                {
                    /*GotoXY((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x + j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
            else if (diff > 0)
                for (j = 1; j <= diff && len < length; j++)
                {
                    /*GotoXY((bend[i].x-j),bend[i].y);
                    printf("*");*/
                    body[len].x = bend[i].x - j;
                    body[len].y = bend[i].y;
                    GotoXY(body[len].x, body[len].y);
                    printf("*");
                    len++;
                    if (len == length)
                        break;
                }
        }
    }
}
void Boarder()
{
    system("cls");
    int i;
    GotoXY(food.x, food.y); /*displaying food*/
    printf("F");
    for (i = 10; i < 71; i++)
    {
        GotoXY(i, 10);
        printf("!");
        GotoXY(i, 30);
        printf("!");
    }
    for (i = 10; i < 31; i++)
    {
        GotoXY(10, i);
        printf("!");
        GotoXY(70, i);
        printf("!");
    }
}
void Print()
{
    //GotoXY(10,12);
    printf("\tWelcome to the mini Snake game.(press any key to continue)\n");
    getch();
    system("cls");
    printf("\tGame instructions:\n");
    printf("\n-> Use arrow keys to move the snake.\n\n-> You will be provided foods at the several coordinates of the screen which you have to eat. Everytime you eat a food the length of the snake will be increased by 1 element and thus the score.\n\n-> Here you are provided with three lives. Your life will decrease as you hit the wall or snake's body.\n\n-> YOu can pause the game in its middle by pressing any key. To continue the paused game press any other key once again\n\n-> If you want to exit press esc. \n");
    printf("\n\nPress any key to play game...");
    if (getch() == 27)
        exit(0);
}
void record()
{

    for (int i = 0; i < 15; i++)
    {
        printf("\n");
    }

  
    printf("\t\t\t\t\t\t\t\t\t\tTHANK YOU for playing with us :)");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t           CREDITS\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tAniket Kumar Singh\n\t\t\t\t\t\t\t\t\t\t\tShreya Narayan\n\t\t\t\t\t\t\t\t\t\t\tKumar Harsh\n\t\t\t\t\t\t\t\t\t\t\tRaj Kumar\n\t\t\t\t\t\t\t\t\t\t\t");
    printf("Aishwarya Dixit\n\t\t\t\t\t\t\t\t\t\t\tShreya\n\t\t\t\t\t\t\t\t\t\t\tArnav Singh\n\t\t\t\t\t\t\t\t\t\t\tAkash Drolia\n\t\t\t\t\t\t\t\t\t\t\tRaj Bagaria\n\t\t\t\t\t\t\t\t\t\t\t");
    printf("Hardik Suneja\n\t\t\t\t\t\t\t\t\t\t\t");

    Sleep(60000);
}
int Score()
{
    int score;
    GotoXY(20, 8);
    score = length - 5;
    printf("SCORE : %d", (length - 5));
    score = length - 5;
    GotoXY(50, 8);
    printf("Life : %d", life);
    return score;
}
int Scoreonly()
{
    int score = Score();
    system("cls");
    return score;
}
void Up()
{
    int i;
    for (i = 0; i <= (bend[bend_no].y - head.y) && len < length; i++)
    {
        GotoXY(head.x, head.y + i);
        {
            if (len == 0)
                printf("^");
            else
                printf("*");
        }
        body[len].x = head.x;
        body[len].y = head.y + i;
        len++;
    }
    Bend();
    if (!kbhit())
        head.y--;
}
void Snake()
{
    char key;

    Print();

    system("cls");

    load();

    length = 5;

    head.x = 25;

    head.y = 20;

    head.direction = RIGHT;

    Boarder();

    Food(); //to generate food coordinates initially

    life = 3; //number of extra lives

    bend[0] = head;

    Move(); //initialing initial bend coordinate
}
void main()
{
    int c;
    // heading intro
start:

    system("cls");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n");
    // }
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t----------------WELCOME---------------\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t            ------TO-----\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t        ---------THE---------\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t        ------GAMEBOARD------\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("\n");
    }

    // printf("\n\n\t\t\t\t\t\t\t\t\tPlease enter 1 for Tic-Tac-Toe.");
    // printf("\n\n\t\t\t\t\t\t\t\t\tPlease enter 2 for Flames.");
    // printf("\n\n\t\t\t\t\t\t\t\t\tPlease enter 3 for Virtual Charades.");
    printf("\n\n\t\t\t\t\t\t\t\t\tPlease enter 1 for The Snake Game.");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\tPlease enter any key other than the above keys to Exit the GAME BOARD.\n\n");
    scanf("%d", &c);

    system("cls");
    loadingBar();
    system("cls");

    switch (c)
    {
    // case 1:
    //     tictac();
    //     goto start;
    //     break;
    // case 2:
    //     flames();
    //     goto start;
    //     break;
    // case 3:
    //     Virtual_Charades();
    //     goto start;
    //     break;
    case 1:
        Snake();
        goto start;
        break;

    default:
        record();
    }
}

