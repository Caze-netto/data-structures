#include "music.hpp"
#include <iostream>
#include <utility>

void Song::setSongTitle(std::string title_) {
    title = std::move(title_);
}

void Song::setSongArtist(std::string art_) {
    artist = std::move(art_);
}

std::string Song::getSongTitle() {
    return title;
}

std::string Song::getSongArtist() {
    return artist;
}