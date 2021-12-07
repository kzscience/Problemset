//  FILE:    vigenere.ixx
//  AUTHOR:  QypshaQ

export module QypshaQ_cipher.vigenere;
import <string>;
namespace qypshaq {


    //  ###########
    //  #   INTERFACE   #
    //  ###########


     // Public
    export  std::string encrypt(std::string text, std::string key);
    export  std::string decrypt(std::string str, std::string key);
    export std::string delete_symbol(std::string text, char symbol);

    //   ################
    //  #   IMPLEMENTATION     #
    //  ################


    std::string encrypt(std::string text, std::string key)
    {
        std::string result = text;
        int i = 0;

        for (auto& c : result)
        {
            if (islower(c))
            {
                c = (((tolower(c) - 'a') + (tolower(key[i++ % key.size()]) - 'a')) % 26) + 'a';
            }
            else if (isupper(c))
            {
                c = (((tolower(c) - 'a') + (tolower(key[i++ % key.size()]) - 'a')) % 26) + 'a';
            }
        }
        return result;
    }

    std::string decrypt(std::string str, std::string key)
    {
        std::string k = key;
        for (auto& c : k)
        {
            c = std::tolower(c) - 'a' - 1;
            c = 'z' - c;
        }
        return encrypt(str, k);
    }


    std::string delete_symbol(std::string text, char symbol) {
        std::string tmp = "";
        for (auto& i : text) {
            if (i != symbol) {
                tmp += i;
            }
        }
        return tmp;
    }
}
