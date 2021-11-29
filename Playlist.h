// Header files section
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <string>
using namespace std;

/****** PlaylistNode class specifications ******/
class PlaylistNode
{
public:
   // default constructor
   PlaylistNode();

   // parameterized constructor
   PlaylistNode(string id, string songname, string artist, int length);

   // memeber functions
   void InsertAfter(PlaylistNode* ptr);
   void SetNext(PlaylistNode* ptr);
   string GetID();
   string GetSongName();
   string GetArtistName();
   int GetSongLength();
   PlaylistNode* GetNext();
   void PrintPlaylistNode();

private:

   // data members
   string uniqueID;
   string songName;
   string artistName;
   int songLength;
   PlaylistNode* nextNodePtr;
};

/****** Playlist class specifications ******/
class Playlist
{
private:
   PlaylistNode *head;
   PlaylistNode *tail;

public:
   Playlist();
   void AddSong(string id, string songname, string artistname, int length);
   bool RemoveSong(string id);
   void PrintList();
   bool ChangePosition(int oldPos, int newPos);
   void SongsByArtist(string artist);
   int TotalTime();
};
#endif