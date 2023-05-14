#ifndef TETRIT_BLOCKS_SQUARE_H
#define TETRIT_BLOCKS_SQUARE_H

#include "tetrit/blocks/block.hpp"

namespace tetrit {
namespace blocks {

class square_t : public block_t
{
public:
    square_t()
        : block_t{ points_t{ { -1, -1 },
                             { -1, 0 },
                             { -1, 1 },
                             { 0, -1 },
                             { 0, 0 },
                             { 0, 1 },
                             { 1, -1 },
                             { 1, 0 },
                             { 1, 1 } } }
    {}
};

} // namespace blocks
} // namespace tetrit

#endif // TETRIT_BLOCKS_SQUARE_H