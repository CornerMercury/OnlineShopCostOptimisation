#ifndef REDUCE_CART_H
#define REDUCE_CART_H

#include <stddef.h>
#include "card_option.h"

void remove_uncommon_sellers(CardOption **items, size_t item_count);

#endif