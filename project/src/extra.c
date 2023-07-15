#include "extra.h"

u16 rollDice(u16 diceQuantity, u16 faceQuantity) {
	u16 total = 0;
	for (u16 i = diceQuantity; i; i--) {
		total += random() % faceQuantity + 1;
	}
	return total;
}
