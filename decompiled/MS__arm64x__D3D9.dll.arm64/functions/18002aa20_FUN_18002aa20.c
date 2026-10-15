/*
 * FUN_18002aa20 at 18002aa20
 * undefined FUN_18002aa20(void)
 * Address ranges: 18002aa20-18002c423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aa20(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  char cVar30;
  undefined8 *puVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  longlong lVar39;
  longlong extraout_x15;
  longlong lVar40;
  uint uVar41;
  uint uVar42;
  undefined8 *puVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [12];
  undefined1 auVar75 [16];
  
  auVar74 = FUN_180001640();
  lVar15 = auVar74._0_8_;
  lVar33 = extraout_x15 * -0x10;
  *(int *)(&stack0xffffffffffffffd0 + lVar33) = auVar74._8_4_;
  *(undefined8 *)(&stack0x00000058 + lVar33) = param_4;
  *(undefined8 *)(&stack0x00000090 + lVar33) = param_5;
  *(longlong *)(&stack0xffffffffffffffc0 + lVar33) = lVar15 + 0x7000;
  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar33) = param_7;
  *(undefined4 *)(&stack0xffffffffffffffec + lVar33) = param_6;
  *(longlong *)(&stack0xffffffffffffffe0 + lVar33) = lVar15 + 0x4000;
  uVar26 = param_3[7];
  *(undefined4 *)(&stack0x0000001c + lVar33) = param_8;
  if ((char)uVar26 == -1) {
    uVar26 = 0;
  }
  else {
    uVar26 = (uint)*(byte *)((longlong)param_3 + 0x1d);
  }
  uVar41 = *(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x364c);
  if (uVar41 < uVar26) {
    uVar26 = uVar41;
  }
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    uVar21 = (ulonglong)*(byte *)((longlong)param_3 + 0x1a);
  }
  else {
    uVar21 = 0;
  }
  bVar12 = *(char *)((longlong)param_3 + 0x41) != -0x60;
  if (bVar12) {
    uVar42 = 2;
  }
  else {
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x42) << 0x14);
    uVar42 = 3;
  }
  uVar34 = (uint)!bVar12;
  if (*(char *)((longlong)param_3 + 0x49) == -0x5f) {
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x4a) << 0x18);
    uVar34 = uVar42;
  }
  if (*(char *)((longlong)param_3 + 0x31) == '0') {
    uVar34 = uVar34 | 4;
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x32) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x51) == 'P') {
    uVar34 = uVar34 | 8;
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x52) << 0x1c);
  }
  if (*(char *)((longlong)param_3 + 0x59) == 'Q') {
    uVar19 = (ulonglong)*(byte *)((longlong)param_3 + 0x5a);
    uVar34 = uVar34 | 0x10;
  }
  else {
    uVar19 = 0;
  }
  if (*(char *)((longlong)param_3 + 0x61) == 'R') {
    uVar34 = uVar34 | 0x20;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x62) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x69) == 'S') {
    uVar34 = uVar34 | 0x40;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x6a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x71) == 'T') {
    uVar34 = uVar34 | 0x80;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x72) << 0xc);
  }
  if (*(char *)((longlong)param_3 + 0x79) == 'U') {
    uVar34 = uVar34 | 0x100;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x7a) << 0x10);
  }
  if (*(char *)((longlong)param_3 + 0x81) == 'V') {
    uVar34 = uVar34 | 0x200;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x82) << 0x14);
  }
  if (*(char *)((longlong)param_3 + 0x89) == 'W') {
    uVar34 = uVar34 | 0x400;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x8a) << 0x18);
  }
  if (*(char *)((longlong)param_3 + 0x21) == '\x10') {
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x22) << 4);
    uVar34 = *(uint *)(&DAT_18022ac30 + (ulonglong)uVar26 * 4) | uVar34;
  }
  if (*(char *)((longlong)param_3 + 0x91) == '\x01') {
    uVar34 = uVar34 | 0x10000;
    uVar19 = (ulonglong)((uint)uVar19 | (uint)*(byte *)((longlong)param_3 + 0x92) << 0x1c);
  }
  auVar75._8_8_ = uVar19;
  auVar75._0_8_ = lVar15;
  if (*(char *)((longlong)param_3 + 0x99) == '1') {
    uVar34 = uVar34 | 0x20000;
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x9a) << 4);
  }
  if (*(char *)((longlong)param_3 + 0x29) == ' ') {
    uVar34 = uVar34 | (uint)(*(int *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x2f20) !=
                             0 && uVar41 != 0) << 0xf;
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x2a) << 8);
  }
  if (*(char *)((longlong)param_3 + 0x39) == '@') {
    uVar34 = uVar34 | 0x80000;
    uVar21 = (ulonglong)((uint)uVar21 | (uint)*(byte *)((longlong)param_3 + 0x3a) << 0x10);
  }
  uVar26 = param_3[1];
  *(uint *)(&stack0xffffffffffffffcc + lVar33) = uVar34 | (uint)(uVar26 != 0) << 0x12;
  *(uint *)(&stack0xfffffffffffffff8 + lVar33) = (uint)(uVar41 == 0xff);
  if (((*(int *)(lVar15 + 0xf7e0) < 0xb000) ||
      (2 < *(int *)(&stack0xffffffffffffffd0 + lVar33) - 4U)) ||
     (bVar12 = true, *(float *)(lVar15 + 0xea8) < 2.0)) {
    bVar12 = false;
  }
  if (((*(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x296c) & 1) == 0) ||
     (*(char *)(lVar15 + 0xeac) != '\0')) {
    uVar42 = *(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x2968);
  }
  else {
    uVar42 = (uint)*(float *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x2f64);
  }
  if (((*(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x2ea4) ==
        (uint)*(byte *)((longlong)param_3 + 0x4d)) &&
      (*(uint *)(lVar15 + 0x6eb4) == (uint)*(byte *)((longlong)param_3 + 0x55))) &&
     ((*(uint *)(lVar15 + 0x6ec4) == (uint)*(byte *)((longlong)param_3 + 0x5d) &&
      ((((*(uint *)(lVar15 + 0x6ed4) == (uint)*(byte *)((longlong)param_3 + 0x65) &&
         (*(uint *)(lVar15 + 0x6ee4) == (uint)*(byte *)((longlong)param_3 + 0x6d))) &&
        (*(uint *)(lVar15 + 0x6ef4) == (uint)*(byte *)((longlong)param_3 + 0x75))) &&
       ((*(uint *)(lVar15 + 0x6f04) == (uint)*(byte *)((longlong)param_3 + 0x7d) &&
        (*(uint *)(lVar15 + 0x6f14) == (uint)*(byte *)((longlong)param_3 + 0x85))))))))) {
    *(undefined4 *)(&stack0xffffffffffffffc8 + lVar33) = 0;
    *(longlong *)(&stack0x00000048 + lVar33) = (longlong)param_3 + 0x7d;
    *(longlong *)(&stack0x00000040 + lVar33) = (longlong)param_3 + 0x75;
    *(longlong *)(&stack0x00000038 + lVar33) = (longlong)param_3 + 0x6d;
    *(longlong *)(&stack0x00000030 + lVar33) = (longlong)param_3 + 0x65;
    *(longlong *)(&stack0x00000028 + lVar33) = (longlong)param_3 + 0x5d;
    *(longlong *)(&stack0x00000020 + lVar33) = (longlong)param_3 + 0x55;
    *(longlong *)(&stack0x00000050 + lVar33) = (longlong)param_3 + 0x85;
  }
  else {
    *(undefined4 *)(&stack0xffffffffffffffc8 + lVar33) = 1;
    *(longlong *)(&stack0x00000050 + lVar33) = (longlong)param_3 + 0x85;
    *(longlong *)(&stack0x00000048 + lVar33) = (longlong)param_3 + 0x7d;
    *(longlong *)(&stack0x00000040 + lVar33) = (longlong)param_3 + 0x75;
    *(longlong *)(&stack0x00000038 + lVar33) = (longlong)param_3 + 0x6d;
    *(longlong *)(&stack0x00000030 + lVar33) = (longlong)param_3 + 0x65;
    *(longlong *)(&stack0x00000028 + lVar33) = (longlong)param_3 + 0x5d;
    *(longlong *)(&stack0x00000020 + lVar33) = (longlong)param_3 + 0x55;
  }
  lVar22 = 0xf7a8;
  lVar23 = 0x7654;
  if (uVar26 == 0) {
    iVar25 = 0;
    if (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x664) != '\0') {
      iVar25 = 8;
    }
  }
  else {
    if (((*(uint *)(lVar15 + 0x7654) >> 2 & 1) == 0) || (*(int *)(lVar15 + 0x7650) == 0)) {
      iVar25 = 2;
      iVar35 = 1;
    }
    else {
      iVar25 = 4;
      iVar35 = 3;
    }
    if ((((*(longlong *)(lVar15 + 0xf7a8) == 0) && (*(char *)(lVar15 + 0xa8) != '\0')) &&
        (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x660) == '\0')) &&
       (uVar26 = (*(uint *)(lVar15 + 0xf70) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(lVar15 + 0xf70) & 0x55555555) << 1,
       uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2,
       uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4,
       uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10) < 5)) {
      iVar25 = 5;
    }
    if (bVar12) {
      iVar25 = 7;
      iVar35 = 6;
    }
    if (*(char *)(lVar15 + 0x10) == '\0') {
      bVar13 = (&stack0x00001068)[lVar33] == '\0';
    }
    else {
      bVar13 = (char)param_3[0xb] == -1 || (&stack0x00001068)[lVar33] == '\0';
    }
    if (bVar13) {
      iVar25 = iVar35;
    }
    if (((*(uint *)(&stack0xffffffffffffffcc + lVar33) & 0xf800) != 0) ||
       (bVar13 = false, *(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x664) != '\0')
       ) {
      bVar13 = true;
    }
    if (uVar41 == 0xff) {
      bVar13 = true;
    }
    if (bVar13) {
      iVar25 = iVar25 + 8;
    }
  }
  *(int *)(&stack0xffffffffffffffa8 + lVar33) = iVar25;
  *(ulonglong *)(lVar15 + 0xfe0) = *(ulonglong *)(lVar15 + 0xfe0) & 0xfff7ffffffffffff;
  if (*(char *)(lVar15 + 0xf6c5) != '\0') {
    auVar75 = FUN_180054520(lVar15);
  }
  puVar16 = auVar75._0_8_;
  *(undefined8 *)(&stack0x00000000 + lVar33) = 0;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar33) = 0;
  if (*(int *)(&stack0xffffffffffffffc8 + lVar33) != 0) {
    *(uint *)(lVar15 + 0xf7c) =
         (uint)*(byte *)((longlong)param_3 + 0x4d) |
         ((uint)**(byte **)(&stack0x00000020 + lVar33) |
         ((uint)**(byte **)(&stack0x00000028 + lVar33) |
         ((uint)**(byte **)(&stack0x00000030 + lVar33) |
         ((uint)**(byte **)(&stack0x00000038 + lVar33) |
         ((uint)**(byte **)(&stack0x00000040 + lVar33) |
         (uint)(**(byte **)(&stack0x00000050 + lVar33) | **(byte **)(&stack0x00000048 + lVar33)) <<
         3) << 3) << 3) << 3) << 3) << 3;
  }
  if (*(longlong *)
       (*(longlong *)(lVar15 + 0xf6e0) + (ulonglong)*(uint *)(&stack0xffffffffffffffa8 + lVar33) * 8
       + 0x168) == 0) {
    uVar26 = *(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x296c);
    if (((uVar26 & 1) == 0) || (*(char *)(lVar15 + 0xeac) != '\0')) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0x800;
    }
    *(longlong *)(&stack0xffffffffffffffd8 + lVar33) = lVar15 + lVar23;
    uVar34 = *(uint *)(lVar15 + 0x7650);
    if ((*(uint *)(lVar15 + lVar23) & 4) == 0) {
      uVar34 = 0;
    }
    uVar27 = (ulonglong)uVar34;
    if (bVar12) {
      bVar12 = (uVar26 & 2) != 0;
      uVar37 = 0x100;
      if (bVar12) {
        uVar37 = 0x300;
      }
      if (((uVar26 >> 2 & 1) != 0) && (uVar37 = 0x500, bVar12)) {
        uVar37 = 0x700;
      }
      uVar27 = uVar37 | uVar27 | uVar19 | (ulonglong)uVar42 << 0xc;
    }
    *(ulonglong *)(&stack0x00000008 + lVar33) = uVar27;
    *(ulonglong *)(&stack0x00000010 + lVar33) = uVar27;
    if (*(longlong *)(lVar15 + lVar22) == 0) {
      uVar27 = 0;
      uVar26 = (*(uint *)(lVar15 + 0xf70) & 0xaaaaaaaa) >> 1 |
               (*(uint *)(lVar15 + 0xf70) & 0x55555555) << 1;
      uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
      uVar19 = 0;
      uVar26 = (uint)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
      if (uVar26 != 0) {
        do {
          if (((*(byte *)(lVar15 + uVar19 + 0xf58) | 0x80) & *(byte *)(lVar15 + uVar19 + 0xf68)) !=
              0 || ((*(byte *)(lVar15 + uVar19 + 0xf50) | 0x80) & *(byte *)(lVar15 + uVar19 + 0xf60)
                   ) != 0) {
            uVar27 = (ulonglong)((uint)(byte)(&DAT_18022bd10)[uVar19] | (uint)uVar27);
          }
          uVar42 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar42;
        } while (uVar42 < uVar26);
      }
    }
    else {
      uVar27 = (ulonglong)*(byte *)(*(longlong *)(*(longlong *)(lVar15 + lVar22) + 8) + 0x126c);
    }
    *(ulonglong *)(lVar15 + 0xfc0) = uVar21 & 0xffffffff | auVar75._8_8_ << 0x20;
    uVar42 = *(uint *)(&stack0xffffffffffffffcc + lVar33);
    uVar26 = *(uint *)(lVar15 + 0xfbc) & 0x7fd00000 | (uint)(byte)(&stack0x00001068)[lVar33] << 0x1f
             | (uint)(uVar41 == 0xff) << 0x15 | uVar42 & 0xfffff;
    *(uint *)(lVar15 + 0xfbc) = uVar26;
    *(longlong *)(&stack0xfffffffffffffff0 + lVar33) = lVar15 + 0xf78;
    if ((uVar42 & 1) == 0) {
      uVar34 = *(uint *)(lVar15 + 0xfb4);
    }
    else {
      uVar34 = 0xffffffff;
    }
    if ((uVar42 & 2) == 0) {
      uVar42 = *(uint *)(lVar15 + 0xfb8);
    }
    else {
      uVar42 = 0xffffffff;
    }
    *(undefined4 *)(&stack0xffffffffffffffac + lVar33) = 0;
    uVar26 = (int)uVar26 >> 0x1f;
    uVar24 = (uint)uVar27;
    uVar6 = (&DAT_18024ded0)[uVar27];
    *(uint *)(&stack0xffffffffffffffa4 + lVar33) = uVar24;
    uVar38 = 0;
    uVar36 = uVar6 | uVar24 << 0x18;
    *(uint *)(lVar15 + 0xf8c) = uVar6;
    *(uint *)(lVar15 + 0xf94) = uVar36;
    *(uint *)(lVar15 + 0xf98) = uVar6;
    uVar24 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555) << 1;
    uVar24 = (uVar24 & 0xcccccccc) >> 2 | (uVar24 & 0x33333333) << 2;
    lVar22 = LZCOUNT((uVar24 >> 4 | (uVar24 & 0xf0f0f0f) << 4) << 0x18);
    uVar24 = (uint)lVar22;
    if ((1 - (uVar24 >> 5) & 0xff) != 0) {
      *(uint *)(&stack0xffffffffffffffa0 + lVar33) = uVar36;
      *(uint *)(&stack0xffffffffffffffb0 + lVar33) = uVar26;
      *(uint *)(&stack0x00000018 + lVar33) = uVar42;
      (&stack0xffffffffffffffa4)[((int)uVar24 >> 3) + lVar33] =
           (&stack0xffffffffffffffa4)[((int)uVar24 >> 3) + lVar33] &
           ((byte)(1 << (ulonglong)(uVar24 & 7)) ^ 0xff);
      uVar26 = **(uint **)(&stack0xfffffffffffffff0 + lVar33);
      while( true ) {
        (&stack0xffffffffffffffac)[lVar33] =
             (&stack0xffffffffffffffac)[lVar33] |
             (byte)(1 << (ulonglong)(uVar26 >> (ulonglong)((int)lVar22 * 3 & 0x1f) & 7));
        uVar42 = (*(uint *)(&stack0xffffffffffffffa4 + lVar33) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(&stack0xffffffffffffffa4 + lVar33) & 0x55555555) << 1;
        uVar42 = (uVar42 & 0xcccccccc) >> 2 | (uVar42 & 0x33333333) << 2;
        uVar42 = (uVar42 & 0xf0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f) << 4;
        uVar42 = (uVar42 & 0xff00ff00) >> 8 | (uVar42 & 0xff00ff) << 8;
        lVar22 = LZCOUNT(uVar42 >> 0x10 | uVar42 << 0x10);
        uVar42 = (uint)lVar22;
        if ((1 - (uVar42 >> 5) & 0xff) == 0) break;
        (&stack0xffffffffffffffa4)[((int)uVar42 >> 3) + lVar33] =
             (&stack0xffffffffffffffa4)[((int)uVar42 >> 3) + lVar33] &
             ((byte)(1 << (ulonglong)(uVar42 & 7)) ^ 0xff);
      }
      uVar42 = *(uint *)(&stack0x00000018 + lVar33);
      uVar36 = *(uint *)(&stack0xffffffffffffffa0 + lVar33);
      uVar38 = *(uint *)(&stack0xffffffffffffffac + lVar33);
      uVar26 = *(uint *)(&stack0xffffffffffffffb0 + lVar33);
    }
    *(uint *)(lVar15 + 0xfb0) = uVar26;
    uVar7 = (&DAT_18024ded0)[uVar38];
    uVar4 = *(uint *)(lVar15 + 0xf9c);
    uVar5 = *(uint *)(lVar15 + 4000);
    *(uint *)(lVar15 + 0xf90) = uVar7;
    uVar38 = (uVar38 << 3 | 0xfffff807) & *(uint *)(lVar15 + 0xfbc);
    *(uint *)(lVar15 + 0xfbc) = uVar38;
    uVar42 = uVar34 & uVar26 & uVar42;
    uVar24 = uVar5 & uVar26;
    *(uint *)(lVar15 + 0xfa8) = uVar24;
    *(uint *)(lVar15 + 0xfac) = uVar42;
    uVar32 = *(uint *)(lVar15 + 0xf7a0);
    lVar22 = CONCAT44(*(uint *)(lVar15 + 0xf7c) & uVar7,
                      uVar6 & *(uint *)(lVar15 + 0xf88) &
                      **(uint **)(&stack0xfffffffffffffff0 + lVar33));
    uVar7 = *(uint *)(lVar15 + 0xfa4);
    lVar23 = CONCAT44(uVar6 & *(uint *)(lVar15 + 0xf84),uVar36 & *(uint *)(lVar15 + 0xf80));
    *(longlong *)(&stack0x00000060 + lVar33) = lVar22;
    *(longlong *)(&stack0x00000068 + lVar33) = lVar23;
    uVar34 = 0;
    lVar2 = CONCAT44(uVar7 & uVar42,uVar4 & uVar24);
    uVar21 = ((ulonglong)uVar26 | 0xc0000000) & (ulonglong)uVar5 | (ulonglong)uVar38 << 0x20;
    lVar40 = *(longlong *)(lVar15 + 0xfc0);
    *(longlong *)(&stack0x00000070 + lVar33) = lVar2;
    *(ulonglong *)(&stack0x00000078 + lVar33) = uVar21;
    *(longlong *)(&stack0x00000080 + lVar33) = lVar40;
    uVar26 = 0;
    if (uVar32 != 0) {
      *(uint *)(&stack0xffffffffffffffb0 + lVar33) = uVar32;
      lVar39 = *(longlong *)(lVar15 + 0xf798);
      uVar26 = 0;
      *(uint *)(&stack0xffffffffffffffa0 + lVar33) = uVar41;
      do {
        uVar34 = uVar32 + uVar26 >> 1;
        uVar19 = (ulonglong)uVar34 * 0x30;
        lVar20 = 0;
        lVar1 = uVar19 + lVar39;
        if ((((*(longlong *)(uVar19 + lVar39) == lVar22) &&
             (lVar20 = 1, *(longlong *)(lVar1 + 8) == lVar23)) &&
            (lVar20 = 2, *(longlong *)(lVar1 + 0x10) == lVar2)) &&
           ((lVar20 = 3, *(ulonglong *)(lVar1 + 0x18) == uVar21 &&
            (lVar20 = 4, *(longlong *)(lVar1 + 0x20) == lVar40)))) {
          plVar18 = (longlong *)(lVar1 + 8);
LAB_18002b35c:
          lVar20 = 1;
          if (((*plVar18 == lVar23) && (lVar20 = 2, *(longlong *)(lVar39 + 0x10 + uVar19) == lVar2))
             && ((lVar20 = 3, *(ulonglong *)(lVar39 + 0x18 + uVar19) == uVar21 &&
                 (lVar20 = 4, *(longlong *)(lVar39 + 0x20 + uVar19) == lVar40)))) break;
LAB_18002b39c:
          if (*(ulonglong *)(&stack0x00000060 + lVar20 * 8 + lVar33) <=
              *(ulonglong *)(lVar1 + lVar20 * 8)) break;
          uVar26 = uVar34 + 1;
          uVar34 = uVar34 + 1;
          uVar41 = uVar32;
        }
        else {
          uVar41 = uVar34;
          if (*(ulonglong *)(lVar1 + lVar20 * 8) <=
              *(ulonglong *)(&stack0x00000060 + lVar20 * 8 + lVar33)) {
            plVar18 = (longlong *)((uVar19 | 8) + lVar39);
            lVar20 = 0;
            if (*(longlong *)(uVar19 + lVar39) == lVar22) goto LAB_18002b35c;
            goto LAB_18002b39c;
          }
        }
        uVar32 = uVar41;
      } while (uVar32 != uVar26);
      uVar41 = *(uint *)(&stack0xffffffffffffffa0 + lVar33);
      uVar26 = *(uint *)(&stack0xffffffffffffffb0 + lVar33);
    }
    if (uVar34 == uVar26) {
LAB_18002b414:
      puVar43 = (undefined8 *)FUN_180102f80(0x2f8);
      puVar16 = (undefined8 *)0x0;
      if (puVar43 != (undefined8 *)0x0) {
        uVar8 = *(undefined1 *)(lVar15 + 0xf78c);
        uVar14 = *(undefined4 *)(lVar15 + 0xf788);
        uVar29 = *(undefined8 *)(lVar15 + 0xf780);
        *puVar43 = &PTR_D3DPERF_GetStatus_180234120;
        puVar43[1] = 0;
        *(undefined4 *)(puVar43 + 2) = 0;
        puVar43[3] = 0;
        puVar43[4] = &PTR_FUN_1802349e8;
        puVar16 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar33);
        uVar56 = *puVar16;
        uVar54 = puVar16[3];
        uVar53 = puVar16[2];
        puVar43[7] = puVar16[1];
        puVar43[6] = uVar56;
        puVar43[9] = uVar54;
        puVar43[8] = uVar53;
        uVar56 = puVar16[4];
        uVar54 = puVar16[7];
        uVar53 = puVar16[6];
        puVar43[0xb] = puVar16[5];
        puVar43[10] = uVar56;
        puVar43[0xd] = uVar54;
        puVar43[0xc] = uVar53;
        uVar53 = puVar16[8];
        puVar43[0xf] = puVar16[9];
        puVar43[0xe] = uVar53;
        *puVar43 = &PTR_FUN_180234130;
        puVar43[1] = uVar29;
        puVar43[0x10] = 0;
        puVar43[0x11] = 0;
        puVar43[0x12] = 0;
        *(undefined1 *)(puVar43 + 0x5e) = uVar8;
        *(undefined4 *)(puVar43 + 2) = uVar14;
        puVar43[3] = puVar43 + 0x10;
        uVar42 = FUN_180034900(lVar15 + 0xf790,&stack0x00000060 + lVar33);
        uVar26 = *(uint *)(lVar15 + 0xf7a0);
        uVar21 = (ulonglong)uVar42;
        if (uVar42 == uVar26) {
LAB_18002b4f0:
          uVar34 = *(uint *)(lVar15 + 0xf7a4);
          if (uVar34 == uVar26) {
            uVar26 = 0x10;
            if (uVar34 != 0) {
              uVar26 = uVar34 << 1;
            }
            lVar22 = thunk_FUN_180102f80((ulonglong)uVar26 * 0x30);
            if (lVar22 != 0) {
              uVar19 = 0;
              if (*(int *)(lVar15 + 0xf7a0) != 0) {
                *(uint *)(&stack0xffffffffffffffb0 + lVar33) = uVar26;
                *(uint *)(&stack0xffffffffffffffa0 + lVar33) = uVar42;
                do {
                  puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0xf798) + uVar19 * 0x30);
                  puVar31 = (undefined8 *)(lVar22 + uVar19 * 0x30);
                  uVar26 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar26;
                  uVar54 = *puVar16;
                  uVar53 = puVar16[3];
                  uVar29 = puVar16[2];
                  puVar31[1] = puVar16[1];
                  *puVar31 = uVar54;
                  puVar31[3] = uVar53;
                  puVar31[2] = uVar29;
                  uVar29 = puVar16[4];
                  puVar31[5] = puVar16[5];
                  puVar31[4] = uVar29;
                } while (uVar26 < *(uint *)(lVar15 + 0xf7a0));
                uVar21 = (ulonglong)*(uint *)(&stack0xffffffffffffffa0 + lVar33);
                uVar26 = *(uint *)(&stack0xffffffffffffffb0 + lVar33);
              }
              thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0xf790));
              *(longlong *)(lVar15 + 0xf790) = lVar22;
              *(longlong *)(lVar15 + 0xf798) = lVar22;
              *(uint *)(lVar15 + 0xf7a4) = uVar26;
            }
          }
          uVar26 = *(uint *)(lVar15 + 0xf7a0);
          if (*(uint *)(lVar15 + 0xf7a4) != uVar26) {
            while ((uint)uVar21 < uVar26) {
              uVar19 = (ulonglong)uVar26;
              uVar26 = uVar26 - 1;
              puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0xf798) + uVar19 * 0x30);
              puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf798) + (ulonglong)uVar26 * 0x30);
              uVar54 = *puVar31;
              uVar53 = puVar31[3];
              uVar29 = puVar31[2];
              puVar16[1] = puVar31[1];
              *puVar16 = uVar54;
              puVar16[3] = uVar53;
              puVar16[2] = uVar29;
              uVar29 = puVar31[4];
              puVar16[5] = puVar31[5];
              puVar16[4] = uVar29;
            }
            uVar57 = *(undefined8 *)(&stack0x00000068 + lVar33);
            uVar56 = *(undefined8 *)(&stack0x00000060 + lVar33);
            uVar54 = *(undefined8 *)(&stack0x00000078 + lVar33);
            uVar53 = *(undefined8 *)(&stack0x00000070 + lVar33);
            *(int *)(lVar15 + 0xf7a0) = *(int *)(lVar15 + 0xf7a0) + 1;
            puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0xf798) + uVar21 * 0x30);
            uVar29 = *(undefined8 *)(&stack0x00000080 + lVar33);
            puVar16[1] = uVar57;
            *puVar16 = uVar56;
            puVar16[3] = uVar54;
            puVar16[2] = uVar53;
            puVar16[4] = uVar29;
            *(undefined8 **)(*(longlong *)(lVar15 + 0xf798) + uVar21 * 0x30 + 0x28) = puVar43;
          }
        }
        else {
          *(uint *)(&stack0xffffffffffffffa0 + lVar33) = uVar26;
          uVar19 = 0;
          lVar22 = *(longlong *)(lVar15 + 0xf798) + (ulonglong)uVar42 * 0x30;
          do {
            if (*(longlong *)(lVar22 + uVar19 * 8) !=
                *(longlong *)(&stack0x00000060 + uVar19 * 8 + lVar33)) {
              uVar26 = *(uint *)(&stack0xffffffffffffffa0 + lVar33);
              goto LAB_18002b4f0;
            }
            uVar26 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar26;
          } while (uVar26 < 5);
          *(undefined8 **)(lVar22 + 0x28) = puVar43;
        }
        goto LAB_18002b610;
      }
    }
    else {
      uVar21 = 0;
      lVar22 = *(longlong *)(lVar15 + 0xf798) + (ulonglong)uVar34 * 0x30;
      do {
        if (*(longlong *)(lVar22 + uVar21 * 8) !=
            *(longlong *)(&stack0x00000060 + uVar21 * 8 + lVar33)) goto LAB_18002b414;
        uVar26 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar26;
      } while (uVar26 < 5);
      puVar43 = (undefined8 *)(lVar22 + 0x28);
      if (puVar43 == (undefined8 *)0x0) goto LAB_18002b414;
      puVar43 = (undefined8 *)*puVar43;
LAB_18002b610:
      puVar16 = (undefined8 *)FUN_180033f70(puVar43,*(undefined8 *)(&stack0x00000008 + lVar33));
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(&stack0x00000000 + lVar33) = *puVar16;
        *(undefined8 *)(&stack0xffffffffffffffb8 + lVar33) = puVar16[1];
      }
    }
    puVar28 = *(uint **)(&stack0xffffffffffffffd8 + lVar33);
  }
  else {
    *(undefined8 *)(&stack0x00000010 + lVar33) = 0;
    puVar28 = (uint *)(lVar15 + lVar23);
  }
  if ((((*puVar28 >> 2 & 1) != 0) &&
      ((*(uint *)(&stack0xffffffffffffffa8 + lVar33) & 0xfffffff7) == 0)) &&
     (*(char *)(lVar15 + 0xf693) != '\0')) {
    lVar22 = *(longlong *)(&stack0xffffffffffffffe0 + lVar33);
    fVar72 = *(float *)(lVar22 + 0x35a4);
    fVar69 = *(float *)(lVar22 + 0x35b4);
    fVar44 = *(float *)(lVar22 + 0x35e8);
    fVar45 = *(float *)(lVar22 + 0x35e4);
    fVar50 = *(float *)(lVar22 + 0x35c4);
    fVar46 = *(float *)(lVar22 + 0x35ec);
    fVar48 = *(float *)(lVar22 + 0x35d4);
    fVar47 = *(float *)(lVar22 + 0x35f0);
    fVar67 = *(float *)(lVar22 + 0x35f8);
    fVar66 = *(float *)(lVar22 + 0x35f4);
    fVar65 = *(float *)(lVar22 + 0x35fc);
    fVar64 = *(float *)(lVar22 + 0x3600);
    fVar63 = *(float *)(lVar22 + 0x3608);
    fVar62 = *(float *)(lVar22 + 0x3604);
    fVar61 = *(float *)(lVar22 + 0x360c);
    fVar60 = *(float *)(lVar22 + 0x3610);
    *(float *)(&stack0xffffffffffffffac + lVar33) = fVar64;
    fVar70 = *(float *)(lVar22 + 0x35a8);
    fVar68 = *(float *)(lVar22 + 0x35b8);
    fVar51 = *(float *)(lVar22 + 0x35c8);
    fVar49 = *(float *)(lVar22 + 0x35d8);
    *(float *)(&stack0x000000a0 + lVar33) =
         fVar44 * fVar69 + fVar45 * fVar72 + fVar46 * fVar50 + fVar47 * fVar48;
    fVar58 = *(float *)(lVar22 + 0x3614);
    *(float *)(&stack0x000000b0 + lVar33) =
         fVar67 * fVar69 + fVar66 * fVar72 + fVar65 * fVar50 + fVar64 * fVar48;
    fVar59 = *(float *)(lVar22 + 0x3618);
    fVar55 = *(float *)(lVar22 + 0x361c);
    *(float *)(&stack0x000000c0 + lVar33) =
         fVar63 * fVar69 + fVar62 * fVar72 + fVar61 * fVar50 + fVar60 * fVar48;
    fVar52 = *(float *)(lVar22 + 0x3620);
    *(float *)(&stack0x000000d0 + lVar33) =
         fVar59 * fVar69 + fVar58 * fVar72 + fVar55 * fVar50 + fVar52 * fVar48;
    *(float *)(&stack0x000000a4 + lVar33) =
         fVar44 * fVar68 + fVar45 * fVar70 + fVar46 * fVar51 + fVar47 * fVar49;
    *(float *)(&stack0x000000b4 + lVar33) =
         fVar67 * fVar68 + fVar66 * fVar70 + fVar65 * fVar51 +
         *(float *)(&stack0xffffffffffffffac + lVar33) * fVar49;
    fVar64 = *(float *)(lVar22 + 0x35ac);
    fVar73 = *(float *)(lVar22 + 0x35cc);
    fVar72 = *(float *)(lVar22 + 0x35dc);
    *(float *)(&stack0x000000c4 + lVar33) =
         fVar63 * fVar68 + fVar62 * fVar70 + fVar61 * fVar51 + fVar60 * fVar49;
    fVar71 = *(float *)(lVar22 + 0x35d0);
    fVar69 = *(float *)(lVar22 + 0x35b0);
    fVar50 = *(float *)(lVar22 + 0x35c0);
    *(float *)(&stack0x000000d4 + lVar33) =
         fVar59 * fVar68 + fVar58 * fVar70 + fVar55 * fVar51 + fVar52 * fVar49;
    fVar48 = *(float *)(lVar22 + 0x35bc);
    *(float *)(&stack0xffffffffffffffa4 + lVar33) = fVar48;
    fVar48 = fVar44 * fVar48 + fVar45 * fVar64 + fVar46 * fVar73;
    fVar49 = *(float *)(lVar22 + 0x35e0);
    *(float *)(&stack0xffffffffffffffa0 + lVar33) = fVar48;
    *(float *)(&stack0x000000a8 + lVar33) = fVar48 + fVar47 * fVar72;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) =
         fVar67 * *(float *)(&stack0xffffffffffffffa4 + lVar33);
    fVar48 = fVar67 * *(float *)(&stack0xffffffffffffffa4 + lVar33) + fVar66 * fVar64;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) = fVar48;
    fVar48 = fVar48 + fVar65 * fVar73;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) = fVar48;
    *(float *)(&stack0x000000b8 + lVar33) =
         fVar48 + *(float *)(&stack0xffffffffffffffac + lVar33) * fVar72;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) =
         fVar63 * *(float *)(&stack0xffffffffffffffa4 + lVar33);
    fVar48 = fVar63 * *(float *)(&stack0xffffffffffffffa4 + lVar33) + fVar62 * fVar64;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) = fVar48;
    fVar48 = fVar48 + fVar61 * fVar73;
    *(float *)(&stack0xffffffffffffffa0 + lVar33) = fVar48;
    *(float *)(&stack0x000000c8 + lVar33) = fVar48 + fVar60 * fVar72;
    *(float *)(&stack0x000000d8 + lVar33) =
         fVar59 * *(float *)(&stack0xffffffffffffffa4 + lVar33) + fVar58 * fVar64 + fVar55 * fVar73
         + fVar52 * fVar72;
    *(float *)(&stack0x000000ac + lVar33) =
         fVar44 * fVar50 + fVar45 * fVar69 + fVar46 * fVar71 + fVar47 * fVar49;
    *(float *)(&stack0x000000bc + lVar33) =
         fVar67 * fVar50 + fVar66 * fVar69 + fVar65 * fVar71 +
         *(float *)(&stack0xffffffffffffffac + lVar33) * fVar49;
    *(float *)(&stack0x000000cc + lVar33) =
         fVar63 * fVar50 + fVar62 * fVar69 + fVar61 * fVar71 + fVar60 * fVar49;
    *(float *)(&stack0x000000dc + lVar33) =
         fVar59 * fVar50 + fVar58 * fVar69 + fVar55 * fVar71 + fVar52 * fVar49;
    puVar16 = (undefined8 *)FUN_18001eff8(&stack0x000000a0 + lVar33,lVar15 + 0x6ba0,0);
    *(undefined1 *)(lVar15 + 0xf693) = 0;
    *(undefined1 *)(lVar15 + 0xf691) = 1;
  }
  if (*(longlong *)(&stack0x00000000 + lVar33) == 0) {
    uVar21 = (ulonglong)*(uint *)(&stack0xffffffffffffffa8 + lVar33);
    *(undefined8 *)(&stack0x00000000 + lVar33) =
         *(undefined8 *)(*(longlong *)(lVar15 + 0xf6e0) + uVar21 * 8 + 0x168);
  }
  else {
    uVar21 = 0x10;
  }
  bVar12 = (*(int *)(&stack0xffffffffffffffa8 + lVar33) - 5U & 0xfffffff7) == 0;
  if (bVar12) {
    uVar29 = 0x1f8;
  }
  else {
    uVar29 = 0x1f0;
  }
  *(undefined8 *)(&stack0x00000008 + lVar33) = uVar29;
  cVar30 = *(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x66b);
  *(bool *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x66b) = bVar12;
  *(byte *)(lVar15 + 0xf688) = bVar12 != (bool)cVar30 | *(byte *)(lVar15 + 0xf688);
  uVar19 = 0x8000000000000000;
  if (uVar41 != 0xff) {
    uVar19 = 0;
  }
  uVar26 = *(uint *)(lVar15 + 0xf75c);
  uVar27 = 0;
  uVar19 = uVar19 | uVar21 << 0x20 | (ulonglong)*param_3;
  if (uVar26 != 0) {
    uVar41 = 0;
    uVar42 = uVar26;
    do {
      uVar34 = uVar42 + uVar41 >> 1;
      uVar27 = (ulonglong)uVar34;
      uVar37 = *(ulonglong *)(*(longlong *)(lVar15 + 0xf750) + uVar27 * 0x20);
      if (uVar37 <= uVar19) {
        if (uVar19 <= uVar37) break;
        uVar41 = uVar34 + 1;
        uVar27 = (ulonglong)(uVar34 + 1);
        uVar34 = uVar42;
      }
      uVar42 = uVar34;
    } while (uVar42 != uVar41);
  }
  uVar41 = (uint)uVar27;
  if ((uVar41 == uVar26) ||
     (*(ulonglong *)(*(longlong *)(lVar15 + 0xf750) + uVar27 * 0x20) != uVar19)) {
    if (uVar26 == *(uint *)(lVar15 + 0xf758)) {
      uVar26 = *(uint *)(lVar15 + 0xf758) << 1;
      uVar37 = CONCAT44(0,uVar26);
      *(uint *)(&stack0xfffffffffffffff0 + lVar33) = uVar26;
      *(ulonglong *)(&stack0xffffffffffffffd8 + lVar33) = uVar37;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar37;
      lVar22 = uVar37 << 5;
      if (SUB168(auVar11 * ZEXT816(0x20),8) != 0) {
        lVar22 = -1;
      }
      lVar22 = thunk_FUN_180102f80(lVar22);
      puVar16 = (undefined8 *)0x0;
      if (lVar22 != 0) {
        uVar37 = *(ulonglong *)(&stack0xffffffffffffffd8 + lVar33);
        lVar23 = lVar22;
        if (3 < *(uint *)(&stack0xfffffffffffffff0 + lVar33)) {
          do {
            uVar37 = uVar37 - 4;
            *(undefined8 *)(lVar23 + 8) = 0;
            *(undefined4 *)(lVar23 + 0x10) = 0;
            *(undefined1 *)(lVar23 + 0x14) = 0;
            *(undefined8 *)(lVar23 + 0x28) = 0;
            *(undefined4 *)(lVar23 + 0x30) = 0;
            *(undefined1 *)(lVar23 + 0x34) = 0;
            *(undefined8 *)(lVar23 + 0x48) = 0;
            *(undefined4 *)(lVar23 + 0x50) = 0;
            *(undefined1 *)(lVar23 + 0x54) = 0;
            *(undefined8 *)(lVar23 + 0x68) = 0;
            *(undefined4 *)(lVar23 + 0x70) = 0;
            *(undefined1 *)(lVar23 + 0x74) = 0;
            lVar23 = lVar23 + 0x80;
          } while (3 < uVar37);
        }
        for (; uVar37 != 0; uVar37 = uVar37 - 1) {
          *(undefined8 *)(lVar23 + 8) = 0;
          *(undefined4 *)(lVar23 + 0x10) = 0;
          *(undefined1 *)(lVar23 + 0x14) = 0;
          lVar23 = lVar23 + 0x20;
        }
        uVar37 = 0;
        if (*(int *)(lVar15 + 0xf758) != 0) {
          do {
            uVar26 = (int)uVar37 + 1;
            puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + uVar37 * 0x20);
            puVar43 = (undefined8 *)(lVar22 + uVar37 * 0x20);
            uVar54 = *puVar16;
            uVar53 = puVar16[3];
            uVar29 = puVar16[2];
            puVar43[1] = puVar16[1];
            *puVar43 = uVar54;
            puVar43[3] = uVar53;
            puVar43[2] = uVar29;
            uVar37 = (ulonglong)uVar26;
          } while (uVar26 < *(uint *)(lVar15 + 0xf758));
        }
        puVar16 = (undefined8 *)thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0xf750));
        *(longlong *)(lVar15 + 0xf750) = lVar22;
        *(int *)(lVar15 + 0xf758) = *(int *)(lVar15 + 0xf758) << 1;
      }
    }
    uVar26 = *(uint *)(lVar15 + 0xf75c);
    uVar37 = (ulonglong)uVar26;
    if (uVar41 < uVar26) {
      if (3 < uVar26 - uVar41) {
        do {
          iVar25 = (int)uVar37;
          puVar43 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 1) * 0x20);
          puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + uVar37 * 0x20);
          uVar54 = *puVar43;
          uVar53 = puVar43[3];
          uVar29 = puVar43[2];
          puVar31[1] = puVar43[1];
          *puVar31 = uVar54;
          puVar31[3] = uVar53;
          puVar31[2] = uVar29;
          puVar43 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 2) * 0x20);
          puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 1) * 0x20);
          uVar54 = *puVar43;
          uVar53 = puVar43[3];
          uVar29 = puVar43[2];
          puVar31[1] = puVar43[1];
          *puVar31 = uVar54;
          puVar31[3] = uVar53;
          puVar31[2] = uVar29;
          uVar37 = (ulonglong)(iVar25 - 4U);
          puVar43 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 3) * 0x20);
          puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 2) * 0x20);
          uVar54 = *puVar43;
          uVar53 = puVar43[3];
          uVar29 = puVar43[2];
          puVar31[1] = puVar43[1];
          *puVar31 = uVar54;
          puVar31[3] = uVar53;
          puVar31[2] = uVar29;
          puVar43 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)(iVar25 - 3) * 0x20);
          puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + uVar37 * 0x20);
          uVar54 = *puVar31;
          uVar53 = puVar31[3];
          uVar29 = puVar31[2];
          puVar43[1] = puVar31[1];
          *puVar43 = uVar54;
          puVar43[3] = uVar53;
          puVar43[2] = uVar29;
        } while (uVar41 + 3 < iVar25 - 4U);
      }
      uVar26 = (uint)uVar37;
      while (uVar41 < uVar26) {
        uVar26 = (int)uVar37 - 1;
        puVar43 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + uVar37 * 0x20);
        puVar31 = (undefined8 *)(*(longlong *)(lVar15 + 0xf750) + (ulonglong)uVar26 * 0x20);
        uVar54 = *puVar31;
        uVar53 = puVar31[3];
        uVar29 = puVar31[2];
        puVar43[1] = puVar31[1];
        *puVar43 = uVar54;
        puVar43[3] = uVar53;
        puVar43[2] = uVar29;
        uVar37 = (ulonglong)uVar26;
      }
    }
    uVar8 = (&stack0xfffffffffffffff8)[lVar33];
    lVar23 = uVar27 * 0x20;
    *(ulonglong *)(*(longlong *)(lVar15 + 0xf750) + lVar23) = uVar19;
    lVar22 = lVar23 + *(longlong *)(lVar15 + 0xf750);
    uVar10 = *(undefined2 *)(&stack0x0000009d + lVar33);
    *(uint **)(lVar22 + 8) = param_3;
    *(int *)(lVar22 + 0x10) = (int)uVar21;
    *(undefined1 *)(lVar22 + 0x14) = uVar8;
    *(undefined2 *)(lVar22 + 0x15) = uVar10;
    *(undefined1 *)(lVar22 + 0x17) = (&stack0x0000009f)[lVar33];
    uVar14 = FUN_18005c4e0(puVar16,param_3,&stack0x000007f8 + lVar33);
    lVar22 = *(longlong *)(lVar15 + 0xf760);
    uVar26 = *(uint *)(lVar15 + 0xf768);
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar33) = 0;
    *(undefined4 *)(&stack0xfffffffffffffff8 + lVar33) = uVar14;
    lVar22 = lVar22 + (ulonglong)uVar26 * 0x18c0;
    uVar26 = param_3[1];
    *(longlong *)(&stack0xfffffffffffffff0 + lVar33) = lVar22;
    if (uVar26 == 0) {
      plVar18 = *(longlong **)(lVar22 + 0x6b0);
      (**(code **)(*plVar18 + 0x58))
                (plVar18,&stack0x000007f8 + lVar33,uVar14,
                 *(undefined8 *)(*(longlong *)(lVar15 + 0xf770) + uVar21 * 8),
                 *(undefined4 *)(*(longlong *)(lVar15 + 0xf778) + uVar21 * 4),
                 &stack0xffffffffffffffd8 + lVar33);
    }
    else {
      uVar19 = 0;
      uVar21 = 0;
      if (param_3[2] != 0) {
        do {
          uVar37 = (ulonglong)*(byte *)((longlong)param_3 + uVar21 + 0x214);
          uVar26 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar26;
          uVar19 = (ulonglong)*(byte *)((longlong)param_3 + uVar37 * 8 + 0x1a) <<
                   ((uVar37 & 0xf) << 2) | uVar19;
        } while (uVar26 < param_3[2]);
      }
      *(undefined8 *)(&stack0x00000100 + lVar33) = 0x200;
      (&stack0x00000108)[lVar33] = 1;
      puVar17 = (undefined4 *)thunk_FUN_180102f80(0x200);
      *(undefined1 **)(&stack0x00000110 + lVar33) = &stack0x000005a0 + lVar33;
      *(undefined8 *)(&stack0x00000118 + lVar33) = 0;
      *(undefined4 **)(&stack0x000000f0 + lVar33) = puVar17;
      *(undefined8 *)(&stack0x000000b0 + lVar33) = 0;
      *(undefined8 *)(&stack0x000000a8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000000b8 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000128 + lVar33) = *(undefined8 *)(&stack0x000000b8 + lVar33);
      *(undefined8 *)(&stack0x00000120 + lVar33) = *(undefined8 *)(&stack0x000000b0 + lVar33);
      uVar29 = func_0x000180222c50(&stack0x00000170 + lVar33,0,0x430);
      uVar21 = 0;
      do {
        iVar25 = (int)uVar21;
        uVar26 = iVar25 + 1;
        (&DAT_18024ded0)[uVar21] =
             (&DAT_18022c0d0)[uVar21 & 0xf] | (&DAT_18022c0d0)[uVar21 >> 4] << 0xc;
        (&DAT_18024ded0)[uVar26] =
             (&DAT_18022c0d0)[(ulonglong)uVar26 & 0xf] | (&DAT_18022c0d0)[uVar26 >> 4] << 0xc;
        uVar26 = iVar25 + 2;
        (&DAT_18024ded0)[uVar26] =
             (&DAT_18022c0d0)[(ulonglong)uVar26 & 0xf] | (&DAT_18022c0d0)[uVar26 >> 4] << 0xc;
        uVar26 = iVar25 + 3;
        uVar21 = (ulonglong)(iVar25 + 4U);
        (&DAT_18024ded0)[uVar26] =
             (&DAT_18022c0d0)[(ulonglong)uVar26 & 0xf] | (&DAT_18022c0d0)[uVar26 >> 4] << 0xc;
      } while (iVar25 + 4U < 0x100);
      *(ulonglong *)(&stack0x000000e8 + lVar33) = uVar19;
      *(undefined8 *)(&stack0x000002c8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002c0 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002d8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002d0 + lVar33) = 0;
      *(undefined1 **)(&stack0x000002c0 + lVar33) = &stack0x000000a0 + lVar33;
      *(undefined8 *)(&stack0x000001e8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000001e0 + lVar33) = 0;
      *(undefined8 *)(&stack0x000001f8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000001f0 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000208 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000200 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000218 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000210 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000228 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000220 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000238 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000230 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000248 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000240 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000258 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000250 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000268 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000260 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000278 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000270 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000288 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000280 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000298 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000290 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002a8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002a0 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002b8 + lVar33) = 0;
      *(undefined8 *)(&stack0x000002b0 + lVar33) = 0;
      (&stack0x000002db)[lVar33] = 1;
      *(undefined8 *)(&stack0x00000138 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000130 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000148 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000140 + lVar33) = 0;
      *(undefined4 *)(&stack0x00000130 + lVar33) = 0x10040;
      *(undefined8 *)(&stack0x00000158 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000150 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000168 + lVar33) = 0;
      *(undefined8 *)(&stack0x00000160 + lVar33) = 0;
      *(undefined1 **)(&stack0x00000160 + lVar33) = &stack0x00000186 + lVar33;
      *(undefined2 *)(&stack0x00000168 + lVar33) = 0x40;
      *(undefined4 *)(&stack0x000001f0 + lVar33) = 0x410802;
      *(undefined8 *)(&stack0x000001c8 + lVar33) = 0x41040000110400;
      *(undefined4 *)(&stack0x000001d0 + lVar33) = 0x20000d00;
      *(undefined8 *)(&stack0x000001e8 + lVar33) = 0x11080000210800;
      *(undefined8 *)(&stack0x000001e0 + lVar33) = 0x31080000410800;
      if ((&stack0x000002db)[lVar33] != '\0') {
        cVar30 = '\0';
        uVar21 = 0;
        do {
          (&stack0x00000256)[uVar21 + lVar33] = cVar30;
          uVar26 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar26;
          cVar30 = cVar30 + '\x01';
        } while (uVar26 < 0x11);
      }
      *puVar17 = 0x43425844;
      *(undefined8 *)(puVar17 + 1) = 0;
      *(undefined8 *)(puVar17 + 3) = 0;
      *(undefined4 **)(&stack0x000000f8 + lVar33) = puVar17 + 9;
      *(undefined8 *)(puVar17 + 5) = 1;
      puVar17[7] = 1;
      puVar17[8] = (int)(puVar17 + 9) - (int)puVar17;
      FUN_180071738(uVar29,&stack0x000000f0 + lVar33,&stack0x00000110 + lVar33,0);
      FUN_1800f5ba0(&stack0x000000f0 + lVar33);
      lVar22 = *(longlong *)(&stack0x000000f0 + lVar33);
      (**(code **)(**(longlong **)(*(longlong *)(&stack0xfffffffffffffff0 + lVar33) + 0x6b0) + 0x58)
      )(*(longlong **)(*(longlong *)(&stack0xfffffffffffffff0 + lVar33) + 0x6b0),
        &stack0x000007f8 + lVar33,*(undefined4 *)(&stack0xfffffffffffffff8 + lVar33),lVar22,
        *(longlong *)(&stack0x000000f8 + lVar33) - lVar22,&stack0xffffffffffffffd8 + lVar33);
      thunk_FUN_180102fc0(lVar22);
    }
    *(undefined8 *)(lVar23 + *(longlong *)(lVar15 + 0xf750) + 0x18) =
         *(undefined8 *)(&stack0xffffffffffffffd8 + lVar33);
    *(int *)(lVar15 + 0xf75c) = *(int *)(lVar15 + 0xf75c) + 1;
  }
  lVar22 = *(longlong *)(uVar27 * 0x20 + *(longlong *)(lVar15 + 0xf750) + 0x18);
  if ((*(int *)(&stack0xffffffffffffffd0 + lVar33) == 1) &&
     (((*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x666) != '\0' &&
       (param_3[1] != 0)) ||
      (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x667) != '\0')))) {
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar33) =
         *(undefined8 *)(*(longlong *)(&stack0x00000008 + lVar33) + *(longlong *)(lVar15 + 0xf6e0));
    cVar30 = '\x01';
  }
  else {
    cVar30 = '\0';
    if (*(longlong *)(&stack0xffffffffffffffb8 + lVar33) != 0) goto LAB_18002bf88;
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar33) = 0;
    cVar30 = '\0';
  }
  iVar25 = *(int *)(&stack0xffffffffffffffa8 + lVar33);
  if (iVar25 == 6) {
    uVar29 = *(undefined8 *)(*(longlong *)(lVar15 + 0xf6e0) + 0x200);
  }
  else if (iVar25 == 7) {
    uVar29 = *(undefined8 *)(*(longlong *)(lVar15 + 0xf6e0) + 0x208);
  }
  else if (iVar25 == 0xe) {
    uVar29 = *(undefined8 *)(*(longlong *)(lVar15 + 0xf6e0) + 0x210);
  }
  else {
    if (iVar25 != 0xf) goto LAB_18002bf88;
    uVar29 = *(undefined8 *)(*(longlong *)(lVar15 + 0xf6e0) + 0x218);
  }
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar33) = uVar29;
LAB_18002bf88:
  uVar41 = (0x1000 - *(int *)(lVar15 + 0x74)) - *(int *)(lVar15 + 0x70);
  uVar42 = (0x1000 - *(int *)(lVar15 + 0x90)) - *(int *)(lVar15 + 0x94);
  uVar26 = *(uint *)(&stack0x00001060 + lVar33);
  puVar3 = &DAT_180249d18;
  if (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x661) == '\0') {
    puVar3 = &DAT_180249d38;
  }
  if ((((((((*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x662) != '\0') ||
           (*(int *)(lVar15 + 0x6940) != *(int *)(&stack0xffffffffffffffcc + lVar33) ||
            *(int *)(&stack0xffffffffffffffc8 + lVar33) != 0)) ||
          (*(int *)(lVar15 + 0x102c) != *(int *)(&stack0xffffffffffffffec + lVar33))) ||
         ((*(int *)(lVar15 + 0xfe8) != *(int *)(&stack0xffffffffffffffe8 + lVar33) ||
          (*(longlong *)(lVar15 + 0xfd58) != *(longlong *)(&stack0x00000090 + lVar33))))) ||
        (*(longlong *)(lVar15 + 0xfcd8) != *(longlong *)(&stack0x00000058 + lVar33))) ||
       ((*(longlong *)(lVar15 + 0xfcc0) != *(longlong *)(&stack0x00000000 + lVar33) ||
        (*(longlong *)(lVar15 + 0xfcd0) != *(longlong *)(&stack0xffffffffffffffb8 + lVar33))))) ||
      ((*(char *)(lVar15 + 0x7668) != cVar30 ||
       (((*(uint *)(lVar15 + 0x763c) != param_3[1] ||
         (*(int *)(lVar15 + 0xfd80) !=
          *(int *)(puVar3 + (longlong)*(int *)(&stack0xffffffffffffffd0 + lVar33) * 4))) ||
        (((*(int *)(lVar15 + 0x94) != 0) != (uVar26 != 0) ||
         uVar41 < *(uint *)(&stack0x0000001c + lVar33)) || uVar42 < uVar26)))))) ||
     (*(longlong *)(lVar15 + 0xfcb8) != lVar22)) {
    lVar23 = *(longlong *)(&stack0x00000058 + lVar33);
    uVar14 = *(undefined4 *)(&stack0xffffffffffffffe8 + lVar33);
    if (lVar23 != *(longlong *)(lVar15 + 0xf718)) {
      uVar14 = 0;
    }
    FUN_18002a810(lVar15,uVar41 < *(uint *)(&stack0x0000001c + lVar33),uVar42 < uVar26,uVar14);
    if (lVar23 == *(longlong *)(lVar15 + 0xf718)) {
      *(undefined4 *)(&stack0xffffffffffffffec + lVar33) = *(undefined4 *)(lVar15 + 0x7c);
    }
    if (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x662) != '\0') {
      *(undefined1 *)(lVar15 + 0xf689) = 1;
      *(byte *)(lVar15 + 0xf684) = *(byte *)(lVar15 + 0xf684) | 1;
    }
    if (*(int *)(&stack0xffffffffffffffc8 + lVar33) != 0) {
      *(uint *)(*(longlong *)(&stack0xffffffffffffffe0 + lVar33) + 0x2ea4) =
           (uint)*(byte *)((longlong)param_3 + 0x4d);
      *(uint *)(lVar15 + 0x6eb4) = (uint)**(byte **)(&stack0x00000020 + lVar33);
      *(uint *)(lVar15 + 0x6ec4) = (uint)**(byte **)(&stack0x00000028 + lVar33);
      *(uint *)(lVar15 + 0x6ed4) = (uint)**(byte **)(&stack0x00000030 + lVar33);
      *(uint *)(lVar15 + 0x6ee4) = (uint)**(byte **)(&stack0x00000038 + lVar33);
      *(uint *)(lVar15 + 0x6ef4) = (uint)**(byte **)(&stack0x00000040 + lVar33);
      *(uint *)(lVar15 + 0x6f04) = (uint)**(byte **)(&stack0x00000048 + lVar33);
      *(uint *)(lVar15 + 0x6f14) = (uint)**(byte **)(&stack0x00000050 + lVar33);
      *(undefined1 *)(lVar15 + 0xf691) = 1;
    }
    if (*(int *)(lVar15 + 0x6940) != *(int *)(&stack0xffffffffffffffcc + lVar33)) {
      *(int *)(lVar15 + 0x6940) = *(int *)(&stack0xffffffffffffffcc + lVar33);
      *(undefined1 *)(lVar15 + 0xf691) = 1;
    }
    if (*(int *)(lVar15 + 0xfe8) != *(int *)(&stack0xffffffffffffffe8 + lVar33)) {
      *(int *)(lVar15 + 0xfe8) = *(int *)(&stack0xffffffffffffffe8 + lVar33);
      *(undefined1 *)(lVar15 + 0xf68f) = 1;
    }
    if (*(longlong *)(lVar15 + 0xfcd8) != *(longlong *)(&stack0x00000058 + lVar33)) {
      *(longlong *)(lVar15 + 0xfcd8) = *(longlong *)(&stack0x00000058 + lVar33);
      *(undefined1 *)(lVar15 + 0xf68f) = 1;
    }
    if (*(int *)(lVar15 + 0x102c) != *(int *)(&stack0xffffffffffffffec + lVar33)) {
      *(int *)(lVar15 + 0x102c) = *(int *)(&stack0xffffffffffffffec + lVar33);
      *(undefined1 *)(lVar15 + 0xf68f) = 1;
    }
    if (*(longlong *)(lVar15 + 0xfd58) != *(longlong *)(&stack0x00000090 + lVar33)) {
      *(longlong *)(lVar15 + 0xfd58) = *(longlong *)(&stack0x00000090 + lVar33);
      *(undefined1 *)(lVar15 + 0xf690) = 1;
    }
    if (*(longlong *)(lVar15 + 0xfcb8) != lVar22) {
      *(longlong *)(lVar15 + 0xfcb8) = lVar22;
      *(undefined1 *)(lVar15 + 0x10588) = 1;
    }
    lVar23 = *(longlong *)(&stack0xffffffffffffffb8 + lVar33);
    lVar22 = *(longlong *)(lVar15 + 0xfcd0);
    if (lVar22 != lVar23) {
      *(longlong *)(lVar15 + 0xfcd0) = lVar23;
      *(undefined1 *)(lVar15 + 0x10588) = 1;
      lVar22 = lVar23;
    }
    if (*(longlong *)(lVar15 + 0xfcc0) != *(longlong *)(&stack0x00000000 + lVar33)) {
      *(longlong *)(lVar15 + 0xfcc0) = *(longlong *)(&stack0x00000000 + lVar33);
      if (((lVar22 == 0) || (lVar22 == *(longlong *)(*(longlong *)(lVar15 + 0xf6e0) + 0x1f0))) ||
         (bVar12 = true, lVar22 == *(longlong *)(*(longlong *)(lVar15 + 0xf6e0) + 0x1f8))) {
        bVar12 = false;
      }
      lVar23 = *(longlong *)(lVar15 + 0xf6e0);
      lVar22 = *(longlong *)(&stack0x00000000 + lVar33);
      if (((lVar22 == *(longlong *)(lVar23 + 0x188)) || (lVar22 == *(longlong *)(lVar23 + 0x180)))
         || ((lVar22 == *(longlong *)(lVar23 + 0x1c8) ||
             (lVar22 == *(longlong *)(lVar23 + 0x1c0) || bVar12)))) {
        *(ulonglong *)(&stack0x00000010 + lVar33) = *(ulonglong *)(&stack0x00000010 + lVar33) | 0x3f
        ;
      }
      *(uint *)(lVar15 + 0xfd84) = *(uint *)(&stack0x00000010 + lVar33) & 0x3f;
      lVar22 = *(longlong *)(lVar15 + 0xf7d0);
      *(undefined8 *)(lVar15 + 0xf7d0) = 0;
      *(byte *)(lVar15 + 0xf6c2) = lVar22 != 0 | *(byte *)(lVar15 + 0xf6c2);
      *(undefined1 *)(lVar15 + 0x10588) = 1;
    }
    if ((*(uint *)(lVar15 + 0x763c) != param_3[1]) ||
       (*(char *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar33) + 0x662) != '\0')) {
      *(uint *)(lVar15 + 0x763c) = param_3[1];
      *(undefined1 *)(lVar15 + 0xf68e) = 1;
    }
    if (*(int *)(lVar15 + 0xfd80) !=
        *(int *)(puVar3 + (longlong)*(int *)(&stack0xffffffffffffffd0 + lVar33) * 4)) {
      *(int *)(lVar15 + 0xfd80) =
           *(int *)(puVar3 + (longlong)*(int *)(&stack0xffffffffffffffd0 + lVar33) * 4);
      *(undefined1 *)(lVar15 + 0x10588) = 1;
    }
    if (*(char *)(lVar15 + 0x7668) != cVar30) {
      *(char *)(lVar15 + 0x7668) = cVar30;
      *(undefined1 *)(lVar15 + 0xf68d) = 1;
    }
    lVar33 = *(longlong *)(&stack0xffffffffffffffc0 + lVar33);
    bVar9 = *(byte *)(lVar33 + 0x662);
    *(byte *)(lVar15 + 0xf68c) = *(byte *)(lVar15 + 0xf68c) | bVar9;
    *(byte *)(lVar15 + 0xf68b) = *(byte *)(lVar15 + 0xf68b) | bVar9;
    *(byte *)(lVar15 + 0xf68d) = *(byte *)(lVar15 + 0xf68d) | bVar9;
    *(byte *)(lVar15 + 0xf688) = *(byte *)(lVar15 + 0xf688) | bVar9;
    if (bVar9 != 0) {
      *(undefined1 *)(lVar33 + 0x662) = 0;
      FUN_180054430(lVar15);
    }
  }
  return;
}

