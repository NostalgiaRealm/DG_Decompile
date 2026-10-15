/*
 * FUN_1801d4f50 at 1801d4f50
 * undefined FUN_1801d4f50(void)
 * Address ranges: 1801d4f50-1801d55c7;1801d5be4-1801d5c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d4f50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint local_6f0 [16];
  byte local_6b0 [452];
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  char local_4dc [512];
  byte local_2dc [68];
  undefined1 auStack_298 [600];
  
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar8 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar8 = true;
      iVar9 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar9 == 0) {
        FUN_1801085c8();
        bVar8 = true;
      }
    }
    *param_3 = 0;
    FUN_18018de28(local_6b0 + 0x1c0);
    lVar23 = *(longlong *)(param_1 + 0x60);
    uVar14 = 1;
    bVar7 = true;
    uVar2 = *(uint *)(lVar23 + 0xd4);
    local_6f0[2] = 0;
    local_6f0[3] = 0;
    local_6f0[0] = 0;
    local_6f0[1] = 0;
    local_6f0[6] = 0;
    local_6f0[7] = 0;
    local_6f0[4] = 0;
    local_6f0[5] = 0;
    local_6f0[10] = 0;
    local_6f0[0xb] = 0;
    local_6f0[8] = 0;
    local_6f0[9] = 0;
    local_6f0[0xe] = 0;
    local_6f0[0xf] = 0;
    local_6f0[0xc] = 0;
    local_6f0[0xd] = 0;
    uVar26 = 0;
    local_6b0[8] = 0;
    local_6b0[9] = 0;
    local_6b0[10] = 0;
    local_6b0[0xb] = 0;
    local_6b0[0xc] = 0;
    local_6b0[0xd] = 0;
    local_6b0[0xe] = 0;
    local_6b0[0xf] = 0;
    local_6b0[0] = 0;
    local_6b0[1] = 0;
    local_6b0[2] = 0;
    local_6b0[3] = 0;
    local_6b0[4] = 0;
    local_6b0[5] = 0;
    local_6b0[6] = 0;
    local_6b0[7] = 0;
    local_6b0[0x18] = 0;
    local_6b0[0x19] = 0;
    local_6b0[0x1a] = 0;
    local_6b0[0x1b] = 0;
    local_6b0[0x1c] = 0;
    local_6b0[0x1d] = 0;
    local_6b0[0x1e] = 0;
    local_6b0[0x1f] = 0;
    local_6b0[0x10] = 0;
    local_6b0[0x11] = 0;
    local_6b0[0x12] = 0;
    local_6b0[0x13] = 0;
    local_6b0[0x14] = 0;
    local_6b0[0x15] = 0;
    local_6b0[0x16] = 0;
    local_6b0[0x17] = 0;
    uVar22 = 0;
    local_6b0[0x28] = 0;
    local_6b0[0x29] = 0;
    local_6b0[0x2a] = 0;
    local_6b0[0x2b] = 0;
    local_6b0[0x2c] = 0;
    local_6b0[0x2d] = 0;
    local_6b0[0x2e] = 0;
    local_6b0[0x2f] = 0;
    local_6b0[0x20] = 0;
    local_6b0[0x21] = 0;
    local_6b0[0x22] = 0;
    local_6b0[0x23] = 0;
    local_6b0[0x24] = 0;
    local_6b0[0x25] = 0;
    local_6b0[0x26] = 0;
    local_6b0[0x27] = 0;
    local_6b0[0x38] = 0;
    local_6b0[0x39] = 0;
    local_6b0[0x3a] = 0;
    local_6b0[0x3b] = 0;
    local_6b0[0x3c] = 0;
    local_6b0[0x3d] = 0;
    local_6b0[0x3e] = 0;
    local_6b0[0x3f] = 0;
    local_6b0[0x30] = 0;
    local_6b0[0x31] = 0;
    local_6b0[0x32] = 0;
    local_6b0[0x33] = 0;
    local_6b0[0x34] = 0;
    local_6b0[0x35] = 0;
    local_6b0[0x36] = 0;
    local_6b0[0x37] = 0;
    local_6b0[0x48] = 0;
    local_6b0[0x49] = 0;
    local_6b0[0x4a] = 0;
    local_6b0[0x4b] = 0;
    local_6b0[0x4c] = 0;
    local_6b0[0x4d] = 0;
    local_6b0[0x4e] = 0;
    local_6b0[0x4f] = 0;
    local_6b0[0x40] = 0;
    local_6b0[0x41] = 0;
    local_6b0[0x42] = 0;
    local_6b0[0x43] = 0;
    local_6b0[0x44] = 0;
    local_6b0[0x45] = 0;
    local_6b0[0x46] = 0;
    local_6b0[0x47] = 0;
    local_6b0[0x58] = 0;
    local_6b0[0x59] = 0;
    local_6b0[0x5a] = 0;
    local_6b0[0x5b] = 0;
    local_6b0[0x5c] = 0;
    local_6b0[0x5d] = 0;
    local_6b0[0x5e] = 0;
    local_6b0[0x5f] = 0;
    local_6b0[0x50] = 0;
    local_6b0[0x51] = 0;
    local_6b0[0x52] = 0;
    local_6b0[0x53] = 0;
    local_6b0[0x54] = 0;
    local_6b0[0x55] = 0;
    local_6b0[0x56] = 0;
    local_6b0[0x57] = 0;
    local_6b0[0x68] = 0;
    local_6b0[0x69] = 0;
    local_6b0[0x6a] = 0;
    local_6b0[0x6b] = 0;
    local_6b0[0x6c] = 0;
    local_6b0[0x6d] = 0;
    local_6b0[0x6e] = 0;
    local_6b0[0x6f] = 0;
    local_6b0[0x60] = 0;
    local_6b0[0x61] = 0;
    local_6b0[0x62] = 0;
    local_6b0[99] = 0;
    local_6b0[100] = 0;
    local_6b0[0x65] = 0;
    local_6b0[0x66] = 0;
    local_6b0[0x67] = 0;
    local_6b0[0x78] = 0;
    local_6b0[0x79] = 0;
    local_6b0[0x7a] = 0;
    local_6b0[0x7b] = 0;
    local_6b0[0x7c] = 0;
    local_6b0[0x7d] = 0;
    local_6b0[0x7e] = 0;
    local_6b0[0x7f] = 0;
    local_6b0[0x70] = 0;
    local_6b0[0x71] = 0;
    local_6b0[0x72] = 0;
    local_6b0[0x73] = 0;
    local_6b0[0x74] = 0;
    local_6b0[0x75] = 0;
    local_6b0[0x76] = 0;
    local_6b0[0x77] = 0;
    local_6b0[0x88] = 0;
    local_6b0[0x89] = 0;
    local_6b0[0x8a] = 0;
    local_6b0[0x8b] = 0;
    local_6b0[0x8c] = 0;
    local_6b0[0x8d] = 0;
    local_6b0[0x8e] = 0;
    local_6b0[0x8f] = 0;
    local_6b0[0x80] = 0;
    local_6b0[0x81] = 0;
    local_6b0[0x82] = 0;
    local_6b0[0x83] = 0;
    local_6b0[0x84] = 0;
    local_6b0[0x85] = 0;
    local_6b0[0x86] = 0;
    local_6b0[0x87] = 0;
    local_6b0[0x98] = 0;
    local_6b0[0x99] = 0;
    local_6b0[0x9a] = 0;
    local_6b0[0x9b] = 0;
    local_6b0[0x9c] = 0;
    local_6b0[0x9d] = 0;
    local_6b0[0x9e] = 0;
    local_6b0[0x9f] = 0;
    local_6b0[0x90] = 0;
    local_6b0[0x91] = 0;
    local_6b0[0x92] = 0;
    local_6b0[0x93] = 0;
    local_6b0[0x94] = 0;
    local_6b0[0x95] = 0;
    local_6b0[0x96] = 0;
    local_6b0[0x97] = 0;
    local_6b0[0xa8] = 0;
    local_6b0[0xa9] = 0;
    local_6b0[0xaa] = 0;
    local_6b0[0xab] = 0;
    local_6b0[0xac] = 0;
    local_6b0[0xad] = 0;
    local_6b0[0xae] = 0;
    local_6b0[0xaf] = 0;
    local_6b0[0xa0] = 0;
    local_6b0[0xa1] = 0;
    local_6b0[0xa2] = 0;
    local_6b0[0xa3] = 0;
    local_6b0[0xa4] = 0;
    local_6b0[0xa5] = 0;
    local_6b0[0xa6] = 0;
    local_6b0[0xa7] = 0;
    local_6b0[0xb8] = 0;
    local_6b0[0xb9] = 0;
    local_6b0[0xba] = 0;
    local_6b0[0xbb] = 0;
    local_6b0[0xbc] = 0;
    local_6b0[0xbd] = 0;
    local_6b0[0xbe] = 0;
    local_6b0[0xbf] = 0;
    local_6b0[0xb0] = 0;
    local_6b0[0xb1] = 0;
    local_6b0[0xb2] = 0;
    local_6b0[0xb3] = 0;
    local_6b0[0xb4] = 0;
    local_6b0[0xb5] = 0;
    local_6b0[0xb6] = 0;
    local_6b0[0xb7] = 0;
    local_6b0[200] = 0;
    local_6b0[0xc9] = 0;
    local_6b0[0xca] = 0;
    local_6b0[0xcb] = 0;
    local_6b0[0xcc] = 0;
    local_6b0[0xcd] = 0;
    local_6b0[0xce] = 0;
    local_6b0[0xcf] = 0;
    local_6b0[0xc0] = 0;
    local_6b0[0xc1] = 0;
    local_6b0[0xc2] = 0;
    local_6b0[0xc3] = 0;
    local_6b0[0xc4] = 0;
    local_6b0[0xc5] = 0;
    local_6b0[0xc6] = 0;
    local_6b0[199] = 0;
    local_6b0[0xd8] = 0;
    local_6b0[0xd9] = 0;
    local_6b0[0xda] = 0;
    local_6b0[0xdb] = 0;
    local_6b0[0xdc] = 0;
    local_6b0[0xdd] = 0;
    local_6b0[0xde] = 0;
    local_6b0[0xdf] = 0;
    local_6b0[0xd0] = 0;
    local_6b0[0xd1] = 0;
    local_6b0[0xd2] = 0;
    local_6b0[0xd3] = 0;
    local_6b0[0xd4] = 0;
    local_6b0[0xd5] = 0;
    local_6b0[0xd6] = 0;
    local_6b0[0xd7] = 0;
    local_6b0[0xe8] = 0;
    local_6b0[0xe9] = 0;
    local_6b0[0xea] = 0;
    local_6b0[0xeb] = 0;
    local_6b0[0xec] = 0;
    local_6b0[0xed] = 0;
    local_6b0[0xee] = 0;
    local_6b0[0xef] = 0;
    local_6b0[0xe0] = 0;
    local_6b0[0xe1] = 0;
    local_6b0[0xe2] = 0;
    local_6b0[0xe3] = 0;
    local_6b0[0xe4] = 0;
    local_6b0[0xe5] = 0;
    local_6b0[0xe6] = 0;
    local_6b0[0xe7] = 0;
    local_6b0[0xf8] = 0;
    local_6b0[0xf9] = 0;
    local_6b0[0xfa] = 0;
    local_6b0[0xfb] = 0;
    local_6b0[0xfc] = 0;
    local_6b0[0xfd] = 0;
    local_6b0[0xfe] = 0;
    local_6b0[0xff] = 0;
    local_6b0[0xf0] = 0;
    local_6b0[0xf1] = 0;
    local_6b0[0xf2] = 0;
    local_6b0[0xf3] = 0;
    local_6b0[0xf4] = 0;
    local_6b0[0xf5] = 0;
    local_6b0[0xf6] = 0;
    local_6b0[0xf7] = 0;
    local_6b0[0x108] = 0;
    local_6b0[0x109] = 0;
    local_6b0[0x10a] = 0;
    local_6b0[0x10b] = 0;
    local_6b0[0x10c] = 0;
    local_6b0[0x10d] = 0;
    local_6b0[0x10e] = 0;
    local_6b0[0x10f] = 0;
    local_6b0[0x100] = 0;
    local_6b0[0x101] = 0;
    local_6b0[0x102] = 0;
    local_6b0[0x103] = 0;
    local_6b0[0x104] = 0;
    local_6b0[0x105] = 0;
    local_6b0[0x106] = 0;
    local_6b0[0x107] = 0;
    local_6b0[0x118] = 0;
    local_6b0[0x119] = 0;
    local_6b0[0x11a] = 0;
    local_6b0[0x11b] = 0;
    local_6b0[0x11c] = 0;
    local_6b0[0x11d] = 0;
    local_6b0[0x11e] = 0;
    local_6b0[0x11f] = 0;
    local_6b0[0x110] = 0;
    local_6b0[0x111] = 0;
    local_6b0[0x112] = 0;
    local_6b0[0x113] = 0;
    local_6b0[0x114] = 0;
    local_6b0[0x115] = 0;
    local_6b0[0x116] = 0;
    local_6b0[0x117] = 0;
    local_6b0[0x128] = 0;
    local_6b0[0x129] = 0;
    local_6b0[0x12a] = 0;
    local_6b0[299] = 0;
    local_6b0[300] = 0;
    local_6b0[0x12d] = 0;
    local_6b0[0x12e] = 0;
    local_6b0[0x12f] = 0;
    local_6b0[0x120] = 0;
    local_6b0[0x121] = 0;
    local_6b0[0x122] = 0;
    local_6b0[0x123] = 0;
    local_6b0[0x124] = 0;
    local_6b0[0x125] = 0;
    local_6b0[0x126] = 0;
    local_6b0[0x127] = 0;
    local_6b0[0x138] = 0;
    local_6b0[0x139] = 0;
    local_6b0[0x13a] = 0;
    local_6b0[0x13b] = 0;
    local_6b0[0x13c] = 0;
    local_6b0[0x13d] = 0;
    local_6b0[0x13e] = 0;
    local_6b0[0x13f] = 0;
    local_6b0[0x130] = 0;
    local_6b0[0x131] = 0;
    local_6b0[0x132] = 0;
    local_6b0[0x133] = 0;
    local_6b0[0x134] = 0;
    local_6b0[0x135] = 0;
    local_6b0[0x136] = 0;
    local_6b0[0x137] = 0;
    local_6b0[0x148] = 0;
    local_6b0[0x149] = 0;
    local_6b0[0x14a] = 0;
    local_6b0[0x14b] = 0;
    local_6b0[0x14c] = 0;
    local_6b0[0x14d] = 0;
    local_6b0[0x14e] = 0;
    local_6b0[0x14f] = 0;
    local_6b0[0x140] = 0;
    local_6b0[0x141] = 0;
    local_6b0[0x142] = 0;
    local_6b0[0x143] = 0;
    local_6b0[0x144] = 0;
    local_6b0[0x145] = 0;
    local_6b0[0x146] = 0;
    local_6b0[0x147] = 0;
    local_6b0[0x158] = 0;
    local_6b0[0x159] = 0;
    local_6b0[0x15a] = 0;
    local_6b0[0x15b] = 0;
    local_6b0[0x15c] = 0;
    local_6b0[0x15d] = 0;
    local_6b0[0x15e] = 0;
    local_6b0[0x15f] = 0;
    local_6b0[0x150] = 0;
    local_6b0[0x151] = 0;
    local_6b0[0x152] = 0;
    local_6b0[0x153] = 0;
    local_6b0[0x154] = 0;
    local_6b0[0x155] = 0;
    local_6b0[0x156] = 0;
    local_6b0[0x157] = 0;
    local_6b0[0x168] = 0;
    local_6b0[0x169] = 0;
    local_6b0[0x16a] = 0;
    local_6b0[0x16b] = 0;
    local_6b0[0x16c] = 0;
    local_6b0[0x16d] = 0;
    local_6b0[0x16e] = 0;
    local_6b0[0x16f] = 0;
    local_6b0[0x160] = 0;
    local_6b0[0x161] = 0;
    local_6b0[0x162] = 0;
    local_6b0[0x163] = 0;
    local_6b0[0x164] = 0;
    local_6b0[0x165] = 0;
    local_6b0[0x166] = 0;
    local_6b0[0x167] = 0;
    local_6b0[0x178] = 0;
    local_6b0[0x179] = 0;
    local_6b0[0x17a] = 0;
    local_6b0[0x17b] = 0;
    local_6b0[0x17c] = 0;
    local_6b0[0x17d] = 0;
    local_6b0[0x17e] = 0;
    local_6b0[0x17f] = 0;
    local_6b0[0x170] = 0;
    local_6b0[0x171] = 0;
    local_6b0[0x172] = 0;
    local_6b0[0x173] = 0;
    local_6b0[0x174] = 0;
    local_6b0[0x175] = 0;
    local_6b0[0x176] = 0;
    local_6b0[0x177] = 0;
    local_6b0[0x188] = 0;
    local_6b0[0x189] = 0;
    local_6b0[0x18a] = 0;
    local_6b0[0x18b] = 0;
    local_6b0[0x18c] = 0;
    local_6b0[0x18d] = 0;
    local_6b0[0x18e] = 0;
    local_6b0[399] = 0;
    local_6b0[0x180] = 0;
    local_6b0[0x181] = 0;
    local_6b0[0x182] = 0;
    local_6b0[0x183] = 0;
    local_6b0[0x184] = 0;
    local_6b0[0x185] = 0;
    local_6b0[0x186] = 0;
    local_6b0[0x187] = 0;
    local_6b0[0x198] = 0;
    local_6b0[0x199] = 0;
    local_6b0[0x19a] = 0;
    local_6b0[0x19b] = 0;
    local_6b0[0x19c] = 0;
    local_6b0[0x19d] = 0;
    local_6b0[0x19e] = 0;
    local_6b0[0x19f] = 0;
    local_6b0[400] = 0;
    local_6b0[0x191] = 0;
    local_6b0[0x192] = 0;
    local_6b0[0x193] = 0;
    local_6b0[0x194] = 0;
    local_6b0[0x195] = 0;
    local_6b0[0x196] = 0;
    local_6b0[0x197] = 0;
    local_6b0[0x1a8] = 0;
    local_6b0[0x1a9] = 0;
    local_6b0[0x1aa] = 0;
    local_6b0[0x1ab] = 0;
    local_6b0[0x1ac] = 0;
    local_6b0[0x1ad] = 0;
    local_6b0[0x1ae] = 0;
    local_6b0[0x1af] = 0;
    local_6b0[0x1a0] = 0;
    local_6b0[0x1a1] = 0;
    local_6b0[0x1a2] = 0;
    local_6b0[0x1a3] = 0;
    local_6b0[0x1a4] = 0;
    local_6b0[0x1a5] = 0;
    local_6b0[0x1a6] = 0;
    local_6b0[0x1a7] = 0;
    local_6b0[0x1b8] = 0;
    local_6b0[0x1b9] = 0;
    local_6b0[0x1ba] = 0;
    local_6b0[0x1bb] = 0;
    local_6b0[0x1bc] = 0;
    local_6b0[0x1bd] = 0;
    local_6b0[0x1be] = 0;
    local_6b0[0x1bf] = 0;
    local_6b0[0x1b0] = 0;
    local_6b0[0x1b1] = 0;
    local_6b0[0x1b2] = 0;
    local_6b0[0x1b3] = 0;
    local_6b0[0x1b4] = 0;
    local_6b0[0x1b5] = 0;
    local_6b0[0x1b6] = 0;
    local_6b0[0x1b7] = 0;
    uVar10 = local_4ec;
    while( true ) {
      lVar20 = uVar26 * 8;
      uVar4 = *(ushort *)(param_2 + lVar20);
      lVar1 = param_2 + lVar20;
      if ((((uVar4 == 0xff) && (*(short *)(param_2 + 2 + lVar20) == 0)) &&
          (*(char *)(lVar1 + 4) == '\x11')) &&
         (((*(char *)(lVar1 + 5) == '\0' && (*(char *)(lVar1 + 6) == '\0')) &&
          (*(char *)(lVar1 + 7) == '\0')))) break;
      uVar14 = (uint)uVar26 < 0x40 & uVar14;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (*(uint *)(lVar23 + 0xbc) <= (uint)uVar4) {
        uVar14 = 0;
      }
      uVar5 = *(ushort *)(param_2 + 2 + lVar20);
      uVar24 = (uint)uVar4;
      uVar21 = uVar14;
      if (uVar14 != 0) {
        if ((uVar5 & 3) != 0) {
          uVar14 = 0;
        }
        bVar7 = (bool)((uint)uVar5 == local_6f0[uVar24] & bVar7);
        uVar21 = 0;
        if (bVar7 || (uVar2 & 0x40) != 0) {
          uVar21 = uVar14;
        }
      }
      bVar17 = 0;
      uVar11 = 0x11;
      uVar25 = 1;
      if (uVar21 == 0) goto LAB_1801d52a0;
      bVar15 = *(byte *)(lVar1 + 6);
      if (0xd < bVar15) goto switchD_1801d52c4_caseD_11;
      bVar3 = *(byte *)(lVar1 + 7);
      uVar16 = (uint)bVar3;
      uVar14 = 0x11;
      switch(bVar15) {
      case 0:
        if (bVar3 == 1) {
          uVar14 = 0xf;
        }
        if (bVar3 == 0) {
          uVar14 = 0;
        }
        uVar11 = (ulonglong)uVar14;
        uVar14 = uVar10 - 2;
        uVar10 = 2;
        local_4ec = 2;
        bVar17 = bVar3 & 0xf;
        uVar21 = (uVar14 & 0xfffffffd) == 0 & uVar21;
        goto LAB_1801d520c;
      case 1:
        if (bVar3 == 0) {
          uVar14 = uVar25;
        }
        uVar11 = (ulonglong)uVar14;
        bVar17 = bVar3 & 0xf | 0x10;
        goto LAB_1801d5270;
      case 2:
        uVar19 = 2;
        goto LAB_1801d5194;
      case 3:
        uVar14 = 0x10;
        if (bVar3 != 1) {
          uVar14 = 0x11;
        }
        uVar19 = 3;
        if (bVar3 == 0) {
          uVar14 = 3;
        }
        uVar11 = (ulonglong)uVar14;
        break;
      case 4:
        uVar19 = 4;
LAB_1801d5194:
        if (uVar16 == 0) {
          uVar14 = uVar19;
        }
        uVar11 = (ulonglong)uVar14;
        break;
      case 5:
        if (bVar3 < 8) {
          uVar11 = (ulonglong)(byte)(bVar3 + 7);
        }
        uVar19 = 5;
        break;
      case 6:
        uVar19 = 6;
        break;
      case 7:
        uVar19 = 7;
        break;
      case 8:
        uVar19 = 8;
        break;
      case 9:
        uVar11 = 0;
        bVar17 = 0x90;
        uVar14 = uVar16 == 0 & uVar21;
        if (uVar14 == 0) {
          uVar21 = 0;
        }
        else {
          local_4ec = 0;
          uVar21 = 0;
          if ((uVar10 & 0xfffffffb) == 0) {
            uVar21 = uVar14;
          }
          uVar10 = 0;
        }
LAB_1801d520c:
        if (uVar21 != 0) goto LAB_1801d5270;
        goto LAB_1801d52a0;
      case 10:
        bVar17 = bVar3 & 0xf | 0xa0;
        if (bVar3 == 1) {
          uVar14 = 6;
        }
        if (uVar16 == 0) {
          uVar14 = 5;
        }
        uVar11 = (ulonglong)uVar14;
        goto LAB_1801d5270;
      case 0xb:
        uVar19 = 0xb;
        break;
      case 0xc:
        uVar19 = 0xc;
        break;
      case 0xd:
        uVar19 = 0xd;
      }
      bVar17 = bVar3 & 0xf | (byte)(uVar19 << 4);
LAB_1801d5270:
      uVar16 = 1 << (ulonglong)(uVar16 & 7);
      uVar14 = (uint)bVar15 << 5 | (uint)(bVar3 >> 3);
      bVar15 = local_6b0[uVar14];
      local_6b0[uVar14] = bVar15 | (byte)uVar16;
      if (((uint)bVar15 & uVar16 & 0xff) != 0) {
        uVar21 = 0;
      }
LAB_1801d52a0:
      uVar14 = 0;
      if (uVar21 == 0) goto LAB_1801d558c;
      uVar14 = 0;
      uVar21 = 0;
      switch(*(undefined1 *)(lVar1 + 4)) {
      case 0:
        cVar13 = '\x01';
        lVar20 = 0;
        uVar21 = uVar14;
        break;
      case 1:
        cVar13 = '\x02';
        bVar15 = 8;
        lVar20 = 1;
        goto LAB_1801d53d4;
      case 2:
        cVar13 = '\x03';
        bVar15 = 0xc;
        lVar20 = 2;
        goto LAB_1801d53d4;
      case 3:
        cVar13 = '\x04';
        bVar15 = 0x10;
        lVar20 = 3;
        goto LAB_1801d53d4;
      case 4:
        cVar13 = '\x04';
        lVar20 = 4;
        uVar21 = uVar14;
        break;
      case 5:
        cVar13 = '\x04';
        lVar20 = 5;
        uVar21 = 1;
        break;
      case 6:
        cVar13 = '\x02';
        lVar20 = 6;
        uVar21 = uVar14;
        break;
      case 7:
        cVar13 = '\x04';
        bVar15 = 8;
        lVar20 = 7;
        goto LAB_1801d53d4;
      case 8:
        cVar13 = '\x04';
        lVar20 = 8;
        uVar21 = 2;
        break;
      case 9:
        cVar13 = '\x02';
        lVar20 = 9;
        uVar21 = 4;
        break;
      case 10:
        cVar13 = '\x04';
        bVar15 = 8;
        lVar20 = 10;
        uVar21 = 8;
        goto LAB_1801d53d4;
      case 0xb:
        cVar13 = '\x02';
        lVar20 = 0xb;
        uVar21 = 0x10;
        break;
      case 0xc:
        cVar13 = '\x04';
        bVar15 = 8;
        lVar20 = 0xc;
        uVar21 = 0x20;
        goto LAB_1801d53d4;
      case 0xd:
        lVar20 = 0xf;
        uVar21 = 0x40;
        goto LAB_1801d53cc;
      case 0xe:
        lVar20 = 0x10;
        uVar21 = 0x80;
LAB_1801d53cc:
        cVar13 = '\x03';
        break;
      case 0xf:
        cVar13 = '\x02';
        lVar20 = 0xd;
        uVar21 = 0x100;
        break;
      case 0x10:
        cVar13 = '\x04';
        bVar15 = 8;
        lVar20 = 0xe;
        uVar21 = 0x200;
        goto LAB_1801d53d4;
      default:
        goto switchD_1801d52c4_caseD_11;
      }
      bVar15 = 4;
LAB_1801d53d4:
      if (((uVar21 == 0) || ((*(uint *)(lVar23 + 0xec) & uVar21) != 0)) ||
         ((*(uint *)(param_1 + -0x59c0) >> 6 & 1) == 0)) {
        uVar14 = uVar25;
        if ((uVar21 != 0) && ((*(uint *)(lVar23 + 0xec) & uVar21) == 0)) {
          bVar18 = true;
          goto LAB_1801d5418;
        }
LAB_1801d5428:
        bVar3 = *(byte *)(lVar1 + 5);
        if (((bVar3 - 1 < 3) || ((bVar3 - 4 & 0xfffffffd) == 0)) || (bVar3 != 0))
        goto switchD_1801d52c4_caseD_11;
        uVar14 = uVar5 < 0x400 & uVar14;
        cVar6 = local_4dc[uVar22 * 8];
        while (cVar6 != -1) {
          uVar22 = (ulonglong)((uint)uVar22 + 1);
          cVar6 = local_4dc[uVar22 * 8];
        }
        uVar10 = (uint)uVar11;
        uVar12 = uVar22;
        if ((uVar10 != 0x11) && (uVar12 = uVar11, uVar10 < (uint)uVar22)) {
          *(undefined8 *)(local_4dc + uVar22 * 8) = *(undefined8 *)(local_4dc + uVar11 * 8);
          uVar11 = 0;
          if (local_4e8 != 0) {
            do {
              if (local_2dc[uVar11] == uVar10) {
                local_2dc[uVar11] = (byte)uVar22;
                break;
              }
              uVar21 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar21;
            } while (uVar21 < local_4e8);
          }
          local_2dc[local_4e8] = (byte)uVar22;
        }
        lVar1 = uVar12 * 8;
        local_4dc[lVar1] = (char)uVar4;
        local_4dc[lVar1 + 1] = cVar13;
        local_4dc[lVar1 + 2] = bVar15;
        local_4dc[lVar1 + 4] = (char)lVar20;
        local_4dc[lVar1 + 3] = (char)(uVar5 >> 2);
        local_4dc[lVar1 + 5] = bVar17;
        uVar21 = (uint)uVar5 + (uint)bVar15;
        local_4dc[lVar1 + 6] = (&DAT_18022c640)[lVar20];
        local_4e0 = 1 << (ulonglong)(uVar24 & 0x1f) | local_4e0;
        local_2dc[local_4e8] = (byte)uVar12;
        local_4e8 = local_4e8 + 1;
        uVar10 = local_4ec;
        if (local_6f0[uVar24] < uVar21) {
          local_6f0[uVar24] = uVar21;
        }
      }
      else {
        bVar18 = false;
        uVar14 = 0;
LAB_1801d5418:
        if (bVar18) goto LAB_1801d5428;
      }
LAB_1801d558c:
      uVar26 = (ulonglong)((uint)uVar26 + 1);
      if (uVar14 == 0) break;
    }
    if (uVar14 != 0) {
      local_4ec = 2;
      if (uVar10 != 4) {
        local_4ec = uVar10;
      }
      local_4e4 = local_6f0[0];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(auStack_298,local_6b0 + 0x1c0,0x254);
    }
switchD_1801d52c4_caseD_11:
    if (bVar8) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return 0x8876086c;
}

