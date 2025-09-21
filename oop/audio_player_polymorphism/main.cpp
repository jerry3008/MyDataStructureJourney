#include "solution.hpp"

// TODO: Implement MP3Player constructor
void MP3Player::play() const
{
    std::cout << "Playing MP3: " << file_path << std::endl;
}


// TODO: Implement play method to simulate decoding and playing an MP3 file.


// TODO: Implement WAVPlayer constructor
void WAVPlayer::play() const
{
    std::cout << "Playing WAV: " << file_path << std::endl;
}

// TODO: Implement play method to simulate decoding and playing a WAV file.


int main() {
    MP3Player mp3Player("song");
    WAVPlayer wavPlayer("podcast");
    mp3Player.play();
    wavPlayer.play();

    // TODO: Play an MP3 file using mp3Player

    // TODO: Play a WAV file using wavPlayer

    return 0;
}