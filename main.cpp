#include<iostream>
#include<string>

using namespace std;

string cards[5] = {"Dog", "Cat", "Alligator", "Sheep", "Butterfly"};
string back[5] = {"Cachorro", "Gato", "Jacare", "Ovelha", "Borboleta"};
int counter = 4;

//------ Cards -------

void printFlashCard(int x, int y){
  string input;
  cout << "---------------" << endl;
  cout << "--  " << cards[x] << "   --  " << endl;
  cout << "---------------" << endl;
  cin >> input;
  cout << "---------------" << endl;
  cout << "--  " << back[y] << "   --  " << endl;
  cout << "---------------" << endl;
}
void printAllCards(){
  int actualNumber = 0;
  while(actualNumber < counter){
    printFlashCard(counter - 1, counter - 1);
    break;
  }
}

void createCards(){
  string inputPhrase;
  string inputBack;
  cin >> inputPhrase;
  cin >> inputBack;
  cards[counter] = inputPhrase;
  back[counter] = inputBack;
  counter++;
}

//------ User Input ----
void printOptions(){
  cout << "* 1: Revise cards *" << endl;
  cout << "* 2: Create cards *" << endl;
  cout << "Input: ";
}

int getUserInput(){
  int input;
  cin >> input;
  return input;
}

void checkUserInput(int input){
  if(input == 1){
    printAllCards();
  }
  else if(input == 2){
    cout << "Input 2;" << endl;
    createCards();
  }
  else{
    cout << "Invalid number." << endl;
  }
}

//Main
int main(){
  while(true){
    printOptions();
    checkUserInput(getUserInput());
  }
}
