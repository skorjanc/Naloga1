
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
int main()
{
	int ura, min;
    cout << "Vnesi cas: Ure: "; 
	cin >> ura;
	cout << ", minute: ";
	cin >> min;

	double kotu, kotm, kot;
	
	kotm = min * 6;
	kotu = ura * 30;
	kot = fabs(kotu - kotm);
	if (kot > 180) {
		kot = fabs(360 - kot);
	}

	cout << "Urni in minutni kazalec ob " << ura << ":" << min << " oklepata kot " << kot << "°." << endl;
	return 0;
}
