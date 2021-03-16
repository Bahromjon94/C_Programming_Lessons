
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 5
#define COLS 10

#define LONG_STRING 100
#define SHORT_STRING  20

struct Login
{
  char fname[LONG_STRING];
  char lname[LONG_STRING];
  char username[SHORT_STRING];
  char password[SHORT_STRING];
};

void displaySeats(int seats[ROWS][COLS]);
void reserveSeats(int seats[ROWS][COLS]);
void cancelSeat(int seats[ROWS][COLS]);

int handleMainMenu();
int handleSubMenu(int seats[ROWS][COLS]);
void registration();
int login();


enum
{
  LOGGED_OUT,
  LOGGED_IN,
  EXIT
};

int main()
{
  int user_state = LOGGED_OUT;

  int seat[ROWS][COLS] = {0};

  while  (user_state != EXIT)
  {
    if ( user_state == LOGGED_OUT)
    {// user is NOT logged in, handle main menu
      user_state = handleMainMenu();
    }
    else
    {// user is logged in, handle sub menu
      user_state = handleSubMenu(seat);
    }
  }
  return 0;
}

int handleMainMenu()
{
  int choice;
  while ( 1 )
  {
    printf("Welcome to our small Cinema!!!\n");
    printf("\n");
    printf("\n1 : register!!!\n");
    printf("2 : login!!!\n");
    printf("3 : quit\n");
    printf("Enter your choice : \n");

    if ( scanf("%d", &choice) == 1)
    {
      switch ( choice)
      {
      case 1:
        registration();
        break;
      case 2:
        if ( login())
          return LOGGED_IN;
        break;
      case 3:
        printf("Thank you for choosing our small Cinema !! \n");
        return EXIT;
      default:
        printf("Invalid choice, please insert a valid number\n");
        break;
      }
    }
  }
}

int handleSubMenu(int seat[ROWS][COLS])
{
  int choice;

  while ( 1 )
  {
    printf("\nReservation Menu\n");
    displaySeats(seat);

    printf("1 : reserve a seat\n");
    printf("2 : cancell a seat\n");
    printf("3 : Main Menu\n");
    printf("Enter your choice : \n");
    if (scanf("%d", &choice)==1)
    {
      switch (choice)
      {
      case 1:
        reserveSeats(seat);
        break;
      case 2:
        cancelSeat(seat);
        break;
      case 3:
        return LOGGED_OUT;
      default:
        printf("Please enter a valid choice!!");
        break;
      }
    }
  }
}

void registration()
{
  FILE *log = fopen("login.txt", "a+");
  struct Login l;
  printf("\nEnter first name : ");
  scanf("%s", (l.fname));
  printf("\nEnter last name : ");
  scanf("%s", l.lname);
  printf("\nEnter your Username : ");
  scanf("%s", l.username);
  printf("\nEnter your password : ");
  scanf("%s", l.password);
  fwrite(&l, sizeof(l), 1, log);
  fclose(log);
  printf("\nYou are successfully registered!!");
  printf("\nYour UserId is %s and your password is %s", l.username, l.password);
  printf("\nNow login with your username and password!!");
  printf("\nPress any key to continue ...");
  getchar();
}

int login()
{
  FILE *log;
  struct Login linput, lfile;
  log = fopen("login.txt", "r");
  if (log == NULL)
  {
    printf("FILE NOT FOUND!!!\n");
    return 0; // login failed
  }
  printf("\nUserID : ");
  scanf("%s", linput.username);
  printf("\nPassword : ");
  scanf("%s", linput.password);
  while ( fread(&lfile, sizeof(lfile), 1, log)  )
  {
    if (strcmp(linput.username, lfile.username) == 0
      && strcmp(linput.password, lfile.password)==0)
    {
      printf("\nYou are successfully logged in !!\n");
      fclose(log);
      return 1; // login succeeded
    }
  }
  printf("\nYour UserID or password is incorrect !!\n");
  printf("Press any key to continue ...\n");
  getchar();
  fclose(log);
  return 0; // login failed
}

void reserveSeats(int seat[ROWS][COLS])
{
  int noOfSeats, noOfReservedSeats;
  printf("How many seats do you want to reserve?\n");
  scanf("%d", &noOfSeats);
  displaySeats(seat);

  noOfReservedSeats = 0;

  while (noOfReservedSeats < noOfSeats)
  {
    int row, col;

    printf("Which row do you want to choose? : ");
    scanf("%d", &row);
    printf("Which seat do you want to select? : ");
    scanf("%d", &col);
    if (row > ROWS || col > COLS)
    {
      printf("Wrong Entry !! Try again\n");
    }
    else if (seat[row - 1][col - 1] != 0)
    {
      printf("Seat is already reserved try again !!\n");
    }
    else
    {
      seat[row - 1][col - 1] = 1;
      ++noOfReservedSeats;
    }
  }
  printf("Congratulations!! Rservation complete!!!\n");
  printf("\nPress any key to continue!!\n");
  getchar();
}

void displaySeats(int seat[ROWS][COLS])
{
  printf("        Seats\n");
  printf("        1 2 3 4 5 6 7 8 9 10\n");
  int row;
  for (row = 0; row < ROWS; ++row)
  {
    int col;
    printf("Row %d : ", row + 1);
    for (col = 0; col < COLS; ++col)
      printf("%d ", seat[row][col]);
    printf("\n");
  }
  printf("\n");
}

void cancelSeat(int seat[ROWS][COLS])
{
  displaySeats(seat);
  int row, col;
  printf("\nWhich row do you want to cancell ? : ");
  scanf("%d", &row);
  printf("\nWhich column do you want to cancell ? : \n");
  scanf("%d", &col);

  if (seat[row - 1][col - 1] != 0)
  {
    seat[row - 1][col - 1] = 0;
    printf("Your Seat is Cancelled !!\n");
  }
  else
  {
    printf("The seat was not reserved !!\n");
  }
}
