#pragma once
#ifndef Playlist_h
#define Playlist_h
#include <string>
#include <iostream>

using namespace std;

class Playlist {

   Playlist();
   Playlist(string uniqueID, string songName, string artistName, int songlength, Playlist* nextNodePtr);
   
public:
   void InsertAfter();
   void SetNext();
   void GetID();
   void GetSongName();
   void GetArtistName();
   void GetSongLength();
   void GetNext();
   void PrintPlaylistNode();
   
private:
   string uniqueID;
   string songName;
   string artistName;
   int songLength;
   Playlist* nextNodePtr;
            
};
#endif
