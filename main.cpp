#include "Playlist.h"
#include <iostream>
#include <string>

using namespace std;

string PrintMenu(string userIn) {
   cout << userIn << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist(in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   cout << "Choose an option :" << endl;
   
   return "";
}

int main() {
   string userIn;
   char userOption = NULL;
   string ID;
   string nameSong;
   string nameArtist;
   int lengthSong;
   Playlist* head = nullptr;
   Playlist* temp = nullptr;
   Playlist* tail = nullptr;

   cout << "Enter playlist's title:" << endl;
   cin >> userIn;
   cin.ignore();

   while (userOption != 'q') {

      while (userOption != 'a' && userOption != 'd' && userOption != 'c' && userOption != 's' && userOption != 't' && userOption != 'o' && userOption != 'q') {
         PrintMenu(userIn);
         cin >> userOption;
         cin.ignore();
      }
      if (userOption == 'a') {
         cout << "ADD SONG" << endl;
         cout << "Enter song's unique ID: " << endl;
         getline(cin, ID);
         cout << "Enter song's name:" << endl;
         getline(cin, nameSong);
         cout << "Enter artist's name:" << endl;
         getline(cin, nameArtist);
         cout << "Enter song's length (in seconds):" << endl;
         cin >> lengthSong;
         cin.ignore();
         
         tail = new Playlist(ID, nameSong, nameArtist, lengthSong);
         tail->GetArtistName();




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