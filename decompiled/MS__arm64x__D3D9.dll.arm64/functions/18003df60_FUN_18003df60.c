/*
 * FUN_18003df60 at 18003df60
 * undefined FUN_18003df60(void)
 * Address ranges: 18003df60-18003fb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003df60(ulonglong *param_1,int param_2,uint *param_3,ulonglong param_4,ulonglong param_5,
                  int param_6,int param_7,uint param_8,uint param_9,byte param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  char cVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
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
  undefined8 uVar45;
  ulonglong uVar46;
  float fVar47;
  undefined8 uVar48;
  ulonglong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  float local_a1c;
  ulonglong *local_a18;
  uint local_a10;
  float local_a0c;
  ulonglong *local_a08;
  uint local_a00;
  int local_9fc;
  ulonglong *local_9f8;
  int local_9f0;
  uint local_9ec;
  ulonglong *local_9e8;
  ulonglong local_9e0;
  int local_9d8;
  int local_9d4;
  ulonglong *local_9d0;
  uint *local_9c8;
  uint local_9c0;
  uint local_9bc;
  uint local_9b8;
  uint *local_9b0;
  byte *local_9a8;
  byte *local_9a0;
  byte *local_998;
  byte *local_990;
  byte *local_988;
  byte *local_980;
  byte *local_978;
  ulonglong local_970;
  ulonglong local_960;
  ulonglong uStack_958;
  ulonglong uStack_950;
  ulonglong uStack_948;
  ulonglong local_940;
  ulonglong uStack_938;
  ulonglong local_930;
  ulonglong uStack_928;
  ulonglong local_920;
  ulonglong uStack_918;
  ulonglong uStack_910;
  ulonglong local_908;
  ulonglong local_900;
  ulonglong local_8f0 [6];
  ulonglong local_8c0;
  undefined4 uStack_8b7;
  undefined2 uStack_8b3;
  undefined1 local_8b1;
  float local_8b0;
  float fStack_8ac;
  float fStack_8a8;
  float fStack_8a4;
  float local_8a0;
  float local_89c;
  float local_898;
  float local_894;
  float local_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  float local_880;
  float local_87c;
  float local_878;
  float local_874;
  ulonglong local_870;
  ulonglong uStack_868;
  ulonglong uStack_860;
  ulonglong uStack_858;
  undefined1 auStack_850 [2048];
  
  local_9fc = param_2;
  local_970 = param_4;
  local_900 = param_5;
  local_a08 = param_1 + 0x1e00;
  local_9d8 = param_7;
  local_9d4 = param_6;
  local_a18 = param_1 + 0x1800;
  local_9b8 = param_8;
  local_9f8 = param_1 + 0xe00;
  local_9e8 = param_1 + 0x800;
  if ((char)param_3[7] == -1) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)*(byte *)((longlong)param_3 + 0x1d);
  }
  local_a00 = *(uint *)((longlong)param_1 + 0x764c);
  if (local_a00 < uVar13) {
    uVar13 = local_a00;
  }
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    uVar12 = (ulonglong)*(byte *)((longlong)param_3 + 0x1a);
  }
  else {
    uVar12 = 0;
  }
  bVar7 = *(char *)((longlong)param_3 + 0x41) != -0x60;
  if (bVar7) {
    uVar26 = 2;
  }
  else {
    uVar26 = 3;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x42) << 0x14);
  }
  uVar19 = (uint)!bVar7;
  if (*(char *)((longlong)param_3 + 0x49) == -0x5f) {
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x4a) << 0x18);
    uVar19 = uVar26;
  }
  if (*(char *)((longlong)param_3 + 0x31) == '0') {
    uVar19 = uVar19 | 4;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x32) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x51) == 'P') {
    uVar19 = uVar19 | 8;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x52) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x59) == 'Q') {
    uVar11 = (ulonglong)*(byte *)((longlong)param_3 + 0x5a);
    uVar19 = uVar19 | 0x10;
  }
  else {
    uVar11 = 0;
  }
  if (*(char *)((longlong)param_3 + 0x61) == 'R') {
    uVar19 = uVar19 | 0x20;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x62) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x69) == 'S') {
    uVar19 = uVar19 | 0x40;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x6a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x71) == 'T') {
    uVar19 = uVar19 | 0x80;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x72) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x79) == 'U') {
    uVar19 = uVar19 | 0x100;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x7a) << 0x10);
  }
  if (*(char *)((longlong)param_3 + 0x81) == 'V') {
    uVar19 = uVar19 | 0x200;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x82) << 0x14);
  }
  if (*(char *)((longlong)param_3 + 0x89) == 'W') {
    uVar19 = uVar19 | 0x400;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x8a) << 0x18);
  }
  if (*(char *)((longlong)param_3 + 0x21) == '\x10') {
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x22) << 4);
    uVar19 = *(uint *)(&DAT_18022ac30 + (ulonglong)uVar13 * 4) | uVar19;
  }
  if (*(char *)((longlong)param_3 + 0x91) == '\x01') {
    uVar19 = uVar19 | 0x10000;
    uVar11 = (ulonglong)((uint)uVar11 | (uint)*(byte *)((longlong)param_3 + 0x92) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x99) == '1') {
    uVar19 = uVar19 | 0x20000;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x9a) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x29) == ' ') {
    uVar19 = uVar19 | (uint)((int)param_1[0xde4] != 0 && local_a00 != 0) << 0xf;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x2a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x39) == '@') {
    uVar19 = uVar19 | 0x80000;
    uVar12 = (ulonglong)((uint)uVar12 | (uint)*(byte *)((longlong)param_3 + 0x3a) << 0x10);
  }
  local_9ec = uVar19 | (uint)(param_3[1] != 0) << 0x12;
  local_9bc = (uint)(local_a00 == 0xff);
  if ((2 < param_2 - 4U) || (bVar7 = true, *(float *)(param_1 + 0x1d5) < 2.0)) {
    bVar7 = false;
  }
  if (((*(uint *)((longlong)param_1 + 0x696c) & 1) == 0) ||
     (*(char *)((longlong)param_1 + 0xeac) != '\0')) {
    uVar13 = (uint)param_1[0xd2d];
  }
  else {
    uVar13 = (uint)*(float *)((longlong)param_1 + 0x6f64);
  }
  uVar28 = (ulonglong)uVar13;
  if (((((*(uint *)((longlong)param_1 + 0x6ea4) == (uint)*(byte *)((longlong)param_3 + 0x4d)) &&
        (*(uint *)((longlong)param_1 + 0x6eb4) == (uint)*(byte *)((longlong)param_3 + 0x55))) &&
       (*(uint *)((longlong)param_1 + 0x6ec4) == (uint)*(byte *)((longlong)param_3 + 0x5d))) &&
      ((*(uint *)((longlong)param_1 + 0x6ed4) == (uint)*(byte *)((longlong)param_3 + 0x65) &&
       (*(uint *)((longlong)param_1 + 0x6ee4) == (uint)*(byte *)((longlong)param_3 + 0x6d))))) &&
     ((*(uint *)((longlong)param_1 + 0x6ef4) == (uint)*(byte *)((longlong)param_3 + 0x75) &&
      ((*(uint *)((longlong)param_1 + 0x6f04) == (uint)*(byte *)((longlong)param_3 + 0x7d) &&
       (*(uint *)((longlong)param_1 + 0x6f14) == (uint)*(byte *)((longlong)param_3 + 0x85))))))) {
    local_9f0 = 0;
    local_980 = (byte *)((longlong)param_3 + 0x7d);
    local_988 = (byte *)((longlong)param_3 + 0x75);
    local_990 = (byte *)((longlong)param_3 + 0x6d);
    local_998 = (byte *)((longlong)param_3 + 0x65);
    local_9a0 = (byte *)((longlong)param_3 + 0x5d);
    local_9a8 = (byte *)((longlong)param_3 + 0x55);
    local_978 = (byte *)((longlong)param_3 + 0x85);
  }
  else {
    local_9f0 = 1;
    local_978 = (byte *)((longlong)param_3 + 0x85);
    local_980 = (byte *)((longlong)param_3 + 0x7d);
    local_988 = (byte *)((longlong)param_3 + 0x75);
    local_990 = (byte *)((longlong)param_3 + 0x6d);
    local_998 = (byte *)((longlong)param_3 + 0x65);
    local_9a0 = (byte *)((longlong)param_3 + 0x5d);
    local_9a8 = (byte *)((longlong)param_3 + 0x55);
  }
  lVar14 = 0xf7e0;
  if (param_3[1] == 0) {
    local_a10 = 0;
    if (*(char *)((longlong)param_1 + 0x7664) != '\0') {
      local_a10 = 8;
    }
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0x7654) >> 2 & 1) == 0) || ((int)param_1[0xeca] == 0)) {
      local_a10 = 2;
      uVar13 = 1;
    }
    else {
      local_a10 = 4;
      uVar13 = 3;
    }
    if ((((param_1[0x1efc] == 0) && ((char)param_1[0x15] != '\0')) && ((char)param_1[0xecc] == '\0')
        ) && (uVar26 = ((uint)param_1[0x1ee] & 0xaaaaaaaa) >> 1 |
                       ((uint)param_1[0x1ee] & 0x55555555) << 1,
             uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2,
             uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4,
             uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8,
             (uint)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10) < 5)) {
      local_a10 = 5;
    }
    if (bVar7) {
      local_a10 = 7;
      uVar13 = 6;
    }
    if ((char)param_1[2] == '\0') {
      bVar8 = param_10 == 0;
    }
    else {
      bVar8 = (char)param_3[0xb] == -1 || param_10 == 0;
    }
    if (bVar8) {
      local_a10 = uVar13;
    }
    if (((uVar19 & 0xf800) == 0) && (*(char *)((longlong)param_1 + 0x7664) == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (local_a00 == 0xff) {
      bVar8 = true;
    }
    if (bVar8) {
      local_a10 = local_a10 + 8;
    }
  }
  local_9c8 = (uint *)((longlong)param_1 + 0x7654);
  param_1[0x1fc] = param_1[0x1fc] & 0xfff7ffffffffffff;
  puVar24 = param_1;
  if (*(char *)((longlong)param_1 + 0xf6c5) != '\0') {
    auVar65 = FUN_180054520(param_1);
    uVar11 = auVar65._8_8_;
    puVar24 = auVar65._0_8_;
  }
  uStack_958 = 0;
  local_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  uStack_938 = 0;
  local_940 = 0;
  uStack_928 = 0;
  local_930 = 0;
  uStack_918 = 0;
  local_920 = 0;
  local_908 = 0;
  uStack_910 = 0;
  if (local_9f0 != 0) {
    *(uint *)((longlong)param_1 + 0xf7c) =
         (uint)*(byte *)((longlong)param_3 + 0x4d) |
         ((uint)*local_9a8 |
         ((uint)*local_9a0 |
         ((uint)*local_998 |
         ((uint)*local_990 | ((uint)*local_988 | (uint)(*local_978 | *local_980) << 3) << 3) << 3)
         << 3) << 3) << 3;
  }
  local_8c0 = (ulonglong)local_a10;
  puVar18 = local_9c8;
  if (*(longlong *)(param_1[0x1edf] + (ulonglong)local_a10 * 8 + 0x98) == 0) {
    uVar13 = *(uint *)((longlong)local_9e8 + 0x296c);
    if (((uVar13 & 1) == 0) || (*(char *)((longlong)param_1 + 0xeac) != '\0')) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0x800;
    }
    local_9b0 = (uint *)((longlong)param_1 + 0x7654);
    uVar26 = (uint)param_1[0xeca];
    if ((*(uint *)((longlong)param_1 + 0x7654) & 4) == 0) {
      uVar26 = 0;
    }
    local_9e0 = (ulonglong)uVar26;
    if (bVar7) {
      bVar7 = (uVar13 & 2) != 0;
      uVar33 = 0x100;
      if (bVar7) {
        uVar33 = 0x300;
      }
      if (((uVar13 >> 2 & 1) != 0) && (uVar33 = 0x500, bVar7)) {
        uVar33 = 0x700;
      }
      local_9e0 = uVar33 | local_9e0 | uVar23 | (uVar28 & 0xffffffff) << 0xc;
    }
    if (*(longlong *)((longlong)param_1 + lVar14) == 0) {
      uVar23 = 0;
      uVar13 = ((uint)param_1[0x1ee] & 0xaaaaaaaa) >> 1 | ((uint)param_1[0x1ee] & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      uVar28 = 0;
      uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
      if (uVar13 != 0) {
        do {
          if (((*(byte *)((longlong)param_1 + uVar28 + 0xf58) | 0x80) &
              *(byte *)((longlong)param_1 + uVar28 + 0xf68)) != 0 ||
              ((*(byte *)((longlong)param_1 + uVar28 + 0xf50) | 0x80) &
              *(byte *)((longlong)param_1 + uVar28 + 0xf60)) != 0) {
            uVar23 = (ulonglong)((uint)(byte)(&DAT_18022bd10)[uVar28] | (uint)uVar23);
          }
          uVar26 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar26;
        } while (uVar26 < uVar13);
      }
    }
    else {
      uVar23 = (ulonglong)
               *(byte *)(*(longlong *)(*(longlong *)((longlong)param_1 + lVar14) + 8) + 0x126c);
    }
    param_1[0x1f8] = uVar12 & 0xffffffff | uVar11 << 0x20;
    uVar13 = *(uint *)((longlong)param_1 + 0xfbc) & 0x7fd00000 | (uint)param_10 << 0x1f |
             (uint)(local_a00 == 0xff) << 0x15 | local_9ec & 0xfffff;
    *(uint *)((longlong)param_1 + 0xfbc) = uVar13;
    local_9d0 = param_1 + 0x1ef;
    if ((local_9ec & 1) == 0) {
      uVar26 = *(uint *)((longlong)param_1 + 0xfb4);
    }
    else {
      uVar26 = 0xffffffff;
    }
    if ((local_9ec & 2) == 0) {
      uVar19 = (uint)param_1[0x1f7];
    }
    else {
      uVar19 = 0xffffffff;
    }
    uVar13 = (int)uVar13 >> 0x1f;
    local_a0c = 0.0;
    uVar21 = (&DAT_18024ded0)[uVar23];
    local_a1c = (float)uVar23;
    uVar6 = uVar21 | (int)local_a1c << 0x18;
    *(uint *)((longlong)param_1 + 0xf8c) = uVar21;
    *(uint *)((longlong)param_1 + 0xf94) = uVar6;
    *(uint *)(param_1 + 499) = uVar21;
    uVar20 = ((uint)local_a1c & 0xaaaaaaaa) >> 1 | ((uint)local_a1c & 0x55555555) << 1;
    uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
    lVar14 = LZCOUNT((uVar20 >> 4 | (uVar20 & 0xf0f0f0f) << 4) << 0x18);
    uVar20 = (uint)lVar14;
    if ((1 - (uVar20 >> 5) & 0xff) != 0) {
      local_9c0 = uVar19;
      *(byte *)((longlong)&local_a1c + (longlong)((int)uVar20 >> 3)) =
           *(byte *)((longlong)&local_a1c + (longlong)((int)uVar20 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar20 & 7)) ^ 0xff);
      uVar12 = *local_9d0;
      while( true ) {
        local_a0c = (float)CONCAT31(local_a0c._1_3_,
                                    local_a0c._0_1_ |
                                    (byte)(1 << (ulonglong)
                                                ((uint)uVar12 >> (ulonglong)((int)lVar14 * 3 & 0x1f)
                                                & 7)));
        uVar19 = ((uint)local_a1c & 0xaaaaaaaa) >> 1 | ((uint)local_a1c & 0x55555555) << 1;
        uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
        lVar14 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
        uVar20 = (uint)lVar14;
        uVar19 = local_9c0;
        if ((1 - (uVar20 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_a1c + (longlong)((int)uVar20 >> 3)) =
             *(byte *)((longlong)&local_a1c + (longlong)((int)uVar20 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar20 & 7)) ^ 0xff);
      }
    }
    uVar3 = (&DAT_18024ded0)[(uint)local_a0c];
    *(uint *)(param_1 + 0x1f6) = uVar13;
    uVar33 = param_1[0x1f8];
    *(uint *)(param_1 + 0x1f2) = uVar3;
    uVar20 = *(uint *)((longlong)param_1 + 0xfbc) & ((int)local_a0c << 3 | 0xfffff807U);
    *(uint *)((longlong)param_1 + 0xfbc) = uVar20;
    uVar26 = uVar19 & uVar26 & uVar13;
    local_8f0[4] = uVar33;
    uVar19 = uVar13 & (uint)param_1[500];
    *(uint *)(param_1 + 0x1f5) = uVar19;
    *(uint *)((longlong)param_1 + 0xfac) = uVar26;
    uVar12 = CONCAT44(*(uint *)((longlong)param_1 + 0xf7c) & uVar3,
                      uVar21 & (uint)param_1[0x1f1] & (uint)*local_9d0);
    uVar11 = CONCAT44(*(uint *)((longlong)param_1 + 0xfa4) & uVar26,
                      *(uint *)((longlong)param_1 + 0xf9c) & uVar19);
    uVar28 = ((ulonglong)uVar13 | 0xc0000000) & (ulonglong)(uint)param_1[500] |
             (ulonglong)uVar20 << 0x20;
    uVar23 = CONCAT44(uVar21 & *(uint *)((longlong)param_1 + 0xf84),uVar6 & (uint)param_1[0x1f0]);
    local_8f0[2] = uVar11;
    local_8f0[3] = uVar28;
    uVar26 = (uint)local_a18[0x6f6];
    local_8f0[0] = uVar12;
    local_8f0[1] = uVar23;
    uVar13 = 0;
    if (uVar26 != 0) {
      uVar22 = param_1[0x1ef5];
      uVar19 = 0;
      uVar21 = uVar26;
      do {
        uVar13 = uVar21 + uVar19 >> 1;
        uVar15 = (ulonglong)uVar13 * 0x30;
        lVar16 = 0;
        lVar14 = uVar15 + uVar22;
        if ((((*(ulonglong *)(uVar15 + uVar22) == uVar12) &&
             (lVar16 = 1, *(ulonglong *)(lVar14 + 8) == uVar23)) &&
            (lVar16 = 2, *(ulonglong *)(lVar14 + 0x10) == uVar11)) &&
           ((lVar16 = 3, *(ulonglong *)(lVar14 + 0x18) == uVar28 &&
            (lVar16 = 4, *(ulonglong *)(lVar14 + 0x20) == uVar33)))) {
          puVar24 = (ulonglong *)(lVar14 + 8);
LAB_18003e8b0:
          lVar16 = 1;
          if (((*puVar24 == uVar23) &&
              (lVar16 = 2, *(ulonglong *)(uVar22 + 0x10 + uVar15) == uVar11)) &&
             ((lVar16 = 3, *(ulonglong *)(uVar22 + 0x18 + uVar15) == uVar28 &&
              (lVar16 = 4, *(ulonglong *)(uVar22 + 0x20 + uVar15) == uVar33)))) break;
LAB_18003e8f0:
          if (local_8f0[lVar16] <= *(ulonglong *)(lVar14 + lVar16 * 8)) break;
          uVar19 = uVar13 + 1;
          uVar13 = uVar13 + 1;
          uVar6 = uVar21;
        }
        else {
          uVar6 = uVar13;
          if (*(ulonglong *)(lVar14 + lVar16 * 8) <= local_8f0[lVar16]) {
            puVar24 = (ulonglong *)((uVar15 | 8) + uVar22);
            lVar16 = 0;
            if (*(ulonglong *)(uVar15 + uVar22) == uVar12) goto LAB_18003e8b0;
            goto LAB_18003e8f0;
          }
        }
        uVar21 = uVar6;
      } while (uVar21 != uVar19);
    }
    if (uVar13 == uVar26) {
LAB_18003ebc4:
      puVar27 = (undefined8 *)FUN_180102f80(0x2f8);
      puVar24 = local_a18;
      if (puVar27 == (undefined8 *)0x0) {
        puVar24 = (ulonglong *)0x0;
        puVar18 = local_9b0;
        goto LAB_18003ef18;
      }
      uVar30 = 0;
      uVar15 = param_1[0x1ef2];
      uVar4 = *(undefined1 *)((longlong)local_a08 + 0x79c);
      uVar22 = local_a18[0x6f3];
      *puVar27 = &PTR_D3DPERF_GetStatus_180234120;
      puVar27[1] = 0;
      *(undefined4 *)(puVar27 + 2) = 0;
      puVar27[3] = 0;
      puVar27[4] = &PTR_FUN_1802349e8;
      uVar49 = *local_9d0;
      uVar46 = local_9d0[3];
      uVar44 = local_9d0[2];
      puVar27[7] = local_9d0[1];
      puVar27[6] = uVar49;
      puVar27[9] = uVar46;
      puVar27[8] = uVar44;
      uVar49 = local_9d0[4];
      uVar46 = local_9d0[7];
      uVar44 = local_9d0[6];
      puVar27[0xb] = local_9d0[5];
      puVar27[10] = uVar49;
      puVar27[0xd] = uVar46;
      puVar27[0xc] = uVar44;
      uVar44 = local_9d0[8];
      puVar27[0xf] = local_9d0[9];
      puVar27[0xe] = uVar44;
      *puVar27 = &PTR_FUN_180234640;
      puVar27[1] = uVar15;
      puVar27[0x10] = 0;
      puVar27[0x11] = 0;
      puVar27[0x12] = 0;
      *(undefined1 *)(puVar27 + 0x5e) = uVar4;
      *(int *)(puVar27 + 2) = (int)uVar22;
      puVar27[3] = puVar27 + 0x10;
      uVar13 = (uint)local_a18[0x6f6];
      if (uVar13 != 0) {
        uVar22 = param_1[0x1ef5];
        uVar26 = 0;
        uVar19 = uVar13;
        do {
          uVar21 = uVar19 + uVar26 >> 1;
          uVar30 = (ulonglong)uVar21;
          uVar15 = uVar30 * 0x30;
          lVar16 = 0;
          lVar14 = uVar15 + uVar22;
          if ((((*(ulonglong *)(uVar15 + uVar22) == uVar12) &&
               (lVar16 = 1, *(ulonglong *)(lVar14 + 8) == uVar23)) &&
              (lVar16 = 2, *(ulonglong *)(lVar14 + 0x10) == uVar11)) &&
             ((lVar16 = 3, *(ulonglong *)(lVar14 + 0x18) == uVar28 &&
              (lVar16 = 4, *(ulonglong *)(lVar14 + 0x20) == uVar33)))) {
            puVar25 = (ulonglong *)(lVar14 + 8);
LAB_18003ecfc:
            lVar16 = 0;
            if ((((*(ulonglong *)(uVar15 + uVar22) == uVar12) && (lVar16 = 1, *puVar25 == uVar23))
                && ((lVar16 = 2, *(ulonglong *)(uVar22 + 0x10 + uVar15) == uVar11 &&
                    ((lVar16 = 3, *(ulonglong *)(uVar22 + 0x18 + uVar15) == uVar28 &&
                     (lVar16 = 4, *(ulonglong *)(uVar22 + 0x20 + uVar15) == uVar33)))))) ||
               (local_8f0[lVar16] <= *(ulonglong *)(lVar14 + lVar16 * 8))) break;
            uVar26 = uVar21 + 1;
            uVar30 = (ulonglong)(uVar21 + 1);
            uVar21 = uVar19;
          }
          else if (*(ulonglong *)(lVar14 + lVar16 * 8) <= local_8f0[lVar16]) {
            puVar25 = (ulonglong *)((uVar15 | 8) + uVar22);
            goto LAB_18003ecfc;
          }
          uVar19 = uVar21;
        } while (uVar19 != uVar26);
      }
      if ((uint)uVar30 == uVar13) {
LAB_18003edb4:
        uVar26 = *(uint *)((longlong)local_a18 + 0x37b4);
        if (uVar26 == uVar13) {
          uVar13 = 0x10;
          if (uVar26 != 0) {
            uVar13 = uVar26 << 1;
          }
          uVar12 = thunk_FUN_180102f80((ulonglong)uVar13 * 0x30);
          if (uVar12 != 0) {
            uVar11 = 0;
            if ((int)puVar24[0x6f6] != 0) {
              do {
                puVar31 = (undefined8 *)(param_1[0x1ef5] + uVar11 * 0x30);
                puVar34 = (undefined8 *)(uVar12 + uVar11 * 0x30);
                uVar26 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar26;
                uVar48 = *puVar31;
                uVar45 = puVar31[3];
                uVar10 = puVar31[2];
                puVar34[1] = puVar31[1];
                *puVar34 = uVar48;
                puVar34[3] = uVar45;
                puVar34[2] = uVar10;
                uVar10 = puVar31[4];
                puVar34[5] = puVar31[5];
                puVar34[4] = uVar10;
              } while (uVar26 < (uint)puVar24[0x6f6]);
            }
            thunk_FUN_180102fc0(param_1[0x1ef4]);
            param_1[0x1ef4] = uVar12;
            param_1[0x1ef5] = uVar12;
            *(uint *)((longlong)local_a18 + 0x37b4) = uVar13;
          }
        }
        uVar13 = (uint)local_a18[0x6f6];
        if (*(uint *)((longlong)local_a18 + 0x37b4) != uVar13) {
          while ((uint)uVar30 < uVar13) {
            uVar12 = (ulonglong)uVar13;
            uVar13 = uVar13 - 1;
            puVar31 = (undefined8 *)(param_1[0x1ef5] + uVar12 * 0x30);
            puVar34 = (undefined8 *)(param_1[0x1ef5] + (ulonglong)uVar13 * 0x30);
            uVar48 = *puVar34;
            uVar45 = puVar34[3];
            uVar10 = puVar34[2];
            puVar31[1] = puVar34[1];
            *puVar31 = uVar48;
            puVar31[3] = uVar45;
            puVar31[2] = uVar10;
            uVar10 = puVar34[4];
            puVar31[5] = puVar34[5];
            puVar31[4] = uVar10;
          }
          *(int *)(local_a18 + 0x6f6) = (int)local_a18[0x6f6] + 1;
          puVar24 = (ulonglong *)(param_1[0x1ef5] + uVar30 * 0x30);
          puVar24[1] = local_8f0[1];
          *puVar24 = local_8f0[0];
          puVar24[3] = local_8f0[3];
          puVar24[2] = local_8f0[2];
          puVar24[4] = local_8f0[4];
          *(undefined8 **)(param_1[0x1ef5] + uVar30 * 0x30 + 0x28) = puVar27;
        }
      }
      else {
        uVar12 = 0;
        lVar14 = param_1[0x1ef5] + uVar30 * 0x30;
        do {
          if (*(ulonglong *)(lVar14 + uVar12 * 8) != local_8f0[uVar12]) goto LAB_18003edb4;
          uVar26 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar26;
        } while (uVar26 < 5);
        *(undefined8 **)(lVar14 + 0x28) = puVar27;
      }
      puVar24 = (ulonglong *)FUN_180052fe0(puVar27,local_9e0);
    }
    else {
      uVar22 = 0;
      lVar14 = param_1[0x1ef5] + (ulonglong)uVar13 * 0x30;
      do {
        if (*(ulonglong *)(lVar14 + uVar22 * 8) != local_8f0[uVar22]) goto LAB_18003ebc4;
        uVar13 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar13;
      } while (uVar13 < 5);
      puVar27 = (undefined8 *)(lVar14 + 0x28);
      if (puVar27 == (undefined8 *)0x0) goto LAB_18003ebc4;
      puVar27 = (undefined8 *)*puVar27;
      puVar24 = (ulonglong *)puVar27[3];
      uVar13 = (uint)puVar24[2];
      if (uVar13 == 0) {
LAB_18003e9e0:
        (**(code **)*puVar27)(puVar27,&local_8b0,local_9e0);
        plVar29 = (longlong *)puVar27[3];
        uVar13 = 0;
        uVar26 = *(uint *)(plVar29 + 2);
        if (uVar26 != 0) {
          uVar19 = 0;
          uVar21 = uVar26;
          do {
            uVar13 = uVar21 + uVar19 >> 1;
            uVar12 = *(ulonglong *)(plVar29[1] + (ulonglong)uVar13 * 0x70);
            uVar6 = uVar13;
            if (uVar12 <= local_9e0) {
              if (local_9e0 <= uVar12) break;
              uVar19 = uVar13 + 1;
              uVar13 = uVar13 + 1;
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
          } while (uVar21 != uVar19);
        }
        if ((uVar13 == uVar26) ||
           (puVar24 = (ulonglong *)(plVar29[1] + (ulonglong)uVar13 * 0x70), *puVar24 != local_9e0))
        {
          uVar19 = *(uint *)((longlong)plVar29 + 0x14);
          if (uVar19 == uVar26) {
            uVar26 = 0x10;
            if (uVar19 != 0) {
              uVar26 = uVar19 << 1;
            }
            lVar14 = thunk_FUN_180102f80((ulonglong)uVar26 * 0x70);
            if (lVar14 != 0) {
              uVar12 = 0;
              if ((int)plVar29[2] != 0) {
                do {
                  puVar34 = (undefined8 *)(plVar29[1] + uVar12 * 0x70);
                  puVar27 = (undefined8 *)(lVar14 + uVar12 * 0x70);
                  uVar19 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar19;
                  uVar48 = *puVar34;
                  uVar45 = puVar34[3];
                  uVar10 = puVar34[2];
                  puVar27[1] = puVar34[1];
                  *puVar27 = uVar48;
                  puVar27[3] = uVar45;
                  puVar27[2] = uVar10;
                  uVar48 = puVar34[4];
                  uVar45 = puVar34[7];
                  uVar10 = puVar34[6];
                  puVar27[5] = puVar34[5];
                  puVar27[4] = uVar48;
                  puVar27[7] = uVar45;
                  puVar27[6] = uVar10;
                  uVar48 = puVar34[8];
                  uVar45 = puVar34[0xb];
                  uVar10 = puVar34[10];
                  puVar27[9] = puVar34[9];
                  puVar27[8] = uVar48;
                  puVar27[0xb] = uVar45;
                  puVar27[10] = uVar10;
                  uVar10 = puVar34[0xc];
                  puVar27[0xd] = puVar34[0xd];
                  puVar27[0xc] = uVar10;
                } while (uVar19 < *(uint *)(plVar29 + 2));
              }
              thunk_FUN_180102fc0(*plVar29);
              *plVar29 = lVar14;
              plVar29[1] = lVar14;
              *(uint *)((longlong)plVar29 + 0x14) = uVar26;
            }
          }
          uVar26 = *(uint *)(plVar29 + 2);
          if (*(uint *)((longlong)plVar29 + 0x14) != uVar26) {
            while (uVar13 < uVar26) {
              puVar27 = (undefined8 *)(plVar29[1] + (ulonglong)uVar26 * 0x70);
              puVar34 = (undefined8 *)(plVar29[1] + (ulonglong)(uVar26 - 1) * 0x70);
              uVar48 = *puVar34;
              uVar45 = puVar34[3];
              uVar10 = puVar34[2];
              puVar27[1] = puVar34[1];
              *puVar27 = uVar48;
              puVar27[3] = uVar45;
              puVar27[2] = uVar10;
              uVar48 = puVar34[4];
              uVar45 = puVar34[7];
              uVar10 = puVar34[6];
              puVar27[5] = puVar34[5];
              puVar27[4] = uVar48;
              puVar27[7] = uVar45;
              puVar27[6] = uVar10;
              uVar48 = puVar34[8];
              uVar45 = puVar34[0xb];
              uVar10 = puVar34[10];
              puVar27[9] = puVar34[9];
              puVar27[8] = uVar48;
              puVar27[0xb] = uVar45;
              puVar27[10] = uVar10;
              uVar10 = puVar34[0xc];
              puVar27[0xd] = puVar34[0xd];
              puVar27[0xc] = uVar10;
              uVar26 = uVar26 - 1;
            }
            lVar16 = (ulonglong)uVar13 * 0x70;
            *(int *)(plVar29 + 2) = (int)plVar29[2] + 1;
            *(ulonglong *)(lVar16 + plVar29[1] + 8) = local_9e0;
            lVar14 = lVar16 + plVar29[1];
            *(ulonglong *)(lVar14 + 0x18) = CONCAT44(fStack_8a4,fStack_8a8);
            *(ulonglong *)(lVar14 + 0x10) = CONCAT44(fStack_8ac,local_8b0);
            *(ulonglong *)(lVar14 + 0x28) = CONCAT44(local_894,local_898);
            *(ulonglong *)(lVar14 + 0x20) = CONCAT44(local_89c,local_8a0);
            *(ulonglong *)(lVar14 + 0x38) = CONCAT44(fStack_884,fStack_888);
            *(ulonglong *)(lVar14 + 0x30) = CONCAT44(fStack_88c,local_890);
            *(ulonglong *)(lVar14 + 0x48) = CONCAT44(local_874,local_878);
            *(ulonglong *)(lVar14 + 0x40) = CONCAT44(local_87c,local_880);
            *(ulonglong *)(lVar14 + 0x58) = uStack_868;
            *(ulonglong *)(lVar14 + 0x50) = local_870;
            *(ulonglong *)(lVar14 + 0x68) = uStack_858;
            *(ulonglong *)(lVar14 + 0x60) = uStack_860;
            *(ulonglong *)(plVar29[1] + lVar16) = local_9e0;
          }
          puVar24 = (ulonglong *)(plVar29[1] + (ulonglong)uVar13 * 0x70);
          goto LAB_18003ebbc;
        }
        puVar24[3] = CONCAT44(fStack_8a4,fStack_8a8);
        puVar24[2] = CONCAT44(fStack_8ac,local_8b0);
        puVar24[5] = CONCAT44(local_894,local_898);
        puVar24[4] = CONCAT44(local_89c,local_8a0);
        puVar24[7] = CONCAT44(fStack_884,fStack_888);
        puVar24[6] = CONCAT44(fStack_88c,local_890);
        puVar24[9] = CONCAT44(local_874,local_878);
        puVar24[8] = CONCAT44(local_87c,local_880);
        puVar24[0xb] = uStack_868;
        puVar24[10] = local_870;
        puVar24[0xd] = uStack_858;
        puVar24[0xc] = uStack_860;
        puVar24 = (ulonglong *)(plVar29[1] + (ulonglong)uVar13 * 0x70 + 0x10);
      }
      else {
        uVar26 = 0;
        uVar19 = uVar13;
        do {
          uVar21 = uVar19 + uVar26 >> 1;
          uVar12 = *(ulonglong *)(puVar24[1] + (ulonglong)uVar21 * 0x70);
          uVar6 = uVar21;
          if (uVar12 <= local_9e0) {
            if (local_9e0 <= uVar12) break;
            uVar26 = uVar21 + 1;
            uVar21 = uVar21 + 1;
            uVar6 = uVar19;
          }
          uVar19 = uVar6;
        } while (uVar19 != uVar26);
        local_9d0 = puVar24;
        if (((uVar21 == uVar13) ||
            (puVar24 = (ulonglong *)(puVar24[1] + (ulonglong)uVar21 * 0x70), *puVar24 != local_9e0))
           || (puVar24 == (ulonglong *)0xfffffffffffffff0)) goto LAB_18003e9e0;
LAB_18003ebbc:
        puVar24 = puVar24 + 2;
      }
    }
    puVar18 = local_9b0;
    if (puVar24 != (ulonglong *)0x0) {
      uStack_958 = puVar24[1];
      local_960 = *puVar24;
      uStack_948 = puVar24[3];
      uStack_950 = puVar24[2];
      uStack_938 = puVar24[5];
      local_940 = puVar24[4];
      uStack_928 = puVar24[7];
      local_930 = puVar24[6];
      uStack_918 = puVar24[9];
      local_920 = puVar24[8];
      local_908 = puVar24[0xb];
      uStack_910 = puVar24[10];
    }
  }
LAB_18003ef18:
  puVar25 = local_a08;
  if (local_960 == 0) {
    local_960 = *(ulonglong *)(param_1[0x1edf] + local_8c0 * 8 + 0x98);
    lVar14 = (ulonglong)local_a10 * 0x28;
    uStack_950 = *(ulonglong *)(lVar14 + 0x180230a18);
    uStack_958 = *(ulonglong *)(lVar14 + 0x180230a10);
    local_940 = *(ulonglong *)(lVar14 + 0x180230a28);
    uStack_948 = *(ulonglong *)(lVar14 + 0x180230a20);
    uStack_938 = *(ulonglong *)(lVar14 + 0x180230a30);
    puVar18 = local_9c8;
  }
  uVar12 = local_960;
  if ((((*puVar18 >> 2 & 1) != 0) && ((local_a10 & 0xfffffff7) == 0)) &&
     (*(char *)((longlong)local_a08 + 0x693) != '\0')) {
    fVar63 = *(float *)((longlong)local_9e8 + 0x35a4);
    fVar60 = *(float *)((longlong)local_9e8 + 0x35b4);
    fVar35 = *(float *)(local_9e8 + 0x6bd);
    fVar36 = *(float *)((longlong)local_9e8 + 0x35e4);
    fVar41 = *(float *)((longlong)local_9e8 + 0x35c4);
    fVar37 = *(float *)((longlong)local_9e8 + 0x35ec);
    fVar39 = *(float *)((longlong)local_9e8 + 0x35d4);
    fVar38 = *(float *)(local_9e8 + 0x6be);
    fVar58 = *(float *)(local_9e8 + 0x6bf);
    fVar57 = *(float *)((longlong)local_9e8 + 0x35f4);
    fVar56 = *(float *)((longlong)local_9e8 + 0x35fc);
    local_a0c = *(float *)(local_9e8 + 0x6c0);
    fVar55 = *(float *)(local_9e8 + 0x6c1);
    fVar54 = *(float *)((longlong)local_9e8 + 0x3604);
    fVar53 = *(float *)((longlong)local_9e8 + 0x360c);
    fVar52 = *(float *)(local_9e8 + 0x6c2);
    fVar61 = *(float *)(local_9e8 + 0x6b5);
    fVar59 = *(float *)(local_9e8 + 0x6b7);
    fVar42 = *(float *)(local_9e8 + 0x6b9);
    fVar40 = *(float *)(local_9e8 + 0x6bb);
    local_8b0 = fVar35 * fVar60 + fVar36 * fVar63 + fVar37 * fVar41 + fVar38 * fVar39;
    local_8a0 = fVar58 * fVar60 + fVar57 * fVar63 + fVar56 * fVar41 + local_a0c * fVar39;
    fVar50 = *(float *)((longlong)local_9e8 + 0x3614);
    fVar51 = *(float *)(local_9e8 + 0x6c3);
    local_890 = fVar55 * fVar60 + fVar54 * fVar63 + fVar53 * fVar41 + fVar52 * fVar39;
    fVar47 = *(float *)((longlong)local_9e8 + 0x361c);
    fVar43 = *(float *)(local_9e8 + 0x6c4);
    local_880 = fVar51 * fVar60 + fVar50 * fVar63 + fVar47 * fVar41 + fVar43 * fVar39;
    fStack_8ac = fVar35 * fVar59 + fVar36 * fVar61 + fVar37 * fVar42 + fVar38 * fVar40;
    local_89c = fVar58 * fVar59 + fVar57 * fVar61 + fVar56 * fVar42 + local_a0c * fVar40;
    fVar41 = *(float *)((longlong)local_9e8 + 0x35ac);
    fVar64 = *(float *)((longlong)local_9e8 + 0x35cc);
    fStack_88c = fVar55 * fVar59 + fVar54 * fVar61 + fVar53 * fVar42 + fVar52 * fVar40;
    fVar63 = *(float *)((longlong)local_9e8 + 0x35dc);
    fVar62 = *(float *)(local_9e8 + 0x6ba);
    fVar60 = *(float *)(local_9e8 + 0x6b6);
    fVar39 = *(float *)(local_9e8 + 0x6b8);
    local_87c = fVar51 * fVar59 + fVar50 * fVar61 + fVar47 * fVar42 + fVar43 * fVar40;
    local_a1c = *(float *)((longlong)local_9e8 + 0x35bc);
    fVar40 = *(float *)(local_9e8 + 0x6bc);
    fStack_8a8 = fVar35 * local_a1c + fVar36 * fVar41 + fVar37 * fVar64 + fVar38 * fVar63;
    local_898 = fVar58 * local_a1c + fVar57 * fVar41 + fVar56 * fVar64 + local_a0c * fVar63;
    fStack_888 = fVar55 * local_a1c + fVar54 * fVar41 + fVar53 * fVar64 + fVar52 * fVar63;
    local_878 = fVar51 * local_a1c + fVar50 * fVar41 + fVar47 * fVar64 + fVar43 * fVar63;
    fStack_8a4 = fVar35 * fVar39 + fVar36 * fVar60 + fVar37 * fVar62 + fVar38 * fVar40;
    local_894 = fVar58 * fVar39 + fVar57 * fVar60 + fVar56 * fVar62 + local_a0c * fVar40;
    fStack_884 = fVar55 * fVar39 + fVar54 * fVar60 + fVar53 * fVar62 + fVar52 * fVar40;
    local_874 = fVar51 * fVar39 + fVar50 * fVar60 + fVar47 * fVar62 + fVar43 * fVar40;
    puVar24 = (ulonglong *)FUN_18001eff8(&local_8b0,param_1 + 0xd74,0);
    *(undefined1 *)((longlong)puVar25 + 0x693) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  }
  bVar7 = (local_a10 - 5 & 0xfffffff7) == 0;
  if (bVar7) {
    local_9c8 = (uint *)0x128;
  }
  else {
    local_9c8 = (uint *)0x120;
  }
  uVar28 = 0;
  cVar32 = *(char *)((longlong)local_9f8 + 0x66b);
  *(bool *)((longlong)local_9f8 + 0x66b) = bVar7;
  *(byte *)(local_a08 + 0xd1) = bVar7 != (bool)cVar32 | (byte)local_a08[0xd1];
  uVar11 = 0x8000000000000000;
  if (local_a00 != 0xff) {
    uVar11 = 0;
  }
  uVar11 = uVar11 | *param_3;
  uVar13 = *(uint *)((longlong)local_a18 + 0x3784);
  if (uVar13 != 0) {
    uVar26 = 0;
    uVar19 = uVar13;
    do {
      uVar21 = uVar19 + uVar26 >> 1;
      uVar28 = (ulonglong)uVar21;
      uVar23 = *(ulonglong *)(param_1[0x1eef] + uVar28 * 0x20);
      if (uVar23 <= uVar11) {
        if (uVar11 <= uVar23) break;
        uVar26 = uVar21 + 1;
        uVar28 = (ulonglong)(uVar21 + 1);
        uVar21 = uVar19;
      }
      uVar19 = uVar21;
    } while (uVar19 != uVar26);
  }
  uVar26 = (uint)uVar28;
  if ((uVar26 == uVar13) || (*(ulonglong *)(param_1[0x1eef] + uVar28 * 0x20) != uVar11)) {
    if (uVar13 == (uint)local_a18[0x6f0]) {
      uVar13 = (uint)local_a18[0x6f0] << 1;
      uVar23 = CONCAT44(0,uVar13);
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar23;
      lVar14 = uVar23 << 5;
      if (SUB168(auVar65 * ZEXT816(0x20),8) != 0) {
        lVar14 = -1;
      }
      uVar33 = thunk_FUN_180102f80(lVar14);
      puVar24 = (ulonglong *)0x0;
      if (uVar33 != 0) {
        uVar22 = uVar33;
        if (3 < uVar13) {
          do {
            uVar23 = uVar23 - 4;
            *(undefined8 *)(uVar22 + 8) = 0;
            *(undefined4 *)(uVar22 + 0x10) = 0;
            *(undefined1 *)(uVar22 + 0x14) = 0;
            *(undefined8 *)(uVar22 + 0x28) = 0;
            *(undefined4 *)(uVar22 + 0x30) = 0;
            *(undefined1 *)(uVar22 + 0x34) = 0;
            *(undefined8 *)(uVar22 + 0x48) = 0;
            *(undefined4 *)(uVar22 + 0x50) = 0;
            *(undefined1 *)(uVar22 + 0x54) = 0;
            *(undefined8 *)(uVar22 + 0x68) = 0;
            *(undefined4 *)(uVar22 + 0x70) = 0;
            *(undefined1 *)(uVar22 + 0x74) = 0;
            uVar22 = uVar22 + 0x80;
          } while (3 < uVar23);
        }
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined8 *)(uVar22 + 8) = 0;
          *(undefined4 *)(uVar22 + 0x10) = 0;
          *(undefined1 *)(uVar22 + 0x14) = 0;
          uVar22 = uVar22 + 0x20;
        }
        uVar23 = 0;
        if ((int)local_a18[0x6f0] != 0) {
          do {
            uVar13 = (int)uVar23 + 1;
            puVar27 = (undefined8 *)(param_1[0x1eef] + uVar23 * 0x20);
            puVar34 = (undefined8 *)(uVar33 + uVar23 * 0x20);
            uVar48 = *puVar27;
            uVar45 = puVar27[3];
            uVar10 = puVar27[2];
            puVar34[1] = puVar27[1];
            *puVar34 = uVar48;
            puVar34[3] = uVar45;
            puVar34[2] = uVar10;
            uVar23 = (ulonglong)uVar13;
          } while (uVar13 < (uint)local_a18[0x6f0]);
        }
        puVar24 = (ulonglong *)thunk_FUN_180102fc0(param_1[0x1eef]);
        param_1[0x1eef] = uVar33;
        *(int *)(local_a18 + 0x6f0) = (int)local_a18[0x6f0] << 1;
      }
    }
    uVar13 = *(uint *)((longlong)local_a18 + 0x3784);
    uVar23 = (ulonglong)uVar13;
    if (uVar26 < uVar13) {
      if (3 < uVar13 - uVar26) {
        do {
          iVar17 = (int)uVar23;
          puVar27 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 1) * 0x20);
          puVar34 = (undefined8 *)(param_1[0x1eef] + uVar23 * 0x20);
          uVar48 = *puVar27;
          uVar45 = puVar27[3];
          uVar10 = puVar27[2];
          puVar34[1] = puVar27[1];
          *puVar34 = uVar48;
          puVar34[3] = uVar45;
          puVar34[2] = uVar10;
          puVar27 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 2) * 0x20);
          puVar34 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 1) * 0x20);
          uVar48 = *puVar27;
          uVar45 = puVar27[3];
          uVar10 = puVar27[2];
          puVar34[1] = puVar27[1];
          *puVar34 = uVar48;
          puVar34[3] = uVar45;
          puVar34[2] = uVar10;
          uVar23 = (ulonglong)(iVar17 - 4U);
          puVar27 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 3) * 0x20);
          puVar34 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 2) * 0x20);
          uVar48 = *puVar27;
          uVar45 = puVar27[3];
          uVar10 = puVar27[2];
          puVar34[1] = puVar27[1];
          *puVar34 = uVar48;
          puVar34[3] = uVar45;
          puVar34[2] = uVar10;
          puVar27 = (undefined8 *)(param_1[0x1eef] + (ulonglong)(iVar17 - 3) * 0x20);
          puVar34 = (undefined8 *)(param_1[0x1eef] + uVar23 * 0x20);
          uVar48 = *puVar34;
          uVar45 = puVar34[3];
          uVar10 = puVar34[2];
          puVar27[1] = puVar34[1];
          *puVar27 = uVar48;
          puVar27[3] = uVar45;
          puVar27[2] = uVar10;
        } while (uVar26 + 3 < iVar17 - 4U);
      }
      uVar13 = (uint)uVar23;
      while (uVar26 < uVar13) {
        uVar13 = (int)uVar23 - 1;
        puVar27 = (undefined8 *)(param_1[0x1eef] + uVar23 * 0x20);
        puVar34 = (undefined8 *)(param_1[0x1eef] + (ulonglong)uVar13 * 0x20);
        uVar48 = *puVar34;
        uVar45 = puVar34[3];
        uVar10 = puVar34[2];
        puVar27[1] = puVar34[1];
        *puVar27 = uVar48;
        puVar27[3] = uVar45;
        puVar27[2] = uVar10;
        uVar23 = (ulonglong)uVar13;
      }
    }
    lVar16 = uVar28 * 0x20;
    *(ulonglong *)(param_1[0x1eef] + lVar16) = uVar11;
    lVar14 = lVar16 + param_1[0x1eef];
    *(uint **)(lVar14 + 8) = param_3;
    *(undefined1 *)(lVar14 + 0x10) = (undefined1)local_9bc;
    *(undefined4 *)(lVar14 + 0x11) = uStack_8b7;
    *(undefined2 *)(lVar14 + 0x15) = uStack_8b3;
    *(undefined1 *)(lVar14 + 0x17) = local_8b1;
    uVar9 = FUN_18005c4e0(puVar24,param_3,auStack_850);
    uVar10 = FUN_1800ed3b0(param_1[0x1ef1] + 0x19c0,auStack_850,uVar9);
    *(undefined8 *)(lVar16 + param_1[0x1eef] + 0x18) = uVar10;
    *(int *)((longlong)local_a18 + 0x3784) = *(int *)((longlong)local_a18 + 0x3784) + 1;
  }
  uVar23 = local_930;
  uVar11 = local_970;
  uVar28 = *(ulonglong *)(uVar28 * 0x20 + param_1[0x1eef] + 0x18);
  if ((local_9fc == 1) &&
     (((*(char *)((longlong)local_9f8 + 0x666) != '\0' && (param_3[1] != 0)) ||
      (*(char *)((longlong)local_9f8 + 0x667) != '\0')))) {
    uVar23 = *(ulonglong *)((longlong)local_9c8 + param_1[0x1edf]);
    local_930 = uVar23;
    cVar32 = '\x01';
  }
  else {
    cVar32 = '\0';
    if (local_930 != 0) goto LAB_18003f684;
    local_930 = 0;
    cVar32 = '\0';
  }
  if (local_a10 == 6) {
    uVar23 = *(ulonglong *)(param_1[0x1edf] + 0x130);
    uVar12 = local_960;
    local_930 = uVar23;
    uStack_928 = _DAT_180230d10;
    local_920 = uRam0000000180230d18;
    uStack_918 = _DAT_180230d20;
    uStack_910 = uRam0000000180230d28;
    local_908 = DAT_180230d30;
  }
  else if (local_a10 == 7) {
    uVar23 = *(ulonglong *)(param_1[0x1edf] + 0x138);
    uVar12 = local_960;
    local_930 = uVar23;
    uStack_928 = _DAT_180230d38;
    local_920 = uRam0000000180230d40;
    uStack_918 = _DAT_180230d48;
    uStack_910 = uRam0000000180230d50;
    local_908 = DAT_180230d58;
  }
  else if (local_a10 == 0xe) {
    uVar23 = *(ulonglong *)(param_1[0x1edf] + 0x140);
    uVar12 = local_960;
    local_930 = uVar23;
    uStack_928 = _DAT_180230d60;
    local_920 = uRam0000000180230d68;
    uStack_918 = _DAT_180230d70;
    uStack_910 = uRam0000000180230d78;
    local_908 = DAT_180230d80;
  }
  else if (local_a10 == 0xf) {
    uVar23 = *(ulonglong *)(param_1[0x1edf] + 0x148);
    uVar12 = local_960;
    local_930 = uVar23;
    uStack_928 = _DAT_180230d88;
    local_920 = uRam0000000180230d90;
    uStack_918 = _DAT_180230d98;
    uStack_910 = uRam0000000180230da0;
    local_908 = DAT_180230da8;
  }
LAB_18003f684:
  uVar13 = (0x1000 - *(int *)((longlong)param_1 + 0x74)) - (int)param_1[0xe];
  uVar26 = (0x1000 - (int)param_1[0x12]) - *(int *)((longlong)param_1 + 0x94);
  bVar7 = *(char *)((longlong)local_9f8 + 0x661) == '\0';
  puVar1 = &DAT_180249de8;
  if (bVar7) {
    puVar1 = &DAT_180249e08;
  }
  puVar2 = &DAT_180249dc8;
  if (bVar7) {
    puVar2 = &DAT_180249e28;
  }
  if (((*(char *)((longlong)local_9f8 + 0x662) != '\0') ||
      ((uint)param_1[0xd28] != local_9ec || local_9f0 != 0)) ||
     ((((*(int *)((longlong)param_1 + 0x102c) != local_9d4 ||
        (((int)param_1[0x1fd] != local_9d8 || (param_1[0x1ff7] != local_900)))) ||
       (param_1[0x1fe7] != local_970)) ||
      ((((((param_1[0x1f1e] != uVar12 || (param_1[0x1f22] != uVar23)) ||
          ((char)param_1[0xecd] != cVar32)) ||
         ((*(uint *)((longlong)param_1 + 0x763c) != param_3[1] ||
          (*(int *)((longlong)param_1 + 0xf94c) != *(int *)(puVar2 + (longlong)local_9fc * 4))))) ||
        (*(int *)((longlong)param_1 + 0xffc4) != *(int *)(puVar1 + (longlong)local_9fc * 4))) ||
       ((((*(int *)((longlong)param_1 + 0x94) != 0) != (param_9 != 0) || uVar13 < local_9b8) ||
         uVar26 < param_9 || (param_1[0x1f28] != uVar28)))))))) {
    iVar17 = local_9d8;
    if (local_970 != param_1[0x1ee3]) {
      iVar17 = 0;
    }
    FUN_18003feb0(param_1,uVar13 < local_9b8,uVar26 < param_9,iVar17);
    if (uVar11 == param_1[0x1ee3]) {
      local_9d4 = *(int *)((longlong)param_1 + 0x7c);
    }
    if (*(char *)((longlong)local_9f8 + 0x662) != '\0') {
      *(undefined1 *)((longlong)local_a08 + 0x689) = 1;
      *(byte *)((longlong)local_a08 + 0x684) = *(byte *)((longlong)local_a08 + 0x684) | 1;
    }
    if (local_9f0 != 0) {
      *(uint *)((longlong)local_9e8 + 0x2ea4) = (uint)*(byte *)((longlong)param_3 + 0x4d);
      *(uint *)((longlong)param_1 + 0x6eb4) = (uint)*local_9a8;
      *(uint *)((longlong)param_1 + 0x6ec4) = (uint)*local_9a0;
      *(uint *)((longlong)param_1 + 0x6ed4) = (uint)*local_998;
      *(uint *)((longlong)param_1 + 0x6ee4) = (uint)*local_990;
      *(uint *)((longlong)param_1 + 0x6ef4) = (uint)*local_988;
      *(uint *)((longlong)param_1 + 0x6f04) = (uint)*local_980;
      *(uint *)((longlong)param_1 + 0x6f14) = (uint)*local_978;
      *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    }
    if ((uint)param_1[0xd28] != local_9ec) {
      *(uint *)(param_1 + 0xd28) = local_9ec;
      *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    }
    if ((int)param_1[0x1fd] != local_9d8) {
      *(int *)(param_1 + 0x1fd) = local_9d8;
      *(undefined1 *)((longlong)local_a08 + 0x68f) = 1;
    }
    if (param_1[0x1fe7] != local_970) {
      param_1[0x1fe7] = local_970;
      *(undefined1 *)((longlong)local_a08 + 0x68f) = 1;
    }
    if (*(int *)((longlong)param_1 + 0x102c) != local_9d4) {
      *(int *)((longlong)param_1 + 0x102c) = local_9d4;
      *(undefined1 *)((longlong)local_a08 + 0x68f) = 1;
    }
    if (param_1[0x1ff7] != local_900) {
      param_1[0x1ff7] = local_900;
      *(undefined1 *)(local_a08 + 0xd2) = 1;
    }
    if (param_1[0x1f28] != uVar28) {
      param_1[0x1f28] = uVar28;
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if (param_1[0x1f22] != uVar23) {
      param_1[0x1f22] = uVar23;
      if (uVar23 == 0) {
        param_1[0x2027] = 0;
        param_1[0x2026] = 0;
        param_1[0x2029] = 0;
        param_1[0x2028] = 0;
        param_1[0x202a] = 0;
      }
      else {
        param_1[0x2027] = local_920;
        param_1[0x2026] = uStack_928;
        param_1[0x2029] = uStack_910;
        param_1[0x2028] = uStack_918;
        param_1[0x202a] = local_908;
      }
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if (param_1[0x1f1e] != uVar12) {
      param_1[0x1f1e] = uVar12;
      param_1[0x2022] = uStack_950;
      param_1[0x2021] = uStack_958;
      param_1[0x2024] = local_940;
      param_1[0x2023] = uStack_948;
      param_1[0x2025] = uStack_938;
      uVar12 = param_1[0x1f1a];
      param_1[0x1f1a] = 0;
      *(byte *)((longlong)local_a08 + 0x6c2) = uVar12 != 0 | *(byte *)((longlong)local_a08 + 0x6c2);
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x763c) != param_3[1]) ||
       (*(char *)((longlong)local_9f8 + 0x662) != '\0')) {
      *(uint *)((longlong)param_1 + 0x763c) = param_3[1];
      *(undefined1 *)((longlong)local_a08 + 0x68e) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xffc4) != *(int *)(puVar1 + (longlong)local_9fc * 4)) {
      *(int *)((longlong)param_1 + 0xffc4) = *(int *)(puVar1 + (longlong)local_9fc * 4);
      *(undefined1 *)(param_1 + 0x2031) = 1;
    }
    if (*(int *)((longlong)param_1 + 0xf94c) != *(int *)(puVar2 + (longlong)local_9fc * 4)) {
      *(int *)((longlong)param_1 + 0xf94c) = *(int *)(puVar2 + (longlong)local_9fc * 4);
      *(undefined1 *)((longlong)param_1 + 0x10189) = 1;
    }
    if ((char)param_1[0xecd] != cVar32) {
      *(char *)(param_1 + 0xecd) = cVar32;
      *(undefined1 *)((longlong)local_a08 + 0x68d) = 1;
    }
    bVar5 = *(byte *)((longlong)local_9f8 + 0x662);
    *(byte *)((longlong)local_a08 + 0x68c) = *(byte *)((longlong)local_a08 + 0x68c) | bVar5;
    *(byte *)((longlong)local_a08 + 0x68b) = *(byte *)((longlong)local_a08 + 0x68b) | bVar5;
    *(byte *)((longlong)local_a08 + 0x68d) = *(byte *)((longlong)local_a08 + 0x68d) | bVar5;
    *(byte *)(local_a08 + 0xd1) = (byte)local_a08[0xd1] | bVar5;
    if (bVar5 != 0) {
      *(undefined1 *)((longlong)local_9f8 + 0x662) = 0;
      FUN_180054430(param_1);
    }
  }
  return;
}

