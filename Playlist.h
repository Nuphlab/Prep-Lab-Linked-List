#pragma once
#ifndef Playlist_h
#define Playlist_h

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
   int songLength;
   Playlist* nextNodePtr;
            
};
#endif
