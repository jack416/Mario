#ifndef __MARIO_ITEM_H__
#define __MARIO_ITEM_H__

namespace mario {
enum RecordType {
    kZeroType = 0,
    kFullType = 1,
    kFirstType = 2,
    kMiddleType = 3,
    kLastType = 4,
    kEof = 5,
    kBadRecord = 6,
    kOldRecord = 7
};

// The block size that we read and write from write2file
static const size_t kBlockSize = 1048576;

// Header is Type(1 byte), length (2 bytes)
static const size_t kHeaderSize = 1 + 2;

// The size of memory when we use memory mode
static const uint64_t kPoolSize = 1024 * 1024 * 256;

// The size of write2file when we need to rotate
static const uint64_t kMmapSize = 1024 * 1;

}

#endif