/*
 * FUN_18014c840 at 18014c840
 * undefined FUN_18014c840(void)
 * Address ranges: 18014c840-18014e61f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014c840(ulonglong *param_1,int param_2,uint *param_3,ulonglong param_4,ulonglong param_5,
                  int param_6,int param_7,undefined4 param_8,uint param_9,byte param_10)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  int iVar16;
  ulonglong *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  code *extraout_x11;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  ulonglong uVar50;
  undefined1 auVar51 [16];
  float local_a70 [2];
  undefined8 local_a68;
  longlong local_a60;
  float local_a58;
  ulonglong *local_a50;
  float local_a48;
  ulonglong *local_a40;
  float local_a38;
  float local_a34;
  float local_a30;
  uint local_a2c;
  ulonglong *local_a28;
  ulonglong local_a20;
  uint local_a18;
  int local_a14;
  float local_a10;
  ulonglong *local_a08;
  int local_a00;
  uint local_9fc;
  ulonglong *local_9f8;
  uint *local_9f0;
  ulonglong *local_9e8;
  float local_9e0;
  float local_9dc;
  float local_9d8;
  int local_9d4;
  int local_9d0;
  float local_9cc;
  float local_9c8;
  float local_9c4;
  float local_9c0;
  uint *local_9b8;
  uint *local_9b0;
  undefined1 uStack_9a8;
  undefined7 uStack_9a7;
  uint local_9a0;
  ulonglong local_998;
  undefined *local_990;
  byte *local_988;
  byte *local_980;
  byte *local_978;
  byte *local_970;
  byte *local_968;
  byte *local_960;
  byte *local_958;
  ulonglong local_950;
  ulonglong local_940;
  ulonglong uStack_938;
  ulonglong uStack_930;
  ulonglong uStack_928;
  ulonglong local_920;
  ulonglong uStack_918;
  ulonglong local_910;
  ulonglong uStack_908;
  ulonglong local_900;
  ulonglong uStack_8f8;
  ulonglong uStack_8f0;
  ulonglong local_8e8;
  ulonglong local_8e0;
  ulonglong local_8d0 [6];
  float local_8a0;
  float fStack_89c;
  float fStack_898;
  float fStack_894;
  float local_890;
  float local_88c;
  float local_888;
  float local_884;
  float local_880;
  float fStack_87c;
  float fStack_878;
  float fStack_874;
  float local_870;
  float local_86c;
  float local_868;
  float local_864;
  ulonglong local_860;
  ulonglong uStack_858;
  ulonglong uStack_850;
  ulonglong uStack_848;
  undefined1 auStack_840 [2048];
  
  local_a14 = param_2;
  local_950 = param_4;
  local_8e0 = param_5;
  local_a28 = param_1 + 0x1e00;
  local_9d4 = param_7;
  local_9d0 = param_6;
  local_a40 = param_1 + 0x1800;
  local_990 = (undefined *)CONCAT44(local_990._4_4_,param_8);
  local_a50 = param_1 + 0x1000;
  local_a08 = param_1 + 0xe00;
  local_9f8 = param_1 + 0x800;
  if ((char)param_3[7] == -1) {
    uVar26 = 0;
  }
  else {
    uVar26 = (uint)*(byte *)((longlong)param_3 + 0x1d);
  }
  local_a18 = *(uint *)((longlong)param_1 + 0x764c);
  if (local_a18 < uVar26) {
    uVar26 = local_a18;
  }
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    uVar12 = (ulonglong)*(byte *)((longlong)param_3 + 0x1a);
  }
  else {
    uVar12 = 0;
  }
  bVar6 = *(char *)((longlong)param_3 + 0x41) != -0x60;
  if (bVar6) {
    uVar27 = 2;
  }
  else {
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x42) << 0x14);
    uVar27 = 3;
  }
  uVar21 = (uint)!bVar6;
  if (*(char *)((longlong)param_3 + 0x49) == -0x5f) {
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x4a) << 0x18);
    uVar21 = uVar27;
  }
  if (*(char *)((longlong)param_3 + 0x31) == '0') {
    uVar21 = uVar21 | 4;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x32) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x51) == 'P') {
    uVar21 = uVar21 | 8;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x52) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x59) == 'Q') {
    uVar10 = (ulonglong)*(byte *)((longlong)param_3 + 0x5a);
    uVar21 = uVar21 | 0x10;
  }
  else {
    uVar10 = 0;
  }
  if (*(char *)((longlong)param_3 + 0x61) == 'R') {
    uVar21 = uVar21 | 0x20;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x62) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x69) == 'S') {
    uVar21 = uVar21 | 0x40;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x6a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x71) == 'T') {
    uVar21 = uVar21 | 0x80;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x72) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x79) == 'U') {
    uVar21 = uVar21 | 0x100;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x7a) << 0x10);
  }
  if (*(char *)((longlong)param_3 + 0x81) == 'V') {
    uVar21 = uVar21 | 0x200;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x82) << 0x14);
  }
  if (*(char *)((longlong)param_3 + 0x89) == 'W') {
    uVar21 = uVar21 | 0x400;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x8a) << 0x18);
  }
  if (*(char *)((longlong)param_3 + 0x21) == '\x10') {
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x22) << 4);
    uVar21 = *(uint *)(&DAT_18022ac30 + (ulonglong)uVar26 * 4) | uVar21;
  }
  if (*(char *)((longlong)param_3 + 0x91) == '\x01') {
    uVar21 = uVar21 | 0x10000;
    uVar10 = (ulonglong)((uint)uVar10 | (uint)*(byte *)((longlong)param_3 + 0x92) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x99) == '1') {
    uVar21 = uVar21 | 0x20000;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x9a) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x29) == ' ') {
    uVar21 = uVar21 | (uint)((int)param_1[0xde4] != 0 && local_a18 != 0) << 0xf;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x2a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x39) == '@') {
    uVar21 = uVar21 | 0x80000;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x3a) << 0x10);
  }
  local_9fc = uVar21 | (uint)(param_3[1] != 0) << 0x12;
  local_9a0 = (uint)(local_a18 == 0xff);
  if ((2 < param_2 - 4U) || (bVar6 = true, *(float *)(param_1 + 0x1d5) < 2.0)) {
    bVar6 = false;
  }
  if (((*(uint *)((longlong)param_1 + 0x696c) & 1) == 0) ||
     (*(char *)((longlong)param_1 + 0xeac) != '\0')) {
    uVar26 = (uint)param_1[0xd2d];
  }
  else {
    uVar26 = (uint)*(float *)((longlong)param_1 + 0x6f64);
  }
  if (((((*(uint *)((longlong)param_1 + 0x6ea4) == (uint)*(byte *)((longlong)param_3 + 0x4d)) &&
        (*(uint *)((longlong)param_1 + 0x6eb4) == (uint)*(byte *)((longlong)param_3 + 0x55))) &&
       (*(uint *)((longlong)param_1 + 0x6ec4) == (uint)*(byte *)((longlong)param_3 + 0x5d))) &&
      ((*(uint *)((longlong)param_1 + 0x6ed4) == (uint)*(byte *)((longlong)param_3 + 0x65) &&
       (*(uint *)((longlong)param_1 + 0x6ee4) == (uint)*(byte *)((longlong)param_3 + 0x6d))))) &&
     ((*(uint *)((longlong)param_1 + 0x6ef4) == (uint)*(byte *)((longlong)param_3 + 0x75) &&
      ((*(uint *)((longlong)param_1 + 0x6f04) == (uint)*(byte *)((longlong)param_3 + 0x7d) &&
       (*(uint *)((longlong)param_1 + 0x6f14) == (uint)*(byte *)((longlong)param_3 + 0x85))))))) {
    local_a00 = 0;
    local_960 = (byte *)((longlong)param_3 + 0x7d);
    local_968 = (byte *)((longlong)param_3 + 0x75);
    local_970 = (byte *)((longlong)param_3 + 0x6d);
    local_978 = (byte *)((longlong)param_3 + 0x65);
    local_980 = (byte *)((longlong)param_3 + 0x5d);
    local_988 = (byte *)((longlong)param_3 + 0x55);
    local_958 = (byte *)((longlong)param_3 + 0x85);
  }
  else {
    local_a00 = 1;
    local_958 = (byte *)((longlong)param_3 + 0x85);
    local_960 = (byte *)((longlong)param_3 + 0x7d);
    local_968 = (byte *)((longlong)param_3 + 0x75);
    local_970 = (byte *)((longlong)param_3 + 0x6d);
    local_978 = (byte *)((longlong)param_3 + 0x65);
    local_980 = (byte *)((longlong)param_3 + 0x5d);
    local_988 = (byte *)((longlong)param_3 + 0x55);
  }
  if (param_3[1] == 0) {
    local_a2c = 0;
    if (*(char *)((longlong)param_1 + 0x7664) != '\0') {
      local_a2c = 8;
    }
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0x7654) >> 2 & 1) == 0) || ((int)param_1[0xeca] == 0)) {
      local_a2c = 2;
      uVar27 = 1;
    }
    else {
      local_a2c = 4;
      uVar27 = 3;
    }
    if ((((param_1[0x1efc] == 0) && ((char)param_1[0x15] != '\0')) && ((char)param_1[0xecc] == '\0')
        ) && (uVar15 = ((uint)param_1[0x1ee] & 0xaaaaaaaa) >> 1 |
                       ((uint)param_1[0x1ee] & 0x55555555) << 1,
             uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2,
             uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4,
             uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
             (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) < 5)) {
      local_a2c = 5;
    }
    if (bVar6) {
      local_a2c = 7;
      uVar27 = 6;
    }
    if ((char)param_1[2] == '\0') {
      bVar7 = param_10 == 0;
    }
    else {
      bVar7 = (char)param_3[0xb] == -1 || param_10 == 0;
    }
    if (bVar7) {
      local_a2c = uVar27;
    }
    if (((uVar21 & 0xf800) == 0) && (*(char *)((longlong)param_1 + 0x7664) == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (local_a18 == 0xff) {
      bVar7 = true;
    }
    if (bVar7) {
      local_a2c = local_a2c + 8;
    }
  }
  local_9b8 = (uint *)((longlong)param_1 + 0x7654);
  param_1[0x1fc] = param_1[0x1fc] & 0xfff7ffffffffffff;
  puVar17 = param_1;
  if (*(char *)((longlong)param_1 + 0xf6c5) != '\0') {
    auVar51 = FUN_180164460(param_1);
    uVar10 = auVar51._8_8_;
    puVar17 = auVar51._0_8_;
  }
  uStack_938 = 0;
  local_940 = 0;
  uStack_928 = 0;
  uStack_930 = 0;
  uStack_918 = 0;
  local_920 = 0;
  uStack_908 = 0;
  local_910 = 0;
  uStack_8f8 = 0;
  local_900 = 0;
  local_8e8 = 0;
  uStack_8f0 = 0;
  if (local_a00 != 0) {
    *(uint *)((longlong)param_1 + 0xf7c) =
         (uint)*(byte *)((longlong)param_3 + 0x4d) |
         ((uint)*local_988 |
         ((uint)*local_980 |
         ((uint)*local_978 |
         ((uint)*local_970 | ((uint)*local_968 | (uint)(*local_958 | *local_960) << 3) << 3) << 3)
         << 3) << 3) << 3;
  }
  local_998 = (ulonglong)local_a2c;
  puVar18 = local_9b8;
  if (*(longlong *)(local_a50[0xedf] + (ulonglong)local_a2c * 8 + 0x98) == 0) {
    uVar27 = *(uint *)((longlong)local_9f8 + 0x296c);
    if (((uVar27 & 1) == 0) || (*(char *)((longlong)param_1 + 0xeac) != '\0')) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0x800;
    }
    local_9f0 = (uint *)((longlong)param_1 + 0x7654);
    uVar21 = (uint)param_1[0xeca];
    if ((*(uint *)((longlong)param_1 + 0x7654) & 4) == 0) {
      uVar21 = 0;
    }
    local_a20 = (ulonglong)uVar21;
    if (bVar6) {
      bVar6 = (uVar27 & 2) != 0;
      uVar20 = 0x100;
      if (bVar6) {
        uVar20 = 0x300;
      }
      if (((uVar27 >> 2 & 1) != 0) && (uVar20 = 0x500, bVar6)) {
        uVar20 = 0x700;
      }
      local_a20 = uVar20 | local_a20 | uVar19 | (ulonglong)uVar26 << 0xc;
    }
    if (param_1[0x1efc] == 0) {
      uVar20 = 0;
      uVar26 = ((uint)param_1[0x1ee] & 0xaaaaaaaa) >> 1 | ((uint)param_1[0x1ee] & 0x55555555) << 1;
      uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
      uVar19 = 0;
      uVar26 = (uint)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
      if (uVar26 != 0) {
        do {
          if (((*(byte *)((longlong)param_1 + uVar19 + 0xf58) | 0x80) &
              *(byte *)((longlong)param_1 + uVar19 + 0xf68)) != 0 ||
              ((*(byte *)((longlong)param_1 + uVar19 + 0xf50) | 0x80) &
              *(byte *)((longlong)param_1 + uVar19 + 0xf60)) != 0) {
            uVar20 = (ulonglong)((uint)(byte)(&DAT_18022bd10)[uVar19] | (uint)uVar20);
          }
          uVar27 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar27;
        } while (uVar27 < uVar26);
      }
    }
    else {
      uVar20 = (ulonglong)*(byte *)(*(longlong *)(param_1[0x1efc] + 8) + 0x126c);
    }
    param_1[0x1f8] = uVar12 & 0xffffffff | uVar10 << 0x20;
    uVar26 = *(uint *)((longlong)param_1 + 0xfbc) & 0x7fd00000 | (uint)param_10 << 0x1f |
             (uint)(local_a18 == 0xff) << 0x15 | local_9fc & 0xfffff;
    *(uint *)((longlong)param_1 + 0xfbc) = uVar26;
    local_9e8 = param_1 + 0x1ef;
    if ((local_9fc & 1) == 0) {
      uVar27 = *(uint *)((longlong)param_1 + 0xfb4);
    }
    else {
      uVar27 = 0xffffffff;
    }
    if ((local_9fc & 2) == 0) {
      uVar21 = (uint)param_1[0x1f7];
    }
    else {
      uVar21 = 0xffffffff;
    }
    local_a68 = local_a68 & 0xffffffff00000000;
    local_a70[0] = (float)uVar20;
    uVar15 = (&DAT_18024d9e0)[uVar20];
    uVar26 = (int)uVar26 >> 0x1f;
    fVar32 = (float)(uVar15 | (int)local_a70[0] << 0x18);
    *(uint *)((longlong)param_1 + 0xf8c) = uVar15;
    *(float *)((longlong)param_1 + 0xf94) = fVar32;
    *(uint *)(param_1 + 499) = uVar15;
    uVar25 = ((uint)local_a70[0] & 0xaaaaaaaa) >> 1 | ((uint)local_a70[0] & 0x55555555) << 1;
    uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
    lVar23 = LZCOUNT((uVar25 >> 4 | (uVar25 & 0xf0f0f0f) << 4) << 0x18);
    uVar22 = (uint)lVar23;
    uVar25 = 0;
    if ((1 - (uVar22 >> 5) & 0xff) != 0) {
      local_a10 = fVar32;
      local_9b0 = (uint *)CONCAT44(local_9b0._4_4_,uVar15);
      local_a60 = CONCAT44(local_a60._4_4_,uVar26);
      *(byte *)((longlong)local_a70 + (longlong)((int)uVar22 >> 3)) =
           *(byte *)((longlong)local_a70 + (longlong)((int)uVar22 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar22 & 7)) ^ 0xff);
      uVar12 = *local_9e8;
      while( true ) {
        local_a68 = CONCAT71(local_a68._1_7_,
                             (byte)local_a68 |
                             (byte)(1 << (ulonglong)
                                         ((uint)uVar12 >> (ulonglong)((int)lVar23 * 3 & 0x1f) & 7)))
        ;
        uVar26 = ((uint)local_a70[0] & 0xaaaaaaaa) >> 1 | ((uint)local_a70[0] & 0x55555555) << 1;
        uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        lVar23 = LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
        uVar26 = (uint)lVar23;
        if ((1 - (uVar26 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_a70 + (longlong)((int)uVar26 >> 3)) =
             *(byte *)((longlong)local_a70 + (longlong)((int)uVar26 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar26 & 7)) ^ 0xff);
      }
      uVar15 = (uint)local_9b0;
      fVar32 = local_a10;
      uVar25 = (uint)local_a68;
      uVar26 = (uint)local_a60;
    }
    uVar2 = (&DAT_18024d9e0)[uVar25];
    *(uint *)(param_1 + 0x1f6) = uVar26;
    uVar20 = param_1[0x1f8];
    *(uint *)(param_1 + 0x1f2) = uVar2;
    uVar25 = *(uint *)((longlong)param_1 + 0xfbc) & (uVar25 << 3 | 0xfffff807);
    *(uint *)((longlong)param_1 + 0xfbc) = uVar25;
    uVar21 = uVar21 & uVar27 & uVar26;
    local_8d0[4] = uVar20;
    uVar22 = uVar26 & (uint)param_1[500];
    *(uint *)(param_1 + 0x1f5) = uVar22;
    *(uint *)((longlong)param_1 + 0xfac) = uVar21;
    uVar12 = CONCAT44(uVar15 & *(uint *)((longlong)param_1 + 0xf84),
                      (uint)fVar32 & (uint)param_1[0x1f0]);
    local_a68 = CONCAT44(*(uint *)((longlong)param_1 + 0xf7c) & uVar2,
                         uVar15 & (uint)param_1[0x1f1] & (uint)*local_9e8);
    uVar27 = 0;
    local_8d0[0] = local_a68;
    local_8d0[1] = uVar12;
    uVar10 = CONCAT44(*(uint *)((longlong)param_1 + 0xfa4) & uVar21,
                      *(uint *)((longlong)param_1 + 0xf9c) & uVar22);
    uVar19 = ((ulonglong)uVar26 | 0xc0000000) & (ulonglong)(uint)param_1[500] |
             (ulonglong)uVar25 << 0x20;
    local_8d0[2] = uVar10;
    local_8d0[3] = uVar19;
    uVar26 = (uint)local_a40[0x6f6];
    if (uVar26 != 0) {
      local_a60 = CONCAT44(local_a60._4_4_,uVar26);
      uVar24 = param_1[0x1ef5];
      uVar21 = 0;
      uVar15 = uVar26;
      do {
        uVar27 = uVar15 + uVar21 >> 1;
        uVar11 = (ulonglong)uVar27 * 0x30;
        lVar13 = 0;
        lVar23 = uVar11 + uVar24;
        if ((((*(ulonglong *)(uVar11 + uVar24) == local_a68) &&
             (lVar13 = 1, *(ulonglong *)(lVar23 + 8) == uVar12)) &&
            (lVar13 = 2, *(ulonglong *)(lVar23 + 0x10) == uVar10)) &&
           ((lVar13 = 3, *(ulonglong *)(lVar23 + 0x18) == uVar19 &&
            (lVar13 = 4, *(ulonglong *)(lVar23 + 0x20) == uVar20)))) {
          puVar17 = (ulonglong *)(lVar23 + 8);
LAB_18014d1a4:
          lVar13 = 1;
          if (((*puVar17 == uVar12) &&
              (lVar13 = 2, *(ulonglong *)(uVar24 + 0x10 + uVar11) == uVar10)) &&
             ((lVar13 = 3, *(ulonglong *)(uVar24 + 0x18 + uVar11) == uVar19 &&
              (lVar13 = 4, *(ulonglong *)(uVar24 + 0x20 + uVar11) == uVar20)))) break;
LAB_18014d1e4:
          if (local_8d0[lVar13] <= *(ulonglong *)(lVar23 + lVar13 * 8)) break;
          uVar21 = uVar27 + 1;
          uVar27 = uVar27 + 1;
          uVar25 = uVar15;
        }
        else {
          uVar25 = uVar27;
          if (*(ulonglong *)(lVar23 + lVar13 * 8) <= local_8d0[lVar13]) {
            puVar17 = (ulonglong *)((uVar11 | 8) + uVar24);
            lVar13 = 0;
            if (*(ulonglong *)(uVar11 + uVar24) == local_a68) goto LAB_18014d1a4;
            goto LAB_18014d1e4;
          }
        }
        uVar15 = uVar25;
      } while (uVar15 != uVar21);
    }
    if (uVar27 == uVar26) {
LAB_18014d4dc:
      local_9b0 = (uint *)FUN_1802229a8(0x2f8);
      puVar17 = local_a40;
      if (local_9b0 == (uint *)0x0) {
        puVar17 = (ulonglong *)0x0;
        puVar18 = local_9f0;
        goto LAB_18014d84c;
      }
      uVar30 = 0;
      uVar3 = *(undefined1 *)((longlong)local_a28 + 0x79c);
      uVar24 = local_a40[0x6f3];
      uVar11 = local_a50[0xef2];
      *(undefined ***)local_9b0 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
      *(undefined8 *)((longlong)local_9b0 + 8) = 0;
      *(undefined4 *)((longlong)local_9b0 + 0x10) = 0;
      *(undefined8 *)((longlong)local_9b0 + 0x18) = 0;
      *(undefined ***)((longlong)local_9b0 + 0x20) = &PTR_FUN_18022c480;
      uVar44 = *local_9e8;
      uVar50 = local_9e8[3];
      uVar48 = local_9e8[2];
      *(ulonglong *)((longlong)local_9b0 + 0x38) = local_9e8[1];
      *(ulonglong *)((longlong)local_9b0 + 0x30) = uVar44;
      *(ulonglong *)((longlong)local_9b0 + 0x48) = uVar50;
      *(ulonglong *)((longlong)local_9b0 + 0x40) = uVar48;
      uVar44 = local_9e8[4];
      uVar50 = local_9e8[7];
      uVar48 = local_9e8[6];
      *(ulonglong *)((longlong)local_9b0 + 0x58) = local_9e8[5];
      *(ulonglong *)((longlong)local_9b0 + 0x50) = uVar44;
      *(ulonglong *)((longlong)local_9b0 + 0x68) = uVar50;
      *(ulonglong *)((longlong)local_9b0 + 0x60) = uVar48;
      uVar44 = local_9e8[8];
      *(ulonglong *)((longlong)local_9b0 + 0x78) = local_9e8[9];
      *(ulonglong *)((longlong)local_9b0 + 0x70) = uVar44;
      *(undefined ***)local_9b0 = &PTR_FUN_18022bca0;
      *(ulonglong *)((longlong)local_9b0 + 8) = uVar11;
      *(undefined8 *)((longlong)local_9b0 + 0x80) = 0;
      *(undefined8 *)((longlong)local_9b0 + 0x88) = 0;
      *(undefined8 *)((longlong)local_9b0 + 0x90) = 0;
      *(undefined1 *)((longlong)local_9b0 + 0x2f0) = uVar3;
      *(int *)((longlong)local_9b0 + 0x10) = (int)uVar24;
      *(undefined8 **)((longlong)local_9b0 + 0x18) = (undefined8 *)((longlong)local_9b0 + 0x80);
      fVar32 = *(float *)(local_a40 + 0x6f6);
      if (fVar32 != 0.0) {
        uVar24 = param_1[0x1ef5];
        fVar33 = 0.0;
        local_a70[0] = fVar32;
        fVar34 = fVar32;
        do {
          fVar35 = (float)((uint)((int)fVar34 + (int)fVar33) >> 1);
          uVar30 = (ulonglong)(uint)fVar35;
          uVar11 = uVar30 * 0x30;
          lVar13 = 0;
          lVar23 = uVar11 + uVar24;
          if ((((*(ulonglong *)(uVar11 + uVar24) == local_a68) &&
               (lVar13 = 1, *(ulonglong *)(lVar23 + 8) == uVar12)) &&
              (lVar13 = 2, *(ulonglong *)(lVar23 + 0x10) == uVar10)) &&
             ((lVar13 = 3, *(ulonglong *)(lVar23 + 0x18) == uVar19 &&
              (lVar13 = 4, *(ulonglong *)(lVar23 + 0x20) == uVar20)))) {
            puVar14 = (ulonglong *)(lVar23 + 8);
LAB_18014d61c:
            lVar13 = 0;
            if ((((*(ulonglong *)(uVar11 + uVar24) == local_a68) && (lVar13 = 1, *puVar14 == uVar12)
                 ) && ((lVar13 = 2, *(ulonglong *)(uVar24 + 0x10 + uVar11) == uVar10 &&
                       ((lVar13 = 3, *(ulonglong *)(uVar24 + 0x18 + uVar11) == uVar19 &&
                        (lVar13 = 4, *(ulonglong *)(uVar24 + 0x20 + uVar11) == uVar20)))))) ||
               (local_8d0[lVar13] <= *(ulonglong *)(lVar23 + lVar13 * 8))) break;
            fVar33 = (float)((int)fVar35 + 1);
            uVar30 = (ulonglong)((int)fVar35 + 1);
            fVar35 = fVar34;
          }
          else if (*(ulonglong *)(lVar23 + lVar13 * 8) <= local_8d0[lVar13]) {
            puVar14 = (ulonglong *)((uVar11 | 8) + uVar24);
            goto LAB_18014d61c;
          }
          fVar34 = fVar35;
        } while (fVar34 != fVar33);
      }
      fVar33 = (float)uVar30;
      if (fVar33 == fVar32) {
LAB_18014d6d8:
        fVar34 = *(float *)((longlong)local_a40 + 0x37b4);
        if (fVar34 == fVar32) {
          uVar26 = 0x10;
          if (fVar34 != 0.0) {
            uVar26 = (int)fVar34 << 1;
          }
          uVar12 = FUN_1802229a8((ulonglong)uVar26 * 0x30);
          puVar14 = local_a50;
          if (uVar12 != 0) {
            uVar10 = 0;
            if ((int)puVar17[0x6f6] != 0) {
              local_a68 = CONCAT44(local_a68._4_4_,uVar26);
              local_a60 = CONCAT44(local_a60._4_4_,fVar33);
              do {
                puVar31 = (undefined8 *)(param_1[0x1ef5] + uVar10 * 0x30);
                puVar29 = (undefined8 *)(uVar12 + uVar10 * 0x30);
                uVar27 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar27;
                uVar9 = *puVar31;
                uVar49 = puVar31[3];
                uVar47 = puVar31[2];
                puVar29[1] = puVar31[1];
                *puVar29 = uVar9;
                puVar29[3] = uVar49;
                puVar29[2] = uVar47;
                uVar9 = puVar31[4];
                puVar29[5] = puVar31[5];
                puVar29[4] = uVar9;
              } while (uVar27 < (uint)puVar17[0x6f6]);
            }
            FUN_1802229d8(local_a50[0xef4]);
            puVar14[0xef4] = uVar12;
            param_1[0x1ef5] = uVar12;
            *(uint *)((longlong)local_a40 + 0x37b4) = uVar26;
          }
        }
        fVar32 = *(float *)(local_a40 + 0x6f6);
        if (*(float *)((longlong)local_a40 + 0x37b4) != fVar32) {
          while ((uint)fVar33 < (uint)fVar32) {
            uVar12 = (ulonglong)(uint)fVar32;
            fVar32 = (float)((int)fVar32 - 1);
            puVar31 = (undefined8 *)(param_1[0x1ef5] + uVar12 * 0x30);
            puVar29 = (undefined8 *)(param_1[0x1ef5] + (ulonglong)(uint)fVar32 * 0x30);
            uVar9 = *puVar29;
            uVar49 = puVar29[3];
            uVar47 = puVar29[2];
            puVar31[1] = puVar29[1];
            *puVar31 = uVar9;
            puVar31[3] = uVar49;
            puVar31[2] = uVar47;
            uVar9 = puVar29[4];
            puVar31[5] = puVar29[5];
            puVar31[4] = uVar9;
          }
          *(int *)(local_a40 + 0x6f6) = (int)local_a40[0x6f6] + 1;
          puVar17 = (ulonglong *)(param_1[0x1ef5] + uVar30 * 0x30);
          puVar17[1] = local_8d0[1];
          *puVar17 = local_8d0[0];
          puVar17[3] = local_8d0[3];
          puVar17[2] = local_8d0[2];
          puVar17[4] = local_8d0[4];
          lVar23 = param_1[0x1ef5] + uVar30 * 0x30;
          goto LAB_18014d808;
        }
      }
      else {
        local_a70[0] = fVar32;
        uVar12 = 0;
        lVar23 = param_1[0x1ef5] + uVar30 * 0x30;
        do {
          if (*(ulonglong *)(lVar23 + uVar12 * 8) != local_8d0[uVar12]) goto LAB_18014d6d8;
          uVar26 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar26;
        } while (uVar26 < 5);
LAB_18014d808:
        *(uint **)(lVar23 + 0x28) = local_9b0;
      }
      puVar17 = (ulonglong *)FUN_180162df8(local_9b0,local_a20);
    }
    else {
      uVar24 = 0;
      lVar23 = param_1[0x1ef5] + (ulonglong)uVar27 * 0x30;
      do {
        if (*(ulonglong *)(lVar23 + uVar24 * 8) != local_8d0[uVar24]) goto LAB_18014d4dc;
        uVar26 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar26;
      } while (uVar26 < 5);
      plVar28 = (longlong *)(lVar23 + 0x28);
      if (plVar28 == (longlong *)0x0) goto LAB_18014d4dc;
      lVar13 = *plVar28;
      lVar23 = *(longlong *)(lVar13 + 0x18);
      uVar26 = *(uint *)(lVar23 + 0x10);
      if (uVar26 == 0) {
LAB_18014d2d4:
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(lVar13,&local_8a0,local_a20);
        plVar28 = *(longlong **)(lVar13 + 0x18);
        uVar26 = 0;
        uVar27 = *(uint *)(plVar28 + 2);
        if (uVar27 != 0) {
          uVar21 = 0;
          local_a60 = CONCAT44(local_a60._4_4_,uVar27);
          uVar15 = uVar27;
          do {
            uVar26 = uVar15 + uVar21 >> 1;
            uVar12 = *(ulonglong *)(plVar28[1] + (ulonglong)uVar26 * 0x70);
            uVar25 = uVar26;
            if (uVar12 <= local_a20) {
              if (local_a20 <= uVar12) break;
              uVar21 = uVar26 + 1;
              uVar26 = uVar26 + 1;
              uVar25 = uVar15;
            }
            uVar15 = uVar25;
          } while (uVar15 != uVar21);
        }
        if ((uVar26 == uVar27) ||
           (puVar17 = (ulonglong *)(plVar28[1] + (ulonglong)uVar26 * 0x70), *puVar17 != local_a20))
        {
          uVar21 = *(uint *)((longlong)plVar28 + 0x14);
          if (uVar21 == uVar27) {
            uVar27 = 0x10;
            if (uVar21 != 0) {
              uVar27 = uVar21 << 1;
            }
            lVar23 = FUN_1802229a8((ulonglong)uVar27 * 0x70);
            if (lVar23 != 0) {
              uVar12 = 0;
              if ((int)plVar28[2] != 0) {
                local_a68 = CONCAT44(local_a68._4_4_,uVar27);
                local_a60 = CONCAT44(local_a60._4_4_,uVar26);
                do {
                  puVar31 = (undefined8 *)(plVar28[1] + uVar12 * 0x70);
                  puVar29 = (undefined8 *)(lVar23 + uVar12 * 0x70);
                  uVar21 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar21;
                  uVar9 = *puVar31;
                  uVar49 = puVar31[3];
                  uVar47 = puVar31[2];
                  puVar29[1] = puVar31[1];
                  *puVar29 = uVar9;
                  puVar29[3] = uVar49;
                  puVar29[2] = uVar47;
                  uVar9 = puVar31[4];
                  uVar49 = puVar31[7];
                  uVar47 = puVar31[6];
                  puVar29[5] = puVar31[5];
                  puVar29[4] = uVar9;
                  puVar29[7] = uVar49;
                  puVar29[6] = uVar47;
                  uVar9 = puVar31[8];
                  uVar49 = puVar31[0xb];
                  uVar47 = puVar31[10];
                  puVar29[9] = puVar31[9];
                  puVar29[8] = uVar9;
                  puVar29[0xb] = uVar49;
                  puVar29[10] = uVar47;
                  uVar9 = puVar31[0xc];
                  puVar29[0xd] = puVar31[0xd];
                  puVar29[0xc] = uVar9;
                } while (uVar21 < *(uint *)(plVar28 + 2));
              }
              FUN_1802229d8(*plVar28);
              *plVar28 = lVar23;
              plVar28[1] = lVar23;
              *(uint *)((longlong)plVar28 + 0x14) = uVar27;
            }
          }
          uVar27 = *(uint *)(plVar28 + 2);
          if (*(uint *)((longlong)plVar28 + 0x14) != uVar27) {
            while (uVar26 < uVar27) {
              puVar29 = (undefined8 *)(plVar28[1] + (ulonglong)uVar27 * 0x70);
              puVar31 = (undefined8 *)(plVar28[1] + (ulonglong)(uVar27 - 1) * 0x70);
              uVar9 = *puVar31;
              uVar49 = puVar31[3];
              uVar47 = puVar31[2];
              puVar29[1] = puVar31[1];
              *puVar29 = uVar9;
              puVar29[3] = uVar49;
              puVar29[2] = uVar47;
              uVar9 = puVar31[4];
              uVar49 = puVar31[7];
              uVar47 = puVar31[6];
              puVar29[5] = puVar31[5];
              puVar29[4] = uVar9;
              puVar29[7] = uVar49;
              puVar29[6] = uVar47;
              uVar9 = puVar31[8];
              uVar49 = puVar31[0xb];
              uVar47 = puVar31[10];
              puVar29[9] = puVar31[9];
              puVar29[8] = uVar9;
              puVar29[0xb] = uVar49;
              puVar29[10] = uVar47;
              uVar9 = puVar31[0xc];
              puVar29[0xd] = puVar31[0xd];
              puVar29[0xc] = uVar9;
              uVar27 = uVar27 - 1;
            }
            lVar13 = (ulonglong)uVar26 * 0x70;
            *(int *)(plVar28 + 2) = (int)plVar28[2] + 1;
            *(ulonglong *)(lVar13 + plVar28[1] + 8) = local_a20;
            lVar23 = lVar13 + plVar28[1];
            *(ulonglong *)(lVar23 + 0x18) = CONCAT44(fStack_894,fStack_898);
            *(ulonglong *)(lVar23 + 0x10) = CONCAT44(fStack_89c,local_8a0);
            *(ulonglong *)(lVar23 + 0x28) = CONCAT44(local_884,local_888);
            *(ulonglong *)(lVar23 + 0x20) = CONCAT44(local_88c,local_890);
            *(ulonglong *)(lVar23 + 0x38) = CONCAT44(fStack_874,fStack_878);
            *(ulonglong *)(lVar23 + 0x30) = CONCAT44(fStack_87c,local_880);
            *(ulonglong *)(lVar23 + 0x48) = CONCAT44(local_864,local_868);
            *(ulonglong *)(lVar23 + 0x40) = CONCAT44(local_86c,local_870);
            *(ulonglong *)(lVar23 + 0x58) = uStack_858;
            *(ulonglong *)(lVar23 + 0x50) = local_860;
            *(ulonglong *)(lVar23 + 0x68) = uStack_848;
            *(ulonglong *)(lVar23 + 0x60) = uStack_850;
            *(ulonglong *)(plVar28[1] + lVar13) = local_a20;
          }
          puVar17 = (ulonglong *)(plVar28[1] + (ulonglong)uVar26 * 0x70);
          goto LAB_18014d4d4;
        }
        puVar17[3] = CONCAT44(fStack_894,fStack_898);
        puVar17[2] = CONCAT44(fStack_89c,local_8a0);
        puVar17[5] = CONCAT44(local_884,local_888);
        puVar17[4] = CONCAT44(local_88c,local_890);
        puVar17[7] = CONCAT44(fStack_874,fStack_878);
        puVar17[6] = CONCAT44(fStack_87c,local_880);
        puVar17[9] = CONCAT44(local_864,local_868);
        puVar17[8] = CONCAT44(local_86c,local_870);
        puVar17[0xb] = uStack_858;
        puVar17[10] = local_860;
        puVar17[0xd] = uStack_848;
        puVar17[0xc] = uStack_850;
        puVar17 = (ulonglong *)(plVar28[1] + (ulonglong)uVar26 * 0x70 + 0x10);
      }
      else {
        uVar27 = 0;
        uVar21 = uVar26;
        do {
          uVar15 = uVar21 + uVar27 >> 1;
          uVar12 = *(ulonglong *)(*(longlong *)(lVar23 + 8) + (ulonglong)uVar15 * 0x70);
          uVar25 = uVar15;
          if (uVar12 <= local_a20) {
            if (local_a20 <= uVar12) break;
            uVar27 = uVar15 + 1;
            uVar15 = uVar15 + 1;
            uVar25 = uVar21;
          }
          uVar21 = uVar25;
        } while (uVar21 != uVar27);
        local_a60 = lVar23;
        if (((uVar15 == uVar26) ||
            (puVar17 = (ulonglong *)(*(longlong *)(lVar23 + 8) + (ulonglong)uVar15 * 0x70),
            *puVar17 != local_a20)) || (puVar17 == (ulonglong *)0xfffffffffffffff0))
        goto LAB_18014d2d4;
LAB_18014d4d4:
        puVar17 = puVar17 + 2;
      }
    }
    puVar18 = local_9f0;
    if (puVar17 != (ulonglong *)0x0) {
      uStack_938 = puVar17[1];
      local_940 = *puVar17;
      uStack_928 = puVar17[3];
      uStack_930 = puVar17[2];
      uStack_918 = puVar17[5];
      local_920 = puVar17[4];
      uStack_908 = puVar17[7];
      local_910 = puVar17[6];
      uStack_8f8 = puVar17[9];
      local_900 = puVar17[8];
      local_8e8 = puVar17[0xb];
      uStack_8f0 = puVar17[10];
    }
  }
LAB_18014d84c:
  puVar14 = local_a28;
  if (local_940 == 0) {
    local_940 = *(ulonglong *)(local_a50[0xedf] + local_998 * 8 + 0x98);
    lVar23 = (ulonglong)local_a2c * 0x28;
    uStack_930 = *(ulonglong *)(lVar23 + 0x18022b358);
    uStack_938 = *(ulonglong *)(lVar23 + 0x18022b350);
    local_920 = *(ulonglong *)(lVar23 + 0x18022b368);
    uStack_928 = *(ulonglong *)(lVar23 + 0x18022b360);
    uStack_918 = *(ulonglong *)(lVar23 + 0x18022b370);
    puVar18 = local_9b8;
  }
  uVar12 = local_940;
  if ((((*puVar18 >> 2 & 1) != 0) && ((local_a2c & 0xfffffff7) == 0)) &&
     (*(char *)((longlong)local_a28 + 0x693) != '\0')) {
    local_a70[0] = *(float *)(local_9f8 + 0x6bd);
    local_9d8 = *(float *)(local_9f8 + 0x6be);
    fVar33 = *(float *)((longlong)local_9f8 + 0x35c4);
    local_9c8 = *(float *)((longlong)local_9f8 + 0x35e4);
    local_a30 = *(float *)((longlong)local_9f8 + 0x35d4);
    fVar34 = *(float *)(local_9f8 + 0x6bb);
    local_9cc = *(float *)((longlong)local_9f8 + 0x35ec);
    local_9c4 = *(float *)(local_9f8 + 0x6c0);
    fVar45 = *(float *)(local_9f8 + 0x6b9);
    fVar35 = *(float *)((longlong)local_9f8 + 0x35b4);
    fVar32 = *(float *)(local_9f8 + 0x6b7);
    fVar46 = *(float *)((longlong)local_9f8 + 0x35a4);
    fVar41 = *(float *)(local_9f8 + 0x6b5);
    local_9c0 = *(float *)((longlong)local_9f8 + 0x35fc);
    local_9e0 = *(float *)((longlong)local_9f8 + 0x35f4);
    local_8a0 = local_a70[0] * fVar35 + local_9c8 * fVar46 + local_9cc * fVar33 +
                local_9d8 * local_a30;
    local_9dc = *(float *)(local_9f8 + 0x6bf);
    fVar42 = *(float *)(local_9f8 + 0x6c1);
    local_998 = CONCAT44(local_998._4_4_,fVar42);
    fVar39 = *(float *)((longlong)local_9f8 + 0x3604);
    local_9b8 = (uint *)CONCAT44(local_9b8._4_4_,fVar39);
    fVar38 = *(float *)((longlong)local_9f8 + 0x360c);
    local_9f0 = (uint *)CONCAT44(local_9f0._4_4_,fVar38);
    local_890 = local_9dc * fVar35 + local_9e0 * fVar46 + local_9c0 * fVar33 + local_9c4 * local_a30
    ;
    fVar36 = *(float *)(local_9f8 + 0x6c2);
    local_9e8 = (ulonglong *)CONCAT44(local_9e8._4_4_,fVar36);
    fVar43 = *(float *)(local_9f8 + 0x6c3);
    local_a20 = CONCAT44(local_a20._4_4_,fVar43);
    fVar40 = *(float *)(local_9f8 + 0x6c4);
    local_a68 = CONCAT44(local_a68._4_4_,fVar40);
    local_a10 = *(float *)((longlong)local_9f8 + 0x3614);
    local_880 = fVar42 * fVar35 + fVar39 * fVar46 + fVar38 * fVar33 + fVar36 * local_a30;
    fVar37 = *(float *)((longlong)local_9f8 + 0x361c);
    local_9b0 = (uint *)CONCAT44(local_9b0._4_4_,fVar37);
    local_a30 = fVar40 * local_a30;
    local_870 = fVar43 * fVar35 + local_a10 * fVar46 + fVar37 * fVar33 + local_a30;
    fStack_89c = local_a70[0] * fVar32 + local_9c8 * fVar41 + local_9cc * fVar45 +
                 local_9d8 * fVar34;
    local_88c = local_9dc * fVar32 + local_9e0 * fVar41 + local_9c0 * fVar45 + local_9c4 * fVar34;
    fStack_87c = fVar42 * fVar32 + fVar39 * fVar41 + fVar38 * fVar45 + fVar36 * fVar34;
    fVar33 = *(float *)(local_9f8 + 0x6ba);
    local_a34 = *(float *)((longlong)local_9f8 + 0x35bc);
    fVar35 = *(float *)(local_9f8 + 0x6b8);
    local_86c = fVar43 * fVar32 + local_a10 * fVar41 + fVar37 * fVar45 + fVar40 * fVar34;
    local_a38 = *(float *)((longlong)local_9f8 + 0x35ac);
    local_a60 = CONCAT44(local_a60._4_4_,fVar35);
    local_a58 = *(float *)(local_9f8 + 0x6b6);
    local_a48 = *(float *)((longlong)local_9f8 + 0x35cc);
    fVar34 = *(float *)((longlong)local_9f8 + 0x35dc);
    fVar32 = *(float *)(local_9f8 + 0x6bc);
    fStack_898 = local_a70[0] * local_a34 + local_9c8 * local_a38 + local_9cc * local_a48 +
                 local_9d8 * fVar34;
    local_888 = local_9dc * local_a34 + local_9e0 * local_a38 + local_9c0 * local_a48 +
                local_9c4 * fVar34;
    fStack_878 = fVar42 * local_a34 + fVar39 * local_a38 + fVar38 * local_a48 + fVar36 * fVar34;
    local_868 = fVar43 * local_a34 + local_a10 * local_a38 + fVar37 * local_a48 + fVar40 * fVar34;
    fStack_894 = local_a70[0] * fVar35 + local_9c8 * local_a58 + local_9cc * fVar33 +
                 local_9d8 * fVar32;
    local_884 = local_9dc * fVar35 + local_9e0 * local_a58 + local_9c0 * fVar33 + local_9c4 * fVar32
    ;
    fStack_874 = fVar42 * fVar35 + fVar39 * local_a58 + fVar38 * fVar33 + fVar36 * fVar32;
    local_864 = fVar43 * fVar35 + local_a10 * local_a58 + fVar37 * fVar33 + fVar40 * fVar32;
    puVar17 = (ulonglong *)FUN_18012b1a0(&local_8a0,param_1 + 0xd74,0);
    *(undefined1 *)((longlong)puVar14 + 0x693) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  }
  bVar6 = (local_a2c - 5 & 0xfffffff7) == 0;
  if (bVar6) {
    local_a60 = 0x128;
  }
  else {
    local_a60 = 0x120;
  }
  uVar19 = 0;
  cVar4 = *(char *)((longlong)local_a08 + 0x66b);
  *(bool *)((longlong)local_a08 + 0x66b) = bVar6;
  *(byte *)(local_a28 + 0xd1) = bVar6 != (bool)cVar4 | (byte)local_a28[0xd1];
  uStack_9a8 = (undefined1)local_9a0;
  uVar10 = 0x8000000000000000;
  if (local_a18 != 0xff) {
    uVar10 = 0;
  }
  uVar10 = uVar10 | *param_3;
  uVar26 = *(uint *)((longlong)local_a40 + 0x3784);
  if (uVar26 != 0) {
    uVar27 = 0;
    uVar21 = uVar26;
    do {
      uVar15 = uVar21 + uVar27 >> 1;
      uVar19 = (ulonglong)uVar15;
      uVar20 = *(ulonglong *)(local_a50[0xeef] + uVar19 * 0x20);
      if (uVar20 <= uVar10) {
        if (uVar10 <= uVar20) break;
        uVar27 = uVar15 + 1;
        uVar19 = (ulonglong)(uVar15 + 1);
        uVar15 = uVar21;
      }
      uVar21 = uVar15;
    } while (uVar21 != uVar27);
  }
  uVar27 = (uint)uVar19;
  local_9b0 = param_3;
  if ((uVar27 == uVar26) || (*(ulonglong *)(local_a50[0xeef] + uVar19 * 0x20) != uVar10)) {
    if (uVar26 == (uint)local_a40[0x6f0]) {
      uVar26 = (uint)local_a40[0x6f0] << 1;
      uVar20 = CONCAT44(0,uVar26);
      local_a68 = CONCAT44(local_a68._4_4_,uVar26);
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar20;
      lVar23 = uVar20 << 5;
      if (SUB168(auVar51 * ZEXT816(0x20),8) != 0) {
        lVar23 = -1;
      }
      uVar24 = FUN_1802229a8(lVar23);
      puVar14 = local_a50;
      puVar17 = (ulonglong *)0x0;
      if (uVar24 != 0) {
        uVar11 = uVar24;
        if (3 < (uint)local_a68) {
          do {
            uVar20 = uVar20 - 4;
            *(undefined8 *)(uVar11 + 8) = 0;
            *(undefined4 *)(uVar11 + 0x10) = 0;
            *(undefined1 *)(uVar11 + 0x14) = 0;
            *(undefined8 *)(uVar11 + 0x28) = 0;
            *(undefined4 *)(uVar11 + 0x30) = 0;
            *(undefined1 *)(uVar11 + 0x34) = 0;
            *(undefined8 *)(uVar11 + 0x48) = 0;
            *(undefined4 *)(uVar11 + 0x50) = 0;
            *(undefined1 *)(uVar11 + 0x54) = 0;
            *(undefined8 *)(uVar11 + 0x68) = 0;
            *(undefined4 *)(uVar11 + 0x70) = 0;
            *(undefined1 *)(uVar11 + 0x74) = 0;
            uVar11 = uVar11 + 0x80;
          } while (3 < uVar20);
        }
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined8 *)(uVar11 + 8) = 0;
          *(undefined4 *)(uVar11 + 0x10) = 0;
          *(undefined1 *)(uVar11 + 0x14) = 0;
          uVar11 = uVar11 + 0x20;
        }
        uVar20 = 0;
        if ((int)local_a40[0x6f0] != 0) {
          do {
            uVar26 = (int)uVar20 + 1;
            puVar29 = (undefined8 *)(local_a50[0xeef] + uVar20 * 0x20);
            puVar31 = (undefined8 *)(uVar24 + uVar20 * 0x20);
            uVar9 = *puVar29;
            uVar49 = puVar29[3];
            uVar47 = puVar29[2];
            puVar31[1] = puVar29[1];
            *puVar31 = uVar9;
            puVar31[3] = uVar49;
            puVar31[2] = uVar47;
            uVar20 = (ulonglong)uVar26;
          } while (uVar26 < (uint)local_a40[0x6f0]);
        }
        puVar17 = (ulonglong *)FUN_1802229d8(local_a50[0xeef]);
        puVar14[0xeef] = uVar24;
        *(int *)(local_a40 + 0x6f0) = (int)local_a40[0x6f0] << 1;
      }
    }
    puVar14 = local_a50;
    uVar26 = *(uint *)((longlong)local_a40 + 0x3784);
    uVar20 = (ulonglong)uVar26;
    if (uVar27 < uVar26) {
      if (3 < uVar26 - uVar27) {
        do {
          iVar16 = (int)uVar20;
          puVar29 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 1) * 0x20);
          puVar31 = (undefined8 *)(local_a50[0xeef] + uVar20 * 0x20);
          uVar9 = *puVar29;
          uVar49 = puVar29[3];
          uVar47 = puVar29[2];
          puVar31[1] = puVar29[1];
          *puVar31 = uVar9;
          puVar31[3] = uVar49;
          puVar31[2] = uVar47;
          puVar29 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 2) * 0x20);
          puVar31 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 1) * 0x20);
          uVar9 = *puVar29;
          uVar49 = puVar29[3];
          uVar47 = puVar29[2];
          puVar31[1] = puVar29[1];
          *puVar31 = uVar9;
          puVar31[3] = uVar49;
          puVar31[2] = uVar47;
          uVar20 = (ulonglong)(iVar16 - 4U);
          puVar29 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 3) * 0x20);
          puVar31 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 2) * 0x20);
          uVar9 = *puVar29;
          uVar49 = puVar29[3];
          uVar47 = puVar29[2];
          puVar31[1] = puVar29[1];
          *puVar31 = uVar9;
          puVar31[3] = uVar49;
          puVar31[2] = uVar47;
          puVar29 = (undefined8 *)(local_a50[0xeef] + (ulonglong)(iVar16 - 3) * 0x20);
          puVar31 = (undefined8 *)(local_a50[0xeef] + uVar20 * 0x20);
          uVar9 = *puVar31;
          uVar49 = puVar31[3];
          uVar47 = puVar31[2];
          puVar29[1] = puVar31[1];
          *puVar29 = uVar9;
          puVar29[3] = uVar49;
          puVar29[2] = uVar47;
        } while (uVar27 + 3 < iVar16 - 4U);
      }
      uVar26 = (uint)uVar20;
      while (uVar27 < uVar26) {
        uVar26 = (int)uVar20 - 1;
        puVar29 = (undefined8 *)(local_a50[0xeef] + uVar20 * 0x20);
        puVar31 = (undefined8 *)(local_a50[0xeef] + (ulonglong)uVar26 * 0x20);
        uVar9 = *puVar31;
        uVar49 = puVar31[3];
        uVar47 = puVar31[2];
        puVar29[1] = puVar31[1];
        *puVar29 = uVar9;
        puVar29[3] = uVar49;
        puVar29[2] = uVar47;
        uVar20 = (ulonglong)uVar26;
      }
    }
    lVar23 = uVar19 * 0x20;
    *(ulonglong *)(local_a50[0xeef] + lVar23) = uVar10;
    uVar10 = local_a50[0xeef];
    *(ulonglong *)(lVar23 + uVar10 + 0x10) = CONCAT71(uStack_9a7,uStack_9a8);
    *(uint **)(lVar23 + uVar10 + 8) = local_9b0;
    uVar8 = FUN_18016cc00(puVar17,param_3,auStack_840,local_9a0);
    uVar9 = FUN_180204620(puVar14[0xef1] + 0x19c0,auStack_840,uVar8);
    *(undefined8 *)(lVar23 + puVar14[0xeef] + 0x18) = uVar9;
    *(int *)((longlong)local_a40 + 0x3784) = *(int *)((longlong)local_a40 + 0x3784) + 1;
  }
  uVar20 = local_910;
  uVar10 = local_950;
  puVar17 = local_a50;
  uVar19 = *(ulonglong *)(uVar19 * 0x20 + local_a50[0xeef] + 0x18);
  if ((local_a14 == 1) &&
     (((*(char *)((longlong)local_a08 + 0x666) != '\0' && (param_3[1] != 0)) ||
      (*(char *)((longlong)local_a08 + 0x667) != '\0')))) {
    local_a68 = CONCAT44(local_a68._4_4_,1);
    uVar20 = *(ulonglong *)(local_a60 + local_a50[0xedf]);
    local_910 = uVar20;
  }
  else {
    local_a68 = (ulonglong)local_a68._4_4_ << 0x20;
    if (local_910 != 0) goto LAB_18014e12c;
    local_910 = 0;
  }
  if (local_a2c == 6) {
    uVar20 = *(ulonglong *)(local_a50[0xedf] + 0x130);
    uVar12 = local_940;
    local_910 = uVar20;
    uStack_908 = _DAT_18022b280;
    local_900 = uRam000000018022b288;
    uStack_8f8 = _DAT_18022b290;
    uStack_8f0 = uRam000000018022b298;
    local_8e8 = DAT_18022b2a0;
  }
  else if (local_a2c == 7) {
    uVar20 = *(ulonglong *)(local_a50[0xedf] + 0x138);
    uVar12 = local_940;
    local_910 = uVar20;
    uStack_908 = _DAT_18022b2a8;
    local_900 = uRam000000018022b2b0;
    uStack_8f8 = _DAT_18022b2b8;
    uStack_8f0 = uRam000000018022b2c0;
    local_8e8 = DAT_18022b2c8;
  }
  else if (local_a2c == 0xe) {
    uVar20 = *(ulonglong *)(local_a50[0xedf] + 0x140);
    uVar12 = local_940;
    local_910 = uVar20;
    uStack_908 = _DAT_18022b2d0;
    local_900 = uRam000000018022b2d8;
    uStack_8f8 = _DAT_18022b2e0;
    uStack_8f0 = uRam000000018022b2e8;
    local_8e8 = DAT_18022b2f0;
  }
  else if (local_a2c == 0xf) {
    uVar20 = *(ulonglong *)(local_a50[0xedf] + 0x148);
    uVar12 = local_940;
    local_910 = uVar20;
    uStack_908 = _DAT_18022b2f8;
    local_900 = uRam000000018022b300;
    uStack_8f8 = _DAT_18022b308;
    uStack_8f0 = uRam000000018022b310;
    local_8e8 = DAT_18022b318;
  }
LAB_18014e12c:
  uVar26 = (0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe];
  bVar6 = uVar26 < (uint)local_990;
  uVar27 = (0x1000 - (int)param_1[0x12]) - *(int *)((longlong)param_1 + 0x94);
  bVar7 = *(char *)((longlong)local_a08 + 0x661) == '\0';
  local_a40 = (ulonglong *)&DAT_180247548;
  if (bVar7) {
    local_a40 = (ulonglong *)&DAT_180247568;
  }
  puVar1 = &DAT_180247508;
  if (bVar7) {
    puVar1 = &DAT_180247528;
  }
  if (((*(char *)((longlong)local_a08 + 0x662) != '\0') ||
      ((uint)param_1[0xd28] != local_9fc || local_a00 != 0)) ||
     ((((*(int *)((longlong)param_1 + 0x102c) != local_9d0 ||
        (((int)param_1[0x1fd] != local_9d4 || (param_1[0x1ff7] != local_8e0)))) ||
       (param_1[0x1fe7] != local_950)) ||
      ((((((param_1[0x1f1e] != uVar12 || (param_1[0x1f22] != uVar20)) ||
          ((byte)param_1[0xecd] != (uint)local_a68)) ||
         ((*(uint *)((longlong)param_1 + 0x763c) != param_3[1] ||
          (*(int *)((longlong)param_1 + 0xf94c) != *(int *)(puVar1 + (longlong)local_a14 * 4))))) ||
        (*(int *)((longlong)param_1 + 0xffc4) !=
         *(int *)((longlong)local_a40 + (longlong)local_a14 * 4))) ||
       ((((*(int *)((longlong)param_1 + 0x94) != 0) != (param_9 != 0) || uVar26 < (uint)local_990)
         || uVar27 < param_9 || (param_1[0x1f28] != uVar19)))))))) {
    iVar16 = local_9d4;
    if (local_950 != local_a50[0xee3]) {
      iVar16 = 0;
    }
    local_990 = puVar1;
    FUN_18014e9a0(param_1,bVar6,uVar27 < param_9,iVar16);
    if (uVar10 == puVar17[0xee3]) {
      local_9d0 = *(int *)((longlong)param_1 + 0x7c);
    }
    if (*(char *)((longlong)local_a08 + 0x662) != '\0') {
      *(undefined1 *)((longlong)local_a28 + 0x689) = 1;
      *(byte *)((longlong)local_a28 + 0x684) = *(byte *)((longlong)local_a28 + 0x684) | 1;
    }
    if (local_a00 != 0) {
      *(uint *)((longlong)local_9f8 + 0x2ea4) = (uint)*(byte *)((longlong)param_3 + 0x4d);
      *(uint *)((longlong)param_1 + 0x6eb4) = (uint)*local_988;
      *(uint *)((longlong)param_1 + 0x6ec4) = (uint)*local_980;
      *(uint *)((longlong)param_1 + 0x6ed4) = (uint)*local_978;
      *(uint *)((longlong)param_1 + 0x6ee4) = (uint)*local_970;
      *(uint *)((longlong)param_1 + 0x6ef4) = (uint)*local_968;
      *(uint *)((longlong)param_1 + 0x6f04) = (uint)*local_960;
      *(uint *)((longlong)param_1 + 0x6f14) = (uint)*local_958;
      *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    }
    if ((uint)param_1[0xd28] != local_9fc) {
      *(uint *)(param_1 + 0xd28) = local_9fc;
      *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    }
    if ((int)param_1[0x1fd] != local_9d4) {
      *(int *)(param_1 + 0x1fd) = local_9d4;
      *(undefined1 *)((longlong)local_a28 + 0x68f) = 1;
    }
    if (param_1[0x1fe7] != local_950) {
      param_1[0x1fe7] = local_950;
      *(undefined1 *)((longlong)local_a28 + 0x68f) = 1;
    }
    if (*(int *)((longlong)param_1 + 0x102c) != local_9d0) {
      *(int *)((longlong)param_1 + 0x102c) = local_9d0;
      *(undefined1 *)((longlong)local_a28 + 0x68f) = 1;
    }
    if (param_1[0x1ff7] != local_8e0) {
      param_1[0x1ff7] = local_8e0;
      *(undefined1 *)(local_a28 + 0xd2) = 1;
    }
    if (param_1[0x1f28] != uVar19) {
      param_1[0x1f28] = uVar19;
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if (param_1[0x1f22] != uVar20) {
      param_1[0x1f22] = uVar20;
      if (uVar20 == 0) {
        param_1[0x2027] = 0;
        param_1[0x2026] = 0;
        param_1[0x2029] = 0;
        param_1[0x2028] = 0;
        param_1[0x202a] = 0;
      }
      else {
        param_1[0x2027] = local_900;
        param_1[0x2026] = uStack_908;
        param_1[0x2029] = uStack_8f0;
        param_1[0x2028] = uStack_8f8;
        param_1[0x202a] = local_8e8;
      }
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if (param_1[0x1f1e] != uVar12) {
      param_1[0x1f1e] = uVar12;
      param_1[0x2022] = uStack_930;
      param_1[0x2021] = uStack_938;
      param_1[0x2024] = local_920;
      param_1[0x2023] = uStack_928;
      param_1[0x2025] = uStack_918;
      uVar12 = local_a50[0xf1a];
      local_a50[0xf1a] = 0;
      *(byte *)((longlong)local_a28 + 0x6c2) = uVar12 != 0 | *(byte *)((longlong)local_a28 + 0x6c2);
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x763c) != param_3[1]) ||
       (*(char *)((longlong)local_a08 + 0x662) != '\0')) {
      *(uint *)((longlong)param_1 + 0x763c) = param_3[1];
      *(undefined1 *)((longlong)local_a28 + 0x68e) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xffc4) !=
        *(int *)((longlong)local_a40 + (longlong)local_a14 * 4)) {
      *(int *)((longlong)param_1 + 0xffc4) = *(int *)((longlong)local_a40 + (longlong)local_a14 * 4)
      ;
      *(undefined1 *)(param_1 + 0x2031) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xf94c) != *(int *)(local_990 + (longlong)local_a14 * 4)) {
      *(int *)((longlong)param_1 + 0xf94c) = *(int *)(local_990 + (longlong)local_a14 * 4);
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if ((byte)param_1[0xecd] != (uint)local_a68) {
      *(char *)(param_1 + 0xecd) = (char)local_a68;
      *(undefined1 *)((longlong)local_a28 + 0x68d) = 1;
    }
    bVar5 = *(byte *)((longlong)local_a08 + 0x662);
    *(byte *)((longlong)local_a28 + 0x68c) = *(byte *)((longlong)local_a28 + 0x68c) | bVar5;
    *(byte *)((longlong)local_a28 + 0x68b) = *(byte *)((longlong)local_a28 + 0x68b) | bVar5;
    *(byte *)((longlong)local_a28 + 0x68d) = *(byte *)((longlong)local_a28 + 0x68d) | bVar5;
    *(byte *)(local_a28 + 0xd1) = (byte)local_a28[0xd1] | bVar5;
    if (bVar5 != 0) {
      *(undefined1 *)((longlong)local_a08 + 0x662) = 0;
      FUN_180164290(param_1);
    }
  }
  return;
}

