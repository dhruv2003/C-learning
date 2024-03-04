#include<iostream>
#include<ctime>
#include<conio.h>
#include<windows.h>
using namespace std;


void printHeartPattern() {
    cout << "  ***   ***" << endl;
    cout << " ***** *****" << endl;
    cout << "**************" << endl;
    cout << " ***********" << endl;
    cout << "  *********" << endl;
    cout << "   *******" << endl;
    cout << "    *****" << endl;
    cout << "     ***" << endl;
    cout << "      *" << endl;
}



void greetUser() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int hour = ltm->tm_hour;

    cout << "Welcome!" << endl;
    cout << "Current time: ";
    if (hour >= 5 && hour < 12)
        cout << "Good morning Janudi !" << endl;
    else if (hour >= 12 && hour < 18)
        cout << "Good afternoon Janudi!" << endl;
    else if (hour >= 18 && hour < 22)
        cout << "Good evening Janudi !" << endl;
    else
        cout << "Good night Janudi !" << endl;
}


void displayHeartAnimation() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\tH       H   AAAAA   PPPPP   PPPPP   Y     Y" << endl;
    cout << "\t\t\t\t\tH       H  A     A  P    P  P    P    Y   Y " << endl;
    cout << "\t\t\t\t\tHHHHHHHHH  AAAAAAA  PPPPP   PPPPP      Y   " << endl;
    cout << "\t\t\t\t\tH       H  A     A  P       P          Y   " << endl;
    cout << "\t\t\t\t\tH       H  A     A  P       P          Y   " << endl;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void askToContinue() {
    char choice;

    do {
        cout << "Do you want to continue? (Y/N): ";
        choice = _getch(); // get key press
    } while (toupper(choice) != 'Y');
    
}



int main()
{
  char choice;
  do{
    system("cls");
    printHeartPattern();

    cout<<"Press Z to continue: "<<endl;
    while(!_kbhit());
    choice=_getch();
  }while (toupper(choice)!= 'Z');
  
    greetUser();
  
  do{
    cout<<"Do You want to continue? (Y/N): ";
    choice=_getch();
  }while(toupper(choice) != 'Y' && toupper(choice) != 'N');

  if(toupper(choice)=='Y'){
    system("cls");
    displayHeartAnimation();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "HAPPY BIRTHDAY!!!" << endl;
        cout << "Press 'Y' to continue..." << endl;
        choice=_getch();
        askToContinue();

  }
  


  return 0;
}