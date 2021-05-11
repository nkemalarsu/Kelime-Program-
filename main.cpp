#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <string>
#include <ctime>
#include <clocale>
#include <limits>

using namespace std;
void büyütme() {
    setlocale(LC_ALL, "TURKISH");
    string giris = "";

    cout << "Karakter katarını giriniz: ";
    getline(cin >> ws, giris);

    for (auto& x : giris) {
        x = toupper(x);
        cout << x;
    }
}
void küçültme() {
    string giris = "";

    cout << "Karakter katarını giriniz: ";
    getline(cin >> ws, giris);

    for (auto& x : giris) {
        x = tolower(x);
        cout << x;
    }
}
void büyüksebüyük()
{

    string gir = "";
    cout << "Bir Kelime Giriniz: " << endl;
    getline(cin >> ws, gir);
    for (int i = 0; gir[i] != '\0'; i++)
    {
        if (gir[i] >= 65 && gir[i] <= 90)
            gir[i] = gir[i] + 32;
        else if (gir[i] >= 97 && gir[i] <= 122)
            gir[i] = gir[i] - 32;
    }
    cout << "\nKelimenin Değişmiş Hali: " << gir << endl;


}
void ilkharf(char kelime[100])
{

    kelime[0] = toupper(kelime[0]);



    int a = 80;
    for (int i = 0; i < a; i++)
    {
        if (kelime[i - 1] == ' ')
            kelime[i] = toupper(kelime[i]);
    }

    cout << kelime << endl;

}
void soru6() {
    int secim;
    do {
        cout << "\nDevam etmek istiyorsanız 1 değerini giriniz. İstemiyorsanız 0 giriniz." << endl;
        cout << "secim: ";
        while (!(cin >> secim)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\n1 VEYA 0 GİREBİLİRSİNİZ..." << endl;

        }
        if (secim == 1) {

            cout << "\n****************************************************************************" << endl;
            cout << "                    YAPICAĞINIZ İŞLEMİ SEÇİNİZ" << endl;
            cout << "****************************************************************************" << endl;
            cout << "1) Tamamen büyüt\n2) Tamamen küçült\n3) Büyükse küçük, küçükse büyük\n4) Kelimenin sadece ilk harfi büyük" << endl;

            int secenek;
            cout << "Yapmak istediginiz işlemi seçiniz..." << endl;
            while (!(cin >> secenek)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Lütfen belirtilen aralıklarda değer giriniz" << endl;
            }

            if(secenek<5||secenek>0){
            switch (secenek)
            {
            case 1:
                büyütme();

                break;

            case 2:
                küçültme();

                break;

            case 3:
                büyüksebüyük();
                break;

            case 4:
                string kelime1 = "";
                char kelime[100];
                cout << "kelime gir:" << endl;
                getline(cin >> ws, kelime1);
                strcpy(kelime, kelime1.c_str());
                ilkharf(kelime);
                break;

            }
                
        }
        else if (secim == 0) {
            cout << "Kapatılıyor..." << endl;
            continue;

        }

        else {

        }
        
        }
        
        else {
            cout << "lütfen belirtilen değer aralıklarından birini giriniz"<<endl;
        }
    } while (secim != 0); {

    }
    
}
int main()
{
    setlocale(LC_ALL, "TURKISH");
    soru6();
}

