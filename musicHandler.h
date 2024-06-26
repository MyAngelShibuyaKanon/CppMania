#include "SoLoud/include/soloud.h"
#include "SoLoud/include/soloud_wavstream.h"
#include "SoLoud/include/soloud_wav.h"
#include <vector>
#include <string>
#pragma once

class musicHandler{
    private:
        SoLoud::Soloud gSoLoud;
        SoLoud::WavStream mainMusic;
        std::vector<SoLoud::Wav> soundEffects;
        SoLoud::Wav sfx;

    public:
        musicHandler();
        int handlerToMusic;
        void loadManiaSfx();
        void playManiaSfx(int posInVector);
        void playMusic();
        void loadMusic(std::string pathToFile);
        void purge();
        double getMusicPlayTime(SoLoud::handle handler);
};

