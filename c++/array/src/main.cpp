#include <iostream>
#include "music.hpp"
#include "playlist.hpp"

int main() {
    // Criando algumas músicas
    Song song1, song2, song3;

    song1.setSongTitle("Bohemian Rhapsody");
    song1.setSongArtist("Queen");

    song2.setSongTitle("Stairway to Heaven");
    song2.setSongArtist("Led Zeppelin");

    song3.setSongTitle("Imagine");
    song3.setSongArtist("John Lennon");

    // Criando playlist
    Playlist myPlaylist("Rock Classics");

    // Adicionando músicas no final
    myPlaylist.addSong(song1);
    myPlaylist.addSong(song2);

    std::cout << "Após adicionar 2 músicas:" << std::endl;
    for(int i = 0; i < myPlaylist.getSize(); ++i) {
        Song s = myPlaylist.getSong(i);
        std::cout << i+1 << ". " << s.getSongTitle() << " - " << s.getSongArtist() << std::endl;
    }
    std::cout << std::endl;

    // Adicionando música em posição específica
    myPlaylist.addSong(song3, 1); // Inserir song3 na posição 1

    std::cout << "Após adicionar 'Imagine' na posição 2:" << std::endl;
    for(int i = 0; i < myPlaylist.getSize(); ++i) {
        Song s = myPlaylist.getSong(i);
        std::cout << i+1 << ". " << s.getSongTitle() << " - " << s.getSongArtist() << std::endl;
    }
    std::cout << std::endl;

    // Removendo música
    myPlaylist.removeSong(0); // Remove primeira música

    std::cout << "Após remover a primeira música:" << std::endl;
    for(int i = 0; i < myPlaylist.getSize(); ++i) {
        Song s = myPlaylist.getSong(i);
        std::cout << i+1 << ". " << s.getSongTitle() << " - " << s.getSongArtist() << std::endl;
    }
    std::cout << std::endl;

    // Removendo a última música
    myPlaylist.popSong();

    std::cout << "Após remover a última música:" << std::endl;
    for(int i = 0; i < myPlaylist.getSize(); ++i) {
        Song s = myPlaylist.getSong(i);
        std::cout << i+1 << ". " << s.getSongTitle() << " - " << s.getSongArtist() << std::endl;
    }

    return 0;
}