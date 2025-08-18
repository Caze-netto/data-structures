#include "playlist.hpp"
#include <stdexcept>
#include <algorithm>

Playlist::Playlist() : name("Unknown"), size(0), capacity(1) {
    songs = new Song[capacity];
}

Playlist::Playlist(const std::string& n) : name(n), size(0), capacity(1) {
    songs = new Song[capacity];
}

Playlist::~Playlist() {
    delete[] songs;
}

void Playlist::setName(const std::string& n) {
    name = n;
}

std::string Playlist::getName() const {
    return name;
}

int Playlist::getSize() const {
    return size;
}

void Playlist::resize(int newCapacity) {
    Song* newSongs = new Song[newCapacity];
    std::copy(songs, songs + size, newSongs);
    delete[] songs;
    songs = newSongs;
    capacity = newCapacity;
}

Song Playlist::getSong(int index) const {
    if(index < 0 || index >= size)
        throw std::out_of_range("Index out of range");
    return songs[index];
}

void Playlist::addSong(const Song& s) {
    if(size >= capacity)
        resize(capacity * 2);
    songs[size++] = s;
}

void Playlist::addSong(const Song& s, int index) {
    if(index < 0 || index > size)
        throw std::out_of_range("Index out of range");

    if(size >= capacity)
        resize(capacity * 2);

    for(int i = size; i > index; --i) {
        songs[i] = songs[i-1];
    }
    songs[index] = s;
    ++size;
}

void Playlist::removeSong(int index) {
    if(index < 0 || index >= size)
        throw std::out_of_range("Index out of range");

    for(int i = index; i < size-1; ++i) {
        songs[i] = songs[i+1];
    }
    --size;
}

//Aqui não é apagado de fato só diminui o size e o proximo elemento sobrescreve
void Playlist::popSong() {
    if(size > 0)
        --size;
}