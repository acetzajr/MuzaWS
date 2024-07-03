#pragma once

#include "Muza/Block.h"
#include "Muza/Constants.h"

struct BufferST;

typedef struct BufferST BufferZ;

struct BufferST {
  BlockZ blocksM[BLOCKS_COUNT];
};

extern BufferZ BufferG;
