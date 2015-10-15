static const struct {
    int width;
    int height;
    uint8_t pixmap[4096];
    uint8_t mask[128];
} _red_icon = { 32, 32, {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xd3,0xd3,0xd3,0x00,0x1a,0x1a,0x1a,0x07,0x1a,0x1a,0x1a,0x49,
    0x1a,0x1a,0x1a,0x98,0x1f,0x1f,0x1f,0xc2,0x2d,0x2d,0x2d,0xdd,0x34,0x34,0x34,0xf4,
    0x3c,0x3c,0x3c,0xf5,0x45,0x45,0x45,0xe0,0x4f,0x4f,0x4f,0xcc,0x5b,0x5b,0x5b,0xac,
    0x83,0x83,0x83,0x6d,0xe7,0xe7,0xe7,0x36,0xff,0xff,0xff,0x2c,0xff,0xff,0xff,0x27,
    0xff,0xff,0xff,0x1f,0xff,0xff,0xff,0x16,0xff,0xff,0xff,0x0a,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd3,0xd3,0xd3,0x00,
    0x1a,0x1a,0x1a,0x19,0x1a,0x1a,0x1a,0x97,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0xff,
    0x26,0x26,0x26,0xff,0x32,0x32,0x32,0xff,0x3d,0x3d,0x3d,0xff,0x47,0x47,0x47,0xff,
    0x4f,0x4f,0x4f,0xff,0x55,0x55,0x55,0xff,0x5a,0x5a,0x5a,0xff,0x5c,0x5c,0x5c,0xff,
    0x5c,0x5c,0x5c,0xff,0x5d,0x5d,0x5d,0xf6,0x71,0x71,0x71,0xb3,0xc9,0xc9,0xc9,0x51,
    0xff,0xff,0xff,0x35,0xff,0xff,0xff,0x2b,0xff,0xff,0xff,0x20,0xff,0xff,0xff,0x13,
    0xff,0xff,0xff,0x03,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x08,0x1a,0x1a,0x1a,0x84,
    0x1a,0x1a,0x1a,0xf5,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x28,0x28,0x28,0xff,
    0x37,0x37,0x37,0xff,0x43,0x43,0x43,0xff,0x4f,0x4f,0x4f,0xff,0x5a,0x5a,0x5a,0xff,
    0x63,0x63,0x63,0xff,0x6a,0x6a,0x6a,0xff,0x6f,0x6f,0x6f,0xff,0x72,0x72,0x72,0xff,
    0x72,0x72,0x72,0xff,0x70,0x70,0x70,0xff,0x6c,0x6c,0x6c,0xff,0x67,0x67,0x67,0xf8,
    0x80,0x80,0x80,0xa8,0xeb,0xeb,0xeb,0x46,0xff,0xff,0xff,0x33,0xff,0xff,0xff,0x25,
    0xff,0xff,0xff,0x16,0xff,0xff,0xff,0x04,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x18,0x1a,0x1a,0x1a,0xc8,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x27,0x27,0x27,0xff,0x37,0x37,0x37,0xff,
    0x45,0x45,0x45,0xff,0x53,0x53,0x53,0xff,0x60,0x60,0x60,0xff,0x6c,0x6c,0x6c,0xff,
    0x76,0x76,0x76,0xff,0x7f,0x7f,0x7f,0xff,0x84,0x84,0x84,0xff,0x88,0x88,0x88,0xff,
    0x88,0x88,0x88,0xff,0x86,0x86,0x86,0xff,0x80,0x80,0x80,0xff,0x79,0x79,0x79,0xff,
    0x6f,0x6f,0x6f,0xff,0x71,0x71,0x71,0xda,0xd1,0xd1,0xd1,0x57,0xff,0xff,0xff,0x36,
    0xff,0xff,0xff,0x26,0xff,0xff,0xff,0x15,0xff,0xff,0xff,0x02,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x1a,0x1a,0x1a,0x2d,0x1a,0x1a,0x1a,0xe3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x21,0x21,0x21,0xff,0x32,0x32,0x32,0xff,0x42,0x42,0x42,0xff,
    0x53,0x53,0x53,0xff,0x62,0x62,0x62,0xff,0x6f,0x6f,0x6f,0xff,0x7d,0x7d,0x7d,0xff,
    0x88,0x88,0x88,0xff,0x92,0x92,0x92,0xff,0x9a,0x9a,0x9a,0xff,0x9d,0x9d,0x9d,0xff,
    0x9e,0x9e,0x9e,0xff,0x9b,0x9b,0x9b,0xff,0x95,0x95,0x95,0xff,0x8c,0x8c,0x8c,0xff,
    0x81,0x81,0x81,0xff,0x75,0x75,0x75,0xff,0x6c,0x6c,0x6c,0xec,0xb5,0xb5,0xb5,0x66,
    0xff,0xff,0xff,0x34,0xff,0xff,0xff,0x22,0xff,0xff,0xff,0x10,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x18,
    0x1a,0x1a,0x1a,0xe3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x2a,0x2a,0x2a,0xff,0x3c,0x3c,0x3c,0xff,0x4d,0x4d,0x4d,0xff,
    0x5d,0x5d,0x5d,0xff,0x6e,0x6e,0x6e,0xff,0x7e,0x7e,0x7e,0xff,0x8c,0x8c,0x8c,0xff,
    0x9a,0x9a,0x9a,0xff,0xa5,0xa5,0xa5,0xff,0xae,0xae,0xae,0xff,0xb3,0xb3,0xb3,0xff,
    0xb4,0xb4,0xb4,0xff,0xb0,0xb0,0xb0,0xff,0xa9,0xa9,0xa9,0xff,0x9e,0x9e,0x9e,0xff,
    0x91,0x91,0x91,0xff,0x83,0x83,0x83,0xff,0x74,0x74,0x74,0xff,0x6a,0x6a,0x6a,0xec,
    0xcd,0xcd,0xcd,0x52,0xff,0xff,0xff,0x2d,0xff,0xff,0xff,0x1a,0xff,0xff,0xff,0x05,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x08,0x1a,0x1a,0x1a,0xc8,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1e,0x1e,0x1e,0xff,0x31,0x31,0x31,0xff,0x43,0x43,0x43,0xff,0x55,0x55,0x55,0xff,
    0x66,0x66,0x66,0xff,0x77,0x77,0x77,0xff,0x88,0x88,0x88,0xff,0x99,0x99,0x99,0xff,
    0xa9,0xa9,0xa9,0xff,0xb6,0xb6,0xb6,0xff,0xc1,0xc1,0xc1,0xff,0xc8,0xc8,0xc8,0xff,
    0xca,0xca,0xca,0xff,0xc5,0xc5,0xc5,0xff,0xbb,0xbb,0xbb,0xff,0xae,0xae,0xae,0xff,
    0x9f,0x9f,0x9f,0xff,0x8f,0x8f,0x8f,0xff,0x7e,0x7e,0x7e,0xff,0x6d,0x6d,0x6d,0xff,
    0x67,0x67,0x67,0xd8,0xe7,0xe7,0xe7,0x3b,0xff,0xff,0xff,0x21,0xff,0xff,0xff,0x0d,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x84,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x23,0x23,0x23,0xff,0x36,0x36,0x36,0xff,0x48,0x48,0x48,0xff,0x5b,0x5b,0x5b,0xff,
    0x6d,0x6d,0x6d,0xff,0x7f,0x7f,0x7f,0xff,0x91,0x91,0x91,0xff,0xa3,0xa3,0xa3,0xff,
    0xb4,0xb4,0xb4,0xff,0xc4,0xc4,0xc4,0xff,0xd3,0xd3,0xd3,0xff,0xde,0xde,0xde,0xff,
    0xe0,0xe0,0xe0,0xff,0xd7,0xd7,0xd7,0xff,0xca,0xca,0xca,0xff,0xba,0xba,0xba,0xff,
    0xa9,0xa9,0xa9,0xff,0x98,0x98,0x98,0xff,0x86,0x86,0x86,0xff,0x73,0x73,0x73,0xff,
    0x61,0x61,0x61,0xff,0x6e,0x6e,0x6e,0xa0,0xff,0xff,0xff,0x27,0xff,0xff,0xff,0x12,
    0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x19,0x1a,0x1a,0x1a,0xf5,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x26,0x26,0x26,0xff,0x3e,0x3e,0x41,0xff,0x5f,0x5f,0x65,0xff,0x5d,0x5d,0x5d,0xff,
    0x6f,0x6f,0x6f,0xff,0x82,0x82,0x82,0xff,0x9b,0x9f,0x9b,0xff,0xad,0xae,0xad,0xff,
    0xba,0xba,0xba,0xff,0xcc,0xcc,0xcc,0xff,0xdf,0xdf,0xdf,0xff,0xf0,0xf0,0xf0,0xff,
    0xf6,0xf6,0xf6,0xff,0xe5,0xe5,0xe5,0xff,0xd3,0xd3,0xd3,0xff,0xc1,0xc1,0xc1,0xff,
    0xae,0xae,0xae,0xff,0x9b,0x9b,0x9b,0xff,0x89,0x89,0x89,0xff,0x76,0x76,0x76,0xff,
    0x65,0x65,0x65,0xff,0x53,0x53,0x53,0xf7,0xb1,0xb1,0xb1,0x3e,0xff,0xff,0xff,0x14,
    0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x97,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x25,0x25,0x25,0xff,0x6a,0x6a,0x86,0xff,0xa7,0xa7,0xc0,0xff,0x5e,0x5e,0x5f,0xff,
    0x6f,0x6f,0x6f,0xff,0x82,0x82,0x82,0xff,0xb0,0xc4,0xb0,0xff,0xcc,0xd5,0xcc,0xff,
    0xb9,0xb9,0xb9,0xff,0xcc,0xcc,0xcc,0xff,0xdd,0xdd,0xdd,0xff,0xf1,0xf0,0xf0,0xff,
    0xfe,0xfb,0xfb,0xff,0xe6,0xe5,0xe5,0xff,0xd2,0xd2,0xd2,0xff,0xc0,0xc0,0xc0,0xff,
    0xae,0xae,0xae,0xff,0x9b,0x9b,0x9b,0xff,0x88,0x88,0x88,0xff,0x76,0x76,0x76,0xff,
    0x64,0x64,0x64,0xff,0x52,0x52,0x52,0xff,0x52,0x52,0x52,0xa8,0xff,0xff,0xff,0x14,
    0x1a,0x1a,0x1a,0x07,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x27,0x27,0x2f,0xff,0x9a,0x9a,0xe3,0xff,0xca,0xca,0xff,0xff,0x84,0x84,0x8f,0xff,
    0x6c,0x6c,0x6c,0xff,0x7f,0x8a,0x7f,0xff,0xc1,0xf6,0xc1,0xff,0xe2,0xfe,0xe2,0xff,
    0xc0,0xc3,0xc0,0xff,0xc2,0xc2,0xc2,0xff,0xd0,0xd0,0xd0,0xff,0xf2,0xe8,0xe8,0xff,
    0xff,0xf4,0xf4,0xff,0xee,0xe8,0xe8,0xff,0xc8,0xc8,0xc8,0xff,0xb8,0xb8,0xb8,0xff,
    0xa8,0xa8,0xa8,0xff,0x96,0x96,0x96,0xff,0x85,0x85,0x85,0xff,0x73,0x73,0x73,0xff,
    0x61,0x61,0x61,0xff,0x4e,0x4e,0x4e,0xff,0x3e,0x3e,0x3e,0xf4,0xbf,0xbf,0xbf,0x18,
    0x1a,0x1a,0x1a,0x49,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x3e,0x3e,0x7a,0xff,0x9b,0x9b,0xff,0xff,0xbb,0xbb,0xff,0xff,0xc2,0xc2,0xe5,0xff,
    0x6f,0x6f,0x72,0xff,0x7e,0xb6,0x7e,0xff,0xb4,0xff,0xb4,0xff,0xd3,0xff,0xd3,0xff,
    0xda,0xe8,0xda,0xff,0xb5,0xb5,0xb5,0xff,0xce,0xc4,0xc4,0xff,0xff,0xe3,0xe3,0xff,
    0xff,0xe9,0xe9,0xff,0xff,0xed,0xed,0xff,0xcb,0xc6,0xc6,0xff,0xab,0xab,0xab,0xff,
    0x9d,0x9d,0x9d,0xff,0x8d,0x8d,0x8d,0xff,0x7d,0x7d,0x7d,0xff,0x6c,0x6c,0x6c,0xff,
    0x5b,0x5b,0x5b,0xff,0x49,0x49,0x49,0xff,0x37,0x37,0x37,0xff,0x3b,0x3b,0x3b,0x51,
    0x1a,0x1a,0x1a,0x98,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x2a,0xff,
    0x5a,0x5a,0xe5,0xff,0x88,0x88,0xff,0xff,0xaa,0xaa,0xff,0xff,0xc7,0xc7,0xff,0xff,
    0x9b,0xa1,0xac,0xff,0x73,0xf5,0x73,0xff,0x9e,0xff,0x9e,0xff,0xc0,0xff,0xc0,0xff,
    0xdd,0xff,0xdd,0xff,0xc0,0xc6,0xc0,0xff,0xe4,0xbc,0xbc,0xff,0xff,0xd2,0xd2,0xff,
    0xff,0xda,0xda,0xff,0xff,0xe1,0xe1,0xff,0xee,0xdb,0xdb,0xff,0xa0,0x9e,0x9e,0xff,
    0x8f,0x8f,0x8f,0xff,0x81,0x81,0x81,0xff,0x72,0x72,0x72,0xff,0x62,0x62,0x62,0xff,
    0x52,0x52,0x52,0xff,0x41,0x41,0x41,0xff,0x30,0x30,0x30,0xff,0x1f,0x1f,0x1f,0x99,
    0x1a,0x1a,0x1a,0xc1,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x22,0x22,0x7d,0xff,
    0x53,0x53,0xff,0xff,0x72,0x72,0xff,0xff,0x96,0x96,0xff,0xff,0xb7,0xb7,0xff,0xff,
    0xd0,0xd0,0xfc,0xff,0x74,0xd2,0x7c,0xff,0x84,0xff,0x84,0xff,0xaa,0xff,0xaa,0xff,
    0xca,0xff,0xca,0xff,0xde,0xf5,0xdd,0xff,0xec,0xb4,0xb2,0xff,0xff,0xbe,0xbe,0xff,
    0xff,0xc8,0xc8,0xff,0xff,0xd1,0xd1,0xff,0xff,0xda,0xda,0xff,0xbe,0xb1,0xb1,0xff,
    0x7f,0x7f,0x7f,0xff,0x72,0x72,0x72,0xff,0x65,0x65,0x65,0xff,0x56,0x56,0x56,0xff,
    0x47,0x47,0x47,0xff,0x37,0x37,0x37,0xff,0x26,0x26,0x26,0xff,0x1a,0x1a,0x1a,0xc1,
    0x1a,0x1a,0x1a,0xda,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x15,0x15,0x2c,0xff,0x24,0x24,0xe9,0xff,
    0x42,0x42,0xff,0xff,0x5f,0x5f,0xff,0xff,0x81,0x81,0xff,0xff,0xa3,0xa3,0xff,0xff,
    0xc1,0xc1,0xff,0xff,0xb1,0xc6,0xcb,0xff,0x67,0xf1,0x68,0xff,0x8e,0xff,0x8e,0xff,
    0xb2,0xff,0xb2,0xff,0xd1,0xff,0xd1,0xff,0xda,0xd0,0xc3,0xff,0xfc,0xa4,0xa4,0xff,
    0xff,0xb3,0xb3,0xff,0xff,0xbe,0xbe,0xff,0xff,0xc9,0xc9,0xff,0xfa,0xd2,0xd2,0xff,
    0x82,0x7d,0x7d,0xff,0x62,0x62,0x62,0xff,0x55,0x55,0x55,0xff,0x48,0x48,0x48,0xff,
    0x3a,0x3a,0x3a,0xff,0x2b,0x2b,0x2b,0xff,0x1b,0x1b,0x1b,0xff,0x1a,0x1a,0x1a,0xda,
    0x1a,0x1a,0x1a,0xf3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x08,0x08,0x82,0xff,0x16,0x16,0xff,0xff,
    0x32,0x32,0xff,0xff,0x4e,0x4e,0xff,0xff,0x6a,0x6a,0xff,0xff,0x8c,0x8c,0xff,0xff,
    0xad,0xad,0xff,0xff,0xc9,0xc9,0xff,0xff,0x7c,0xc3,0x8a,0xff,0x6e,0xff,0x6e,0xff,
    0x96,0xff,0x96,0xff,0xba,0xff,0xba,0xff,0xda,0xff,0xda,0xff,0xd8,0xa2,0x9b,0xff,
    0xff,0x99,0x99,0xff,0xff,0xa7,0xa7,0xff,0xff,0xb5,0xb5,0xff,0xff,0xc2,0xc2,0xff,
    0xc7,0xa7,0xa7,0xff,0x52,0x52,0x52,0xff,0x45,0x45,0x45,0xff,0x39,0x39,0x39,0xff,
    0x2c,0x2c,0x2c,0xff,0x1c,0x1c,0x1c,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf3,
    0x1a,0x1a,0x1a,0xf3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x13,0x13,0x2e,0xff,0x01,0x01,0xee,0xff,0x05,0x05,0xff,0xff,
    0x21,0x21,0xff,0xff,0x3d,0x3d,0xff,0xff,0x59,0x59,0xff,0xff,0x75,0x75,0xff,0xff,
    0x96,0x96,0xff,0xff,0xb6,0xb6,0xff,0xff,0xc1,0xc6,0xea,0xff,0x57,0xd9,0x5c,0xff,
    0x75,0xff,0x75,0xff,0x9d,0xff,0x9d,0xff,0xc2,0xff,0xc2,0xff,0xd5,0xde,0xc9,0xff,
    0xec,0x7f,0x7d,0xff,0xff,0x8d,0x8d,0xff,0xff,0x9d,0x9d,0xff,0xff,0xac,0xac,0xff,
    0xff,0xbc,0xbc,0xff,0x7b,0x6a,0x6a,0xff,0x34,0x34,0x34,0xff,0x28,0x28,0x28,0xff,
    0x1b,0x1b,0x1b,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf3,
    0x1a,0x1a,0x1a,0xda,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x08,0x08,0x87,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,
    0x10,0x10,0xff,0xff,0x2d,0x2d,0xff,0xff,0x49,0x49,0xff,0xff,0x65,0x65,0xff,0xff,
    0x81,0x81,0xff,0xff,0x9e,0x9e,0xff,0xff,0xbd,0xbd,0xff,0xff,0x88,0xb6,0xa1,0xff,
    0x4d,0xfc,0x4d,0xff,0x7c,0xff,0x7c,0xff,0xa5,0xff,0xa5,0xff,0xcc,0xff,0xcc,0xff,
    0xc6,0x9d,0x90,0xff,0xff,0x70,0x70,0xff,0xff,0x82,0x82,0xff,0xff,0x93,0x93,0xff,
    0xff,0xa5,0xa5,0xff,0xe0,0xa3,0xa3,0xff,0x2e,0x2a,0x2a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xda,
    0x1a,0x1a,0x1a,0xc1,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x13,0x13,0x32,0xff,0x00,0x00,0xf0,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x1c,0x1c,0xff,0xff,0x38,0x38,0xff,0xff,0x54,0x54,0xff,0xff,
    0x70,0x70,0xff,0xff,0x8d,0x8d,0xff,0xff,0xa9,0xa9,0xff,0xff,0xc4,0xc4,0xfe,0xff,
    0x4c,0xbc,0x59,0xff,0x55,0xff,0x55,0xff,0x83,0xff,0x83,0xff,0xaf,0xff,0xaf,0xff,
    0xd2,0xf5,0xd1,0xff,0xd1,0x61,0x5d,0xff,0xff,0x63,0x63,0xff,0xff,0x75,0x75,0xff,
    0xff,0x8a,0x8a,0xff,0xff,0xa0,0xa0,0xff,0x8c,0x67,0x67,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xc1,
    0x1a,0x1a,0x1a,0x98,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x08,0x08,0x8c,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x0b,0x0b,0xff,0xff,0x27,0x27,0xff,0xff,0x44,0x44,0xff,0xff,
    0x60,0x60,0xff,0xff,0x7c,0x7c,0xff,0xff,0x98,0x98,0xff,0xff,0xb4,0xb4,0xff,0xff,
    0xa5,0xb8,0xc9,0xff,0x34,0xe3,0x37,0xff,0x60,0xff,0x60,0xff,0x8e,0xff,0x8e,0xff,
    0xbd,0xff,0xbd,0xff,0xbc,0xb0,0x98,0xff,0xf5,0x44,0x44,0xff,0xff,0x5e,0x5e,0xff,
    0xff,0x76,0x76,0xff,0xff,0x8e,0x8e,0xff,0xfd,0xa5,0xa5,0xff,0x46,0x38,0x38,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0x98,
    0x1a,0x1a,0x1a,0x49,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x12,0x12,0x34,0xff,
    0x00,0x00,0xdd,0xff,0x00,0x00,0xe9,0xff,0x00,0x00,0xe9,0xff,0x00,0x00,0xea,0xff,
    0x00,0x00,0xea,0xff,0x00,0x00,0xeb,0xff,0x15,0x15,0xeb,0xff,0x2f,0x2f,0xec,0xff,
    0x49,0x49,0xed,0xff,0x63,0x63,0xed,0xff,0x7e,0x7e,0xee,0xff,0x98,0x98,0xee,0xff,
    0xb4,0xb4,0xef,0xff,0x5f,0xa4,0x72,0xff,0x45,0xfd,0x45,0xff,0x75,0xfe,0x75,0xff,
    0xa3,0xfe,0xa3,0xff,0xd2,0xff,0xd2,0xff,0xa9,0x67,0x5b,0xff,0xd5,0x40,0x40,0xff,
    0xd5,0x54,0x54,0xff,0xd7,0x69,0x69,0xff,0xd9,0x7e,0x7e,0xff,0x9d,0x6c,0x6c,0xff,
    0x1d,0x1c,0x1c,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0x49,
    0x1a,0x1a,0x1a,0x07,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0xff,0x19,0x19,0x19,0xff,
    0x18,0x18,0x18,0xff,0x17,0x17,0x18,0xff,0x17,0x17,0x18,0xff,0x17,0x17,0x19,0xff,
    0x14,0x1a,0x16,0xff,0x12,0x1e,0x15,0xff,0x12,0x1f,0x15,0xff,0x13,0x1e,0x16,0xff,
    0x13,0x20,0x16,0xff,0x13,0x1f,0x15,0xff,0x14,0x21,0x16,0xff,0x14,0x22,0x16,0xff,
    0x14,0x22,0x16,0xff,0x14,0x22,0x15,0xff,0x16,0x24,0x16,0xff,0x1a,0x25,0x1a,0xff,
    0x1d,0x25,0x1d,0xff,0x20,0x25,0x20,0xff,0x1f,0x21,0x1f,0xff,0x19,0x19,0x19,0xff,
    0x19,0x19,0x19,0xff,0x19,0x19,0x19,0xff,0x18,0x18,0x18,0xff,0x18,0x18,0x18,0xff,
    0x19,0x19,0x19,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0x07,
    0x00,0x00,0x6e,0x00,0x1a,0x1a,0x1a,0x97,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0x97,0xd3,0xd3,0xd3,0x00,
    0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x19,0x1a,0x1a,0x1a,0xf5,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf5,0x1a,0x1a,0x1a,0x19,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x4c,0x00,0x1a,0x1a,0x1a,0x84,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0x84,0xd3,0xd3,0xd3,0x00,0x98,0x88,0x88,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x1a,0x1a,0x1a,0x08,0x1a,0x1a,0x1a,0xc8,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xc8,0x1a,0x1a,0x1a,0x08,0xa4,0x6d,0x6d,0x00,0x73,0x58,0x58,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x18,
    0x1a,0x1a,0x1a,0xe3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xe3,
    0x1a,0x1a,0x1a,0x18,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x1a,0x1a,0x1a,0x2d,0x1a,0x1a,0x1a,0xe3,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xe3,0x1a,0x1a,0x1a,0x2d,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x18,0x1a,0x1a,0x1a,0xc8,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xc8,0x1a,0x1a,0x1a,0x18,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x08,0x1a,0x1a,0x1a,0x84,
    0x1a,0x1a,0x1a,0xf5,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf5,
    0x1a,0x1a,0x1a,0x84,0x1a,0x1a,0x1a,0x08,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,
    0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x1a,0x1a,0x1a,0x19,0x1a,0x1a,0x1a,0x97,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xff,
    0x1a,0x1a,0x1a,0xff,0x1a,0x1a,0x1a,0xf2,0x1a,0x1a,0x1a,0x97,0x1a,0x1a,0x1a,0x19,
    0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1a,0x1a,0x1a,0x07,0x1a,0x1a,0x1a,0x49,
    0x1a,0x1a,0x1a,0x98,0x1a,0x1a,0x1a,0xc1,0x1a,0x1a,0x1a,0xda,0x1a,0x1a,0x1a,0xf3,
    0x1a,0x1a,0x1a,0xf3,0x1a,0x1a,0x1a,0xda,0x1a,0x1a,0x1a,0xc1,0x1a,0x1a,0x1a,0x98,
    0x1a,0x1a,0x1a,0x49,0x1a,0x1a,0x1a,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

        {0x00,0x0f,0xf0,0x00,0x00,0x7f,0xfe,0x00,0x01,0xff,0xff,0x80,
    0x03,0xff,0xff,0xc0,0x07,0xff,0xff,0xe0,0x0f,0xff,0xff,0xf0,
    0x1f,0xff,0xff,0xf8,0x3f,0xff,0xff,0xfc,0x3f,0xff,0xff,0xfc,
    0x7f,0xff,0xff,0xfe,0x7f,0xff,0xff,0xfe,0x7f,0xff,0xff,0xfe,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xfe,
    0x7f,0xff,0xff,0xfe,0x7f,0xff,0xff,0xfe,0x3f,0xff,0xff,0xfc,
    0x3f,0xff,0xff,0xfc,0x1f,0xff,0xff,0xf8,0x0f,0xff,0xff,0xf0,
    0x07,0xff,0xff,0xe0,0x03,0xff,0xff,0xc0,0x01,0xff,0xff,0x80,
    0x00,0x7f,0xfe,0x00,0x00,0x0f,0xf0,0x00}
};
