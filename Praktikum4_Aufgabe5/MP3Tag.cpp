/*
	Author: Kat Bergen
	v01 26.06.2020

	cpp class music (MP3Tag)

	PAD 1 P4A5
*/

#include "MP3Tag.h"
#include <vector>


MP3Tag::MP3Tag() : artist{  }, title{   }, length{  }, copyright{ true }, genre{ "undefined" }
{}

MP3Tag::MP3Tag(const string& artist_, const string& title_, const double& length_, const bool& copyright_, const string& genre_) :
	artist{ artist_ }, title{ title_ }, length{ length_ }, copyright{ copyright_ }, genre{ checkGenre(genre_) }
{ } //{ if (length <= 0) error("Length cannot be 0 or less"); }

string MP3Tag::checkGenre(const string& genre_)
{
	std::vector<string> validGenres{ "Pop", "Soul", "Jazz", "International", "Classic"};

	for (unsigned int i{ 0 }; i < validGenres.size(); i++)
	{
		if (genre_ == validGenres.at(i)) return genre_;
	}

	return "unknown";
}

string MP3Tag::getArtist()
{
	return artist;
}
string MP3Tag::getTitle()
{
	return title;
}
double MP3Tag::getLength()
{
	return length; 
}
bool MP3Tag::getCopyright()
{
	return copyright;
}
string MP3Tag::getGenre()
{
	return genre;
}

void MP3Tag::setCopyright(bool& copyright_)
{
	copyright = copyright_;
}
void MP3Tag::printTag()
{
	std::cout << "Artist: " << artist << "\nTitle: " << title << "\nLength: " << length << "\nCopyright: " << copyright; 
}

