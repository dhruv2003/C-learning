#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{

  srand(time(nullptr));

  bool guessNumber=false;
  int guessCount=0;
  int ourGuess;
  int computerNumber=rand() %100+1;

  while(!guessNumber)
  {
    cout<<"Enter ur guess: "<<endl;
    cin>>ourGuess;

    if(ourGuess>100 || ourGuess <1)
    {
      cout<<"That was a wasted guess Pick a number between 1 and 100"<<endl;
      guessCount++;
      continue;
    }

    if(ourGuess= computerNumber)
    {
      cout<<"Congratulations you guessed in "<<guessCount<<"guesses! "<<endl;
      cout<<"Thanks for playing"<<endl;
      guessNumber=true;
    }
    else if (ourGuess>computerNumber)
    {
      cout<<"Your guess is too high! "<<endl;
    }
    else
    {
      cout<<"Your guess is too low! "<<endl;
    }

    guessCount++;
  }

  return 0;
}