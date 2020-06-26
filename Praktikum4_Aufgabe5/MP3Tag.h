/*
	Author: Kat Bergen
	v01 26.06.2020

	header class music (MP3Tag)

	PAD 1 P4A5
*/

#include <string>
#include <iostream>
using std::string;
#include "MyError.h"

#ifndef MP3Tag_H
#define MP3Tag_H

class MP3Tag {
private:
	string artist;
	string title;
	double length; 
	bool copyright; //false if no right to copy
	string genre;

public:
	MP3Tag(); 
	MP3Tag(const string&, const string&, const double&, const bool&, const string&);

	string checkGenre(const string&);

	string getArtist();
	string getTitle();
	double getLength();
	bool getCopyright();
	string getGenre();

	void setCopyright(bool&);
	void printTag();

};



#endif // !MP3Tag_H

