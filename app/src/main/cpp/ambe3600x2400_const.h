/*
 * Copyright (C) 2010 mbelib Author
 * GPG Key ID: 0xEA5EFE2C (9E7A 5527 9CDC EBF7 BF1B  D772 4F98 E863 EA5E FE2C)
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _AMBE3600x2400_CONST_H
#define _AMBE3600x2400_CONST_H


const float AmbePlusLtable[126] = {
        9, 9, 9, 9, 9, 9,
        10, 10, 10, 10, 10, 10,
        11, 11, 11, 11, 11, 11,
        12, 12, 12, 12, 12, 13,
        13, 13, 13, 13, 14, 14,
        14, 14, 15, 15, 15, 15,
        16, 16, 16, 16, 17, 17,
        17, 17, 18, 18, 18, 18,
        19, 19, 19, 20, 20, 20,
        21, 21, 21, 22, 22, 22,
        23, 23, 23, 24, 24, 24,
        25, 25, 26, 26, 26, 27,
        27, 28, 28, 29, 29, 30,
        30, 30, 31, 31, 32, 32,
        33, 33, 34, 34, 35, 36,
        36, 37, 37, 38, 38, 39,
        40, 40, 41, 42, 42, 43,
        43, 44, 45, 46, 46, 47,
        48, 48, 49, 50, 51, 52,
        52, 53, 54, 55, 56, 56,
        56, 56, 56, 56, 56, 56 // last line is padded
};

/*
 * V/UV Quantization Vectors
 */
const int AmbePlusVuv[16][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 1},
        {0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 1, 1},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0},
        {1, 1, 0, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1}
};

/*
 * Log Magnitude Prediction Residual Block Lengths
 */
const int AmbePlusLmprbl[57][4] = {
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {0,  0,  0,  0,},
        {2,  2,  2,  3,},
        {2,  2,  3,  3,},
        {2,  3,  3,  3,},
        {2,  3,  3,  4,},
        {3,  3,  3,  4,},
        {3,  3,  4,  4,},
        {3,  3,  4,  5,},
        {3,  4,  4,  5,},
        {3,  4,  5,  5,},
        {4,  4,  5,  5,},
        {4,  4,  5,  6,},
        {4,  4,  6,  6,},
        {4,  5,  6,  6,},
        {4,  5,  6,  7,},
        {5,  5,  6,  7,},
        {5,  5,  7,  7,},
        {5,  6,  7,  7,},
        {5,  6,  7,  8,},
        {5,  6,  8,  8,},
        {6,  6,  8,  8,},
        {6,  6,  8,  9,},
        {6,  7,  8,  9,},
        {6,  7,  9,  9,},
        {6,  7,  9,  10,},
        {7,  7,  9,  10,},
        {7,  8,  9,  10,},
        {7,  8,  10, 10,},
        {7,  8,  10, 11,},
        {8,  8,  10, 11,},
        {8,  9,  10, 11,},
        {8,  9,  11, 11,},
        {8,  9,  11, 12,},
        {8,  9,  11, 13,},
        {8,  9,  12, 13,},
        {8,  10, 12, 13,},
        {9,  10, 12, 13,},
        {9,  10, 12, 14,},
        {9,  10, 13, 14,},
        {9,  11, 13, 14,},
        {10, 11, 13, 14,},
        {10, 11, 13, 15,},
        {10, 11, 14, 15,},
        {10, 12, 14, 15,},
        {10, 12, 14, 16,},
        {11, 12, 14, 16,},
        {11, 12, 15, 16,},
        {11, 12, 15, 17,},
        {11, 13, 15, 17}
};

/*
 * Gain Quantizer Levels
 */
const float AmbePlusDg[64] = {
        0.000000, 0.118200, 0.215088, 0.421167, 0.590088, 0.749075, 0.879395, 0.996388,
        1.092285, 1.171577, 1.236572, 1.313450, 1.376465, 1.453342, 1.516357, 1.600346,
        1.669189, 1.742847, 1.803223, 1.880234, 1.943359, 2.025067, 2.092041, 2.178042,
        2.248535, 2.331718, 2.399902, 2.492343, 2.568115, 2.658677, 2.732910, 2.816496,
        2.885010, 2.956386, 3.014893, 3.078890, 3.131348, 3.206615, 3.268311, 3.344785,
        3.407471, 3.484885, 3.548340, 3.623339, 3.684814, 3.764509, 3.829834, 3.915298,
        3.985352, 4.072560, 4.144043, 4.231251, 4.302734, 4.399066, 4.478027, 4.572883,
        4.650635, 4.760785, 4.851074, 4.972361, 5.071777, 5.226203, 5.352783, 5.352783};

/*
 * PRBA24 Vector Quantizer Levels
 */
const float AmbePlusPRBA24[512][3] = {
        {-1.250000, -0.312500, -0.625000},
        {-0.750000, -0.437500, -0.437500},
        {-0.437500, -0.375000, -0.312500},
        {-0.437500, -0.625000, -0.500000},
        {-1.000000, -0.187500, -0.187500},
        {-0.625000, -0.625000, -0.125000},
        {-0.500000, -0.187500, -0.187500},
        {-0.375000, -0.437500, -0.187500},
        {-1.062500, -0.750000, -0.125000},
        {-0.625000, -0.312500, -0.062500},
        {-0.500000, -1.000000, -0.062500},
        {-0.375000, -0.312500, -0.062500},
        {-0.687500, -0.250000, 0.187500},
        {-0.437500, -0.500000, 0.375000},
        {-0.375000, -0.375000, 0.062500},
        {-0.312500, -0.187500, 0.000000},
        {-0.625000, -0.187500, -0.187500},
        {-0.500000, -0.062500, -0.250000},
        {-0.500000, -0.125000, -0.437500},
        {-0.312500, -0.062500, -0.312500},
        {-0.562500, -0.187500, -0.062500},
        {-0.375000, -0.187500, -0.062500},
        {-0.375000, -0.125000, -0.187500},
        {-0.312500, -0.187500, -0.125000},
        {-0.562500, 0.000000,  0.125000},
        {-0.437500, 0.000000,  0.062500},
        {-0.312500, -0.125000, 0.125000},
        {-0.312500, -0.062500, 0.000000},
        {-0.937500, -0.062500, 0.125000},
        {-0.750000, -0.125000, 0.375000},
        {-0.437500, -0.062500, 0.250000},
        {-0.375000, -0.062500, 0.625000},
        {-0.875000, 0.062500,  -0.312500},
        {-0.500000, 0.125000,  -0.375000},
        {-0.312500, 0.062500,  -0.250000},
        {-0.312500, 0.000000,  -0.312500},
        {-0.687500, 0.125000,  -0.187500},
        {-0.437500, 0.062500,  -0.062500},
        {-0.375000, 0.125000,  -0.125000},
        {-0.312500, 0.062500,  -0.125000},
        {-0.687500, 0.062500,  -0.062500},
        {-0.437500, 0.187500,  0.062500},
        {-0.312500, 0.062500,  0.000000},
        {-0.250000, 0.000000,  0.125000},
        {-1.312500, 0.062500,  0.312500},
        {-0.562500, 0.125000,  0.250000},
        {-0.375000, 0.062500,  0.375000},
        {-0.312500, 0.125000,  0.125000},
        {-1.250000, 0.187500,  -0.250000},
        {-0.687500, 0.437500,  -0.375000},
        {-0.562500, 0.250000,  -0.250000},
        {-0.312500, 0.375000,  -0.562500},
        {-0.812500, 0.437500,  -0.062500},
        {-0.625000, 0.187500,  -0.062500},
        {-0.500000, 0.375000,  -0.062500},
        {-0.375000, 0.375000,  -0.250000},
        {-0.812500, 0.187500,  0.187500},
        {-0.562500, 0.625000,  0.062500},
        {-0.500000, 0.312500,  0.125000},
        {-0.312500, 0.312500,  0.062500},
        {-0.500000, 0.250000,  0.625000},
        {-0.375000, 0.250000,  0.312500},
        {-0.312500, 0.500000,  0.500000},
        {-0.312500, 0.500000,  0.250000},
        {-0.250000, -0.437500, -0.375000},
        {-0.250000, -0.250000, -0.312500},
        {-0.250000, -0.687500, -0.312500},
        {-0.125000, -0.500000, -0.250000},
        {-0.250000, -0.375000, -0.125000},
        {-0.125000, -0.312500, -0.187500},
        {-0.125000, -0.250000, -0.250000},
        {-0.062500, -0.187500, -0.125000},
        {-0.187500, -0.187500, -0.062500},
        {-0.187500, -0.500000, 0.000000},
        {-0.125000, -0.375000, -0.062500},
        {-0.062500, -0.250000, 0.000000},
        {-0.250000, -0.312500, 0.250000},
        {-0.187500, -0.250000, 0.125000},
        {-0.187500, -0.250000, 0.000000},
        {-0.125000, -0.625000, 0.187500},
        {-0.187500, -0.062500, -0.250000},
        {-0.125000, -0.062500, -0.187500},
        {-0.062500, 0.000000,  -0.312500},
        {-0.062500, 0.000000,  -0.812500},
        {-0.250000, -0.125000, -0.062500},
        {-0.250000, -0.062500, -0.125000},
        {-0.187500, 0.000000,  -0.062500},
        {-0.125000, -0.062500, -0.062500},
        {-0.187500, 0.000000,  0.125000},
        {-0.187500, -0.062500, 0.062500},
        {-0.125000, -0.125000, 0.125000},
        {-0.125000, -0.187500, 0.062500},
        {-0.187500, -0.062500, 0.437500},
        {-0.187500, -0.125000, 0.187500},
        {-0.125000, 0.000000,  0.187500},
        {-0.062500, 0.000000,  0.375000},
        {-0.187500, 0.000000,  -0.187500},
        {-0.187500, 0.125000,  -0.125000},
        {-0.187500, 0.125000,  -0.187500},
        {-0.125000, 0.125000,  -0.375000},
        {-0.250000, 0.187500,  0.000000},
        {-0.125000, 0.000000,  -0.125000},
        {-0.062500, 0.000000,  -0.062500},
        {-0.062500, 0.125000,  -0.062500},
        {-0.187500, 0.125000,  0.125000},
        {-0.187500, 0.062500,  0.000000},
        {-0.125000, 0.125000,  0.062500},
        {-0.062500, 0.000000,  0.000000},
        {-0.250000, 0.062500,  0.250000},
        {-0.125000, 0.125000,  0.312500},
        {-0.125000, 0.125000,  0.125000},
        {-0.062500, 0.000000,  0.125000},
        {-0.250000, 0.250000,  -0.187500},
        {-0.187500, 0.687500,  -0.187500},
        {-0.125000, 0.250000,  -0.125000},
        {-0.062500, 0.375000,  -0.312500},
        {-0.187500, 0.187500,  -0.062500},
        {-0.187500, 0.437500,  -0.062500},
        {-0.125000, 0.375000,  0.062500},
        {-0.062500, 0.500000,  0.000000},
        {-0.250000, 0.250000,  0.187500},
        {-0.125000, 0.562500,  0.250000},
        {-0.125000, 0.437500,  0.125000},
        {-0.062500, 0.312500,  0.125000},
        {-0.250000, 0.187500,  0.437500},
        {-0.187500, 0.250000,  0.312500},
        {-0.062500, 0.312500,  0.250000},
        {-0.062500, 0.437500,  0.562500},
        {-0.062500, -0.375000, -0.250000},
        {0.000000,  -0.250000, -0.375000},
        {0.062500,  -0.250000, -0.312500},
        {0.062500,  -0.375000, -0.312500},
        {0.000000,  -0.312500, -0.125000},
        {0.000000,  -0.250000, -0.062500},
        {0.062500,  -0.500000, -0.125000},
        {0.062500,  -0.250000, -0.187500},
        {0.000000,  -0.437500, 0.000000},
        {0.000000,  -0.250000, 0.000000},
        {0.000000,  -0.187500, 0.062500},
        {0.062500,  -0.375000, 0.000000},
        {-0.062500, -0.187500, 0.125000},
        {-0.062500, -0.375000, 0.062500},
        {0.000000,  -0.250000, 0.187500},
        {0.000000,  -0.312500, 0.125000},
        {-0.062500, -0.125000, -0.250000},
        {0.000000,  -0.125000, -0.500000},
        {0.000000,  -0.062500, -0.250000},
        {0.062500,  -0.187500, -0.187500},
        {-0.062500, -0.125000, -0.062500},
        {-0.062500, -0.187500, 0.000000},
        {0.000000,  -0.125000, -0.125000},
        {0.000000,  -0.187500, -0.125000},
        {-0.062500, -0.062500, 0.125000},
        {0.000000,  -0.125000, 0.000000},
        {0.062500,  -0.062500, 0.000000},
        {0.062500,  -0.125000, 0.000000},
        {-0.062500, -0.125000, 0.437500},
        {0.000000,  -0.062500, 0.250000},
        {0.000000,  -0.125000, 0.187500},
        {0.062500,  -0.187500, 0.312500},
        {-0.062500, 0.062500,  -0.187500},
        {-0.062500, 0.000000,  -0.125000},
        {0.062500,  0.062500,  -0.125000},
        {0.062500,  0.062500,  -0.312500},
        {0.000000,  0.062500,  -0.062500},
        {0.000000,  0.000000,  0.000000},
        {0.062500,  0.000000,  -0.125000},
        {0.062500,  0.125000,  -0.125000},
        {0.000000,  0.062500,  0.125000},
        {0.000000,  0.125000,  0.062500},
        {0.062500,  0.000000,  0.125000},
        {0.062500,  0.062500,  0.000000},
        {-0.062500, 0.062500,  0.187500},
        {-0.062500, 0.062500,  0.437500},
        {0.000000,  0.062500,  0.250000},
        {0.062500,  0.125000,  0.187500},
        {0.000000,  0.250000,  -0.250000},
        {0.000000,  0.375000,  -0.062500},
        {0.000000,  0.187500,  -0.125000},
        {0.062500,  0.500000,  -0.187500},
        {0.000000,  0.250000,  0.000000},
        {0.000000,  0.187500,  0.062500},
        {0.062500,  0.312500,  0.062500},
        {0.062500,  0.187500,  0.000000},
        {-0.062500, 0.187500,  0.187500},
        {0.000000,  0.250000,  0.125000},
        {0.062500,  0.375000,  0.187500},
        {0.062500,  0.250000,  0.250000},
        {-0.062500, 0.187500,  0.500000},
        {0.000000,  0.312500,  0.375000},
        {0.000000,  0.125000,  0.312500},
        {0.062500,  0.187500,  0.250000},
        {0.125000,  -0.125000, -0.312500},
        {0.125000,  -0.312500, -0.187500},
        {0.187500,  -0.375000, -0.250000},
        {0.187500,  -0.187500, -0.125000},
        {0.125000,  -0.187500, -0.062500},
        {0.125000,  -0.687500, -0.062500},
        {0.125000,  -0.187500, -0.062500},
        {0.187500,  -0.375000, -0.062500},
        {0.062500,  -0.250000, 0.062500},
        {0.125000,  -0.187500, 0.000000},
        {0.125000,  -0.187500, 0.125000},
        {0.187500,  -0.250000, 0.125000},
        {0.062500,  -0.187500, 0.187500},
        {0.125000,  -0.312500, 0.250000},
        {0.125000,  -0.375000, 0.125000},
        {0.187500,  -0.187500, 0.187500},
        {0.062500,  -0.125000, -0.125000},
        {0.062500,  0.000000,  -0.187500},
        {0.125000,  -0.062500, -0.187500},
        {0.125000,  -0.125000, -0.062500},
        {0.062500,  -0.062500, 0.062500},
        {0.125000,  -0.062500, 0.000000},
        {0.125000,  -0.125000, 0.000000},
        {0.187500,  -0.062500, 0.000000},
        {0.062500,  0.000000,  0.187500},
        {0.125000,  -0.125000, 0.125000},
        {0.125000,  -0.062500, 0.125000},
        {0.187500,  -0.125000, 0.125000},
        {0.062500,  -0.062500, 0.250000},
        {0.062500,  0.000000,  0.437500},
        {0.187500,  -0.125000, 0.375000},
        {0.187500,  -0.125000, 0.250000},
        {0.062500,  0.125000,  -0.500000},
        {0.125000,  0.125000,  -0.125000},
        {0.125000,  0.000000,  -0.125000},
        {0.187500,  0.000000,  -0.312500},
        {0.062500,  0.062500,  0.062500},
        {0.062500,  0.125000,  0.000000},
        {0.187500,  0.062500,  -0.062500},
        {0.187500,  0.125000,  0.062500},
        {0.125000,  0.125000,  0.125000},
        {0.125000,  0.000000,  0.125000},
        {0.187500,  0.000000,  0.062500},
        {0.187500,  0.125000,  0.125000},
        {0.062500,  0.125000,  0.375000},
        {0.125000,  0.062500,  0.687500},
        {0.125000,  0.062500,  0.187500},
        {0.125000,  0.000000,  0.250000},
        {0.062500,  0.187500,  -0.125000},
        {0.125000,  0.187500,  -0.250000},
        {0.187500,  0.312500,  -0.312500},
        {0.187500,  0.250000,  -0.125000},
        {0.062500,  0.437500,  0.000000},
        {0.125000,  0.250000,  0.000000},
        {0.187500,  0.187500,  0.062500},
        {0.187500,  0.187500,  -0.062500},
        {0.062500,  0.187500,  0.187500},
        {0.125000,  0.375000,  0.062500},
        {0.187500,  0.250000,  0.125000},
        {0.187500,  0.250000,  0.187500},
        {0.125000,  0.312500,  0.375000},
        {0.187500,  0.687500,  0.312500},
        {0.187500,  0.187500,  0.250000},
        {0.187500,  0.312500,  0.250000},
        {0.187500,  -0.562500, -0.250000},
        {0.187500,  -0.937500, -0.687500},
        {0.312500,  -0.312500, -0.375000},
        {0.312500,  -0.500000, -0.625000},
        {0.187500,  -0.312500, 0.000000},
        {0.187500,  -0.250000, -0.250000},
        {0.250000,  -0.312500, -0.125000},
        {0.312500,  -0.187500, 0.000000},
        {0.187500,  -0.437500, 0.062500},
        {0.250000,  -0.250000, 0.000000},
        {0.250000,  -0.312500, 0.125000},
        {0.250000,  -1.000000, 0.125000},
        {0.187500,  -0.312500, 0.437500},
        {0.187500,  -0.625000, 0.187500},
        {0.187500,  -0.250000, 0.187500},
        {0.312500,  -0.312500, 0.250000},
        {0.187500,  -0.062500, -0.187500},
        {0.187500,  -0.125000, -0.437500},
        {0.250000,  -0.187500, -0.125000},
        {0.250000,  -0.125000, -0.250000},
        {0.250000,  -0.187500, -0.062500},
        {0.250000,  -0.062500, -0.062500},
        {0.250000,  -0.062500, -0.125000},
        {0.312500,  -0.125000, -0.062500},
        {0.187500,  -0.187500, 0.062500},
        {0.250000,  -0.062500, 0.000000},
        {0.250000,  -0.125000, 0.000000},
        {0.250000,  -0.125000, 0.125000},
        {0.250000,  -0.062500, 0.312500},
        {0.250000,  -0.187500, 0.312500},
        {0.250000,  -0.062500, 0.250000},
        {0.312500,  -0.187500, 0.187500},
        {0.187500,  0.125000,  -0.187500},
        {0.187500,  0.062500,  -0.125000},
        {0.312500,  0.062500,  -0.312500},
        {0.312500,  0.062500,  -0.187500},
        {0.250000,  -0.062500, 0.062500},
        {0.250000,  0.000000,  -0.062500},
        {0.250000,  0.062500,  0.000000},
        {0.312500,  0.000000,  0.000000},
        {0.187500,  0.000000,  0.187500},
        {0.187500,  0.062500,  0.125000},
        {0.312500,  0.000000,  0.125000},
        {0.312500,  0.062500,  0.187500},
        {0.187500,  0.062500,  0.187500},
        {0.250000,  0.062500,  0.312500},
        {0.250000,  0.000000,  0.250000},
        {0.250000,  0.062500,  0.437500},
        {0.250000,  0.250000,  -0.187500},
        {0.250000,  0.250000,  -0.062500},
        {0.250000,  0.125000,  -0.062500},
        {0.312500,  0.625000,  -0.062500},
        {0.187500,  0.312500,  0.062500},
        {0.250000,  0.375000,  -0.062500},
        {0.250000,  0.125000,  0.062500},
        {0.312500,  0.187500,  -0.062500},
        {0.250000,  0.437500,  0.125000},
        {0.250000,  0.187500,  0.187500},
        {0.250000,  0.187500,  0.062500},
        {0.312500,  0.250000,  0.187500},
        {0.187500,  0.187500,  0.375000},
        {0.250000,  0.187500,  0.250000},
        {0.250000,  0.312500,  0.437500},
        {0.250000,  0.375000,  0.625000},
        {0.312500,  -0.250000, -0.125000},
        {0.312500,  -0.312500, -0.187500},
        {0.312500,  -0.187500, -0.062500},
        {0.437500,  -0.625000, -0.250000},
        {0.312500,  -0.312500, 0.062500},
        {0.312500,  -0.312500, 0.000000},
        {0.312500,  -0.375000, -0.062500},
        {0.375000,  -0.250000, 0.062500},
        {0.312500,  -0.437500, 0.187500},
        {0.312500,  -0.187500, 0.062500},
        {0.312500,  -0.312500, 0.125000},
        {0.375000,  -0.250000, 0.125000},
        {0.375000,  -0.375000, 0.375000},
        {0.375000,  -0.250000, 0.437500},
        {0.375000,  -0.250000, 0.250000},
        {0.375000,  -0.312500, 0.625000},
        {0.375000,  -0.125000, -0.062500},
        {0.375000,  -0.125000, -0.125000},
        {0.375000,  -0.062500, -0.125000},
        {0.437500,  0.000000,  -0.312500},
        {0.312500,  -0.125000, 0.062500},
        {0.312500,  0.000000,  0.000000},
        {0.375000,  -0.062500, 0.000000},
        {0.375000,  -0.187500, 0.000000},
        {0.312500,  -0.062500, 0.062500},
        {0.375000,  -0.062500, 0.187500},
        {0.375000,  -0.125000, 0.125000},
        {0.437500,  -0.062500, 0.062500},
        {0.312500,  -0.125000, 0.312500},
        {0.375000,  -0.062500, 0.562500},
        {0.375000,  -0.187500, 0.250000},
        {0.437500,  -0.062500, 0.187500},
        {0.312500,  0.000000,  -0.187500},
        {0.312500,  0.000000,  -0.062500},
        {0.375000,  0.062500,  -0.187500},
        {0.375000,  0.125000,  -0.250000},
        {0.312500,  0.062500,  -0.062500},
        {0.375000,  0.062500,  0.000000},
        {0.375000,  0.125000,  0.000000},
        {0.437500,  0.000000,  0.000000},
        {0.312500,  0.062500,  0.062500},
        {0.312500,  0.125000,  0.125000},
        {0.375000,  0.000000,  0.062500},
        {0.437500,  0.125000,  0.062500},
        {0.312500,  0.062500,  0.250000},
        {0.375000,  0.000000,  0.312500},
        {0.375000,  0.000000,  0.187500},
        {0.375000,  0.125000,  0.187500},
        {0.312500,  0.187500,  -0.437500},
        {0.312500,  0.187500,  -0.250000},
        {0.437500,  0.500000,  -0.375000},
        {0.437500,  0.250000,  -0.187500},
        {0.312500,  0.250000,  -0.125000},
        {0.312500,  0.187500,  0.062500},
        {0.312500,  0.312500,  0.000000},
        {0.375000,  0.125000,  -0.125000},
        {0.312500,  0.250000,  0.062500},
        {0.375000,  0.312500,  0.125000},
        {0.375000,  0.187500,  0.125000},
        {0.437500,  0.312500,  0.250000},
        {0.312500,  0.437500,  0.312500},
        {0.375000,  0.125000,  0.375000},
        {0.375000,  0.750000,  0.687500},
        {0.437500,  0.125000,  0.625000},
        {0.437500,  -0.250000, -0.312500},
        {0.437500,  -0.250000, -0.187500},
        {0.500000,  -0.375000, -0.312500},
        {0.562500,  -0.250000, -0.125000},
        {0.437500,  -0.250000, 0.000000},
        {0.500000,  -0.500000, -0.062500},
        {0.500000,  -0.312500, -0.125000},
        {0.562500,  -0.375000, 0.000000},
        {0.437500,  -0.312500, 0.187500},
        {0.437500,  -0.375000, 0.125000},
        {0.500000,  -0.187500, 0.062500},
        {0.625000,  -0.250000, 0.187500},
        {0.437500,  -0.375000, 0.312500},
        {0.500000,  -0.250000, 0.375000},
        {0.562500,  -0.562500, 0.312500},
        {0.625000,  -0.437500, 0.187500},
        {0.437500,  -0.187500, -0.250000},
        {0.437500,  -0.187500, -0.062500},
        {0.437500,  -0.062500, -0.125000},
        {0.625000,  -0.187500, -0.125000},
        {0.437500,  -0.125000, 0.000000},
        {0.500000,  -0.125000, -0.062500},
        {0.562500,  -0.125000, 0.000000},
        {0.562500,  -0.062500, -0.062500},
        {0.437500,  -0.062500, 0.125000},
        {0.500000,  -0.187500, 0.125000},
        {0.562500,  -0.062500, 0.125000},
        {0.625000,  -0.187500, 0.187500},
        {0.437500,  -0.062500, 0.375000},
        {0.500000,  -0.125000, 0.187500},
        {0.562500,  -0.125000, 0.562500},
        {0.562500,  -0.125000, 0.250000},
        {0.437500,  0.062500,  -0.187500},
        {0.500000,  0.125000,  -0.187500},
        {0.562500,  0.000000,  -0.187500},
        {0.625000,  0.000000,  -0.312500},
        {0.437500,  0.062500,  -0.062500},
        {0.500000,  0.062500,  0.000000},
        {0.500000,  0.125000,  -0.062500},
        {0.500000,  -0.062500, 0.000000},
        {0.437500,  0.062500,  0.187500},
        {0.500000,  0.000000,  0.125000},
        {0.500000,  0.062500,  0.125000},
        {0.562500,  0.125000,  0.000000},
        {0.437500,  0.062500,  0.500000},
        {0.500000,  -0.062500, 0.312500},
        {0.562500,  0.000000,  0.250000},
        {0.562500,  0.062500,  0.375000},
        {0.437500,  0.312500,  -0.125000},
        {0.437500,  0.187500,  -0.125000},
        {0.562500,  0.500000,  -0.125000},
        {0.562500,  0.312500,  -0.125000},
        {0.437500,  0.250000,  -0.062500},
        {0.437500,  0.250000,  0.062500},
        {0.500000,  0.250000,  -0.062500},
        {0.625000,  0.125000,  -0.125000},
        {0.500000,  0.375000,  0.062500},
        {0.500000,  0.125000,  0.125000},
        {0.500000,  0.562500,  0.125000},
        {0.562500,  0.187500,  0.125000},
        {0.500000,  0.187500,  0.250000},
        {0.500000,  0.625000,  0.375000},
        {0.500000,  0.250000,  0.187500},
        {0.562500,  0.312500,  0.375000},
        {0.625000,  -0.312500, -0.187500},
        {0.625000,  -0.187500, -0.312500},
        {0.812500,  -0.437500, -0.437500},
        {1.375000,  -0.187500, -0.375000},
        {0.687500,  -0.312500, -0.062500},
        {0.875000,  -0.250000, -0.062500},
        {1.062500,  -0.187500, 0.062500},
        {1.062500,  -0.437500, -0.062500},
        {0.625000,  -0.250000, 0.125000},
        {0.750000,  -0.125000, 0.062500},
        {0.812500,  -0.312500, 0.125000},
        {1.187500,  -0.125000, 0.312500},
        {0.625000,  -0.312500, 0.562500},
        {0.812500,  -0.250000, 0.312500},
        {0.875000,  -0.500000, 0.312500},
        {1.000000,  -0.312500, 0.500000},
        {0.625000,  -0.062500, -0.187500},
        {0.687500,  0.062500,  -0.187500},
        {0.812500,  -0.062500, -0.187500},
        {1.062500,  -0.125000, -0.187500},
        {0.625000,  0.062500,  -0.062500},
        {0.687500,  -0.125000, -0.062500},
        {0.875000,  -0.125000, 0.000000},
        {1.437500,  0.000000,  0.000000},
        {0.625000,  0.000000,  0.062500},
        {0.687500,  -0.062500, 0.187500},
        {0.750000,  0.062500,  0.000000},
        {0.812500,  0.000000,  0.125000},
        {0.625000,  0.062500,  0.250000},
        {0.687500,  -0.062500, 0.375000},
        {0.687500,  0.000000,  0.500000},
        {0.937500,  -0.062500, 0.250000},
        {0.687500,  0.187500,  -0.312500},
        {0.750000,  0.187500,  -0.500000},
        {1.000000,  0.187500,  -0.312500},
        {1.750000,  0.125000,  -0.250000},
        {0.750000,  0.187500,  -0.125000},
        {0.875000,  0.187500,  -0.062500},
        {0.937500,  0.125000,  0.000000},
        {1.187500,  0.187500,  -0.187500},
        {0.625000,  0.187500,  0.250000},
        {0.625000,  0.187500,  0.125000},
        {0.687500,  0.187500,  0.000000},
        {0.937500,  0.250000,  0.250000},
        {0.687500,  0.187500,  0.437500},
        {0.750000,  0.062500,  0.312500},
        {0.937500,  0.125000,  0.437500},
        {1.437500,  0.187500,  0.437500},
        {0.625000,  0.250000,  -0.062500},
        {0.687500,  0.375000,  0.000000},
        {1.062500,  0.937500,  -0.250000},
        {1.375000,  0.375000,  -0.250000},
        {0.812500,  0.312500,  0.125000},
        {0.875000,  0.500000,  0.000000},
        {1.062500,  0.375000,  0.062500},
        {1.500000,  0.437500,  0.125000},
        {0.625000,  0.375000,  0.250000},
        {0.875000,  0.375000,  0.312500},
        {1.125000,  0.625000,  0.187500},
        {1.187500,  0.250000,  0.187500},
        {0.687500,  0.437500,  0.437500},
        {0.750000,  0.375000,  0.687500},
        {0.937500,  0.750000,  0.500000},
        {1.312500,  0.687500,  0.625000}
};

/*
 * PRBA58 Vector Quantizer Levels
 */
const float AmbePlusPRBA58[128][4] = {
        {-0.460938, -0.265625, -0.281250, -0.062500},
        {-0.367188, -0.117188, -0.078125, -0.054688},
        {-0.250000, -0.312500, -0.164063, -0.101563},
        {-0.156250, -0.078125, -0.085938, -0.203125},
        {-0.468750, -0.085938, -0.171875, 0.164063},
        {-0.210938, -0.039063, -0.117188, 0.085938},
        {-0.187500, -0.156250, -0.289063, 0.070313},
        {-0.179688, -0.117188, -0.148438, -0.046875},
        {-0.320313, -0.031250, 0.140625,  -0.132813},
        {-0.289063, -0.140625, 0.179688,  0.015625},
        {-0.179688, -0.226563, -0.007813, -0.101563},
        {-0.156250, -0.031250, 0.015625,  -0.093750},
        {-0.390625, -0.273438, 0.046875,  0.031250},
        {-0.195313, -0.203125, -0.070313, 0.039063},
        {-0.171875, -0.156250, -0.039063, 0.171875},
        {-0.156250, -0.085938, 0.085938,  0.125000},
        {-0.304688, 0.054688,  -0.210938, -0.085938},
        {-0.265625, 0.140625,  -0.031250, -0.132813},
        {-0.242188, 0.078125,  -0.031250, 0.015625},
        {-0.203125, 0.000000,  -0.085938, -0.070313},
        {-0.453125, 0.171875,  -0.062500, 0.031250},
        {-0.289063, 0.125000,  -0.156250, 0.093750},
        {-0.179688, 0.257813,  -0.054688, 0.273438},
        {-0.171875, 0.226563,  -0.109375, 0.015625},
        {-0.312500, -0.007813, 0.000000,  0.085938},
        {-0.265625, 0.265625,  0.046875,  0.101563},
        {-0.234375, 0.109375,  0.125000,  -0.046875},
        {-0.171875, -0.015625, 0.093750,  0.007813},
        {-0.414063, 0.046875,  0.101563,  0.203125},
        {-0.179688, 0.093750,  0.210938,  0.125000},
        {-0.179688, -0.007813, 0.007813,  0.273438},
        {-0.171875, 0.085938,  0.007813,  0.132813},
        {-0.062500, -0.117188, -0.257813, -0.156250},
        {-0.054688, -0.226563, -0.109375, -0.015625},
        {-0.046875, -0.164063, -0.070313, -0.117188},
        {-0.039063, -0.031250, -0.093750, -0.085938},
        {-0.156250, -0.031250, -0.015625, 0.039063},
        {-0.085938, 0.015625,  -0.179688, 0.164063},
        {-0.078125, -0.078125, -0.070313, 0.046875},
        {-0.046875, -0.195313, -0.062500, 0.109375},
        {-0.093750, -0.046875, 0.109375,  -0.101563},
        {-0.054688, -0.007813, 0.007813,  -0.007813},
        {-0.039063, -0.132813, 0.031250,  -0.031250},
        {-0.023438, -0.148438, 0.195313,  -0.085938},
        {-0.148438, -0.109375, 0.023438,  0.000000},
        {-0.039063, -0.085938, 0.031250,  0.085938},
        {-0.039063, -0.226563, 0.117188,  0.070313},
        {-0.015625, -0.015625, 0.156250,  0.156250},
        {-0.109375, 0.132813,  -0.109375, -0.140625},
        {-0.093750, 0.023438,  -0.187500, -0.007813},
        {-0.093750, 0.382813,  -0.062500, -0.101563},
        {-0.023438, 0.101563,  -0.062500, -0.007813},
        {-0.140625, 0.195313,  -0.273438, 0.132813},
        {-0.109375, 0.125000,  -0.117188, 0.062500},
        {-0.085938, 0.015625,  -0.078125, 0.031250},
        {-0.031250, 0.203125,  -0.023438, 0.125000},
        {-0.125000, 0.156250,  0.078125,  -0.140625},
        {-0.117188, 0.085938,  0.312500,  -0.101563},
        {-0.093750, 0.062500,  0.007813,  -0.078125},
        {-0.046875, 0.046875,  0.148438,  -0.023438},
        {-0.125000, 0.148438,  0.007813,  0.015625},
        {-0.085938, 0.046875,  0.054688,  0.039063},
        {-0.054688, 0.140625,  0.117188,  0.101563},
        {-0.054688, 0.039063,  -0.015625, 0.109375},
        {0.046875,  -0.062500, -0.054688, -0.226563},
        {0.062500,  -0.132813, -0.093750, -0.101563},
        {0.078125,  -0.015625, -0.132813, -0.023438},
        {0.085938,  -0.421875, -0.140625, -0.062500},
        {-0.007813, -0.054688, -0.054688, 0.179688},
        {0.015625,  -0.078125, -0.203125, 0.054688},
        {0.015625,  -0.093750, -0.078125, 0.023438},
        {0.062500,  -0.179688, -0.187500, 0.148438},
        {0.007813,  -0.039063, 0.046875,  -0.093750},
        {0.023438,  0.031250,  0.117188,  -0.179688},
        {0.101563,  -0.171875, 0.093750,  -0.171875},
        {0.101563,  -0.023438, -0.023438, -0.125000},
        {-0.007813, -0.039063, 0.109375,  0.023438},
        {0.046875,  -0.015625, 0.015625,  0.078125},
        {0.054688,  -0.046875, -0.023438, -0.023438},
        {0.070313,  -0.140625, 0.062500,  -0.015625},
        {0.007813,  0.070313,  -0.031250, -0.210938},
        {0.015625,  0.140625,  -0.179688, -0.046875},
        {0.023438,  0.039063,  -0.039063, -0.039063},
        {0.054688,  0.117188,  -0.007813, -0.101563},
        {0.015625,  0.046875,  -0.117188, 0.078125},
        {0.054688,  0.054688,  -0.281250, 0.164063},
        {0.062500,  0.273438,  -0.125000, 0.085938},
        {0.093750,  0.101563,  -0.070313, 0.046875},
        {-0.015625, 0.125000,  0.046875,  -0.031250},
        {-0.007813, 0.273438,  0.054688,  0.000000},
        {0.070313,  0.039063,  0.070313,  -0.023438},
        {0.109375,  0.195313,  0.093750,  -0.218750},
        {0.046875,  0.078125,  0.039063,  0.070313},
        {0.054688,  0.101563,  0.023438,  0.265625},
        {0.070313,  0.125000,  0.273438,  0.031250},
        {0.093750,  0.335938,  0.164063,  0.132813},
        {0.195313,  -0.101563, 0.015625,  -0.046875},
        {0.234375,  -0.171875, -0.164063, -0.125000},
        {0.296875,  -0.085938, -0.117188, 0.031250},
        {0.507813,  -0.179688, -0.117188, 0.015625},
        {0.109375,  -0.179688, -0.046875, 0.046875},
        {0.132813,  -0.054688, -0.039063, 0.070313},
        {0.171875,  0.007813,  -0.117188, 0.179688},
        {0.429688,  0.015625,  -0.039063, 0.218750},
        {0.132813,  -0.015625, 0.156250,  -0.085938},
        {0.140625,  -0.125000, 0.218750,  0.000000},
        {0.265625,  -0.250000, 0.101563,  -0.085938},
        {0.382813,  -0.109375, 0.101563,  -0.125000},
        {0.117188,  -0.078125, 0.085938,  0.195313},
        {0.218750,  -0.210938, 0.054688,  0.140625},
        {0.265625,  -0.031250, 0.054688,  0.148438},
        {0.304688,  0.007813,  0.250000,  0.023438},
        {0.117188,  0.289063,  -0.226563, -0.109375},
        {0.132813,  0.023438,  -0.195313, -0.132813},
        {0.164063,  0.187500,  -0.070313, -0.078125},
        {0.281250,  0.046875,  -0.101563, -0.250000},
        {0.164063,  0.023438,  -0.023438, -0.039063},
        {0.171875,  0.148438,  -0.265625, 0.046875},
        {0.210938,  0.031250,  -0.156250, 0.000000},
        {0.390625,  0.179688,  -0.101563, -0.031250},
        {0.234375,  0.085938,  0.031250,  -0.148438},
        {0.250000,  0.265625,  0.156250,  -0.070313},
        {0.312500,  0.054688,  0.093750,  -0.007813},
        {0.531250,  0.210938,  0.085938,  -0.015625},
        {0.117188,  0.179688,  0.054688,  0.031250},
        {0.132813,  0.039063,  0.140625,  0.070313},
        {0.218750,  0.070313,  0.007813,  0.039063},
        {0.226563,  0.242188,  0.007813,  0.148438}
};

/*
 * Higher Order Coefficients
 */
const float AmbePlusHOCb5[16][4] = {
        {-0.617188, -0.015625, 0.015625,  -0.023438},
        {-0.507813, -0.382813, -0.312500, -0.117188},
        {-0.328125, 0.046875,  0.007813,  -0.015625},
        {-0.320313, -0.281250, -0.023438, -0.023438},
        {-0.171875, 0.140625,  -0.179688, -0.007813},
        {-0.148438, 0.226563,  0.039063,  -0.039063},
        {-0.140625, -0.007813, -0.007813, -0.015625},
        {-0.109375, -0.101563, 0.179688,  -0.062500},
        {-0.109375, -0.109375, -0.031250, 0.187500},
        {-0.109375, -0.218750, -0.273438, -0.140625},
        {0.007813,  -0.007813, -0.015625, -0.015625},
        {0.078125,  -0.265625, -0.007813, 0.007813},
        {0.101563,  0.054688,  -0.210938, -0.007813},
        {0.164063,  0.242188,  0.093750,  0.039063},
        {0.179688,  -0.023438, 0.007813,  -0.007813},
        {0.460938,  0.015625,  -0.015625, 0.007813}
};

/*
 * Higher Order Coefficients
 */
const float AmbePlusHOCb6[16][4] = {
        {-0.429688, -0.046875, 0.039063,  0.000000},
        {-0.296875, 0.187500,  0.125000,  0.015625},
        {-0.203125, -0.218750, -0.039063, -0.007813},
        {-0.179688, 0.007813,  -0.007813, 0.000000},
        {-0.171875, 0.265625,  -0.085938, -0.039063},
        {-0.046875, -0.070313, 0.203125,  -0.023438},
        {-0.023438, 0.125000,  0.031250,  -0.023438},
        {-0.007813, 0.000000,  -0.195313, -0.007813},
        {0.007813,  -0.046875, -0.007813, -0.015625},
        {0.015625,  -0.031250, 0.039063,  0.195313},
        {0.031250,  -0.273438, -0.015625, -0.007813},
        {0.140625,  0.257813,  0.015625,  0.007813},
        {0.164063,  0.015625,  0.007813,  -0.023438},
        {0.210938,  -0.148438, -0.187500, 0.039063},
        {0.273438,  -0.179688, 0.054688,  -0.007813},
        {0.421875,  0.054688,  -0.039063, 0.000000}
};

/*
 * Higher Order Coefficients
 */
const float AmbePlusHOCb7[16][4] = {
        {-0.382813, -0.101563, 0.007813,  0.015625},
        {-0.335938, 0.226563,  0.015625,  -0.007813},
        {-0.156250, 0.031250,  -0.039063, -0.054688},
        {-0.156250, -0.015625, 0.187500,  -0.015625},
        {-0.085938, -0.257813, 0.023438,  -0.007813},
        {-0.070313, -0.148438, -0.203125, -0.023438},
        {-0.031250, 0.187500,  -0.156250, 0.007813},
        {-0.023438, -0.007813, -0.015625, 0.179688},
        {-0.015625, 0.203125,  0.070313,  -0.023438},
        {0.000000,  -0.039063, -0.007813, -0.023438},
        {0.140625,  -0.078125, 0.179688,  -0.007813},
        {0.164063,  0.023438,  -0.007813, -0.015625},
        {0.187500,  -0.007813, -0.218750, -0.007813},
        {0.218750,  0.242188,  0.023438,  0.031250},
        {0.234375,  -0.234375, -0.039063, 0.007813},
        {0.445313,  0.054688,  -0.007813, 0.000000}
};

/*
 * Higher Order Coefficients
 */
const float AmbePlusHOCb8[16][4] = {
        {-0.453125, 0.179688,  0.078125,  -0.015625},
        {-0.414063, -0.179688, -0.031250, 0.015625},
        {-0.281250, 0.187500,  -0.203125, 0.046875},
        {-0.210938, -0.007813, -0.031250, -0.031250},
        {-0.148438, -0.031250, 0.218750,  -0.054688},
        {-0.140625, -0.085938, 0.039063,  0.187500},
        {-0.117188, 0.234375,  0.031250,  -0.054688},
        {-0.062500, -0.273438, -0.007813, -0.015625},
        {-0.054688, 0.093750,  -0.078125, 0.078125},
        {-0.023438, -0.062500, -0.210938, -0.054688},
        {0.023438,  0.000000,  0.023438,  -0.046875},
        {0.125000,  0.234375,  -0.187500, -0.015625},
        {0.164063,  -0.054688, -0.093750, 0.070313},
        {0.187500,  0.179688,  0.093750,  0.015625},
        {0.203125,  -0.171875, 0.140625,  -0.015625},
        {0.421875,  -0.039063, -0.046875, -0.007813}
};

#endif
