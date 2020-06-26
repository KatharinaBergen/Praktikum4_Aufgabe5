/*
	Author: Kat Bergen
	v01 26.06.2020

	Create class MP3Tag to hold information on a music piece. fill pieces into vector and check.

	PAD 1 P4A5
*/

#include <iostream>
#include "MP3Tag.h"
#include <vector>
#include "MyError.h"

void fill(std::vector<MP3Tag>& music_)
{
	MP3Tag tag1{ "Nirvana", "Smells like teen spirit", -5.55, false, "Pop" };
	music_.push_back(tag1);
	MP3Tag tag2{ "Richard Clayderman", "Mariage d'amour", 8.55, true, "Classic" };
	music_.push_back(tag2);
	MP3Tag tag3{ "AC/DC", "Highway to Heaven", 3.55, false, "Rock" };
	music_.push_back(tag3);
	MP3Tag tag4{ "Antonin Dvorak", "Symphonie der Neuen Welt", -12, true, "Classic" };
	music_.push_back(tag4);
	MP3Tag tag5{ "Ray Charles", "Hit the road Jack", 5.55, true, "Soul" };
	music_.push_back(tag5);
	MP3Tag tag6{ "Marvin Gaye", "Ain't no mountain high enough", 4.33, false, "Soul" };
	music_.push_back(tag6);
	MP3Tag tag7{ "Songs around the World", "Stand by me", 5.55, false, "World music" };
	music_.push_back(tag7);
	MP3Tag tag8{ "Lilly Wood and the Prick", "Prayer in C", 2.55, false, "Pop" };
	music_.push_back(tag8);
	MP3Tag tag9{ "Muse", "Resistance", 4.5, false, "Rock" };
	music_.push_back(tag9);
	MP3Tag tag10{ "Leonard Cohen", "Hallelujah", 50, false, "Pop" };
	music_.push_back(tag10);
}

void check(std::vector<MP3Tag>& music)
{
	for (unsigned int i{ 0 }; i < music.size(); i++)
	{
		if (music.at(i).getLength() < 0) std::cout << "Test at index " << i << " has failed." << std::endl;
	}
}

int main() try
{
	std::vector<MP3Tag> music{};
	fill(music);

	check(music);

	return 0;

}

catch (std::exception& e)
{
	std::cerr << e.what();
	return -2;
}

catch (...)
{
	std::cerr << "unknown error";
	return -1;
}
