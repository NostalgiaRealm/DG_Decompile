/*
 * FUN_1800ba280 at 1800ba280
 * undefined FUN_1800ba280(void)
 * Address ranges: 1800ba280-1800baf5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1800ba280(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  byte bVar21;
  uint uVar22;
  byte bVar23;
  char cVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined1 uVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  undefined1 uVar38;
  undefined8 uVar39;
  int local_71c;
  uint local_700 [16];
  byte local_6c0 [448];
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  char local_4ec [512];
  byte local_2ec [68];
  uint local_2a8 [150];
  
  local_71c = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == (undefined8 *)0x0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar13 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar13 = true;
    iVar16 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar16 == 0) {
      FUN_180003398();
      bVar13 = true;
    }
  }
  *param_3 = 0;
  FUN_1800797d0(&local_500);
  lVar31 = *(longlong *)(param_1 + 0x60);
  uVar25 = 1;
  uVar38 = 0;
  uVar36 = 0;
  uVar29 = *(uint *)(lVar31 + 0xd4);
  local_700[2] = 0;
  local_700[3] = 0;
  local_700[0] = 0;
  local_700[1] = 0;
  local_700[6] = 0;
  local_700[7] = 0;
  local_700[4] = 0;
  local_700[5] = 0;
  bVar14 = true;
  local_700[10] = 0;
  local_700[0xb] = 0;
  local_700[8] = 0;
  local_700[9] = 0;
  local_700[0xe] = 0;
  local_700[0xf] = 0;
  local_700[0xc] = 0;
  local_700[0xd] = 0;
  local_6c0[8] = 0;
  local_6c0[9] = 0;
  local_6c0[10] = 0;
  local_6c0[0xb] = 0;
  local_6c0[0xc] = 0;
  local_6c0[0xd] = 0;
  local_6c0[0xe] = 0;
  local_6c0[0xf] = 0;
  local_6c0[0] = 0;
  local_6c0[1] = 0;
  local_6c0[2] = 0;
  local_6c0[3] = 0;
  local_6c0[4] = 0;
  local_6c0[5] = 0;
  local_6c0[6] = 0;
  local_6c0[7] = 0;
  local_6c0[0x18] = 0;
  local_6c0[0x19] = 0;
  local_6c0[0x1a] = 0;
  local_6c0[0x1b] = 0;
  local_6c0[0x1c] = 0;
  local_6c0[0x1d] = 0;
  local_6c0[0x1e] = 0;
  local_6c0[0x1f] = 0;
  local_6c0[0x10] = 0;
  local_6c0[0x11] = 0;
  local_6c0[0x12] = 0;
  local_6c0[0x13] = 0;
  local_6c0[0x14] = 0;
  local_6c0[0x15] = 0;
  local_6c0[0x16] = 0;
  local_6c0[0x17] = 0;
  uVar30 = 0;
  local_6c0[0x28] = 0;
  local_6c0[0x29] = 0;
  local_6c0[0x2a] = 0;
  local_6c0[0x2b] = 0;
  local_6c0[0x2c] = 0;
  local_6c0[0x2d] = 0;
  local_6c0[0x2e] = 0;
  local_6c0[0x2f] = 0;
  local_6c0[0x20] = 0;
  local_6c0[0x21] = 0;
  local_6c0[0x22] = 0;
  local_6c0[0x23] = 0;
  local_6c0[0x24] = 0;
  local_6c0[0x25] = 0;
  local_6c0[0x26] = 0;
  local_6c0[0x27] = 0;
  local_6c0[0x38] = 0;
  local_6c0[0x39] = 0;
  local_6c0[0x3a] = 0;
  local_6c0[0x3b] = 0;
  local_6c0[0x3c] = 0;
  local_6c0[0x3d] = 0;
  local_6c0[0x3e] = 0;
  local_6c0[0x3f] = 0;
  local_6c0[0x30] = 0;
  local_6c0[0x31] = 0;
  local_6c0[0x32] = 0;
  local_6c0[0x33] = 0;
  local_6c0[0x34] = 0;
  local_6c0[0x35] = 0;
  local_6c0[0x36] = 0;
  local_6c0[0x37] = 0;
  local_6c0[0x48] = 0;
  local_6c0[0x49] = 0;
  local_6c0[0x4a] = 0;
  local_6c0[0x4b] = 0;
  local_6c0[0x4c] = 0;
  local_6c0[0x4d] = 0;
  local_6c0[0x4e] = 0;
  local_6c0[0x4f] = 0;
  local_6c0[0x40] = 0;
  local_6c0[0x41] = 0;
  local_6c0[0x42] = 0;
  local_6c0[0x43] = 0;
  local_6c0[0x44] = 0;
  local_6c0[0x45] = 0;
  local_6c0[0x46] = 0;
  local_6c0[0x47] = 0;
  local_6c0[0x58] = 0;
  local_6c0[0x59] = 0;
  local_6c0[0x5a] = 0;
  local_6c0[0x5b] = 0;
  local_6c0[0x5c] = 0;
  local_6c0[0x5d] = 0;
  local_6c0[0x5e] = 0;
  local_6c0[0x5f] = 0;
  local_6c0[0x50] = 0;
  local_6c0[0x51] = 0;
  local_6c0[0x52] = 0;
  local_6c0[0x53] = 0;
  local_6c0[0x54] = 0;
  local_6c0[0x55] = 0;
  local_6c0[0x56] = 0;
  local_6c0[0x57] = 0;
  local_6c0[0x68] = 0;
  local_6c0[0x69] = 0;
  local_6c0[0x6a] = 0;
  local_6c0[0x6b] = 0;
  local_6c0[0x6c] = 0;
  local_6c0[0x6d] = 0;
  local_6c0[0x6e] = 0;
  local_6c0[0x6f] = 0;
  local_6c0[0x60] = 0;
  local_6c0[0x61] = 0;
  local_6c0[0x62] = 0;
  local_6c0[99] = 0;
  local_6c0[100] = 0;
  local_6c0[0x65] = 0;
  local_6c0[0x66] = 0;
  local_6c0[0x67] = 0;
  local_6c0[0x78] = 0;
  local_6c0[0x79] = 0;
  local_6c0[0x7a] = 0;
  local_6c0[0x7b] = 0;
  local_6c0[0x7c] = 0;
  local_6c0[0x7d] = 0;
  local_6c0[0x7e] = 0;
  local_6c0[0x7f] = 0;
  local_6c0[0x70] = 0;
  local_6c0[0x71] = 0;
  local_6c0[0x72] = 0;
  local_6c0[0x73] = 0;
  local_6c0[0x74] = 0;
  local_6c0[0x75] = 0;
  local_6c0[0x76] = 0;
  local_6c0[0x77] = 0;
  local_6c0[0x88] = 0;
  local_6c0[0x89] = 0;
  local_6c0[0x8a] = 0;
  local_6c0[0x8b] = 0;
  local_6c0[0x8c] = 0;
  local_6c0[0x8d] = 0;
  local_6c0[0x8e] = 0;
  local_6c0[0x8f] = 0;
  local_6c0[0x80] = 0;
  local_6c0[0x81] = 0;
  local_6c0[0x82] = 0;
  local_6c0[0x83] = 0;
  local_6c0[0x84] = 0;
  local_6c0[0x85] = 0;
  local_6c0[0x86] = 0;
  local_6c0[0x87] = 0;
  local_6c0[0x98] = 0;
  local_6c0[0x99] = 0;
  local_6c0[0x9a] = 0;
  local_6c0[0x9b] = 0;
  local_6c0[0x9c] = 0;
  local_6c0[0x9d] = 0;
  local_6c0[0x9e] = 0;
  local_6c0[0x9f] = 0;
  local_6c0[0x90] = 0;
  local_6c0[0x91] = 0;
  local_6c0[0x92] = 0;
  local_6c0[0x93] = 0;
  local_6c0[0x94] = 0;
  local_6c0[0x95] = 0;
  local_6c0[0x96] = 0;
  local_6c0[0x97] = 0;
  local_6c0[0xa8] = 0;
  local_6c0[0xa9] = 0;
  local_6c0[0xaa] = 0;
  local_6c0[0xab] = 0;
  local_6c0[0xac] = 0;
  local_6c0[0xad] = 0;
  local_6c0[0xae] = 0;
  local_6c0[0xaf] = 0;
  local_6c0[0xa0] = 0;
  local_6c0[0xa1] = 0;
  local_6c0[0xa2] = 0;
  local_6c0[0xa3] = 0;
  local_6c0[0xa4] = 0;
  local_6c0[0xa5] = 0;
  local_6c0[0xa6] = 0;
  local_6c0[0xa7] = 0;
  local_6c0[0xb8] = 0;
  local_6c0[0xb9] = 0;
  local_6c0[0xba] = 0;
  local_6c0[0xbb] = 0;
  local_6c0[0xbc] = 0;
  local_6c0[0xbd] = 0;
  local_6c0[0xbe] = 0;
  local_6c0[0xbf] = 0;
  local_6c0[0xb0] = 0;
  local_6c0[0xb1] = 0;
  local_6c0[0xb2] = 0;
  local_6c0[0xb3] = 0;
  local_6c0[0xb4] = 0;
  local_6c0[0xb5] = 0;
  local_6c0[0xb6] = 0;
  local_6c0[0xb7] = 0;
  local_6c0[200] = 0;
  local_6c0[0xc9] = 0;
  local_6c0[0xca] = 0;
  local_6c0[0xcb] = 0;
  local_6c0[0xcc] = 0;
  local_6c0[0xcd] = 0;
  local_6c0[0xce] = 0;
  local_6c0[0xcf] = 0;
  local_6c0[0xc0] = 0;
  local_6c0[0xc1] = 0;
  local_6c0[0xc2] = 0;
  local_6c0[0xc3] = 0;
  local_6c0[0xc4] = 0;
  local_6c0[0xc5] = 0;
  local_6c0[0xc6] = 0;
  local_6c0[199] = 0;
  local_6c0[0xd8] = 0;
  local_6c0[0xd9] = 0;
  local_6c0[0xda] = 0;
  local_6c0[0xdb] = 0;
  local_6c0[0xdc] = 0;
  local_6c0[0xdd] = 0;
  local_6c0[0xde] = 0;
  local_6c0[0xdf] = 0;
  local_6c0[0xd0] = 0;
  local_6c0[0xd1] = 0;
  local_6c0[0xd2] = 0;
  local_6c0[0xd3] = 0;
  local_6c0[0xd4] = 0;
  local_6c0[0xd5] = 0;
  local_6c0[0xd6] = 0;
  local_6c0[0xd7] = 0;
  local_6c0[0xe8] = 0;
  local_6c0[0xe9] = 0;
  local_6c0[0xea] = 0;
  local_6c0[0xeb] = 0;
  local_6c0[0xec] = 0;
  local_6c0[0xed] = 0;
  local_6c0[0xee] = 0;
  local_6c0[0xef] = 0;
  local_6c0[0xe0] = 0;
  local_6c0[0xe1] = 0;
  local_6c0[0xe2] = 0;
  local_6c0[0xe3] = 0;
  local_6c0[0xe4] = 0;
  local_6c0[0xe5] = 0;
  local_6c0[0xe6] = 0;
  local_6c0[0xe7] = 0;
  local_6c0[0xf8] = 0;
  local_6c0[0xf9] = 0;
  local_6c0[0xfa] = 0;
  local_6c0[0xfb] = 0;
  local_6c0[0xfc] = 0;
  local_6c0[0xfd] = 0;
  local_6c0[0xfe] = 0;
  local_6c0[0xff] = 0;
  local_6c0[0xf0] = 0;
  local_6c0[0xf1] = 0;
  local_6c0[0xf2] = 0;
  local_6c0[0xf3] = 0;
  local_6c0[0xf4] = 0;
  local_6c0[0xf5] = 0;
  local_6c0[0xf6] = 0;
  local_6c0[0xf7] = 0;
  local_6c0[0x108] = 0;
  local_6c0[0x109] = 0;
  local_6c0[0x10a] = 0;
  local_6c0[0x10b] = 0;
  local_6c0[0x10c] = 0;
  local_6c0[0x10d] = 0;
  local_6c0[0x10e] = 0;
  local_6c0[0x10f] = 0;
  local_6c0[0x100] = 0;
  local_6c0[0x101] = 0;
  local_6c0[0x102] = 0;
  local_6c0[0x103] = 0;
  local_6c0[0x104] = 0;
  local_6c0[0x105] = 0;
  local_6c0[0x106] = 0;
  local_6c0[0x107] = 0;
  local_6c0[0x118] = 0;
  local_6c0[0x119] = 0;
  local_6c0[0x11a] = 0;
  local_6c0[0x11b] = 0;
  local_6c0[0x11c] = 0;
  local_6c0[0x11d] = 0;
  local_6c0[0x11e] = 0;
  local_6c0[0x11f] = 0;
  local_6c0[0x110] = 0;
  local_6c0[0x111] = 0;
  local_6c0[0x112] = 0;
  local_6c0[0x113] = 0;
  local_6c0[0x114] = 0;
  local_6c0[0x115] = 0;
  local_6c0[0x116] = 0;
  local_6c0[0x117] = 0;
  local_6c0[0x128] = 0;
  local_6c0[0x129] = 0;
  local_6c0[0x12a] = 0;
  local_6c0[299] = 0;
  local_6c0[300] = 0;
  local_6c0[0x12d] = 0;
  local_6c0[0x12e] = 0;
  local_6c0[0x12f] = 0;
  local_6c0[0x120] = 0;
  local_6c0[0x121] = 0;
  local_6c0[0x122] = 0;
  local_6c0[0x123] = 0;
  local_6c0[0x124] = 0;
  local_6c0[0x125] = 0;
  local_6c0[0x126] = 0;
  local_6c0[0x127] = 0;
  local_6c0[0x138] = 0;
  local_6c0[0x139] = 0;
  local_6c0[0x13a] = 0;
  local_6c0[0x13b] = 0;
  local_6c0[0x13c] = 0;
  local_6c0[0x13d] = 0;
  local_6c0[0x13e] = 0;
  local_6c0[0x13f] = 0;
  local_6c0[0x130] = 0;
  local_6c0[0x131] = 0;
  local_6c0[0x132] = 0;
  local_6c0[0x133] = 0;
  local_6c0[0x134] = 0;
  local_6c0[0x135] = 0;
  local_6c0[0x136] = 0;
  local_6c0[0x137] = 0;
  local_6c0[0x148] = 0;
  local_6c0[0x149] = 0;
  local_6c0[0x14a] = 0;
  local_6c0[0x14b] = 0;
  local_6c0[0x14c] = 0;
  local_6c0[0x14d] = 0;
  local_6c0[0x14e] = 0;
  local_6c0[0x14f] = 0;
  local_6c0[0x140] = 0;
  local_6c0[0x141] = 0;
  local_6c0[0x142] = 0;
  local_6c0[0x143] = 0;
  local_6c0[0x144] = 0;
  local_6c0[0x145] = 0;
  local_6c0[0x146] = 0;
  local_6c0[0x147] = 0;
  local_6c0[0x158] = 0;
  local_6c0[0x159] = 0;
  local_6c0[0x15a] = 0;
  local_6c0[0x15b] = 0;
  local_6c0[0x15c] = 0;
  local_6c0[0x15d] = 0;
  local_6c0[0x15e] = 0;
  local_6c0[0x15f] = 0;
  local_6c0[0x150] = 0;
  local_6c0[0x151] = 0;
  local_6c0[0x152] = 0;
  local_6c0[0x153] = 0;
  local_6c0[0x154] = 0;
  local_6c0[0x155] = 0;
  local_6c0[0x156] = 0;
  local_6c0[0x157] = 0;
  local_6c0[0x168] = 0;
  local_6c0[0x169] = 0;
  local_6c0[0x16a] = 0;
  local_6c0[0x16b] = 0;
  local_6c0[0x16c] = 0;
  local_6c0[0x16d] = 0;
  local_6c0[0x16e] = 0;
  local_6c0[0x16f] = 0;
  local_6c0[0x160] = 0;
  local_6c0[0x161] = 0;
  local_6c0[0x162] = 0;
  local_6c0[0x163] = 0;
  local_6c0[0x164] = 0;
  local_6c0[0x165] = 0;
  local_6c0[0x166] = 0;
  local_6c0[0x167] = 0;
  local_6c0[0x178] = 0;
  local_6c0[0x179] = 0;
  local_6c0[0x17a] = 0;
  local_6c0[0x17b] = 0;
  local_6c0[0x17c] = 0;
  local_6c0[0x17d] = 0;
  local_6c0[0x17e] = 0;
  local_6c0[0x17f] = 0;
  local_6c0[0x170] = 0;
  local_6c0[0x171] = 0;
  local_6c0[0x172] = 0;
  local_6c0[0x173] = 0;
  local_6c0[0x174] = 0;
  local_6c0[0x175] = 0;
  local_6c0[0x176] = 0;
  local_6c0[0x177] = 0;
  local_6c0[0x188] = 0;
  local_6c0[0x189] = 0;
  local_6c0[0x18a] = 0;
  local_6c0[0x18b] = 0;
  local_6c0[0x18c] = 0;
  local_6c0[0x18d] = 0;
  local_6c0[0x18e] = 0;
  local_6c0[399] = 0;
  local_6c0[0x180] = 0;
  local_6c0[0x181] = 0;
  local_6c0[0x182] = 0;
  local_6c0[0x183] = 0;
  local_6c0[0x184] = 0;
  local_6c0[0x185] = 0;
  local_6c0[0x186] = 0;
  local_6c0[0x187] = 0;
  local_6c0[0x198] = 0;
  local_6c0[0x199] = 0;
  local_6c0[0x19a] = 0;
  local_6c0[0x19b] = 0;
  local_6c0[0x19c] = 0;
  local_6c0[0x19d] = 0;
  local_6c0[0x19e] = 0;
  local_6c0[0x19f] = 0;
  local_6c0[400] = 0;
  local_6c0[0x191] = 0;
  local_6c0[0x192] = 0;
  local_6c0[0x193] = 0;
  local_6c0[0x194] = 0;
  local_6c0[0x195] = 0;
  local_6c0[0x196] = 0;
  local_6c0[0x197] = 0;
  local_6c0[0x1a8] = 0;
  local_6c0[0x1a9] = 0;
  local_6c0[0x1aa] = 0;
  local_6c0[0x1ab] = 0;
  local_6c0[0x1ac] = 0;
  local_6c0[0x1ad] = 0;
  local_6c0[0x1ae] = 0;
  local_6c0[0x1af] = 0;
  local_6c0[0x1a0] = 0;
  local_6c0[0x1a1] = 0;
  local_6c0[0x1a2] = 0;
  local_6c0[0x1a3] = 0;
  local_6c0[0x1a4] = 0;
  local_6c0[0x1a5] = 0;
  local_6c0[0x1a6] = 0;
  local_6c0[0x1a7] = 0;
  local_6c0[0x1b8] = 0;
  local_6c0[0x1b9] = 0;
  local_6c0[0x1ba] = 0;
  local_6c0[0x1bb] = 0;
  local_6c0[0x1bc] = 0;
  local_6c0[0x1bd] = 0;
  local_6c0[0x1be] = 0;
  local_6c0[0x1bf] = 0;
  local_6c0[0x1b0] = 0;
  local_6c0[0x1b1] = 0;
  local_6c0[0x1b2] = 0;
  local_6c0[0x1b3] = 0;
  local_6c0[0x1b4] = 0;
  local_6c0[0x1b5] = 0;
  local_6c0[0x1b6] = 0;
  local_6c0[0x1b7] = 0;
  uVar15 = local_4fc;
  do {
    lVar26 = uVar36 * 8;
    uVar7 = *(ushort *)(param_2 + lVar26);
    lVar2 = param_2 + lVar26;
    if (((((uVar7 == 0xff) && (*(short *)(param_2 + 2 + lVar26) == 0)) &&
         (*(char *)(lVar2 + 4) == '\x11')) &&
        ((*(char *)(lVar2 + 5) == '\0' && (*(char *)(lVar2 + 6) == '\0')))) &&
       (*(char *)(lVar2 + 7) == '\0')) break;
    uVar25 = (uint)uVar36 < 0x40 & uVar25;
    if (uVar25 == 0) {
      uVar25 = 0;
    }
    else if (*(uint *)(lVar31 + 0xbc) <= (uint)uVar7) {
      uVar25 = 0;
    }
    uVar8 = *(ushort *)(param_2 + 2 + lVar26);
    uVar37 = (uint)uVar7;
    uVar28 = uVar25;
    if (uVar25 != 0) {
      if ((uVar8 & 3) != 0) {
        uVar25 = 0;
      }
      bVar14 = (bool)((uint)uVar8 == local_700[uVar37] & bVar14);
      uVar28 = 0;
      if (bVar14 || (uVar29 & 0x40) != 0) {
        uVar28 = uVar25;
      }
    }
    bVar23 = 0;
    uVar17 = 0x11;
    uVar35 = 1;
    if (uVar28 == 0) goto LAB_1800ba5dc;
    bVar21 = *(byte *)(lVar2 + 6);
    if (0xd < bVar21) goto switchD_1800ba600_caseD_11;
    bVar6 = *(byte *)(lVar2 + 7);
    uVar22 = (uint)bVar6;
    uVar25 = 0x11;
    switch(bVar21) {
    case 0:
      uVar25 = 0x11;
      if (bVar6 == 1) {
        uVar25 = 0xf;
      }
      if (bVar6 == 0) {
        uVar25 = 0;
      }
      uVar17 = (ulonglong)uVar25;
      uVar28 = (uVar15 - 2 & 0xfffffffd) == 0 & uVar28;
      uVar15 = 2;
      bVar23 = bVar6 & 0xf;
      local_4fc = 2;
      goto LAB_1800ba548;
    case 1:
      if (uVar22 == 0) {
        uVar25 = uVar35;
      }
      uVar17 = (ulonglong)uVar25;
      bVar23 = bVar6 & 0xf | 0x10;
      goto LAB_1800ba5ac;
    case 2:
      if (uVar22 == 0) {
        uVar25 = 2;
      }
      uVar17 = (ulonglong)uVar25;
      bVar23 = bVar6 & 0xf | 0x20;
      goto LAB_1800ba5ac;
    case 3:
      uVar25 = 0x10;
      if (bVar6 != 1) {
        uVar25 = 0x11;
      }
      if (uVar22 == 0) {
        uVar25 = 3;
      }
      uVar17 = (ulonglong)uVar25;
      bVar23 = bVar6 & 0xf | 0x30;
      goto LAB_1800ba5ac;
    case 4:
      cVar24 = '\x04';
      if (bVar6 == 0) {
        uVar25 = 4;
      }
      uVar17 = (ulonglong)uVar25;
      break;
    case 5:
      if (bVar6 < 8) {
        uVar17 = (ulonglong)(byte)(bVar6 + 7);
      }
      cVar24 = '\x05';
      break;
    case 6:
      bVar23 = bVar6 & 0xf | 0x60;
      goto LAB_1800ba5ac;
    case 7:
      cVar24 = '\a';
      break;
    case 8:
      cVar24 = '\b';
      break;
    case 9:
      uVar17 = 0;
      bVar23 = 0x90;
      uVar25 = bVar6 == 0 & uVar28;
      if (uVar25 == 0) {
        uVar28 = 0;
      }
      else {
        local_4fc = 0;
        uVar28 = 0;
        if ((uVar15 & 0xfffffffb) == 0) {
          uVar28 = uVar25;
        }
        uVar15 = 0;
      }
LAB_1800ba548:
      if (uVar28 != 0) goto LAB_1800ba5ac;
      goto LAB_1800ba5dc;
    case 10:
      if (uVar22 == 1) {
        uVar25 = 6;
      }
      bVar23 = bVar6 & 0xf | 0xa0;
      if (bVar6 == 0) {
        uVar25 = 5;
      }
      uVar17 = (ulonglong)uVar25;
      goto LAB_1800ba5ac;
    case 0xb:
      cVar24 = '\v';
      break;
    case 0xc:
      cVar24 = '\f';
      break;
    case 0xd:
      cVar24 = '\r';
    }
    bVar23 = bVar6 & 0xf | cVar24 << 4;
LAB_1800ba5ac:
    uVar22 = 1 << (ulonglong)(uVar22 & 7);
    uVar25 = (uint)bVar21 << 5 | (uint)(bVar6 >> 3);
    bVar21 = local_6c0[uVar25];
    local_6c0[uVar25] = bVar21 | (byte)uVar22;
    if (((uint)bVar21 & uVar22 & 0xff) != 0) {
      uVar28 = 0;
    }
LAB_1800ba5dc:
    uVar25 = 0;
    if (uVar28 == 0) goto LAB_1800ba8c0;
    uVar25 = 0;
    uVar28 = 0;
    switch(*(undefined1 *)(lVar2 + 4)) {
    case 0:
      cVar24 = '\x01';
      lVar26 = 0;
      uVar28 = uVar25;
      break;
    case 1:
      cVar24 = '\x02';
      bVar21 = 8;
      lVar26 = 1;
      goto LAB_1800ba710;
    case 2:
      cVar24 = '\x03';
      bVar21 = 0xc;
      lVar26 = 2;
      goto LAB_1800ba710;
    case 3:
      cVar24 = '\x04';
      bVar21 = 0x10;
      lVar26 = 3;
      goto LAB_1800ba710;
    case 4:
      cVar24 = '\x04';
      lVar26 = 4;
      uVar28 = uVar25;
      break;
    case 5:
      cVar24 = '\x04';
      lVar26 = 5;
      uVar28 = 1;
      break;
    case 6:
      cVar24 = '\x02';
      lVar26 = 6;
      uVar28 = uVar25;
      break;
    case 7:
      cVar24 = '\x04';
      bVar21 = 8;
      lVar26 = 7;
      goto LAB_1800ba710;
    case 8:
      cVar24 = '\x04';
      lVar26 = 8;
      uVar28 = 2;
      break;
    case 9:
      cVar24 = '\x02';
      lVar26 = 9;
      uVar28 = 4;
      break;
    case 10:
      cVar24 = '\x04';
      bVar21 = 8;
      lVar26 = 10;
      uVar28 = 8;
      goto LAB_1800ba710;
    case 0xb:
      cVar24 = '\x02';
      lVar26 = 0xb;
      uVar28 = 0x10;
      break;
    case 0xc:
      cVar24 = '\x04';
      bVar21 = 8;
      lVar26 = 0xc;
      uVar28 = 0x20;
      goto LAB_1800ba710;
    case 0xd:
      lVar26 = 0xf;
      uVar28 = 0x40;
      goto LAB_1800ba708;
    case 0xe:
      lVar26 = 0x10;
      uVar28 = 0x80;
LAB_1800ba708:
      cVar24 = '\x03';
      break;
    case 0xf:
      cVar24 = '\x02';
      lVar26 = 0xd;
      uVar28 = 0x100;
      break;
    case 0x10:
      cVar24 = '\x04';
      bVar21 = 8;
      lVar26 = 0xe;
      uVar28 = 0x200;
      goto LAB_1800ba710;
    default:
      goto switchD_1800ba600_caseD_11;
    }
    bVar21 = 4;
LAB_1800ba710:
    if (((uVar28 == 0) || ((*(uint *)(lVar31 + 0xec) & uVar28) != 0)) ||
       ((*(uint *)(param_1 + -0x59c0) >> 6 & 1) == 0)) {
      uVar25 = uVar35;
      if ((uVar28 != 0) && ((*(uint *)(lVar31 + 0xec) & uVar28) == 0)) {
        bVar20 = true;
        goto LAB_1800ba750;
      }
LAB_1800ba760:
      bVar6 = *(byte *)(lVar2 + 5);
      if (((bVar6 - 1 < 3) || ((bVar6 - 4 & 0xfffffffd) == 0)) || (bVar6 != 0))
      goto switchD_1800ba600_caseD_11;
      uVar25 = uVar8 < 0x400 & uVar25;
      cVar9 = local_4ec[uVar30 * 8];
      while (cVar9 != -1) {
        uVar30 = (ulonglong)((uint)uVar30 + 1);
        cVar9 = local_4ec[uVar30 * 8];
      }
      uVar15 = (uint)uVar17;
      uVar32 = uVar30;
      if ((uVar15 != 0x11) && (uVar32 = uVar17, uVar15 < (uint)uVar30)) {
        *(undefined8 *)(local_4ec + uVar30 * 8) = *(undefined8 *)(local_4ec + uVar17 * 8);
        uVar17 = 0;
        if (local_4f8 != 0) {
          do {
            if (local_2ec[uVar17] == uVar15) {
              local_2ec[uVar17] = (byte)uVar30;
              break;
            }
            uVar28 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar28;
          } while (uVar28 < local_4f8);
        }
        local_2ec[local_4f8] = (byte)uVar30;
      }
      lVar2 = uVar32 * 8;
      local_4ec[lVar2] = (char)uVar7;
      local_4ec[lVar2 + 1] = cVar24;
      local_4ec[lVar2 + 2] = bVar21;
      uVar28 = (uint)uVar8 + (uint)bVar21;
      local_4ec[lVar2 + 4] = (char)lVar26;
      local_4ec[lVar2 + 3] = (char)(uVar8 >> 2);
      local_4ec[lVar2 + 5] = bVar23;
      local_4ec[lVar2 + 6] = (&DAT_18022c640)[lVar26];
      local_4f0 = 1 << (ulonglong)(uVar37 & 0x1f) | local_4f0;
      local_2ec[local_4f8] = (byte)uVar32;
      local_4f8 = local_4f8 + 1;
      uVar15 = local_4fc;
      if (local_700[uVar37] < uVar28) {
        local_700[uVar37] = uVar28;
      }
    }
    else {
      bVar20 = false;
      uVar25 = 0;
LAB_1800ba750:
      uVar38 = 1;
      if (bVar20) goto LAB_1800ba760;
    }
LAB_1800ba8c0:
    uVar36 = (ulonglong)((uint)uVar36 + 1);
  } while (uVar25 != 0);
  if (uVar25 == 0) goto switchD_1800ba600_caseD_11;
  local_4fc = 2;
  if (uVar15 != 4) {
    local_4fc = uVar15;
  }
  local_4f4 = local_700[0];
  thunk_FUN_180001218(local_2a8,&local_500,0x254);
  uVar17 = 0;
  uVar30 = 0;
  do {
    puVar1 = local_2a8 + uVar30;
    uVar32 = uVar30 & 1;
    uVar30 = uVar30 + 1;
    uVar17 = ((ulonglong)*puVar1 << (uVar32 << 5)) + uVar17;
  } while (uVar30 != 0x95);
  uVar25 = *(uint *)(param_1 + 200);
  if (uVar25 == 0) {
LAB_1800ba9ec:
    plVar33 = (longlong *)FUN_180102f80(0x10);
    if (plVar33 == (longlong *)0x0) {
      plVar33 = (longlong *)0x0;
    }
    else {
      *plVar33 = 0;
      plVar33[1] = 0;
    }
    uVar25 = *(uint *)(param_1 + 200);
    uVar30 = 0;
    if (uVar25 != 0) {
      uVar29 = 0;
      uVar15 = uVar25;
      do {
        uVar28 = uVar15 + uVar29 >> 1;
        uVar30 = (ulonglong)uVar28;
        uVar32 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18);
        if (uVar32 <= uVar17) {
          if (uVar17 <= uVar32) break;
          uVar29 = uVar28 + 1;
          uVar30 = (ulonglong)(uVar28 + 1);
          uVar28 = uVar15;
        }
        uVar15 = uVar28;
      } while (uVar15 != uVar29);
    }
    if (((uint)uVar30 == uVar25) ||
       (puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18), *puVar3 != uVar17)) {
      uVar29 = *(uint *)(param_1 + 0xcc);
      if (uVar29 == uVar25) {
        uVar25 = 0x10;
        if (uVar29 != 0) {
          uVar25 = uVar29 << 1;
        }
        lVar31 = thunk_FUN_180102f80((ulonglong)uVar25 * 0x18);
        if (lVar31 != 0) {
          uVar32 = 0;
          if (*(int *)(param_1 + 200) != 0) {
            do {
              uVar29 = (int)uVar32 + 1;
              puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar32 * 0x18);
              puVar4 = (undefined8 *)(lVar31 + uVar32 * 0x18);
              uVar39 = *puVar18;
              puVar4[1] = puVar18[1];
              *puVar4 = uVar39;
              puVar4[2] = puVar18[2];
              uVar32 = (ulonglong)uVar29;
            } while (uVar29 < *(uint *)(param_1 + 200));
          }
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xb8));
          *(longlong *)(param_1 + 0xb8) = lVar31;
          *(longlong *)(param_1 + 0xc0) = lVar31;
          *(uint *)(param_1 + 0xcc) = uVar25;
        }
      }
      uVar32 = (ulonglong)*(uint *)(param_1 + 200);
      if (*(uint *)(param_1 + 0xcc) != *(uint *)(param_1 + 200)) {
        while ((uint)uVar30 < (uint)uVar32) {
          uVar27 = (ulonglong)((uint)uVar32 - 1);
          puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar32 * 0x18);
          puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar27 * 0x18);
          uVar39 = *puVar4;
          puVar18[1] = puVar4[1];
          *puVar18 = uVar39;
          puVar18[2] = puVar4[2];
          uVar32 = uVar27;
        }
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18 + 8) = uVar17;
        *(longlong **)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18 + 0x10) = plVar33;
        *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18) = uVar17;
      }
    }
    else {
      puVar3[2] = (ulonglong)plVar33;
    }
    if (plVar33 == (longlong *)0x0) goto switchD_1800ba600_caseD_11;
  }
  else {
    uVar29 = 0;
    uVar15 = uVar25;
    do {
      uVar28 = uVar15 + uVar29 >> 1;
      uVar30 = (ulonglong)uVar28;
      uVar32 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18);
      if (uVar32 <= uVar17) {
        if (uVar17 <= uVar32) break;
        uVar29 = uVar28 + 1;
        uVar30 = (ulonglong)(uVar28 + 1);
        uVar28 = uVar15;
      }
      uVar15 = uVar28;
    } while (uVar15 != uVar29);
    if ((((uint)uVar30 == uVar25) ||
        (puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + uVar30 * 0x18), *puVar3 != uVar17))
       || ((puVar3 = puVar3 + 2, puVar3 == (ulonglong *)0x0 ||
           (plVar33 = (longlong *)*puVar3, plVar33 == (longlong *)0x0)))) goto LAB_1800ba9ec;
    uVar25 = *(uint *)(plVar33 + 1);
    if (uVar25 != 0) {
      lVar31 = *plVar33;
      uVar30 = 0;
      do {
        uVar29 = *(uint *)(uVar30 * 0x254 + lVar31);
        local_2a8[0] = uVar29;
        iVar16 = func_0x000180222c00(uVar30 * 0x254 + lVar31,local_2a8,0x254);
        if (iVar16 == 0) goto LAB_1800bac1c;
        uVar29 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar29;
      } while (uVar29 < uVar25);
    }
  }
  iVar16 = *(int *)((longlong)plVar33 + 0xc);
  if ((int)plVar33[1] == iVar16) {
    uVar25 = iVar16 << 1;
    if (iVar16 == 0) {
      uVar25 = 0x10;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = CONCAT44(0,uVar25);
    lVar31 = CONCAT44(0,uVar25) * 0x254;
    if (SUB168(auVar10 * ZEXT816(0x254),8) != 0) {
      lVar31 = -1;
    }
    lVar31 = thunk_FUN_180102f80(lVar31);
    if (lVar31 == 0) goto switchD_1800ba600_caseD_11;
    thunk_FUN_180001218(lVar31,*plVar33,(ulonglong)*(uint *)((longlong)plVar33 + 0xc) * 0x254);
    thunk_FUN_180102fc0(*plVar33);
    *plVar33 = lVar31;
    *(uint *)((longlong)plVar33 + 0xc) = uVar25;
  }
  thunk_FUN_180001218(*plVar33 + (ulonglong)*(uint *)(plVar33 + 1) * 0x254,&local_500,0x254);
  uVar25 = *(uint *)(plVar33 + 1);
  *(uint *)(plVar33 + 1) = uVar25 + 1;
  *(undefined4 *)(*plVar33 + (ulonglong)uVar25 * 0x254) = *(undefined4 *)(param_1 + 0xd0);
  uVar29 = *(uint *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = uVar29 + 2;
LAB_1800bac1c:
  uVar34 = 1;
  if ((uVar29 == 0) ||
     (local_500 = uVar29, puVar18 = (undefined8 *)FUN_180102f80(0x298), puVar18 == (undefined8 *)0x0
     )) goto switchD_1800ba600_caseD_11;
  *puVar18 = &PTR_FUN_180236c38;
  puVar18[1] = 0;
  puVar18[2] = puVar18;
  puVar18[3] = param_1 + -0x6838;
  thunk_FUN_180001218(puVar18 + 4,&local_500,0x254);
  puVar18[0x51] = 0;
  puVar18[0x4f] = 0;
  puVar18[0x50] = 0;
  uVar25 = (int)uVar36 + 1;
  uVar30 = CONCAT44(0,uVar25);
  *(undefined2 *)(puVar18 + 0x52) = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar30;
  lVar31 = uVar30 << 3;
  *(undefined1 *)((longlong)puVar18 + 0x292) = uVar38;
  *(undefined1 *)((longlong)puVar18 + 0x293) = 0;
  if (SUB168(auVar11 * ZEXT816(8),8) != 0) {
    lVar31 = -1;
  }
  lVar31 = thunk_FUN_180102f80(lVar31);
  if (lVar31 == 0) goto switchD_1800ba600_caseD_11;
  puVar18[0x50] = lVar31;
  thunk_FUN_180001218(lVar31,param_2,uVar30 << 3);
  *(uint *)(puVar18 + 0x51) = uVar25;
  if (*(int *)(puVar18 + 6) == 1) {
    bVar14 = true;
  }
  else {
    puVar19 = (undefined4 *)FUN_180102f80(0x254);
    bVar14 = puVar19 != (undefined4 *)0x0;
    puVar18[0x4f] = puVar19;
    if (puVar19 != (undefined4 *)0x0) {
      if (*(int *)(puVar18 + 6) == 1) {
        thunk_FUN_180001218(puVar19,puVar18 + 4,0x254);
      }
      else {
        FUN_1800797d0();
        iVar16 = 0;
        *puVar19 = *(undefined4 *)(puVar18 + 4);
        puVar19[1] = *(undefined4 *)((longlong)puVar18 + 0x24);
        uVar5 = *(undefined4 *)(puVar18 + 5);
        puVar19[4] = 1;
        puVar19[2] = uVar5;
        uVar30 = 0;
        if (*(int *)(puVar18 + 5) != 0) {
          do {
            *(undefined1 *)((longlong)puVar19 + uVar30 + 0x214) =
                 *(undefined1 *)((longlong)puVar18 + uVar30 + 0x234);
            uVar36 = (ulonglong)*(byte *)((longlong)puVar18 + uVar30 + 0x234);
            uVar25 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar25;
            *(undefined1 *)(puVar19 + uVar36 * 2 + 5) = 0;
            *(undefined1 *)((longlong)puVar19 + uVar36 * 8 + 0x15) =
                 *(undefined1 *)((longlong)puVar18 + uVar36 * 8 + 0x35);
            uVar38 = *(undefined1 *)((longlong)puVar18 + uVar36 * 8 + 0x36);
            *(char *)((longlong)puVar19 + uVar36 * 8 + 0x17) = (char)iVar16;
            *(undefined1 *)((longlong)puVar19 + uVar36 * 8 + 0x16) = uVar38;
            *(undefined1 *)(puVar19 + uVar36 * 2 + 6) = *(undefined1 *)(puVar18 + uVar36 + 7);
            *(undefined1 *)((longlong)puVar19 + uVar36 * 8 + 0x19) =
                 *(undefined1 *)((longlong)puVar18 + uVar36 * 8 + 0x39);
            iVar16 = iVar16 + (uint)(*(byte *)((longlong)puVar18 + uVar36 * 8 + 0x36) >> 2);
          } while (uVar25 < *(uint *)(puVar18 + 5));
        }
        puVar19[3] = iVar16 << 2;
      }
    }
  }
  if (*(char *)((longlong)puVar18 + 0x293) == '\0') {
    uVar29 = *(uint *)(puVar18 + 5);
    bVar20 = false;
    uVar25 = 0;
    do {
      if (uVar29 <= uVar25) break;
      if ((*(char *)((longlong)puVar18 + (ulonglong)uVar25 + 0x234) != '\0') ||
         (bVar20 = true,
         *(char *)((longlong)puVar18 + 0x39) != '\0' && *(char *)((longlong)puVar18 + 0x39) != -0x70
         )) {
        bVar20 = false;
      }
      uVar25 = uVar25 + 1;
    } while (!bVar20);
    *(bool *)(puVar18 + 0x52) = bVar20;
    uVar30 = 0;
    if (uVar29 != 0) {
      do {
        if (4 < *(byte *)(puVar18 + (ulonglong)*(byte *)((longlong)puVar18 + uVar30 + 0x234) + 7)) {
          uVar34 = 0;
          break;
        }
        uVar25 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar25;
      } while (uVar25 < uVar29);
    }
  }
  else {
    *(undefined1 *)(puVar18 + 0x52) = 1;
  }
  *(undefined1 *)((longlong)puVar18 + 0x291) = uVar34;
  if (!bVar14) goto switchD_1800ba600_caseD_11;
  local_71c = FUN_1800c8840(puVar18,&DAT_180229528,param_3);
  if (local_71c < 0) {
LAB_1800baed4:
    FUN_180102fc0(puVar18[0x4f],0x254);
    puVar18[0x4f] = 0;
    thunk_FUN_180102fc0(puVar18[0x50]);
    puVar18[0x50] = 0;
    *(undefined4 *)(puVar18 + 0x51) = 0;
    FUN_1800797d0(puVar18 + 4);
    *puVar18 = &PTR_FUN_180236c38;
    FUN_180102fc0(puVar18,0x298);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x134);
    if (*(int *)(param_1 + 0x130) == iVar16) {
      uVar25 = iVar16 << 1;
      if (iVar16 == 0) {
        uVar25 = 0x10;
      }
      lVar31 = CONCAT44(0,uVar25) << 3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = CONCAT44(0,uVar25);
      if (SUB168(auVar12 * ZEXT816(8),8) != 0) {
        lVar31 = -1;
      }
      lVar31 = thunk_FUN_180102f80(lVar31);
      if (lVar31 == 0) goto LAB_1800baed4;
      thunk_FUN_180001218(lVar31,*(undefined8 *)(param_1 + 0x128),
                          (ulonglong)*(uint *)(param_1 + 0x134) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x128));
      *(longlong *)(param_1 + 0x128) = lVar31;
      *(uint *)(param_1 + 0x134) = uVar25;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 8) =
         puVar18;
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  }
switchD_1800ba600_caseD_11:
  if (bVar13) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return local_71c;
}

