#include "Playlist.h"
#include <iostream>
#include <string>

using namespace std;

void PrintMenu() {
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist(in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   cout << "Choose an option :" << endl;
}

int main() {
   string userIn;
   char userOption = NULL;

   cout << "Enter playlist's title:" << endl;
   cin >> userIn;

   while (userOption != 'q') {

      while (userOption != 'a' && userOption != 'd' && userOption != 'c' && userOption != 's' && userOption != 't' && userOption != 'o' && userOption != 'q') {
         cout << userIn << " PLAYLIST MENU" << endl;
         PrintMenu();
         cin >> userOption;
      }
      if (userOption == 'a') {
         cout << "Finish this section" << endl;
      }
      else if (userOption == 'd') {
         cout << "Finish this section" << endl;
      }
      else if (userOption == 'c') {
         cout << "Finish this section" << endl;
      }
      else if (userOption == 's') {
         cout << "Finish this section" << endl;
      }
      else if (userOption == 't') {
         cout << "Finish this section" << endl;
      }
      else if (userOption == 'o') {
         cout << "Finish this section" << endl;
      }
      cout << "Choose an option :" << endl;
      cin >> userOption;
   }


   /*cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
   cout << "Enter artist's name: " << endl;
   cin >> userIn; */


   return 0;
}