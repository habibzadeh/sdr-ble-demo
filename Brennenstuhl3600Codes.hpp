//oversampled codes extracted from captures of the wireless remote

#pragma once

const double CODE_RATE = 5e3;

//these bits represent on and off keying from remote captures
template <typename CodesType>
void loadCodes(CodesType &codes)
{
    codes[true] ["A"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001110000011000000111110011100000111110001100000111110001111100111000001110000011000001110000011111000110000011111000110000001111000111110001100000111000001";
    codes[false]["A"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001111100011000000111110011100000110000001111000111000001111100111110001110000011111001110000011111000110000011111000111110001111000111110001100000111000001";
    codes[true] ["B"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001111100011111000110000011100000111110001100000111110001100000111000001111100011111001110000011111000111110011111000111110001100000111110001100000111110001";
    codes[false]["B"]   = "1111111111111110000000000000000000000000000000000001111100011000001111100011111001110000011000000110000011100000110000001111000111000001100000111110001111100011000001111100011111000111110011100000110000001100000111110001100000111110001";
    codes[true] ["C"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001111100011111000111110011111000111110001111000111000001100000111110001110000011000001111100011111000110000011100000110000001111000111110001111100111000001";
    codes[false]["C"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001110000011000000111110011111000110000001100000111000001100000111000001111100011111001111100011000000110000011100000111110001111000111110001111100111000000";
    codes[true] ["D"]   = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001111100011000000110000011100000110000001111000111110001111100111110001111100011000001110000011000000111110011100000110000001100000111110001111100111110001";
    codes[false]["D"]   = "1111111111111110000000000000000000000000000000000001111100011000001111100011111001111100011000000111110011111000110000001100000111110001111100111000001110000011111001111100011111000111110011111000110000001100000111110001111100111110001";
    codes[true] ["ALL"] = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001111100011000000111110011100000110000001111000111000001111100111110001110000011111001110000011111000110000011111000111110001100000111000001111100111000001";
    codes[false]["ALL"] = "1111111111111110000000000000000000000000000000000001111100111000001111100011111001110000011000000111110011111000110000001100000111000001100000111000001111100011111001111100011000000110000011100000111110001100000111000001111100111000001";
}
