#pragma once

#ifndef SAVE_GAME
const uint8_t PROGMEM inv_background[] = {
0x3c, 0x37, 0x6a, 0x9b, 0xdc, 0xc6, 0x2c, 0x55, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0xa7, 0xd3, 0x92, 0x4a, 0xaa, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0xa7, 0x25, 0x95, 0x54, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0x4b, 0xbc, 0x7a, 0xfe, 0x5c, 0xaa, 0x93, 0xdb, 0x65, 0xa7, 0x72, 0x61, 0xc8, 0x7b, 
0xcf, 0x9f, 0x4b, 0x75, 0x72, 0xbb, 0xec, 0x54, 0x2e, 0x0c, 0x79, 0xef, 0xf9, 0x73, 0xa9, 0x4e, 
0x6e, 0x97, 0x9d, 0xca, 0x85, 0x21, 0x8f, 0x57, 0xa5, 0xd3, 0xe9, 0x74, 0xba, 0xdc, 0x95, 0xac, 
0x64, 0xba, 0xdc, 0x95, 0x2c, 0x77, 0xba, 0xdc, 0x95, 0x52, 0x39, 0xaf, 0x52, 0xaa, 0x2a, 0x55, 
0xf5, 0xe9, 0x72, 0xa7, 0xcb, 0x9d, 0x2e, 0x77, 0x25, 0xcb, 0x5d, 0xc9, 0x72, 0xa7, 0x4b, 0x57, 
0x49, 0xad, 0xcb, 0x5d, 0x95, 0xaa, 0xeb, 0x74, 0xb9, 0xd3, 0xe9, 0x74, 0xb9, 0xab, 0x52, 0x95, 
0x4c, 0x97, 0x52, 0x55, 0xa5, 0xaa, 0xd1, 0x9c, 0xcd, 0x56, 0xf2, 0xd2, 0xe9, 0xe8, 0xd2, 0xe9, 
0xe8, 0xa2, 0x8b, 0x2e, 0xa9, 0x64, 0x25, 0xd3, 0x95, 0xac, 0x64, 0x25, 0xd3, 0x95, 0x4c, 0x57, 
0x32, 0x5d, 0xc9, 0x74, 0x25, 0xd3, 0x8a, 0x4c, 0xc9, 0x4a, 0x56, 0x32, 0x5d, 0xc9, 0x4a, 0x56, 
0x32, 0x5d, 0xc9, 0x4a, 0x56, 0x32, 0x5d, 0xc9, 0x4a, 0x56, 0x72, 0xdc, 0xad, 0x4a, 0x2d, 0x9d, 
0x72, 0xa5, 0x5c, 0xe5, 0x22, 0xce, 0x2a, 0x1b, 0x32, 0x3d, 0x8a, 0xf2, 0x9d, 0xdc, 0x2e, 0x3b, 
0x15, 0x8e, 0xbc, 0xf7, 0x28, 0xca, 0x77, 0x72, 0xbb, 0xec, 0x54, 0x38, 0xf2, 0x88, 0x93, 0x2a, 
0xf7, 0xb5, 0x2b, 0xa5, 0x6a, 0x95, 0x3b, 0xc9, 0x9a, 0x55, 0x36, 0x54, 0x5a, 0x9d, 0x4e, 0xa7, 
0x6b, 0x97, 0xae, 0x64, 0xba, 0x92, 0x9d, 0xab, 0x64, 0x25, 0x2b, 0x99, 0x2e, 0x5d, 0x5a, 0xeb, 
0x4a, 0x56, 0xb2, 0x92, 0x9d, 0xab, 0x64, 0x25, 0x2b, 0x99, 0xae, 0x5d, 0x25, 0x2b, 0x99, 0xae, 
0x64, 0xe9, 0xc2, 0xd5, 0x25, 0xf3, 0xeb, 0x7d, 0x36, 0x68, 0xca, 0xe9, 0x9c, 0xd3, 0x39, 0xc7, 
0xe5, 0x64, 0xa5, 0xe3, 0x72, 0x32, 0xeb, 0xb8, 0x9c, 0xcc, 0xce, 0xe6, 0x74, 0xce, 0x71, 0x39, 
0x2e, 0xc7, 0x75, 0xc9, 0x4a, 0x2a, 0x5c, 0x01
};
#endif

#ifdef SAVE_GAME
const uint8_t PROGMEM inv_background[] = {
0x3c, 0x37, 0x6a, 0x9b, 0xdc, 0xc6, 0x2c, 0x55, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0xa7, 0xd3, 0x92, 0x4a, 0xaa, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0xa7, 0x25, 0x95, 0x54, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x4e, 0x4b, 0xbc, 0x7a, 0xfe, 0x5c, 0xaa, 0x93, 0xdb, 0x65, 0xa7, 0x72, 0x61, 0xc8, 0x7b, 
0xcf, 0x9f, 0x4b, 0x75, 0x72, 0xbb, 0xec, 0x54, 0x2e, 0x0c, 0x79, 0xef, 0xf9, 0x73, 0xa9, 0x4e, 
0x6e, 0x97, 0x9d, 0xca, 0x85, 0x21, 0x8f, 0x57, 0xa5, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 
0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x54, 0x64, 0x2a, 0x77, 0xba, 0xdc, 0x95, 0x2c, 0x77, 0xba, 0xdc, 
0xe9, 0x72, 0xa7, 0xcb, 0x5d, 0x95, 0xaa, 0x64, 0xba, 0x74, 0x69, 0xad, 0x2b, 0x59, 0xee, 0x4a, 
0xa6, 0xcb, 0x5d, 0xc9, 0x72, 0xa7, 0xcb, 0x5d, 0x95, 0xaa, 0xeb, 0x74, 0x29, 0x95, 0x92, 0x29, 
0x3c, 0x67, 0xb3, 0x95, 0x1c, 0xc1, 0xc9, 0x6d, 0x25, 0xd3, 0x95, 0x4c, 0xa7, 0x2b, 0x99, 0x4e, 
0x57, 0xb2, 0x92, 0x95, 0x4c, 0x57, 0x32, 0xad, 0xc8, 0xb6, 0x95, 0x4c, 0xa7, 0x2b, 0x59, 0xc9, 
0x4a, 0xa6, 0x2b, 0x99, 0xae, 0x64, 0x3a, 0x5d, 0xc9, 0xf4, 0xb8, 0x5b, 0x95, 0x5a, 0x3a, 0xe5, 
0x4a, 0xb9, 0xca, 0x45, 0x9c, 0x55, 0x36, 0x64, 0x7a, 0x22, 0xaf, 0xa5, 0x4a, 0xa5, 0xa4, 0x92, 
0x4a, 0x2a, 0xf9, 0xb6, 0x64, 0xe9, 0xf8, 0xbc, 0xf7, 0x44, 0x5e, 0x4b, 0x95, 0x4a, 0x49, 0x25, 
0x95, 0x54, 0x52, 0x65, 0x4b, 0x32, 0x7b, 0xc4, 0x49, 0x95, 0xfb, 0xda, 0x95, 0x52, 0xb5, 0xca, 
0x9d, 0x64, 0xcd, 0x2a, 0x1b, 0x2a, 0x6d, 0xc9, 0xda, 0x55, 0xa5, 0x52, 0xa9, 0xaa, 0x54, 0x55, 
0xaa, 0x2a, 0x95, 0x2e, 0x77, 0xaf, 0xca, 0x9d, 0x52, 0x55, 0x77, 0x25, 0x4b, 0x33, 0x59, 0x5d, 
0xbb, 0x54, 0x2a, 0x95, 0x4a, 0xa5, 0xaa, 0x52, 0x55, 0xa9, 0x4a, 0x76, 0xae, 0x54, 0x55, 0xb2, 
0x2a, 0x55, 0xbb, 0x2a, 0x59, 0x1a, 0x5b, 0x97, 0xcc, 0xaf, 0xf7, 0xd9, 0xa0, 0xa1, 0x4b, 0x56, 
0x52, 0x71, 0x39, 0x99, 0x75, 0x5c, 0xca, 0xe7, 0x14, 0x99, 0x93, 0x95, 0x8e, 0xdb, 0xe9, 0x74, 
0x5c, 0x4e, 0xe7, 0x1c, 0x97, 0x93, 0x59, 0xc7, 0xe5, 0x74, 0x4e, 0x21, 0x0b
};
#endif

const uint8_t PROGMEM inv_key[] = {
0x0d, 0x0f, 0xc9, 0x96, 0x4e, 0x7d, 0xea, 0x73, 0xce, 0x29, 0xb9, 0xdd, 0x3a, 0xa7, 0xa4, 0x73, 
0xf3, 0xa5, 0xd3, 0x95, 0xac, 0x64, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0xba, 0x00
};

const uint8_t PROGMEM inv_potion[] = {
0x0d, 0x0f, 0x49, 0x95, 0xcb, 0x55, 0xa9, 0x5e, 0xc9, 0xaa, 0x57, 0x55, 0x29, 0x97, 0x57, 0xec, 
0xe9, 0x74, 0x25, 0x3b, 0xd7, 0xb9, 0xce, 0x75, 0xae, 0x73, 0x95, 0x4c, 0xa7, 0xd3, 0xe9, 0x02
};

const uint8_t PROGMEM inv_scroll[] = {
0x0d, 0x0f, 0x99, 0x96, 0x9d, 0xab, 0x52, 0x55, 0x32, 0x55, 0x55, 0x55, 0x95, 0xeb, 0x2a, 0x75, 
0xde, 0xf9, 0x58, 0xd3, 0xe9, 0x74, 0x25, 0x3b, 0xd7, 0xb9, 0xce, 0x75, 0xae, 0x73, 0x9d, 0xeb, 
0x5c, 0xed, 0xd2, 0x05
};
    
const uint8_t PROGMEM inv_shield[] = {
0x0d, 0x0f, 0x49, 0x95, 0xcb, 0x96, 0x52, 0x95, 0xab, 0xfa, 0xca, 0x56, 0xb2, 0x94, 0xcb, 0x2b, 
0xd6, 0x74, 0x25, 0x3b, 0x57, 0x95, 0xaa, 0x4a, 0x75, 0x75, 0x57, 0x57, 0xa5, 0xaa, 0x52, 0x9d, 
0xab, 0x64, 0x3a, 0x5d
};

const uint8_t PROGMEM inv_sword[] = {
0x0d, 0x0f, 0xe9, 0xb3, 0xeb, 0x6c, 0xb6, 0x72, 0x95, 0xab, 0x5c, 0x25, 0x67, 0x4e, 0xa7, 0xbe, 
0xd5, 0xa5, 0x54, 0xed, 0x4a, 0xa9, 0xce, 0xa5, 0xd3, 0xe9, 0x74, 0x3a, 0x5d
};

const uint8_t PROGMEM inv_select[] = {
0x06, 0x07, 0x54, 0x76, 0xa9, 0x9c, 0x93, 0xca, 0xae, 0x73
};

const uint8_t PROGMEM inv_hand[] = {
8, 8,
0x78, 0x78, 0x78, 0xfc, 0xfe, 0xfb, 0xa8, 0x28, 
};

const uint8_t PROGMEM inv_trash[] = {
8, 8,
0x1e, 0x1e, 0x1e, 0x3f, 0x7f, 0xdf, 0x15, 0x14, 
};
