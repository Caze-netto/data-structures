#ifndef MUSIC_HPP
#define MUSIC_HPP
#include <string>

class Song {
    std::string title;
    std::string artist;

public:
    void setSongTitle(std::string title_);
    std::string getSongTitle();

    void setSongArtist(std::string art_);
    std::string getSongArtist();
};

#endif