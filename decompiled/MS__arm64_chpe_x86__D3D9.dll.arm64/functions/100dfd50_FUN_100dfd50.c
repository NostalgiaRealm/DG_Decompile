/*
 * FUN_100dfd50 at 100dfd50
 * undefined FUN_100dfd50(void)
 * Address ranges: 100dfd50-100e0a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100dfd50(int param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  char cVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  undefined4 *puVar22;
  byte bVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  int *piVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 uVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  int local_704;
  uint local_6f0 [16];
  byte local_6b0 [448];
  uint local_4f0;
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  char acStack_4dc [512];
  byte abStack_2dc [68];
  uint local_298 [150];
  
  local_704 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar17 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar17 = true;
    iVar21 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar21 == 0) {
      FUN_100071d0(0);
    }
  }
  *param_3 = 0;
  FUN_100a2d78(&local_4f0);
  piVar20 = (int *)(param_1 + 0x50);
  bVar14 = true;
  uVar35 = 0;
  uVar33 = 0;
  local_6f0[2] = 0;
  local_6f0[3] = 0;
  local_6f0[0] = 0;
  local_6f0[1] = 0;
  local_6f0[6] = 0;
  local_6f0[7] = 0;
  local_6f0[4] = 0;
  local_6f0[5] = 0;
  bVar15 = true;
  local_6f0[10] = 0;
  local_6f0[0xb] = 0;
  local_6f0[8] = 0;
  local_6f0[9] = 0;
  local_6f0[0xe] = 0;
  local_6f0[0xf] = 0;
  local_6f0[0xc] = 0;
  local_6f0[0xd] = 0;
  uVar32 = *(uint *)(*piVar20 + 0xd4);
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
  uVar28 = 0;
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
  uVar31 = local_4ec;
  do {
    puVar2 = (ushort *)(param_2 + uVar33 * 8);
    uVar9 = *puVar2;
    if (((((uVar9 == 0xff) && (puVar2[1] == 0)) && ((char)puVar2[2] == '\x11')) &&
        ((*(char *)((int)puVar2 + 5) == '\0' && ((char)puVar2[3] == '\0')))) &&
       (*(char *)((int)puVar2 + 7) == '\0')) break;
    bVar13 = (bool)(uVar33 < 0x40 & bVar14);
    if ((bVar13) && (*(uint *)(*piVar20 + 0xbc) <= (uint)uVar9)) {
      bVar13 = false;
    }
    uVar10 = puVar2[1];
    uVar18 = (uint)uVar9;
    bVar14 = false;
    if (bVar13) {
      bVar15 = (bool)((uint)uVar10 == local_6f0[uVar18] & bVar15);
      bVar14 = (uVar10 & 3) == 0 && (bVar15 || (uVar32 >> 6 & 1) != 0);
    }
    bVar23 = 0;
    uVar24 = 0x11;
    uVar26 = uVar24;
    if (!bVar14) goto LAB_100e0130;
    bVar6 = (byte)puVar2[3];
    if (0xd < bVar6) goto switchD_100e0158_caseD_11;
    bVar7 = *(byte *)((int)puVar2 + 7);
    uVar26 = 0x11;
    switch(bVar6) {
    case 0:
      if (bVar7 == 1) {
        uVar26 = 0xf;
      }
      if (bVar7 == 0) {
        uVar26 = 0;
      }
      uVar24 = uVar31 - 2;
      uVar31 = 2;
      local_4ec = 2;
      uVar24 = uVar24 & 0xfffffffd;
      bVar23 = bVar7 & 0xf;
      goto LAB_100e0064;
    case 1:
      if (bVar7 == 0) {
        uVar26 = 1;
      }
      bVar23 = bVar7 & 0xf | 0x10;
      break;
    case 2:
      bVar23 = bVar7 & 0xf | 0x20;
      uVar24 = 2;
      goto LAB_100dffd4;
    case 3:
      bVar23 = bVar7 & 0xf | 0x30;
      uVar26 = 0x10;
      if (bVar7 != 1) {
        uVar26 = 0x11;
      }
      if (bVar7 == 0) {
        uVar26 = 3;
      }
      break;
    case 4:
      bVar23 = bVar7 & 0xf | 0x40;
      uVar24 = 4;
LAB_100dffd4:
      if (bVar7 == 0) {
        uVar26 = uVar24;
      }
      break;
    case 5:
      if (bVar7 < 8) {
        uVar24 = (uint)(byte)(bVar7 + 7);
      }
      bVar23 = bVar7 & 0xf | 0x50;
      uVar26 = uVar24;
      break;
    case 6:
      bVar23 = bVar7 & 0xf | 0x60;
      uVar26 = uVar24;
      break;
    case 7:
      bVar23 = bVar7 & 0xf | 0x70;
      uVar26 = uVar24;
      break;
    case 8:
      bVar23 = bVar7 & 0xf | 0x80;
      uVar26 = uVar24;
      break;
    case 9:
      if (bVar7 != 0) {
        bVar14 = false;
      }
      uVar26 = 0;
      bVar23 = 0x90;
      if (!bVar14) goto LAB_100e0130;
      uVar24 = uVar31 & 0xfffffffb;
      local_4ec = 0;
      uVar31 = 0;
LAB_100e0064:
      bVar14 = (bool)(uVar24 == 0 & bVar14);
      if (bVar14) break;
      goto LAB_100e0130;
    case 10:
      bVar23 = bVar7 & 0xf | 0xa0;
      if (bVar7 == 1) {
        uVar26 = 6;
      }
      if (bVar7 == 0) {
        uVar26 = 5;
      }
      break;
    case 0xb:
      bVar23 = 0xb0;
      goto LAB_100e00f0;
    case 0xc:
      bVar23 = bVar7 & 0xf | 0xc0;
      uVar26 = uVar24;
      break;
    case 0xd:
      bVar23 = 0xd0;
LAB_100e00f0:
      bVar23 = bVar7 & 0xf | bVar23;
      uVar26 = uVar24;
    }
    bVar8 = local_6b0[(uint)bVar6 << 5 | (uint)(bVar7 >> 3)];
    uVar24 = 1 << (ulonglong)(bVar7 & 7);
    if ((uVar24 & 0xff & (uint)bVar8) != 0) {
      bVar14 = false;
    }
    local_6b0[(uint)bVar6 << 5 | (uint)(bVar7 >> 3)] = (byte)uVar24 | bVar8;
LAB_100e0130:
    if (!bVar14) goto LAB_100e0464;
    uVar34 = 0;
    uVar24 = 0;
    switch((char)puVar2[2]) {
    case '\0':
      cVar25 = '\x01';
      iVar21 = 0;
      uVar24 = uVar34;
      break;
    case '\x01':
      cVar25 = '\x02';
      iVar19 = 8;
      iVar21 = 1;
      goto LAB_100e0268;
    case '\x02':
      cVar25 = '\x03';
      iVar19 = 0xc;
      iVar21 = 2;
      goto LAB_100e0268;
    case '\x03':
      cVar25 = '\x04';
      iVar19 = 0x10;
      iVar21 = 3;
      goto LAB_100e0268;
    case '\x04':
      cVar25 = '\x04';
      iVar21 = 4;
      uVar24 = uVar34;
      break;
    case '\x05':
      cVar25 = '\x04';
      iVar21 = 5;
      uVar24 = 1;
      break;
    case '\x06':
      cVar25 = '\x02';
      iVar21 = 6;
      uVar24 = uVar34;
      break;
    case '\a':
      cVar25 = '\x04';
      iVar19 = 8;
      iVar21 = 7;
      goto LAB_100e0268;
    case '\b':
      cVar25 = '\x04';
      iVar21 = 8;
      uVar24 = 2;
      break;
    case '\t':
      cVar25 = '\x02';
      iVar21 = 9;
      uVar24 = 4;
      break;
    case '\n':
      cVar25 = '\x04';
      iVar19 = 8;
      iVar21 = 10;
      uVar24 = 8;
      goto LAB_100e0268;
    case '\v':
      cVar25 = '\x02';
      iVar21 = 0xb;
      uVar24 = 0x10;
      break;
    case '\f':
      cVar25 = '\x04';
      iVar19 = 8;
      iVar21 = 0xc;
      uVar24 = 0x20;
      goto LAB_100e0268;
    case '\r':
      iVar21 = 0xf;
      uVar24 = 0x40;
      goto LAB_100e0260;
    case '\x0e':
      iVar21 = 0x10;
      uVar24 = 0x80;
LAB_100e0260:
      cVar25 = '\x03';
      break;
    case '\x0f':
      cVar25 = '\x02';
      iVar21 = 0xd;
      uVar24 = 0x100;
      break;
    case '\x10':
      cVar25 = '\x04';
      iVar19 = 8;
      iVar21 = 0xe;
      uVar24 = 0x200;
      goto LAB_100e0268;
    default:
      goto switchD_100e0158_caseD_11;
    }
    iVar19 = 4;
LAB_100e0268:
    if (((uVar24 == 0) || ((*(uint *)(*piVar20 + 0xec) & uVar24) != 0)) ||
       ((*(uint *)(param_1 + -0x58e4) >> 6 & 1) == 0)) {
      bVar14 = true;
      if ((uVar24 != 0) && (bVar13 = true, (*(uint *)(*piVar20 + 0xec) & uVar24) == 0))
      goto LAB_100e02b8;
LAB_100e02c4:
      switch(*(undefined1 *)((int)puVar2 + 5)) {
      case 0:
        bVar14 = (bool)(uVar10 < 0x400 & bVar14);
        cVar11 = acStack_4dc[uVar28 * 8];
        while (cVar11 != -1) {
          uVar28 = uVar28 + 1;
          cVar11 = acStack_4dc[uVar28 * 8];
        }
        uVar31 = uVar28;
        if ((uVar26 != 0x11) && (uVar31 = uVar26, uVar26 < uVar28)) {
          *(undefined8 *)(acStack_4dc + uVar28 * 8) = *(undefined8 *)(acStack_4dc + uVar26 * 8);
          uVar24 = 0;
          if (local_4e8 != 0) {
            do {
              if (abStack_2dc[uVar24] == uVar26) {
                abStack_2dc[uVar24] = (byte)uVar28;
                break;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 < local_4e8);
          }
          abStack_2dc[local_4e8] = (byte)uVar28;
        }
        acStack_4dc[uVar31 * 8] = (char)uVar9;
        acStack_4dc[uVar31 * 8 + 1] = cVar25;
        acStack_4dc[uVar31 * 8 + 2] = (char)iVar19;
        acStack_4dc[uVar31 * 8 + 4] = (char)iVar21;
        acStack_4dc[uVar31 * 8 + 3] = (char)(uVar10 >> 2);
        acStack_4dc[uVar31 * 8 + 5] = bVar23;
        acStack_4dc[uVar31 * 8 + 6] = *(char *)(iVar21 + 0x10162550);
        local_4e0 = 1 << (ulonglong)(uVar18 & 0x1f) | local_4e0;
        abStack_2dc[local_4e8] = (byte)uVar31;
        local_4e8 = local_4e8 + 1;
        uVar26 = iVar19 + (uint)uVar10;
        uVar31 = local_4ec;
        if (local_6f0[uVar18] < uVar26) {
          local_6f0[uVar18] = uVar26;
        }
        break;
      default:
        goto switchD_100e0158_caseD_11;
      }
    }
    else {
      bVar13 = false;
      bVar14 = false;
LAB_100e02b8:
      uVar35 = 1;
      if (bVar13) goto LAB_100e02c4;
    }
LAB_100e0464:
    uVar33 = uVar33 + 1;
  } while (bVar14);
  if (!bVar14) goto switchD_100e0158_caseD_11;
  local_4ec = 2;
  if (uVar31 != 4) {
    local_4ec = uVar31;
  }
  local_4e4 = local_6f0[0];
  FUN_101325a0(local_298,&local_4f0,0x254);
  uVar36 = 0;
  uVar27 = 0;
  do {
    iVar21 = (int)uVar27;
    uVar16 = uVar27 & 1;
    uVar28 = iVar21 + 1;
    uVar27 = (ulonglong)uVar28;
    uVar36 = ((ulonglong)local_298[iVar21] << (uVar16 << 5)) + uVar36;
  } while (uVar28 < 0x95);
  uVar28 = *(uint *)(param_1 + 0x90);
  if (uVar28 == 0) {
LAB_100e05bc:
    piVar20 = (int *)FUN_101321c0(0xc);
    if (piVar20 == (int *)0x0) {
      piVar20 = (int *)0x0;
    }
    else {
      piVar20[0] = 0;
      piVar20[1] = 0;
      piVar20[2] = 0;
    }
    puVar12 = (uint *)(param_1 + 0x90);
    uVar28 = *puVar12;
    uVar32 = 0;
    if (uVar28 == 0) {
LAB_100e0670:
      puVar1 = (uint *)(param_1 + 0x94);
      uVar31 = *puVar1;
      if (uVar31 == uVar28) {
        uVar28 = 0x10;
        if (uVar31 != 0) {
          uVar28 = uVar31 << 1;
        }
        iVar21 = FUN_101322b0(uVar28 * 0x18);
        if (iVar21 != 0) {
          if (*puVar12 != 0) {
            uVar31 = 0;
            do {
              uVar18 = uVar31 + 1;
              puVar4 = (undefined8 *)(*(int *)(param_1 + 0x8c) + uVar31 * 0x18);
              puVar5 = (undefined8 *)(iVar21 + uVar31 * 0x18);
              uVar37 = *puVar4;
              puVar5[1] = puVar4[1];
              *puVar5 = uVar37;
              puVar5[2] = puVar4[2];
              uVar31 = uVar18;
            } while (uVar18 < *(uint *)(param_1 + 0x90));
          }
          FUN_101322d0(*(int *)(param_1 + 0x88));
          *(int *)(param_1 + 0x8c) = iVar21;
          *(int *)(param_1 + 0x88) = iVar21;
          *puVar1 = uVar28;
        }
      }
      piVar29 = (int *)(param_1 + 0x8c);
      uVar28 = *puVar12;
      if (*puVar1 != uVar28) {
        for (; uVar32 < uVar28; uVar28 = uVar28 - 1) {
          puVar4 = (undefined8 *)(*piVar29 + uVar28 * 0x18);
          puVar4[1] = puVar4[-2];
          *puVar4 = puVar4[-3];
          puVar4[2] = puVar4[-1];
        }
        *puVar12 = *puVar12 + 1;
        *(ulonglong *)(*piVar29 + uVar32 * 0x18 + 8) = uVar36;
        *(int **)(*piVar29 + uVar32 * 0x18 + 0x10) = piVar20;
        *(ulonglong *)(*piVar29 + uVar32 * 0x18) = uVar36;
      }
    }
    else {
      uVar31 = 0;
      uVar18 = uVar28;
      do {
        uVar32 = uVar18 + uVar31 >> 1;
        uVar27 = *(ulonglong *)(*(int *)(param_1 + 0x8c) + uVar32 * 0x18);
        uVar26 = uVar32;
        if (uVar27 <= uVar36) {
          if (uVar36 <= uVar27) break;
          uVar31 = uVar32 + 1;
          uVar32 = uVar31;
          uVar26 = uVar18;
        }
        uVar18 = uVar26;
      } while (uVar18 != uVar31);
      if ((uVar32 == uVar28) ||
         (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x8c) + uVar32 * 0x18), *puVar3 != uVar36))
      goto LAB_100e0670;
      *(int **)(puVar3 + 2) = piVar20;
    }
    if (piVar20 == (int *)0x0) goto switchD_100e0158_caseD_11;
  }
  else {
    uVar32 = 0;
    uVar31 = uVar28;
    do {
      uVar18 = uVar31 + uVar32 >> 1;
      uVar27 = *(ulonglong *)(*(int *)(param_1 + 0x8c) + uVar18 * 0x18);
      uVar26 = uVar18;
      if (uVar27 <= uVar36) {
        if (uVar36 <= uVar27) break;
        uVar32 = uVar18 + 1;
        uVar18 = uVar32;
        uVar26 = uVar31;
      }
      uVar31 = uVar26;
    } while (uVar31 != uVar32);
    if ((((uVar18 == uVar28) ||
         (puVar3 = (ulonglong *)(*(int *)(param_1 + 0x8c) + uVar18 * 0x18), *puVar3 != uVar36)) ||
        (puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0)) ||
       (piVar20 = *(int **)puVar3, piVar20 == (int *)0x0)) goto LAB_100e05bc;
    uVar28 = piVar20[1];
    if (uVar28 != 0) {
      iVar21 = *piVar20;
      uVar32 = 0;
      do {
        puVar12 = (uint *)(iVar21 + uVar32 * 0x254);
        uVar31 = *puVar12;
        local_298[0] = uVar31;
        iVar19 = FUN_10132550(puVar12,local_298,0x254);
        if (iVar19 == 0) goto LAB_100e0898;
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar28);
    }
  }
  puVar12 = (uint *)(piVar20 + 2);
  puVar1 = (uint *)(piVar20 + 1);
  uVar28 = *puVar12;
  if (*puVar1 == uVar28) {
    uVar32 = uVar28 << 1;
    if (uVar28 == 0) {
      uVar32 = 0x10;
    }
    uVar30 = (undefined4)((ulonglong)uVar32 * 0x254);
    if ((ulonglong)uVar32 * 0x254 >> 0x20 != 0) {
      uVar30 = 0xffffffff;
    }
    iVar21 = FUN_101322b0(uVar30);
    if (iVar21 == 0) goto switchD_100e0158_caseD_11;
    FUN_101325a0(iVar21,*piVar20,*puVar12 * 0x254);
    FUN_101322d0(*piVar20);
    *piVar20 = iVar21;
    *puVar12 = uVar32;
  }
  FUN_101325a0(*piVar20 + *puVar1 * 0x254,&local_4f0,0x254);
  uVar28 = *puVar1;
  puVar12 = (uint *)(param_1 + 0x98);
  *puVar1 = uVar28 + 1;
  *(uint *)(uVar28 * 0x254 + *piVar20) = *puVar12;
  uVar31 = *puVar12;
  *puVar12 = uVar31 + 2;
LAB_100e0898:
  if (((uVar31 == 0) ||
      (local_4f0 = uVar31,
      puVar22 = (undefined4 *)FUN_100cfc90(param_1 + -0x66b4,&local_4f0,0,uVar35,0),
      puVar22 == (undefined4 *)0x0)) ||
     (uVar36 = FUN_100eb6a8(puVar22,param_2,uVar33 + 1), (uVar36 & 1) == 0))
  goto switchD_100e0158_caseD_11;
  local_704 = FUN_100eb960(puVar22,&DAT_1015e4e0,param_3);
  if (local_704 < 0) {
LAB_100e0988:
    FUN_10132260(puVar22[0x9a],0x254);
    puVar22[0x9a] = 0;
    FUN_101322d0(puVar22[0x9b]);
    *(undefined8 *)(puVar22 + 0x9b) = 0;
    FUN_100a2d78(puVar22 + 5);
    *puVar22 = &PTR_FUN_1015fd68;
    FUN_10132260(puVar22,0x27c);
  }
  else {
    piVar20 = (int *)(param_1 + 0xd0);
    puVar12 = (uint *)(param_1 + 0xd8);
    puVar1 = (uint *)(param_1 + 0xd4);
    uVar28 = *puVar12;
    if (*puVar1 == uVar28) {
      uVar33 = uVar28 << 1;
      if (uVar28 == 0) {
        uVar33 = 0x10;
      }
      iVar21 = uVar33 * 4;
      if (uVar33 >> 0x1e != 0) {
        iVar21 = -1;
      }
      iVar21 = FUN_101322b0(iVar21);
      if (iVar21 == 0) goto LAB_100e0988;
      FUN_101325a0(iVar21,*piVar20,((ulonglong)*puVar12 & 0x3fffffff) << 2);
      FUN_101322d0(*piVar20);
      *piVar20 = iVar21;
      *puVar12 = uVar33;
    }
    *(undefined4 **)(*piVar20 + *puVar1 * 4) = puVar22;
    *puVar1 = *puVar1 + 1;
  }
switchD_100e0158_caseD_11:
  if (bVar17) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return local_704;
}

