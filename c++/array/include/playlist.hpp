#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include <string>
#include "music.hpp"

class Playlist {
private:
    std::string name;
    Song* songs;
    int size;
    int capacity;

    void resize(int newCapacity);

public:
    Playlist();
    Playlist(const std::string& n);
    ~Playlist();

    void setName(const std::string& n);
    std::string getName() const;

    int getSize() const;

    Song getSong(int index) const;
    void addSong(const Song& s);
    void addSong(const Song& s, int index);
    void removeSong(int index);
    void popSong();
};

#endif