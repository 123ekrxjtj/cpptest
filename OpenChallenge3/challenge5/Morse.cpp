#include <iostream>
#include <string>
using namespace std;
#include "Morse.h"

Morse::Morse()
{
    alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-..";
    alphabet[4] = "."; alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "....";
    alphabet[8] = ".."; alphabet[9] = ".---"; alphabet[10] = "-.-"; alphabet[11] = ".-..";
    alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---"; alphabet[15] = ".--.";
    alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
    alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-";
    alphabet[24] = "-.--"; alphabet[25] = "--.."; digit[0] = "-----"; digit[1] = ".----";
    digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; digit[5] = ".....";
    digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";
    slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-";
    plus = ".-.-"; equal = "-...-";
}

void Morse::text2Morse(string text, string& morse) {
    bool blankFound = false;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ') {
            if (blankFound == false) {
                blankFound = true;
                morse.append("  ");
            }
        }
        else {
            blankFound = false;

            if (text[i] == '/') morse.append(slash + " ");
            else if (text[i] == '?') morse.append(question + " ");
            else if (text[i] == ',') morse.append(comma + " ");
            else if (text[i] == '.') morse.append(period + " ");
            else if (text[i] == '+') morse.append(plus + " ");
            else if (text[i] == '=') morse.append(equal + " ");
            else if (isalpha(text[i])) {
                char tmp = toupper(text[i]);
                int index = tmp - 'A';
                morse.append(alphabet[index] + " ");
            }
            else if (isdigit(text[i])) {
                int index = text[i] - '0';
                morse.append(digit[index] + " ");
            }
        }
    }
}

bool Morse::morse2Text(string morse, string& text) {
    string alpha[26] = { "a","b","c","d","e","f", "g","h","i", "j","k","l", "m","n","o",
        "p","q","r", "s","t","u", "v","w","x", "y","z" };
    string di[10] = { "0","1","2", "3","4","5", "6","7","8", "9" };
    string retext="";
    for (int j = 0; j < morse.size(); ) {
        int pos = morse.find(" ",j);
        bool sw = true;
        string s = morse.substr(j, pos-j);
        for (int i = 0; i < 26; ++i) {
            if (s == alphabet[i]) {
                retext.append(alpha[i]);
                sw = false;
                break;
            }
        }
        if (sw) {
            for (int i = 0; i < 10; ++i) {
                if (s == digit[i]) {
                    retext.append(di[i]);
                    sw = false;
                    break;
                }
            }
        }
        if (sw) {
            if (s == slash) retext += "/";
            else if (s == question) retext += "?";
            else if (s == comma) retext += ",";
            else if (s == period) retext += ".";
            else if (s == plus) retext += "+";
            else if (s == equal) retext += "=";
        }
        if (morse[pos] == ' ' &&morse[pos+1] == ' ' &&morse[pos+2] == ' ') {
            retext += " ";
            pos += 2;
        }
        j = pos + 1;
    }
    if (retext == text) return true;
    else return false;
}