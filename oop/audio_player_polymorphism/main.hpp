#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

// TODO: Define a base class AudioPlayer with a play method for derived classes.
class AudioPlayer
{
    protected:
    std::string file_path;
    public:
    AudioPlayer(const std::string& path) : file_path(path){}
    virtual void  play() const = 0;
};

class MP3Player: public AudioPlayer
{
    public:
    MP3Player(const std::string& path) : AudioPlayer(path){}
    void  play() const override;
    
};
class WAVPlayer: public AudioPlayer
{
    public:
    WAVPlayer(const std::string& path) : AudioPlayer(path){}
    void  play() const override;
    
};

// TODO: Define two derived player classes: MP3Player and WAVPlayer.

#endif  // SOLUTION_HPP_