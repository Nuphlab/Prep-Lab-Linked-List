#include "Playlist.h"
#include <string>
#include <iostream>

using namespace std;

Playlist::Playlist() {
   uniqueID = "none" ;
   songName = "none";
   artistName = "none";
   songLength = 0;
   nextNodePtr = 0;
}
Playlist::Playlist(string uniqueID, string songName, string artistName, int songlength) {
   this->uniqueID = uniqueID;
   this->songName = songName;
   this->artistName = artistName;
   this->songLength = songLength;
}
void Playlist::InsertAfter() {

}
void Playlist::SetNext() {

}
void Playlist::GetID() {

}
void Playlist::GetSongName() {
   cout << songName;
}
void Playlist::GetArtistName() {
   cout << artistName;
}
void Playlist::GetSongLength() {
   cout << songLength;
}
void Playlist::GetNext() {

}
void Playlist::PrintPlaylistNode() {
   cout << "Unique ID: " << uniqueID << endl;
   cout << "Song Name: " << songName << endl;
   cout << "Artist Name: " << artistName << endl;
   cout << "Song Length (in seconds): " << songLength << endl;
}