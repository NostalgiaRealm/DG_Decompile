/*
 * FUN_1801368a8 at 1801368a8
 * undefined FUN_1801368a8(void)
 * Address ranges: 1801368a8-180136a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801368a8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  longlong lVar23;
  longlong lVar24;
  ulonglong unaff_x20;
  longlong unaff_x21;
  longlong unaff_x22;
  longlong unaff_x25;
  longlong *unaff_x26;
  longlong unaff_x27;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  longlong in_stack_00000010;
  longlong in_stack_00000018;
  code *in_stack_00000020;
  longlong in_stack_00000028;
  uint in_stack_00000030;
  longlong in_stack_00000038;
  uint in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  uint uStack0000000000000064;
  
  do {
    lVar9 = param_1 + (unaff_x20 & 0xffffffff) * 8;
    if (*(uint *)(lVar9 + 0x734) < (uint)*(byte *)(lVar9 + 0x733)) {
      fVar26 = (float)*(byte *)(lVar9 + 0x733);
    }
    else {
      fVar26 = (float)*(uint *)(lVar9 + 0x734);
    }
    lVar23 = (unaff_x20 & 0xffffffff) * 0x34;
    lVar10 = param_1 + lVar23;
    *(float *)(lVar10 + 0xdc) = fVar26;
    bVar5 = *(byte *)(lVar9 + 0x731);
    bVar6 = *(byte *)(lVar9 + 0x732);
    uVar17 = (ulonglong)bVar6;
    uVar14 = (uint)*(byte *)(lVar9 + 0x730);
    bVar8 = uVar14 == 2;
    if (bVar8) {
      uVar14 = 0;
    }
    if (!bVar8) {
      fVar26 = 3.4028235e+38;
    }
    uVar16 = (uint)bVar6;
    *(float *)(lVar10 + 0xe0) = fVar26;
    *(float *)(lVar10 + 0x420) = fVar26;
    if (bVar5 == 2 || uVar16 == 2) {
      *(undefined4 *)(lVar10 + 0xb0) = 0x55;
      if (bVar5 != 2 && bVar6 != 2) goto LAB_180136974;
      uVar19 = 0xd5;
    }
    else {
      uVar17 = (ulonglong)uVar16;
      *(undefined4 *)(lVar10 + 0xb0) =
           *(undefined4 *)
            (&DAT_18022c130 +
            ((ulonglong)uVar14 | ((ulonglong)(uint)bVar5 | (ulonglong)uVar16 << 1) << 1) * 4);
LAB_180136974:
      uVar19 = *(undefined4 *)
                (&DAT_18022c110 + ((ulonglong)uVar14 | ((ulonglong)bVar5 | uVar17 << 1) << 1) * 4);
    }
    *(undefined4 *)(unaff_x27 + lVar23) = uVar19;
    puVar12 = (undefined8 *)(lVar23 + unaff_x22);
    lVar9 = 0x3f0;
    if (1 < (*(int *)(unaff_x25 + (unaff_x20 & 0xffffffff) * 4) + 0xfbU & 0xff)) {
      lVar9 = 0xb0;
    }
    puVar18 = (undefined8 *)(lVar10 + lVar9);
    uVar25 = *puVar18;
    uVar28 = puVar18[3];
    uVar27 = puVar18[2];
    puVar12[1] = puVar18[1];
    *puVar12 = uVar25;
    puVar12[3] = uVar28;
    puVar12[2] = uVar27;
    uVar25 = puVar18[4];
    puVar12[5] = puVar18[5];
    puVar12[4] = uVar25;
    *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar18 + 6);
    lVar9 = FUN_180200a68(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
    if (lVar9 != unaff_x26[unaff_x20 & 0xffffffff]) {
      FUN_180200e40(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
      unaff_x26[unaff_x20 & 0xffffffff] = lVar9;
    }
    iVar11 = (int)(uint)unaff_x20 >> 3;
    *(byte *)(unaff_x21 + iVar11) =
         *(byte *)(unaff_x21 + iVar11) & ((byte)(1 << (ulonglong)((uint)unaff_x20 & 7)) ^ 0xff);
    uVar14 = (in_stack_00000040 & 0xaaaaaaaa) >> 1 | (in_stack_00000040 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    unaff_x20 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)unaff_x20;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  } while( true );
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
          (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
  bVar8 = *(longlong *)(lVar9 + 0x790) != *unaff_x26;
  if (bVar8) {
    *(longlong *)(lVar9 + 0x790) = *unaff_x26;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar9 + 0x798) == *(longlong *)(in_stack_00000010 + 0x7b28)) {
LAB_180136adc:
    uVar16 = 3;
    iVar11 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x798) = *(longlong *)(in_stack_00000010 + 0x7b28);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_180136adc;
    }
    iVar11 = 1;
    uVar14 = 1;
    uVar16 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar9 + 0x7a0) != *(longlong *)(in_stack_00000010 + 0x7b30)) &&
     (*(longlong *)(lVar9 + 0x7a0) = *(longlong *)(in_stack_00000010 + 0x7b30), uVar13 = uVar16,
     uVar14 == 0)) {
    iVar11 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar9 + 0x7a8) != *(longlong *)(in_stack_00000010 + 0x7b38)) {
    *(longlong *)(lVar9 + 0x7a8) = *(longlong *)(in_stack_00000010 + 0x7b38);
    if (uVar13 == 0) {
      iVar11 = 3;
      uVar13 = 1;
    }
    else {
      uVar13 = 4 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7b0) != *(longlong *)(in_stack_00000010 + 0x7b40)) {
    *(longlong *)(lVar9 + 0x7b0) = *(longlong *)(in_stack_00000010 + 0x7b40);
    if (uVar13 == 0) {
      iVar11 = 4;
      uVar13 = 1;
    }
    else {
      uVar13 = 5 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7b8) != *(longlong *)(in_stack_00000010 + 0x7b48)) {
    *(longlong *)(lVar9 + 0x7b8) = *(longlong *)(in_stack_00000010 + 0x7b48);
    if (uVar13 == 0) {
      iVar11 = 5;
      uVar13 = 1;
    }
    else {
      uVar13 = 6 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7c0) != *(longlong *)(in_stack_00000010 + 0x7b50)) {
    *(longlong *)(lVar9 + 0x7c0) = *(longlong *)(in_stack_00000010 + 0x7b50);
    if (uVar13 == 0) {
      iVar11 = 6;
      uVar13 = 1;
    }
    else {
      uVar13 = 7 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7c8) != *(longlong *)(in_stack_00000010 + 0x7b58)) {
    *(longlong *)(lVar9 + 0x7c8) = *(longlong *)(in_stack_00000010 + 0x7b58);
    if (uVar13 == 0) {
      iVar11 = 7;
      uVar13 = 1;
    }
    else {
      uVar13 = 8 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 2000) != *(longlong *)(in_stack_00000010 + 0x7b60)) {
    *(longlong *)(lVar9 + 2000) = *(longlong *)(in_stack_00000010 + 0x7b60);
    if (uVar13 == 0) {
      iVar11 = 8;
      uVar13 = 1;
    }
    else {
      uVar13 = 9 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7d8) != *(longlong *)(in_stack_00000010 + 0x7b68)) {
    *(longlong *)(lVar9 + 0x7d8) = *(longlong *)(in_stack_00000010 + 0x7b68);
    if (uVar13 == 0) {
      iVar11 = 9;
      uVar13 = 1;
    }
    else {
      uVar13 = 10 - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7e0) != *(longlong *)(in_stack_00000010 + 0x7b70)) {
    *(longlong *)(lVar9 + 0x7e0) = *(longlong *)(in_stack_00000010 + 0x7b70);
    if (uVar13 == 0) {
      iVar11 = 10;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xb - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7e8) != *(longlong *)(in_stack_00000010 + 0x7b78)) {
    *(longlong *)(lVar9 + 0x7e8) = *(longlong *)(in_stack_00000010 + 0x7b78);
    if (uVar13 == 0) {
      iVar11 = 0xb;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xc - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7f0) != *(longlong *)(in_stack_00000010 + 0x7b80)) {
    *(longlong *)(lVar9 + 0x7f0) = *(longlong *)(in_stack_00000010 + 0x7b80);
    if (uVar13 == 0) {
      iVar11 = 0xc;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xd - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7f8) != *(longlong *)(in_stack_00000010 + 0x7b88)) {
    *(longlong *)(lVar9 + 0x7f8) = *(longlong *)(in_stack_00000010 + 0x7b88);
    if (uVar13 == 0) {
      iVar11 = 0xd;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xe - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x800) != *(longlong *)(in_stack_00000010 + 0x7b90)) {
    *(longlong *)(lVar9 + 0x800) = *(longlong *)(in_stack_00000010 + 0x7b90);
    if (uVar13 == 0) {
      iVar11 = 0xe;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xf - iVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x808) == *(longlong *)(in_stack_00000010 + 0x7b98)) {
LAB_180136d80:
    if (uVar13 != 0) goto LAB_180136d84;
  }
  else {
    *(longlong *)(lVar9 + 0x808) = *(longlong *)(in_stack_00000010 + 0x7b98);
    if (uVar13 != 0) {
      uVar13 = 0x10 - iVar11;
      goto LAB_180136d80;
    }
    iVar11 = 0xf;
    uVar13 = 1;
LAB_180136d84:
    (*in_stack_00000020)(*(undefined8 *)(lVar9 + 0x6b8),iVar11,uVar13);
    (*extraout_x11)();
  }
  uVar14 = *(uint *)(in_stack_00000038 + 0x36bc);
  if (uVar14 == 0 && in_stack_00000048 == in_stack_00000018) goto LAB_1801370bc;
  in_stack_00000040 = uVar14 & 0xf;
  uVar14 = (uVar14 & 10) >> 1 | (uVar14 & 5) << 1;
  lVar9 = LZCOUNT((uVar14 >> 2 | (uVar14 & 0x33333333) << 2) << 0x1c);
  uVar14 = (uint)lVar9;
  if ((1 - (uVar14 >> 5) & 0xff) == 0) {
    uVar17 = FUN_180136fb8(0xfc88);
    return uVar17;
  }
  *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) =
       *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  plVar2 = (longlong *)(in_stack_00000018 + 0xfc88);
  while( true ) {
    lVar10 = in_stack_00000018 + lVar9 * 8;
    if (*(uint *)(lVar10 + 0x81c) < (uint)*(byte *)(lVar10 + 0x81b)) {
      fVar26 = (float)*(byte *)(lVar10 + 0x81b);
    }
    else {
      fVar26 = (float)*(uint *)(lVar10 + 0x81c);
    }
    lVar23 = in_stack_00000018 + lVar9 * 0x34;
    *(float *)(lVar23 + 0x86c) = fVar26;
    bVar5 = *(byte *)(lVar10 + 0x819);
    bVar6 = *(byte *)(lVar10 + 0x81a);
    bVar7 = *(byte *)(lVar10 + 0x818);
    *(undefined4 *)(lVar23 + 0x870) = 0x7f7fffff;
    if (bVar5 == 2 || bVar6 == 2) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)
                (&DAT_18022c130 +
                ((ulonglong)bVar7 | ((ulonglong)(uint)bVar5 | (ulonglong)(uint)bVar6 << 1) << 1) * 4
                );
    }
    *(undefined4 *)(lVar23 + 0x840) = uVar19;
    puVar12 = (undefined8 *)(in_stack_00000018 + 0x100e0 + lVar9 * 0x34);
    puVar18 = (undefined8 *)(in_stack_00000018 + 0x840 + lVar9 * 0x34);
    uVar25 = *puVar18;
    uVar28 = puVar18[3];
    uVar27 = puVar18[2];
    puVar12[1] = puVar18[1];
    *puVar12 = uVar25;
    puVar12[3] = uVar28;
    puVar12[2] = uVar27;
    uVar25 = puVar18[4];
    uVar19 = *(undefined4 *)(puVar18 + 6);
    puVar12[5] = puVar18[5];
    puVar12[4] = uVar25;
    *(undefined4 *)(puVar12 + 6) = uVar19;
    lVar10 = FUN_180200a68(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
    if (lVar10 != plVar2[lVar9]) {
      FUN_180200e40(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
      plVar2[lVar9] = lVar10;
    }
    uVar14 = (in_stack_00000040 & 0xaaaaaaaa) >> 1 | (in_stack_00000040 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)lVar9;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  }
  lVar9 = (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0 +
          *(longlong *)(in_stack_00000018 + 0xf6d0);
  bVar8 = *(longlong *)(lVar9 + 0x710) != *plVar2;
  if (bVar8) {
    *(longlong *)(lVar9 + 0x710) = *plVar2;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar9 + 0x718) == *(longlong *)(in_stack_00000010 + 0x7c90)) {
LAB_18013701c:
    uVar16 = 3;
    iVar11 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x718) = *(longlong *)(in_stack_00000010 + 0x7c90);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_18013701c;
    }
    iVar11 = 1;
    uVar14 = 1;
    uVar16 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar9 + 0x720) != *(longlong *)(in_stack_00000010 + 0x7c98)) &&
     (*(longlong *)(lVar9 + 0x720) = *(longlong *)(in_stack_00000010 + 0x7c98), uVar13 = uVar16,
     uVar14 == 0)) {
    iVar11 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar9 + 0x728) == *(longlong *)(in_stack_00000010 + 0x7ca0)) {
LAB_180137080:
    if (uVar13 != 0) goto LAB_180137084;
  }
  else {
    *(longlong *)(lVar9 + 0x728) = *(longlong *)(in_stack_00000010 + 0x7ca0);
    if (uVar13 != 0) {
      uVar13 = 4 - iVar11;
      goto LAB_180137080;
    }
    iVar11 = 3;
    uVar13 = 1;
LAB_180137084:
    (*in_stack_00000020)(*(undefined8 *)(lVar9 + 0x6b8),iVar11,uVar13);
    (*extraout_x11_00)();
  }
  *(undefined4 *)(in_stack_00000038 + 0x36bc) = 0;
LAB_1801370bc:
  if (*(char *)(in_stack_00000028 + 0x68f) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar3 = in_stack_00000018 + 0xfcd8;
    uVar17 = 0;
    iVar11 = 0;
    lVar22 = 0;
    lVar24 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    uVar21 = 0;
    lVar9 = lVar24 + 0xaf0;
    lVar10 = lVar24 + 0xb30;
    lVar23 = lVar24 + 0xa70;
    do {
      lVar15 = *(longlong *)(lVar3 + lVar22 * 8);
      iVar20 = (int)uVar21;
      if (((*(longlong *)(lVar23 + lVar22 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + lVar22 * 4,
          *(int *)(lVar9 + lVar22 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar10 + lVar22 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + lVar22 * 4;
        *(longlong *)(lVar23 + lVar22 * 8) = lVar15;
        *(undefined4 *)(lVar9 + lVar22 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar10 + lVar22 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          iVar11 = 1;
          uVar17 = uVar21;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 1;
        }
      }
      uVar14 = iVar20 + 1;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar24 + (ulonglong)uVar14 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        lVar15 = lVar24 + (ulonglong)uVar14 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 2;
        }
      }
      uVar14 = iVar20 + 2;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar24 + (ulonglong)uVar14 * 4 + 0xaf0) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar24 + (ulonglong)uVar14 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 3;
        }
      }
      uVar14 = iVar20 + 3;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar24 + (ulonglong)uVar14 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar24 + (ulonglong)uVar14 * 4 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 4;
        }
      }
      uVar14 = iVar20 + 4;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar24 + (ulonglong)uVar14 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 5;
        }
      }
      uVar14 = iVar20 + 5;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) == lVar15) {
        lVar4 = lVar24 + (ulonglong)uVar14 * 4;
        lVar1 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        if ((*(int *)(lVar4 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar4 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_180137368;
      }
      else {
LAB_180137368:
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        lVar15 = lVar24 + (ulonglong)uVar14 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 6;
        }
      }
      uVar14 = iVar20 + 6;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar23 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar23 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          uVar17 = (ulonglong)uVar14;
          iVar11 = 1;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 7;
        }
      }
      uVar21 = (ulonglong)(iVar20 + 7);
      lVar15 = *(longlong *)(lVar3 + uVar21 * 8);
      if (((*(longlong *)(lVar23 + uVar21 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + uVar21 * 4,
          *(int *)(lVar9 + uVar21 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar24 + uVar21 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + uVar21 * 4;
        *(longlong *)(lVar23 + uVar21 * 8) = lVar15;
        lVar15 = lVar24 + uVar21 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar11 == 0) {
          iVar11 = 1;
          uVar17 = uVar21;
        }
        else {
          iVar11 = (iVar20 - (int)uVar17) + 8;
        }
      }
      uVar21 = (ulonglong)(iVar20 + 8U);
      lVar22 = lVar22 + 8;
    } while (iVar20 + 8U < 0x10);
    if (iVar11 != 0) {
      (*in_stack_00000020)();
      (*extraout_x11_01)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x68f) = 0;
  }
  if (*(char *)(in_stack_00000028 + 0x690) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar9 = *(longlong *)(in_stack_00000010 + 0x7d58);
    if (lVar9 == *(longlong *)(in_stack_00000010 + 0x7710)) {
      iVar11 = 0x2a;
    }
    else {
      iVar11 = *(int *)(in_stack_00000038 + 0x3d70);
    }
    lVar10 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    if (((lVar9 != *(longlong *)(lVar10 + 0xb70)) || (iVar11 != *(int *)(lVar10 + 0xb78))) ||
       (*(int *)(lVar10 + 0xb7c) != 0)) {
      *(longlong *)(lVar10 + 0xb70) = lVar9;
      *(int *)(lVar10 + 0xb78) = iVar11;
      *(undefined4 *)(lVar10 + 0xb7c) = 0;
      (*in_stack_00000020)();
      (*extraout_x11_02)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x690) = 0;
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9b0);
  if (lVar9 != 0) {
    uStack0000000000000064 =
         *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(in_stack_00000038 + 0x39d8) & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar9,*(uint *)(in_stack_00000038 + 0x39d8) +
                               *(int *)(lVar9 + 0x3c) * *(int *)(in_stack_00000038 + 0x39e8));
    (*extraout_x11_03)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9b8);
  if (lVar9 != 0) {
    uStack0000000000000064 =
         *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(in_stack_00000038 + 0x39dc) & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar9,*(uint *)(in_stack_00000038 + 0x39dc) +
                               *(int *)(lVar9 + 0x3c) * *(int *)(in_stack_00000038 + 0x39ec));
    (*extraout_x11_04)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9c0);
  if (lVar9 != 0) {
    uStack0000000000000064 =
         *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(in_stack_00000038 + 0x39e0) & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar9,*(uint *)(in_stack_00000038 + 0x39e0) +
                               *(int *)(lVar9 + 0x3c) * *(int *)(in_stack_00000038 + 0x39f0));
    (*extraout_x11_05)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9c8);
  if (lVar9 != 0) {
    uStack0000000000000064 =
         *(uint *)(lVar9 + 0x28) >> (ulonglong)(*(uint *)(in_stack_00000038 + 0x39e4) & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar9,*(uint *)(in_stack_00000038 + 0x39e4) +
                               *(int *)(lVar9 + 0x3c) * *(int *)(in_stack_00000038 + 0x39f4));
    (*extraout_x11_06)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar9 = 0xbb4;
  if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
    lVar9 = 0x7b0;
  }
  lVar10 = *(longlong *)(in_stack_00000018 + 0xf9d0);
  if ((lVar10 != 0) && (*(int *)(in_stack_00000018 + lVar9) != 0)) {
    lVar9 = 3000;
    if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
      lVar9 = 0x7b4;
    }
    if (*(int *)(in_stack_00000018 + lVar9) != 0) {
      uStack0000000000000064 =
           *(uint *)(lVar10 + 0x28) >> (ulonglong)(*(uint *)(in_stack_00000038 + 0x39f8) & 0x1f);
      if (uStack0000000000000064 == 0) {
        uStack0000000000000064 = 1;
      }
      auVar29 = (*in_stack_00000020)
                          (lVar10,*(uint *)(in_stack_00000038 + 0x39f8) +
                                  *(int *)(in_stack_00000038 + 0x39fc) * *(int *)(lVar10 + 0x3c));
      (*extraout_x11_07)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
    }
  }
  return (ulonglong)in_stack_00000030;
}

