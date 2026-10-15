/*
 * FUN_180137c90 at 180137c90
 * undefined FUN_180137c90(void)
 * Address ranges: 180137c90-18013988f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180137c90(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  longlong lVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x15;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  undefined8 *puVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  longlong lStack_8;
  
  auVar58 = FUN_180104f10();
  lVar12 = auVar58._0_8_;
  lVar31 = extraout_x15 * -0x10;
  *(int *)(&stack0x00000008 + lVar31) = auVar58._8_4_;
  *(undefined8 *)(&stack0x000000d0 + lVar31) = param_4;
  *(undefined8 *)(&stack0x000000d8 + lVar31) = param_5;
  *(undefined4 *)(&stack0x0000005c + lVar31) = param_6;
  *(longlong *)(&stack0xffffffffffffffe8 + lVar31) = lVar12 + 0xf000;
  *(undefined4 *)(&stack0x00000040 + lVar31) = param_7;
  *(longlong *)(&stack0xffffffffffffffc8 + lVar31) = lVar12 + 0xc000;
  *(undefined4 *)(&stack0x00000090 + lVar31) = param_8;
  (&lStack_8)[extraout_x15 * -2] = lVar12 + 0x7000;
  *(longlong *)(&stack0x00000010 + lVar31) = lVar12 + 0x4000;
  if ((char)param_3[7] == -1) {
    uVar22 = 0;
  }
  else {
    uVar22 = (uint)*(byte *)((longlong)param_3 + 0x1d);
  }
  uVar37 = *(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x364c);
  if (uVar37 < uVar22) {
    uVar22 = uVar37;
  }
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    uVar18 = (ulonglong)*(byte *)((longlong)param_3 + 0x1a);
  }
  else {
    uVar18 = 0;
  }
  bVar10 = *(char *)((longlong)param_3 + 0x41) != -0x60;
  if (bVar10) {
    uVar39 = 2;
  }
  else {
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x42) << 0x14);
    uVar39 = 3;
  }
  uVar32 = (uint)!bVar10;
  if (*(char *)((longlong)param_3 + 0x49) == -0x5f) {
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x4a) << 0x18);
    uVar32 = uVar39;
  }
  if (*(char *)((longlong)param_3 + 0x31) == '0') {
    uVar32 = uVar32 | 4;
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x32) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x51) == 'P') {
    uVar32 = uVar32 | 8;
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x52) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x59) == 'Q') {
    uVar17 = (ulonglong)*(byte *)((longlong)param_3 + 0x5a);
    uVar32 = uVar32 | 0x10;
  }
  else {
    uVar17 = 0;
  }
  if (*(char *)((longlong)param_3 + 0x61) == 'R') {
    uVar32 = uVar32 | 0x20;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x62) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x69) == 'S') {
    uVar32 = uVar32 | 0x40;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x6a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x71) == 'T') {
    uVar32 = uVar32 | 0x80;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x72) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x79) == 'U') {
    uVar32 = uVar32 | 0x100;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x7a) << 0x10);
  }
  if (*(char *)((longlong)param_3 + 0x81) == 'V') {
    uVar32 = uVar32 | 0x200;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x82) << 0x14);
  }
  if (*(char *)((longlong)param_3 + 0x89) == 'W') {
    uVar32 = uVar32 | 0x400;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x8a) << 0x18);
  }
  if (*(char *)((longlong)param_3 + 0x21) == '\x10') {
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x22) << 4);
    uVar32 = *(uint *)(&DAT_18022ac30 + (ulonglong)uVar22 * 4) | uVar32;
  }
  if (*(char *)((longlong)param_3 + 0x91) == '\x01') {
    uVar32 = uVar32 | 0x10000;
    uVar17 = (ulonglong)((uint)uVar17 | (uint)*(byte *)((longlong)param_3 + 0x92) << 0x1c);
  }
  auVar57._8_8_ = uVar17;
  auVar57._0_8_ = lVar12;
  if (*(char *)((longlong)param_3 + 0x99) == '1') {
    uVar32 = uVar32 | 0x20000;
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x9a) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x29) == ' ') {
    uVar32 = uVar32 | (uint)(*(int *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x2f20) != 0 &&
                            uVar37 != 0) << 0xf;
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x2a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x39) == '@') {
    uVar32 = uVar32 | 0x80000;
    uVar18 = (ulonglong)((uint)uVar18 | (uint)*(byte *)((longlong)param_3 + 0x3a) << 0x10);
  }
  uVar22 = param_3[1];
  *(uint *)(&stack0x00000004 + lVar31) = uVar32 | (uint)(uVar22 != 0) << 0x12;
  *(uint *)(&stack0x0000000c + lVar31) = (uint)(uVar37 == 0xff);
  if (((*(int *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37e0) < 0xb000) ||
      (2 < *(int *)(&stack0x00000008 + lVar31) - 4U)) ||
     (bVar10 = true, *(float *)(lVar12 + 0xea8) < 2.0)) {
    bVar10 = false;
  }
  if (((*(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x296c) & 1) == 0) ||
     (*(char *)(lVar12 + 0xeac) != '\0')) {
    uVar39 = *(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x2968);
  }
  else {
    uVar39 = (uint)*(float *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x2f64);
  }
  if (((*(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x2ea4) ==
        (uint)*(byte *)((longlong)param_3 + 0x4d)) &&
      (*(uint *)(lVar12 + 0x6eb4) == (uint)*(byte *)((longlong)param_3 + 0x55))) &&
     ((*(uint *)(lVar12 + 0x6ec4) == (uint)*(byte *)((longlong)param_3 + 0x5d) &&
      ((((*(uint *)(lVar12 + 0x6ed4) == (uint)*(byte *)((longlong)param_3 + 0x65) &&
         (*(uint *)(lVar12 + 0x6ee4) == (uint)*(byte *)((longlong)param_3 + 0x6d))) &&
        (*(uint *)(lVar12 + 0x6ef4) == (uint)*(byte *)((longlong)param_3 + 0x75))) &&
       ((*(uint *)(lVar12 + 0x6f04) == (uint)*(byte *)((longlong)param_3 + 0x7d) &&
        (*(uint *)(lVar12 + 0x6f14) == (uint)*(byte *)((longlong)param_3 + 0x85))))))))) {
    *(undefined4 *)(&stack0x00000000 + lVar31) = 0;
    *(longlong *)(&stack0x000000c0 + lVar31) = (longlong)param_3 + 0x7d;
    *(longlong *)(&stack0x000000b8 + lVar31) = (longlong)param_3 + 0x75;
    *(longlong *)(&stack0x000000b0 + lVar31) = (longlong)param_3 + 0x6d;
    *(longlong *)(&stack0x000000a8 + lVar31) = (longlong)param_3 + 0x65;
    *(longlong *)(&stack0x000000a0 + lVar31) = (longlong)param_3 + 0x5d;
    *(longlong *)(&stack0x00000098 + lVar31) = (longlong)param_3 + 0x55;
    *(longlong *)(&stack0x000000c8 + lVar31) = (longlong)param_3 + 0x85;
  }
  else {
    *(undefined4 *)(&stack0x00000000 + lVar31) = 1;
    *(longlong *)(&stack0x000000c8 + lVar31) = (longlong)param_3 + 0x85;
    *(longlong *)(&stack0x000000c0 + lVar31) = (longlong)param_3 + 0x7d;
    *(longlong *)(&stack0x000000b8 + lVar31) = (longlong)param_3 + 0x75;
    *(longlong *)(&stack0x000000b0 + lVar31) = (longlong)param_3 + 0x6d;
    *(longlong *)(&stack0x000000a8 + lVar31) = (longlong)param_3 + 0x65;
    *(longlong *)(&stack0x000000a0 + lVar31) = (longlong)param_3 + 0x5d;
    *(longlong *)(&stack0x00000098 + lVar31) = (longlong)param_3 + 0x55;
  }
  if (uVar22 == 0) {
    iVar21 = 0;
    if (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x664) != '\0') {
      iVar21 = 8;
    }
  }
  else {
    if (((*(uint *)(lVar12 + 0x7654) >> 2 & 1) == 0) || (*(int *)(lVar12 + 0x7650) == 0)) {
      iVar21 = 2;
      iVar27 = 1;
    }
    else {
      iVar21 = 4;
      iVar27 = 3;
    }
    if ((((*(longlong *)(lVar12 + 0xf7a8) == 0) && (*(char *)(lVar12 + 0xa8) != '\0')) &&
        (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x660) == '\0')) &&
       (uVar22 = (*(uint *)(lVar12 + 0xf70) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(lVar12 + 0xf70) & 0x55555555) << 1,
       uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2,
       uVar22 = (uVar22 & 0xf0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f) << 4,
       uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar22 >> 0x10 | uVar22 << 0x10) < 5)) {
      iVar21 = 5;
    }
    if (bVar10) {
      iVar21 = 7;
      iVar27 = 6;
    }
    if (*(char *)(lVar12 + 0x10) == '\0') {
      bVar11 = (&stack0x000010c8)[lVar31] == '\0';
    }
    else {
      bVar11 = (char)param_3[0xb] == -1 || (&stack0x000010c8)[lVar31] == '\0';
    }
    if (bVar11) {
      iVar21 = iVar27;
    }
    if (((*(uint *)(&stack0x00000004 + lVar31) & 0xf800) != 0) ||
       (bVar11 = false, *(char *)((&lStack_8)[extraout_x15 * -2] + 0x664) != '\0')) {
      bVar11 = true;
    }
    if (uVar37 == 0xff) {
      bVar11 = true;
    }
    if (bVar11) {
      iVar21 = iVar21 + 8;
    }
  }
  *(int *)(&stack0xffffffffffffffe0 + lVar31) = iVar21;
  *(ulonglong *)(lVar12 + 0xfe0) = *(ulonglong *)(lVar12 + 0xfe0) & 0xfff7ffffffffffff;
  if (*(char *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x6c5) != '\0') {
    auVar57 = FUN_180164460(lVar12);
  }
  puVar14 = auVar57._0_8_;
  *(undefined8 *)(&stack0x00000080 + lVar31) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar31) = 0;
  if (*(int *)(&stack0x00000000 + lVar31) != 0) {
    *(uint *)(lVar12 + 0xf7c) =
         (uint)*(byte *)((longlong)param_3 + 0x4d) |
         ((uint)**(byte **)(&stack0x00000098 + lVar31) |
         ((uint)**(byte **)(&stack0x000000a0 + lVar31) |
         ((uint)**(byte **)(&stack0x000000a8 + lVar31) |
         ((uint)**(byte **)(&stack0x000000b0 + lVar31) |
         ((uint)**(byte **)(&stack0x000000b8 + lVar31) |
         (uint)(**(byte **)(&stack0x000000c8 + lVar31) | **(byte **)(&stack0x000000c0 + lVar31)) <<
         3) << 3) << 3) << 3) << 3) << 3;
  }
  if (*(longlong *)
       (*(longlong *)(lVar12 + 0xf6e0) + (ulonglong)*(uint *)(&stack0xffffffffffffffe0 + lVar31) * 8
       + 0x168) == 0) {
    uVar22 = *(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x296c);
    if (((uVar22 & 1) == 0) || (*(char *)(lVar12 + 0xeac) != '\0')) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0x800;
    }
    *(longlong *)(&stack0x00000028 + lVar31) = lVar12 + 0x7654;
    uVar32 = *(uint *)(lVar12 + 0x7650);
    if ((*(uint *)(lVar12 + 0x7654) & 4) == 0) {
      uVar32 = 0;
    }
    uVar23 = (ulonglong)uVar32;
    if (bVar10) {
      bVar10 = (uVar22 & 2) != 0;
      uVar36 = 0x100;
      if (bVar10) {
        uVar36 = 0x300;
      }
      if (((uVar22 >> 2 & 1) != 0) && (uVar36 = 0x500, bVar10)) {
        uVar36 = 0x700;
      }
      uVar23 = uVar36 | uVar23 | uVar17 | (ulonglong)uVar39 << 0xc;
    }
    *(ulonglong *)(&stack0x00000048 + lVar31) = uVar23;
    *(ulonglong *)(&stack0x00000088 + lVar31) = uVar23;
    if (*(longlong *)(lVar12 + 0xf7a8) == 0) {
      uVar23 = 0;
      uVar22 = (*(uint *)(lVar12 + 0xf70) & 0xaaaaaaaa) >> 1 |
               (*(uint *)(lVar12 + 0xf70) & 0x55555555) << 1;
      uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
      uVar17 = 0;
      uVar22 = (uint)LZCOUNT(uVar22 >> 0x10 | uVar22 << 0x10);
      if (uVar22 != 0) {
        do {
          if (((*(byte *)(lVar12 + uVar17 + 0xf58) | 0x80) & *(byte *)(lVar12 + uVar17 + 0xf68)) !=
              0 || ((*(byte *)(lVar12 + uVar17 + 0xf50) | 0x80) & *(byte *)(lVar12 + uVar17 + 0xf60)
                   ) != 0) {
            uVar23 = (ulonglong)((uint)(byte)(&DAT_18022bd10)[uVar17] | (uint)uVar23);
          }
          uVar39 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar39;
        } while (uVar39 < uVar22);
      }
    }
    else {
      uVar23 = (ulonglong)*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0xf7a8) + 8) + 0x126c);
    }
    *(ulonglong *)(lVar12 + 0xfc0) = uVar18 & 0xffffffff | auVar57._8_8_ << 0x20;
    uVar39 = *(uint *)(&stack0x00000004 + lVar31);
    uVar22 = *(uint *)(lVar12 + 0xfbc) & 0x7fd00000 | (uint)(byte)(&stack0x000010c8)[lVar31] << 0x1f
             | (uint)(uVar37 == 0xff) << 0x15 | uVar39 & 0xfffff;
    *(uint *)(lVar12 + 0xfbc) = uVar22;
    *(longlong *)(&stack0x00000030 + lVar31) = lVar12 + 0xf78;
    if ((uVar39 & 1) == 0) {
      uVar32 = *(uint *)(lVar12 + 0xfb4);
    }
    else {
      uVar32 = 0xffffffff;
    }
    if ((uVar39 & 2) == 0) {
      uVar39 = *(uint *)(lVar12 + 0xfb8);
    }
    else {
      uVar39 = 0xffffffff;
    }
    uVar22 = (int)uVar22 >> 0x1f;
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar31) = 0;
    uVar33 = (uint)uVar23;
    uVar28 = (&DAT_18024d9e0)[uVar23];
    *(uint *)(&stack0xffffffffffffffc4 + lVar31) = uVar33;
    uVar20 = 0;
    uVar8 = uVar28 | uVar33 << 0x18;
    *(uint *)(lVar12 + 0xf8c) = uVar28;
    *(uint *)(lVar12 + 0xf94) = uVar8;
    *(uint *)(lVar12 + 0xf98) = uVar28;
    uVar33 = (uVar33 & 0xaaaaaaaa) >> 1 | (uVar33 & 0x55555555) << 1;
    uVar33 = (uVar33 & 0xcccccccc) >> 2 | (uVar33 & 0x33333333) << 2;
    lVar34 = LZCOUNT((uVar33 >> 4 | (uVar33 & 0xf0f0f0f) << 4) << 0x18);
    uVar33 = (uint)lVar34;
    if ((1 - (uVar33 >> 5) & 0xff) != 0) {
      *(uint *)(&stack0x00000038 + lVar31) = uVar28;
      *(uint *)(&stack0x00000070 + lVar31) = uVar22;
      *(uint *)(&stack0xffffffffffffffb8 + lVar31) = uVar39;
      (&stack0xffffffffffffffc4)[((int)uVar33 >> 3) + lVar31] =
           (&stack0xffffffffffffffc4)[((int)uVar33 >> 3) + lVar31] &
           ((byte)(1 << (ulonglong)(uVar33 & 7)) ^ 0xff);
      uVar22 = **(uint **)(&stack0x00000030 + lVar31);
      while( true ) {
        (&stack0xffffffffffffffd8)[lVar31] =
             (&stack0xffffffffffffffd8)[lVar31] |
             (byte)(1 << (ulonglong)(uVar22 >> (ulonglong)((int)lVar34 * 3 & 0x1f) & 7));
        uVar39 = (*(uint *)(&stack0xffffffffffffffc4 + lVar31) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(&stack0xffffffffffffffc4 + lVar31) & 0x55555555) << 1;
        uVar39 = (uVar39 & 0xcccccccc) >> 2 | (uVar39 & 0x33333333) << 2;
        uVar39 = (uVar39 & 0xf0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f) << 4;
        uVar39 = (uVar39 & 0xff00ff00) >> 8 | (uVar39 & 0xff00ff) << 8;
        lVar34 = LZCOUNT(uVar39 >> 0x10 | uVar39 << 0x10);
        uVar39 = (uint)lVar34;
        if ((1 - (uVar39 >> 5) & 0xff) == 0) break;
        (&stack0xffffffffffffffc4)[((int)uVar39 >> 3) + lVar31] =
             (&stack0xffffffffffffffc4)[((int)uVar39 >> 3) + lVar31] &
             ((byte)(1 << (ulonglong)(uVar39 & 7)) ^ 0xff);
      }
      uVar39 = *(uint *)(&stack0xffffffffffffffb8 + lVar31);
      uVar22 = *(uint *)(&stack0x00000070 + lVar31);
      uVar28 = *(uint *)(&stack0x00000038 + lVar31);
      uVar20 = *(uint *)(&stack0xffffffffffffffd8 + lVar31);
    }
    *(uint *)(lVar12 + 0xfb0) = uVar22;
    uVar5 = (&DAT_18024d9e0)[uVar20];
    uVar39 = uVar32 & uVar22 & uVar39;
    *(uint *)(lVar12 + 0xf90) = uVar5;
    uVar32 = (uVar20 << 3 | 0xfffff807) & *(uint *)(lVar12 + 0xfbc);
    uVar33 = *(uint *)(lVar12 + 0xf9c);
    uVar4 = *(uint *)(lVar12 + 4000);
    *(uint *)(lVar12 + 0xfbc) = uVar32;
    uVar20 = uVar4 & uVar22;
    *(uint *)(lVar12 + 0xfa8) = uVar20;
    *(uint *)(lVar12 + 0xfac) = uVar39;
    lVar34 = CONCAT44(*(uint *)(lVar12 + 0xf7c) & uVar5,
                      uVar28 & *(uint *)(lVar12 + 0xf88) & **(uint **)(&stack0x00000030 + lVar31));
    uVar5 = *(uint *)(lVar12 + 0xfa4);
    lVar25 = CONCAT44(uVar28 & *(uint *)(lVar12 + 0xf84),uVar8 & *(uint *)(lVar12 + 0xf80));
    *(longlong *)(&stack0x000000e0 + lVar31) = lVar34;
    *(longlong *)(&stack0x000000e8 + lVar31) = lVar25;
    lVar2 = CONCAT44(uVar5 & uVar39,uVar33 & uVar20);
    uVar18 = ((ulonglong)uVar22 | 0xc0000000) & (ulonglong)uVar4 | (ulonglong)uVar32 << 0x20;
    lVar19 = *(longlong *)(lVar12 + 0xfc0);
    *(longlong *)(&stack0x000000f0 + lVar31) = lVar2;
    *(ulonglong *)(&stack0x000000f8 + lVar31) = uVar18;
    uVar22 = 0;
    uVar39 = *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37a0);
    *(longlong *)(&stack0x00000100 + lVar31) = lVar19;
    uVar32 = 0;
    if (uVar39 != 0) {
      *(uint *)(&stack0xffffffffffffffd8 + lVar31) = uVar39;
      lVar35 = *(longlong *)(lVar12 + 0xf798);
      uVar32 = 0;
      *(uint *)(&stack0xffffffffffffffb8 + lVar31) = uVar37;
      do {
        uVar22 = uVar39 + uVar32 >> 1;
        uVar17 = (ulonglong)uVar22 * 0x30;
        lVar38 = 0;
        lVar1 = uVar17 + lVar35;
        if ((((*(longlong *)(uVar17 + lVar35) == lVar34) &&
             (lVar38 = 1, *(longlong *)(lVar1 + 8) == lVar25)) &&
            (lVar38 = 2, *(longlong *)(lVar1 + 0x10) == lVar2)) &&
           ((lVar38 = 3, *(ulonglong *)(lVar1 + 0x18) == uVar18 &&
            (lVar38 = 4, *(longlong *)(lVar1 + 0x20) == lVar19)))) {
          plVar13 = (longlong *)(lVar1 + 8);
LAB_1801385ec:
          lVar38 = 1;
          if (((*plVar13 == lVar25) && (lVar38 = 2, *(longlong *)(lVar35 + 0x10 + uVar17) == lVar2))
             && ((lVar38 = 3, *(ulonglong *)(lVar35 + 0x18 + uVar17) == uVar18 &&
                 (lVar38 = 4, *(longlong *)(lVar35 + 0x20 + uVar17) == lVar19)))) break;
LAB_18013862c:
          if (*(ulonglong *)(&stack0x000000e0 + lVar38 * 8 + lVar31) <=
              *(ulonglong *)(lVar1 + lVar38 * 8)) break;
          uVar32 = uVar22 + 1;
          uVar22 = uVar22 + 1;
          uVar37 = uVar39;
        }
        else {
          uVar37 = uVar22;
          if (*(ulonglong *)(lVar1 + lVar38 * 8) <=
              *(ulonglong *)(&stack0x000000e0 + lVar38 * 8 + lVar31)) {
            plVar13 = (longlong *)((uVar17 | 8) + lVar35);
            lVar38 = 0;
            if (*(longlong *)(uVar17 + lVar35) == lVar34) goto LAB_1801385ec;
            goto LAB_18013862c;
          }
        }
        uVar39 = uVar37;
      } while (uVar39 != uVar32);
      uVar37 = *(uint *)(&stack0xffffffffffffffb8 + lVar31);
      uVar32 = *(uint *)(&stack0xffffffffffffffd8 + lVar31);
    }
    if (uVar22 == uVar32) {
LAB_1801386a8:
      puVar40 = (undefined8 *)FUN_1802229a8(0x2f8);
      puVar14 = (undefined8 *)0x0;
      if (puVar40 != (undefined8 *)0x0) {
        lVar34 = *(longlong *)(&stack0xffffffffffffffc8 + lVar31);
        uVar30 = *(undefined8 *)(lVar12 + 0xf780);
        uVar6 = *(undefined1 *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x78c);
        uVar43 = *(undefined4 *)(lVar34 + 0x3788);
        *puVar40 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
        puVar40[1] = 0;
        *(undefined4 *)(puVar40 + 2) = 0;
        puVar40[3] = 0;
        puVar40[4] = &PTR_FUN_18022c480;
        puVar14 = *(undefined8 **)(&stack0x00000030 + lVar31);
        uVar16 = *puVar14;
        uVar55 = puVar14[3];
        uVar51 = puVar14[2];
        puVar40[7] = puVar14[1];
        puVar40[6] = uVar16;
        puVar40[9] = uVar55;
        puVar40[8] = uVar51;
        uVar16 = puVar14[4];
        uVar55 = puVar14[7];
        uVar51 = puVar14[6];
        puVar40[0xb] = puVar14[5];
        puVar40[10] = uVar16;
        puVar40[0xd] = uVar55;
        puVar40[0xc] = uVar51;
        uVar16 = puVar14[8];
        puVar40[0xf] = puVar14[9];
        puVar40[0xe] = uVar16;
        *puVar40 = &PTR_FUN_18022b0f0;
        puVar40[1] = uVar30;
        puVar40[0x10] = 0;
        puVar40[0x11] = 0;
        puVar40[0x12] = 0;
        *(undefined1 *)(puVar40 + 0x5e) = uVar6;
        *(undefined4 *)(puVar40 + 2) = uVar43;
        puVar40[3] = puVar40 + 0x10;
        uVar39 = FUN_1801428a0(lVar12 + 0xf790,&stack0x000000e0 + lVar31);
        uVar22 = *(uint *)(lVar34 + 0x37a0);
        uVar18 = (ulonglong)uVar39;
        if (uVar39 == uVar22) {
LAB_18013878c:
          lVar34 = *(longlong *)(&stack0xffffffffffffffc8 + lVar31);
          uVar32 = *(uint *)(lVar34 + 0x37a4);
          if (uVar32 == uVar22) {
            uVar22 = 0x10;
            if (uVar32 != 0) {
              uVar22 = uVar32 << 1;
            }
            *(uint *)(&stack0xffffffffffffffd8 + lVar31) = uVar22;
            lVar25 = FUN_1802229a8((ulonglong)uVar22 * 0x30);
            *(longlong *)(&stack0x00000070 + lVar31) = lVar25;
            if (lVar25 != 0) {
              uVar17 = 0;
              if (*(int *)(lVar34 + 0x37a0) != 0) {
                *(uint *)(&stack0xffffffffffffffb8 + lVar31) = uVar39;
                do {
                  puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0xf798) + uVar17 * 0x30);
                  puVar29 = (undefined8 *)(lVar25 + uVar17 * 0x30);
                  uVar22 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar22;
                  uVar30 = *puVar14;
                  uVar51 = puVar14[3];
                  uVar16 = puVar14[2];
                  puVar29[1] = puVar14[1];
                  *puVar29 = uVar30;
                  puVar29[3] = uVar51;
                  puVar29[2] = uVar16;
                  uVar30 = puVar14[4];
                  puVar29[5] = puVar14[5];
                  puVar29[4] = uVar30;
                } while (uVar22 < *(uint *)(lVar34 + 0x37a0));
                uVar18 = (ulonglong)*(uint *)(&stack0xffffffffffffffb8 + lVar31);
              }
              FUN_1802229d8(*(undefined8 *)(lVar12 + 0xf790));
              uVar30 = *(undefined8 *)(&stack0x00000070 + lVar31);
              *(undefined8 *)(lVar12 + 0xf798) = uVar30;
              lVar34 = *(longlong *)(&stack0xffffffffffffffc8 + lVar31);
              *(undefined8 *)(lVar12 + 0xf790) = uVar30;
              *(undefined4 *)(lVar34 + 0x37a4) = *(undefined4 *)(&stack0xffffffffffffffd8 + lVar31);
            }
          }
          uVar22 = *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37a0);
          if (*(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37a4) != uVar22) {
            while ((uint)uVar18 < uVar22) {
              uVar17 = (ulonglong)uVar22;
              uVar22 = uVar22 - 1;
              puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0xf798) + uVar17 * 0x30);
              puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf798) + (ulonglong)uVar22 * 0x30);
              uVar30 = *puVar29;
              uVar51 = puVar29[3];
              uVar16 = puVar29[2];
              puVar14[1] = puVar29[1];
              *puVar14 = uVar30;
              puVar14[3] = uVar51;
              puVar14[2] = uVar16;
              uVar30 = puVar29[4];
              puVar14[5] = puVar29[5];
              puVar14[4] = uVar30;
            }
            uVar51 = *(undefined8 *)(&stack0x000000e8 + lVar31);
            uVar16 = *(undefined8 *)(&stack0x000000e0 + lVar31);
            uVar56 = *(undefined8 *)(&stack0x000000f8 + lVar31);
            uVar55 = *(undefined8 *)(&stack0x000000f0 + lVar31);
            *(int *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37a0) =
                 *(int *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x37a0) + 1;
            puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0xf798) + uVar18 * 0x30);
            uVar30 = *(undefined8 *)(&stack0x00000100 + lVar31);
            puVar14[1] = uVar51;
            *puVar14 = uVar16;
            puVar14[3] = uVar56;
            puVar14[2] = uVar55;
            puVar14[4] = uVar30;
            *(undefined8 **)(*(longlong *)(lVar12 + 0xf798) + uVar18 * 0x30 + 0x28) = puVar40;
          }
        }
        else {
          *(uint *)(&stack0xffffffffffffffb8 + lVar31) = uVar22;
          uVar17 = 0;
          lVar34 = *(longlong *)(lVar12 + 0xf798) + (ulonglong)uVar39 * 0x30;
          do {
            if (*(longlong *)(lVar34 + uVar17 * 8) !=
                *(longlong *)(&stack0x000000e0 + uVar17 * 8 + lVar31)) {
              uVar22 = *(uint *)(&stack0xffffffffffffffb8 + lVar31);
              goto LAB_18013878c;
            }
            uVar22 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar22;
          } while (uVar22 < 5);
          *(undefined8 **)(lVar34 + 0x28) = puVar40;
        }
        goto LAB_1801388c4;
      }
    }
    else {
      uVar18 = 0;
      lVar34 = *(longlong *)(lVar12 + 0xf798) + (ulonglong)uVar22 * 0x30;
      do {
        if (*(longlong *)(lVar34 + uVar18 * 8) !=
            *(longlong *)(&stack0x000000e0 + uVar18 * 8 + lVar31)) goto LAB_1801386a8;
        uVar22 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar22;
      } while (uVar22 < 5);
      puVar40 = (undefined8 *)(lVar34 + 0x28);
      if (puVar40 == (undefined8 *)0x0) goto LAB_1801386a8;
      puVar40 = (undefined8 *)*puVar40;
LAB_1801388c4:
      puVar14 = (undefined8 *)FUN_180141ec0(puVar40,*(undefined8 *)(&stack0x00000048 + lVar31));
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(&stack0x00000080 + lVar31) = *puVar14;
        *(undefined8 *)(&stack0xfffffffffffffff0 + lVar31) = puVar14[1];
      }
    }
    puVar24 = *(uint **)(&stack0x00000028 + lVar31);
  }
  else {
    *(undefined8 *)(&stack0x00000088 + lVar31) = 0;
    puVar24 = (uint *)(lVar12 + 0x7654);
  }
  if ((((*puVar24 >> 2 & 1) != 0) &&
      ((*(uint *)(&stack0xffffffffffffffe0 + lVar31) & 0xfffffff7) == 0)) &&
     (lVar34 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31), *(char *)(lVar34 + 0x693) != '\0'))
  {
    lVar25 = *(longlong *)(&stack0x00000010 + lVar31);
    fVar48 = *(float *)(lVar25 + 0x35f0);
    fVar42 = *(float *)(lVar25 + 0x35c4);
    fVar46 = *(float *)(lVar25 + 0x35e4);
    *(undefined4 *)(&stack0xffffffffffffffc4 + lVar31) = *(undefined4 *)(lVar25 + 0x35e8);
    fVar52 = *(float *)(lVar25 + 0x35d4);
    *(float *)(&stack0x00000058 + lVar31) = fVar48;
    uVar43 = *(undefined4 *)(lVar25 + 0x35d8);
    fVar47 = *(float *)(lVar25 + 0x35ec);
    fVar45 = *(float *)(lVar25 + 0x3600);
    *(float *)(&stack0xffffffffffffffe4 + lVar31) = fVar52;
    uVar53 = *(undefined4 *)(lVar25 + 0x35c8);
    *(undefined4 *)(&stack0xffffffffffffffb8 + lVar31) = uVar43;
    fVar44 = *(float *)(lVar25 + 0x35b4);
    *(float *)(&stack0x00000050 + lVar31) = fVar46;
    *(float *)(&stack0x00000054 + lVar31) = fVar47;
    fVar41 = *(float *)(lVar25 + 0x35b8);
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar31) = uVar53;
    fVar54 = *(float *)(lVar25 + 0x35a4);
    *(float *)(&stack0xffffffffffffffd8 + lVar31) = fVar48 * fVar52;
    uVar43 = *(undefined4 *)(lVar25 + 0x35a8);
    *(float *)(&stack0xffffffffffffffd0 + lVar31) = fVar42;
    *(float *)(&stack0xffffffffffffffd4 + lVar31) = fVar54;
    *(undefined4 *)(&stack0xffffffffffffffc0 + lVar31) = uVar43;
    fVar48 = *(float *)(lVar25 + 0x35fc);
    *(float *)(&stack0x00000018 + lVar31) = fVar48;
    *(float *)(&stack0x0000001c + lVar31) = fVar45;
    fVar52 = *(float *)(lVar25 + 0x35f4);
    fVar49 = *(float *)(lVar25 + 0x35f8);
    *(float *)(&stack0x00000060 + lVar31) = fVar49;
    *(float *)(&stack0x00000064 + lVar31) = fVar52;
    *(float *)(&stack0x00000110 + lVar31) =
         *(float *)(&stack0xffffffffffffffc4 + lVar31) * fVar44 + fVar46 * fVar54 + fVar47 * fVar42
         + *(float *)(&stack0xffffffffffffffd8 + lVar31);
    fVar50 = *(float *)(lVar25 + 0x3608);
    fVar54 = *(float *)(lVar25 + 0x3604);
    *(float *)(&stack0x00000020 + lVar31) = fVar50;
    *(float *)(&stack0x00000024 + lVar31) = fVar54;
    fVar47 = *(float *)(lVar25 + 0x360c);
    *(float *)(&stack0x00000028 + lVar31) = fVar47;
    fVar46 = *(float *)(lVar25 + 0x3610);
    *(float *)(&stack0x00000048 + lVar31) = fVar46;
    *(float *)(&stack0x00000120 + lVar31) =
         fVar49 * fVar44 + fVar52 * *(float *)(&stack0xffffffffffffffd4 + lVar31) + fVar48 * fVar42
         + fVar45 * *(float *)(&stack0xffffffffffffffe4 + lVar31);
    fVar49 = *(float *)(lVar25 + 0x3618);
    *(float *)(&stack0x00000030 + lVar31) = fVar49;
    fVar45 = *(float *)(lVar25 + 0x3620);
    *(float *)(&stack0xffffffffffffffd8 + lVar31) = fVar45;
    fVar52 = *(float *)(lVar25 + 0x3614);
    *(float *)(&stack0x00000038 + lVar31) = fVar52;
    fVar48 = *(float *)(lVar25 + 0x361c);
    *(float *)(&stack0x00000070 + lVar31) = fVar48;
    *(float *)(&stack0x00000130 + lVar31) =
         fVar50 * fVar44 + fVar54 * *(float *)(&stack0xffffffffffffffd4 + lVar31) + fVar47 * fVar42
         + fVar46 * *(float *)(&stack0xffffffffffffffe4 + lVar31);
    *(float *)(&stack0xffffffffffffffe4 + lVar31) =
         fVar45 * *(float *)(&stack0xffffffffffffffe4 + lVar31);
    fVar46 = *(float *)(&stack0xffffffffffffffb8 + lVar31);
    fVar45 = *(float *)(lVar25 + 0x35e0);
    *(float *)(&stack0x00000140 + lVar31) =
         fVar49 * fVar44 + fVar52 * *(float *)(&stack0xffffffffffffffd4 + lVar31) + fVar48 * fVar42
         + *(float *)(&stack0xffffffffffffffe4 + lVar31);
    *(float *)(&stack0x00000114 + lVar31) =
         *(float *)(&stack0xffffffffffffffc4 + lVar31) * fVar41 +
         *(float *)(&stack0x00000050 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x00000054 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000058 + lVar31) * fVar46;
    *(float *)(&stack0x00000124 + lVar31) =
         *(float *)(&stack0x00000060 + lVar31) * fVar41 +
         *(float *)(&stack0x00000064 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x00000018 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x0000001c + lVar31) * fVar46;
    *(float *)(&stack0x00000134 + lVar31) =
         *(float *)(&stack0x00000020 + lVar31) * fVar41 +
         *(float *)(&stack0x00000024 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x00000028 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000048 + lVar31) * fVar46;
    fVar42 = *(float *)(lVar25 + 0x35d0);
    fVar48 = *(float *)(lVar25 + 0x35bc);
    fVar44 = *(float *)(lVar25 + 0x35c0);
    *(float *)(&stack0xffffffffffffffd4 + lVar31) = fVar48;
    fVar47 = *(float *)(lVar25 + 0x35ac);
    *(float *)(&stack0xffffffffffffffb8 + lVar31) = fVar44;
    *(float *)(&stack0xffffffffffffffd0 + lVar31) = fVar47;
    *(float *)(&stack0x00000144 + lVar31) =
         *(float *)(&stack0x00000030 + lVar31) * fVar41 +
         *(float *)(&stack0x00000038 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x00000070 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0xffffffffffffffd8 + lVar31) * fVar46;
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar31) = *(undefined4 *)(lVar25 + 0x35b0);
    fVar41 = *(float *)(lVar25 + 0x35cc);
    *(float *)(&stack0xffffffffffffffc0 + lVar31) = fVar41;
    fVar46 = *(float *)(lVar25 + 0x35dc);
    *(float *)(&stack0x00000118 + lVar31) =
         *(float *)(&stack0xffffffffffffffc4 + lVar31) * fVar48 +
         *(float *)(&stack0x00000050 + lVar31) * fVar47 +
         *(float *)(&stack0x00000054 + lVar31) * fVar41 +
         *(float *)(&stack0x00000058 + lVar31) * fVar46;
    *(float *)(&stack0x00000128 + lVar31) =
         *(float *)(&stack0x00000060 + lVar31) * *(float *)(&stack0xffffffffffffffd4 + lVar31) +
         *(float *)(&stack0x00000064 + lVar31) * *(float *)(&stack0xffffffffffffffd0 + lVar31) +
         *(float *)(&stack0x00000018 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x0000001c + lVar31) * fVar46;
    *(float *)(&stack0x00000138 + lVar31) =
         *(float *)(&stack0x00000020 + lVar31) * *(float *)(&stack0xffffffffffffffd4 + lVar31) +
         *(float *)(&stack0x00000024 + lVar31) * *(float *)(&stack0xffffffffffffffd0 + lVar31) +
         *(float *)(&stack0x00000028 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0x00000048 + lVar31) * fVar46;
    *(float *)(&stack0x00000148 + lVar31) =
         *(float *)(&stack0x00000030 + lVar31) * *(float *)(&stack0xffffffffffffffd4 + lVar31) +
         *(float *)(&stack0x00000038 + lVar31) * *(float *)(&stack0xffffffffffffffd0 + lVar31) +
         *(float *)(&stack0x00000070 + lVar31) * *(float *)(&stack0xffffffffffffffc0 + lVar31) +
         *(float *)(&stack0xffffffffffffffd8 + lVar31) * fVar46;
    *(float *)(&stack0x0000011c + lVar31) =
         *(float *)(&stack0xffffffffffffffc4 + lVar31) * fVar44 +
         *(float *)(&stack0x00000050 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000054 + lVar31) * fVar42 +
         *(float *)(&stack0x00000058 + lVar31) * fVar45;
    *(float *)(&stack0x0000012c + lVar31) =
         *(float *)(&stack0x00000060 + lVar31) * fVar44 +
         *(float *)(&stack0x00000064 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000018 + lVar31) * fVar42 +
         *(float *)(&stack0x0000001c + lVar31) * fVar45;
    *(float *)(&stack0x0000013c + lVar31) =
         *(float *)(&stack0x00000020 + lVar31) * fVar44 +
         *(float *)(&stack0x00000024 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000028 + lVar31) * fVar42 +
         *(float *)(&stack0x00000048 + lVar31) * fVar45;
    *(float *)(&stack0x0000014c + lVar31) =
         *(float *)(&stack0x00000030 + lVar31) * fVar44 +
         *(float *)(&stack0x00000038 + lVar31) * *(float *)(&stack0xffffffffffffffb0 + lVar31) +
         *(float *)(&stack0x00000070 + lVar31) * fVar42 +
         *(float *)(&stack0xffffffffffffffd8 + lVar31) * fVar45;
    puVar14 = (undefined8 *)FUN_18012b1a0(&stack0x00000110 + lVar31,lVar12 + 0x6ba0,0);
    *(undefined1 *)(lVar34 + 0x693) = 0;
    *(undefined1 *)(lVar12 + 0xf691) = 1;
  }
  if (*(longlong *)(&stack0x00000080 + lVar31) == 0) {
    uVar18 = (ulonglong)*(uint *)(&stack0xffffffffffffffe0 + lVar31);
    *(undefined8 *)(&stack0x00000080 + lVar31) =
         *(undefined8 *)(*(longlong *)(lVar12 + 0xf6e0) + uVar18 * 8 + 0x168);
  }
  else {
    uVar18 = 0x10;
  }
  bVar10 = (*(int *)(&stack0xffffffffffffffe0 + lVar31) - 5U & 0xfffffff7) == 0;
  if (bVar10) {
    uVar30 = 0x1f8;
  }
  else {
    uVar30 = 0x1f0;
  }
  lVar25 = (&lStack_8)[extraout_x15 * -2];
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar31) = uVar30;
  lVar34 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
  *(int *)(&stack0x00000078 + lVar31) = (int)uVar18;
  *(uint **)(&stack0x00000070 + lVar31) = param_3;
  cVar26 = *(char *)(lVar25 + 0x66b);
  *(bool *)(lVar25 + 0x66b) = bVar10;
  *(byte *)(lVar34 + 0x688) = bVar10 != (bool)cVar26 | *(byte *)(lVar34 + 0x688);
  *(ulonglong *)(&stack0x00000038 + lVar31) = uVar18;
  uVar17 = 0x8000000000000000;
  if (uVar37 != 0xff) {
    uVar17 = 0;
  }
  uVar23 = 0;
  (&stack0x0000007c)[lVar31] = (&stack0x0000000c)[lVar31];
  uVar18 = uVar17 | uVar18 << 0x20 | (ulonglong)*param_3;
  uVar22 = *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x375c);
  if (uVar22 != 0) {
    uVar37 = 0;
    uVar39 = uVar22;
    do {
      uVar32 = uVar39 + uVar37 >> 1;
      uVar23 = (ulonglong)uVar32;
      uVar17 = *(ulonglong *)(*(longlong *)(lVar12 + 0xf750) + uVar23 * 0x20);
      if (uVar17 <= uVar18) {
        if (uVar18 <= uVar17) break;
        uVar37 = uVar32 + 1;
        uVar23 = (ulonglong)(uVar32 + 1);
        uVar32 = uVar39;
      }
      uVar39 = uVar32;
    } while (uVar39 != uVar37);
  }
  uVar37 = (uint)uVar23;
  if ((uVar37 == uVar22) ||
     (*(ulonglong *)(*(longlong *)(lVar12 + 0xf750) + uVar23 * 0x20) != uVar18)) {
    if (uVar22 == *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x3758)) {
      uVar22 = *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x3758) << 1;
      uVar17 = CONCAT44(0,uVar22);
      *(uint *)(&stack0xffffffffffffffb8 + lVar31) = uVar22;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar17;
      lVar34 = uVar17 << 5;
      if (SUB168(auVar9 * ZEXT816(0x20),8) != 0) {
        lVar34 = -1;
      }
      lVar34 = FUN_1802229a8(lVar34);
      puVar14 = (undefined8 *)0x0;
      if (lVar34 != 0) {
        lVar25 = lVar34;
        if (3 < *(uint *)(&stack0xffffffffffffffb8 + lVar31)) {
          do {
            uVar17 = uVar17 - 4;
            *(undefined8 *)(lVar25 + 8) = 0;
            *(undefined4 *)(lVar25 + 0x10) = 0;
            *(undefined1 *)(lVar25 + 0x14) = 0;
            *(undefined8 *)(lVar25 + 0x28) = 0;
            *(undefined4 *)(lVar25 + 0x30) = 0;
            *(undefined1 *)(lVar25 + 0x34) = 0;
            *(undefined8 *)(lVar25 + 0x48) = 0;
            *(undefined4 *)(lVar25 + 0x50) = 0;
            *(undefined1 *)(lVar25 + 0x54) = 0;
            *(undefined8 *)(lVar25 + 0x68) = 0;
            *(undefined4 *)(lVar25 + 0x70) = 0;
            *(undefined1 *)(lVar25 + 0x74) = 0;
            lVar25 = lVar25 + 0x80;
          } while (3 < uVar17);
        }
        for (; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined8 *)(lVar25 + 8) = 0;
          *(undefined4 *)(lVar25 + 0x10) = 0;
          *(undefined1 *)(lVar25 + 0x14) = 0;
          lVar25 = lVar25 + 0x20;
        }
        lVar25 = *(longlong *)(&stack0xffffffffffffffc8 + lVar31);
        uVar17 = 0;
        if (*(int *)(lVar25 + 0x3758) != 0) {
          do {
            uVar22 = (int)uVar17 + 1;
            puVar14 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + uVar17 * 0x20);
            puVar40 = (undefined8 *)(lVar34 + uVar17 * 0x20);
            uVar30 = *puVar14;
            uVar51 = puVar14[3];
            uVar16 = puVar14[2];
            puVar40[1] = puVar14[1];
            *puVar40 = uVar30;
            puVar40[3] = uVar51;
            puVar40[2] = uVar16;
            uVar17 = (ulonglong)uVar22;
          } while (uVar22 < *(uint *)(lVar25 + 0x3758));
        }
        puVar14 = (undefined8 *)FUN_1802229d8(*(undefined8 *)(lVar12 + 0xf750));
        lVar25 = *(longlong *)(&stack0xffffffffffffffc8 + lVar31);
        *(longlong *)(lVar12 + 0xf750) = lVar34;
        *(int *)(lVar25 + 0x3758) = *(int *)(lVar25 + 0x3758) << 1;
      }
    }
    uVar22 = *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x375c);
    uVar17 = (ulonglong)uVar22;
    if (uVar37 < uVar22) {
      if (3 < uVar22 - uVar37) {
        do {
          iVar21 = (int)uVar17;
          puVar40 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 1) * 0x20);
          puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + uVar17 * 0x20);
          uVar30 = *puVar40;
          uVar51 = puVar40[3];
          uVar16 = puVar40[2];
          puVar29[1] = puVar40[1];
          *puVar29 = uVar30;
          puVar29[3] = uVar51;
          puVar29[2] = uVar16;
          puVar40 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 2) * 0x20);
          puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 1) * 0x20);
          uVar30 = *puVar40;
          uVar51 = puVar40[3];
          uVar16 = puVar40[2];
          puVar29[1] = puVar40[1];
          *puVar29 = uVar30;
          puVar29[3] = uVar51;
          puVar29[2] = uVar16;
          uVar17 = (ulonglong)(iVar21 - 4U);
          puVar40 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 3) * 0x20);
          puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 2) * 0x20);
          uVar30 = *puVar40;
          uVar51 = puVar40[3];
          uVar16 = puVar40[2];
          puVar29[1] = puVar40[1];
          *puVar29 = uVar30;
          puVar29[3] = uVar51;
          puVar29[2] = uVar16;
          puVar40 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)(iVar21 - 3) * 0x20);
          puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + uVar17 * 0x20);
          uVar30 = *puVar29;
          uVar51 = puVar29[3];
          uVar16 = puVar29[2];
          puVar40[1] = puVar29[1];
          *puVar40 = uVar30;
          puVar40[3] = uVar51;
          puVar40[2] = uVar16;
        } while (uVar37 + 3 < iVar21 - 4U);
      }
      uVar22 = (uint)uVar17;
      while (uVar37 < uVar22) {
        uVar22 = (int)uVar17 - 1;
        puVar40 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + uVar17 * 0x20);
        puVar29 = (undefined8 *)(*(longlong *)(lVar12 + 0xf750) + (ulonglong)uVar22 * 0x20);
        uVar30 = *puVar29;
        uVar51 = puVar29[3];
        uVar16 = puVar29[2];
        puVar40[1] = puVar29[1];
        *puVar40 = uVar30;
        puVar40[3] = uVar51;
        puVar40[2] = uVar16;
        uVar17 = (ulonglong)uVar22;
      }
    }
    uVar16 = *(undefined8 *)(&stack0x00000078 + lVar31);
    uVar30 = *(undefined8 *)(&stack0x00000070 + lVar31);
    lVar25 = uVar23 * 0x20;
    uVar43 = *(undefined4 *)(&stack0x0000000c + lVar31);
    *(ulonglong *)(*(longlong *)(lVar12 + 0xf750) + lVar25) = uVar18;
    lVar34 = lVar25 + *(longlong *)(lVar12 + 0xf750);
    *(undefined8 *)(lVar34 + 0x10) = uVar16;
    *(undefined8 *)(lVar34 + 8) = uVar30;
    uVar43 = FUN_18016cc00(puVar14,param_3,&stack0x00000868 + lVar31,uVar43);
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar31) = 0;
    *(undefined4 *)(&stack0x0000000c + lVar31) = uVar43;
    uVar22 = param_3[1];
    *(ulonglong *)(&stack0x00000070 + lVar31) =
         *(longlong *)(lVar12 + 0xf760) +
         (ulonglong)*(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x3768) * 0x18c0;
    if (uVar22 == 0) {
      uVar30 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11_00)(uVar30,&stack0x00000868 + lVar31);
    }
    else {
      uVar17 = 0;
      uVar18 = 0;
      if (param_3[2] != 0) {
        do {
          uVar36 = (ulonglong)*(byte *)((longlong)param_3 + uVar18 + 0x214);
          uVar22 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar22;
          uVar17 = (ulonglong)*(byte *)((longlong)param_3 + uVar36 * 8 + 0x1a) <<
                   ((uVar36 & 0xf) << 2) | uVar17;
        } while (uVar22 < param_3[2]);
      }
      *(undefined8 *)(&stack0x00000170 + lVar31) = 0x200;
      (&stack0x00000178)[lVar31] = 1;
      puVar15 = (undefined4 *)FUN_1802229a8(0x200);
      *(undefined1 **)(&stack0x00000180 + lVar31) = &stack0x00000610 + lVar31;
      *(undefined8 *)(&stack0x00000188 + lVar31) = 0;
      *(undefined4 **)(&stack0x00000160 + lVar31) = puVar15;
      *(undefined8 *)(&stack0x00000120 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000118 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000128 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000198 + lVar31) = *(undefined8 *)(&stack0x00000128 + lVar31);
      *(undefined8 *)(&stack0x00000190 + lVar31) = *(undefined8 *)(&stack0x00000120 + lVar31);
      uVar30 = FUN_180222c50(&stack0x000001e0 + lVar31,0,0x430);
      uVar18 = 0;
      do {
        iVar21 = (int)uVar18;
        uVar22 = iVar21 + 1;
        (&DAT_18024d9e0)[uVar18] =
             (&DAT_18022c0d0)[uVar18 & 0xf] | (&DAT_18022c0d0)[uVar18 >> 4] << 0xc;
        (&DAT_18024d9e0)[uVar22] =
             (&DAT_18022c0d0)[(ulonglong)uVar22 & 0xf] | (&DAT_18022c0d0)[uVar22 >> 4] << 0xc;
        uVar22 = iVar21 + 2;
        (&DAT_18024d9e0)[uVar22] =
             (&DAT_18022c0d0)[(ulonglong)uVar22 & 0xf] | (&DAT_18022c0d0)[uVar22 >> 4] << 0xc;
        uVar22 = iVar21 + 3;
        uVar18 = (ulonglong)(iVar21 + 4U);
        (&DAT_18024d9e0)[uVar22] =
             (&DAT_18022c0d0)[(ulonglong)uVar22 & 0xf] | (&DAT_18022c0d0)[uVar22 >> 4] << 0xc;
      } while (iVar21 + 4U < 0x100);
      *(ulonglong *)(&stack0x00000158 + lVar31) = uVar17;
      *(undefined8 *)(&stack0x00000338 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000330 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000348 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000340 + lVar31) = 0;
      *(undefined1 **)(&stack0x00000330 + lVar31) = &stack0x00000110 + lVar31;
      *(undefined8 *)(&stack0x00000258 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000250 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000268 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000260 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000278 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000270 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000288 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000280 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000298 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000290 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002a8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002a0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002b8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002b0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002c8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002c0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002d8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002d0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002e8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002e0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002f8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000002f0 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000308 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000300 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000318 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000310 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000328 + lVar31) = 0;
      *(undefined8 *)(&stack0x00000320 + lVar31) = 0;
      (&stack0x0000034b)[lVar31] = 1;
      *(undefined8 *)(&stack0x000001a8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001a0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001b8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001b0 + lVar31) = 0;
      *(undefined4 *)(&stack0x000001a0 + lVar31) = 0x10040;
      *(undefined8 *)(&stack0x000001c8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001c0 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001d8 + lVar31) = 0;
      *(undefined8 *)(&stack0x000001d0 + lVar31) = 0;
      *(undefined1 **)(&stack0x000001d0 + lVar31) = &stack0x000001f6 + lVar31;
      *(undefined2 *)(&stack0x000001d8 + lVar31) = 0x40;
      *(undefined4 *)(&stack0x00000260 + lVar31) = 0x410802;
      *(undefined8 *)(&stack0x00000238 + lVar31) = 0x41040000110400;
      *(undefined4 *)(&stack0x00000240 + lVar31) = 0x20000d00;
      *(undefined8 *)(&stack0x00000258 + lVar31) = 0x11080000210800;
      *(undefined8 *)(&stack0x00000250 + lVar31) = 0x31080000410800;
      if ((&stack0x0000034b)[lVar31] != '\0') {
        cVar26 = '\0';
        uVar18 = 0;
        do {
          (&stack0x000002c6)[uVar18 + lVar31] = cVar26;
          uVar22 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar22;
          cVar26 = cVar26 + '\x01';
        } while (uVar22 < 0x11);
      }
      *puVar15 = 0x43425844;
      *(undefined8 *)(puVar15 + 1) = 0;
      *(undefined8 *)(puVar15 + 3) = 0;
      *(undefined8 *)(puVar15 + 5) = 1;
      puVar15[7] = 1;
      *(undefined4 **)(&stack0x00000168 + lVar31) = puVar15 + 9;
      puVar15[8] = (int)(puVar15 + 9) - (int)puVar15;
      FUN_1801849b8(uVar30,&stack0x00000160 + lVar31,&stack0x00000180 + lVar31,0);
      FUN_180212ef0(&stack0x00000160 + lVar31);
      uVar30 = *(undefined8 *)(&stack0x00000160 + lVar31);
      uVar16 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar16,&stack0x00000868 + lVar31,*(undefined4 *)(&stack0x0000000c + lVar31),
                      uVar30);
      FUN_1802229d8(uVar30);
    }
    *(undefined8 *)(lVar25 + *(longlong *)(lVar12 + 0xf750) + 0x18) =
         *(undefined8 *)(&stack0xffffffffffffffb8 + lVar31);
    *(int *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x375c) =
         *(int *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x375c) + 1;
  }
  lVar34 = *(longlong *)(uVar23 * 0x20 + *(longlong *)(lVar12 + 0xf750) + 0x18);
  if ((*(int *)(&stack0x00000008 + lVar31) == 1) &&
     (((*(char *)((&lStack_8)[extraout_x15 * -2] + 0x666) != '\0' && (param_3[1] != 0)) ||
      (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x667) != '\0')))) {
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar31) =
         *(undefined8 *)
          (*(longlong *)(&stack0xffffffffffffffd8 + lVar31) + *(longlong *)(lVar12 + 0xf6e0));
    cVar26 = '\x01';
  }
  else {
    cVar26 = '\0';
    if (*(longlong *)(&stack0xfffffffffffffff0 + lVar31) != 0) goto LAB_1801393c4;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar31) = 0;
    cVar26 = '\0';
  }
  iVar21 = *(int *)(&stack0xffffffffffffffe0 + lVar31);
  if (iVar21 == 6) {
    uVar30 = *(undefined8 *)(*(longlong *)(lVar12 + 0xf6e0) + 0x200);
  }
  else if (iVar21 == 7) {
    uVar30 = *(undefined8 *)(*(longlong *)(lVar12 + 0xf6e0) + 0x208);
  }
  else if (iVar21 == 0xe) {
    uVar30 = *(undefined8 *)(*(longlong *)(lVar12 + 0xf6e0) + 0x210);
  }
  else {
    if (iVar21 != 0xf) goto LAB_1801393c4;
    uVar30 = *(undefined8 *)(*(longlong *)(lVar12 + 0xf6e0) + 0x218);
  }
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar31) = uVar30;
LAB_1801393c4:
  uVar37 = (0x1000 - *(int *)(lVar12 + 0x74)) - *(int *)(lVar12 + 0x70);
  uVar39 = (0x1000 - *(int *)(lVar12 + 0x90)) - *(int *)(lVar12 + 0x94);
  uVar22 = *(uint *)(&stack0x000010c0 + lVar31);
  puVar3 = &DAT_180247410;
  if (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x661) == '\0') {
    puVar3 = &DAT_180247430;
  }
  if ((((((((*(char *)((&lStack_8)[extraout_x15 * -2] + 0x662) != '\0') ||
           (*(int *)(lVar12 + 0x6940) != *(int *)(&stack0x00000004 + lVar31) ||
            *(int *)(&stack0x00000000 + lVar31) != 0)) ||
          (*(int *)(lVar12 + 0x102c) != *(int *)(&stack0x0000005c + lVar31))) ||
         ((*(int *)(lVar12 + 0xfe8) != *(int *)(&stack0x00000040 + lVar31) ||
          (*(longlong *)(lVar12 + 0xfd58) != *(longlong *)(&stack0x000000d8 + lVar31))))) ||
        (*(longlong *)(lVar12 + 0xfcd8) != *(longlong *)(&stack0x000000d0 + lVar31))) ||
       ((*(longlong *)(lVar12 + 0xfcc0) != *(longlong *)(&stack0x00000080 + lVar31) ||
        (*(longlong *)(lVar12 + 0xfcd0) != *(longlong *)(&stack0xfffffffffffffff0 + lVar31))))) ||
      ((*(char *)(lVar12 + 0x7668) != cVar26 ||
       (((*(uint *)(lVar12 + 0x763c) != param_3[1] ||
         (*(int *)(lVar12 + 0xfd80) !=
          *(int *)(puVar3 + (longlong)*(int *)(&stack0x00000008 + lVar31) * 4))) ||
        (((*(int *)(lVar12 + 0x94) != 0) != (uVar22 != 0) ||
         uVar37 < *(uint *)(&stack0x00000090 + lVar31)) || uVar39 < uVar22)))))) ||
     (*(longlong *)(lVar12 + 0xfcb8) != lVar34)) {
    lVar25 = *(longlong *)(&stack0x000000d0 + lVar31);
    uVar43 = *(undefined4 *)(&stack0x00000040 + lVar31);
    if (lVar25 != *(longlong *)(lVar12 + 0xf718)) {
      uVar43 = 0;
    }
    FUN_180137af0(lVar12,uVar37 < *(uint *)(&stack0x00000090 + lVar31),uVar39 < uVar22,uVar43);
    if (lVar25 == *(longlong *)(lVar12 + 0xf718)) {
      *(undefined4 *)(&stack0x0000005c + lVar31) = *(undefined4 *)(lVar12 + 0x7c);
    }
    if (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x662) != '\0') {
      lVar25 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
      *(undefined1 *)(lVar25 + 0x689) = 1;
      *(byte *)(lVar25 + 0x684) = *(byte *)(lVar25 + 0x684) | 1;
    }
    if (*(int *)(&stack0x00000000 + lVar31) != 0) {
      *(uint *)(*(longlong *)(&stack0x00000010 + lVar31) + 0x2ea4) =
           (uint)*(byte *)((longlong)param_3 + 0x4d);
      *(uint *)(lVar12 + 0x6eb4) = (uint)**(byte **)(&stack0x00000098 + lVar31);
      *(uint *)(lVar12 + 0x6ec4) = (uint)**(byte **)(&stack0x000000a0 + lVar31);
      *(uint *)(lVar12 + 0x6ed4) = (uint)**(byte **)(&stack0x000000a8 + lVar31);
      *(uint *)(lVar12 + 0x6ee4) = (uint)**(byte **)(&stack0x000000b0 + lVar31);
      *(uint *)(lVar12 + 0x6ef4) = (uint)**(byte **)(&stack0x000000b8 + lVar31);
      *(uint *)(lVar12 + 0x6f04) = (uint)**(byte **)(&stack0x000000c0 + lVar31);
      *(uint *)(lVar12 + 0x6f14) = (uint)**(byte **)(&stack0x000000c8 + lVar31);
      *(undefined1 *)(lVar12 + 0xf691) = 1;
    }
    if (*(int *)(lVar12 + 0x6940) != *(int *)(&stack0x00000004 + lVar31)) {
      *(int *)(lVar12 + 0x6940) = *(int *)(&stack0x00000004 + lVar31);
      *(undefined1 *)(lVar12 + 0xf691) = 1;
    }
    if (*(int *)(lVar12 + 0xfe8) != *(int *)(&stack0x00000040 + lVar31)) {
      *(int *)(lVar12 + 0xfe8) = *(int *)(&stack0x00000040 + lVar31);
      *(undefined1 *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x68f) = 1;
    }
    if (*(longlong *)(lVar12 + 0xfcd8) != *(longlong *)(&stack0x000000d0 + lVar31)) {
      *(longlong *)(lVar12 + 0xfcd8) = *(longlong *)(&stack0x000000d0 + lVar31);
      *(undefined1 *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x68f) = 1;
    }
    if (*(int *)(lVar12 + 0x102c) != *(int *)(&stack0x0000005c + lVar31)) {
      *(int *)(lVar12 + 0x102c) = *(int *)(&stack0x0000005c + lVar31);
      *(undefined1 *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x68f) = 1;
    }
    if (*(longlong *)(lVar12 + 0xfd58) != *(longlong *)(&stack0x000000d8 + lVar31)) {
      *(longlong *)(lVar12 + 0xfd58) = *(longlong *)(&stack0x000000d8 + lVar31);
      *(undefined1 *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar31) + 0x690) = 1;
    }
    if (*(longlong *)(lVar12 + 0xfcb8) != lVar34) {
      *(longlong *)(lVar12 + 0xfcb8) = lVar34;
      *(undefined1 *)(lVar12 + 0x10588) = 1;
    }
    lVar25 = *(longlong *)(&stack0xfffffffffffffff0 + lVar31);
    lVar34 = *(longlong *)(lVar12 + 0xfcd0);
    if (lVar34 != lVar25) {
      *(longlong *)(lVar12 + 0xfcd0) = lVar25;
      *(undefined1 *)(lVar12 + 0x10588) = 1;
      lVar34 = lVar25;
    }
    if (*(longlong *)(lVar12 + 0xfcc0) != *(longlong *)(&stack0x00000080 + lVar31)) {
      *(longlong *)(lVar12 + 0xfcc0) = *(longlong *)(&stack0x00000080 + lVar31);
      if (((lVar34 == 0) || (lVar34 == *(longlong *)(*(longlong *)(lVar12 + 0xf6e0) + 0x1f0))) ||
         (bVar10 = true, lVar34 == *(longlong *)(*(longlong *)(lVar12 + 0xf6e0) + 0x1f8))) {
        bVar10 = false;
      }
      lVar25 = *(longlong *)(lVar12 + 0xf6e0);
      lVar34 = *(longlong *)(&stack0x00000080 + lVar31);
      if (((lVar34 == *(longlong *)(lVar25 + 0x188)) || (lVar34 == *(longlong *)(lVar25 + 0x180)))
         || ((lVar34 == *(longlong *)(lVar25 + 0x1c8) ||
             (lVar34 == *(longlong *)(lVar25 + 0x1c0) || bVar10)))) {
        *(ulonglong *)(&stack0x00000088 + lVar31) = *(ulonglong *)(&stack0x00000088 + lVar31) | 0x3f
        ;
      }
      *(uint *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar31) + 0x3d84) =
           *(uint *)(&stack0x00000088 + lVar31) & 0x3f;
      lVar34 = *(longlong *)(lVar12 + 0xf7d0);
      lVar25 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
      *(undefined8 *)(lVar12 + 0xf7d0) = 0;
      *(byte *)(lVar25 + 0x6c2) = lVar34 != 0 | *(byte *)(lVar25 + 0x6c2);
      *(undefined1 *)(lVar12 + 0x10588) = 1;
    }
    if ((*(uint *)(lVar12 + 0x763c) != param_3[1]) ||
       (*(char *)((&lStack_8)[extraout_x15 * -2] + 0x662) != '\0')) {
      lVar34 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
      *(uint *)(lVar12 + 0x763c) = param_3[1];
      *(undefined1 *)(lVar34 + 0x68e) = 1;
    }
    if (*(int *)(lVar12 + 0xfd80) !=
        *(int *)(puVar3 + (longlong)*(int *)(&stack0x00000008 + lVar31) * 4)) {
      *(int *)(lVar12 + 0xfd80) =
           *(int *)(puVar3 + (longlong)*(int *)(&stack0x00000008 + lVar31) * 4);
      *(undefined1 *)(lVar12 + 0x10588) = 1;
    }
    if (*(char *)(lVar12 + 0x7668) != cVar26) {
      lVar34 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
      *(char *)(lVar12 + 0x7668) = cVar26;
      *(undefined1 *)(lVar34 + 0x68d) = 1;
    }
    lVar31 = *(longlong *)(&stack0xffffffffffffffe8 + lVar31);
    lVar34 = (&lStack_8)[extraout_x15 * -2];
    bVar7 = *(byte *)(lVar34 + 0x662);
    *(byte *)(lVar31 + 0x68c) = *(byte *)(lVar31 + 0x68c) | bVar7;
    *(byte *)(lVar31 + 0x68b) = *(byte *)(lVar31 + 0x68b) | bVar7;
    *(byte *)(lVar31 + 0x68d) = *(byte *)(lVar31 + 0x68d) | bVar7;
    *(byte *)(lVar31 + 0x688) = *(byte *)(lVar31 + 0x688) | bVar7;
    if (bVar7 != 0) {
      *(undefined1 *)(lVar34 + 0x662) = 0;
      FUN_180164290(lVar12);
    }
  }
  return;
}

