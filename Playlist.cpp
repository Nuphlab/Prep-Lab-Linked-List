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
Playlist::Playlist(string uniqueID = "none", string songName = "none", string artistName = "none", int songlength = 0, Playlist* nextNodePtr = nullptr) {

}
void Playlist::InsertAfter() {

}
void Playlist::SetNext() {

}
void Playlist::GetID() {

}
void Playlist::GetSongName() {

}
void Playlist::GetArtistName() {

}
void Playlist::GetSongLength() {

}
void Playlist::GetNext() {

}
void Playlist::PrintPlaylistNode() {

}