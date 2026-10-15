/*
 * FUN_180136a74 at 180136a74
 * undefined FUN_180136a74(void)
 * Address ranges: 180136a74-180136a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180136a74(void)

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
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
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
  longlong *unaff_x26;
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
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
  uint uStack0000000000000064;
  undefined8 in_stack_00000138;
  
  uVar25 = in_stack_00000138;
  lVar16 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
           (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
  bVar8 = *(longlong *)(lVar16 + 0x790) != *unaff_x26;
  if (bVar8) {
    *(longlong *)(lVar16 + 0x790) = *unaff_x26;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar16 + 0x798) == *(longlong *)(in_stack_00000010 + 0x7b28)) {
LAB_180136adc:
    uVar22 = 3;
    iVar10 = 0;
  }
  else {
    *(longlong *)(lVar16 + 0x798) = *(longlong *)(in_stack_00000010 + 0x7b28);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_180136adc;
    }
    iVar10 = 1;
    uVar14 = 1;
    uVar22 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar16 + 0x7a0) != *(longlong *)(in_stack_00000010 + 0x7b30)) &&
     (*(longlong *)(lVar16 + 0x7a0) = *(longlong *)(in_stack_00000010 + 0x7b30), uVar13 = uVar22,
     uVar14 == 0)) {
    iVar10 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar16 + 0x7a8) != *(longlong *)(in_stack_00000010 + 0x7b38)) {
    *(longlong *)(lVar16 + 0x7a8) = *(longlong *)(in_stack_00000010 + 0x7b38);
    if (uVar13 == 0) {
      iVar10 = 3;
      uVar13 = 1;
    }
    else {
      uVar13 = 4 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7b0) != *(longlong *)(in_stack_00000010 + 0x7b40)) {
    *(longlong *)(lVar16 + 0x7b0) = *(longlong *)(in_stack_00000010 + 0x7b40);
    if (uVar13 == 0) {
      iVar10 = 4;
      uVar13 = 1;
    }
    else {
      uVar13 = 5 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7b8) != *(longlong *)(in_stack_00000010 + 0x7b48)) {
    *(longlong *)(lVar16 + 0x7b8) = *(longlong *)(in_stack_00000010 + 0x7b48);
    if (uVar13 == 0) {
      iVar10 = 5;
      uVar13 = 1;
    }
    else {
      uVar13 = 6 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7c0) != *(longlong *)(in_stack_00000010 + 0x7b50)) {
    *(longlong *)(lVar16 + 0x7c0) = *(longlong *)(in_stack_00000010 + 0x7b50);
    if (uVar13 == 0) {
      iVar10 = 6;
      uVar13 = 1;
    }
    else {
      uVar13 = 7 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7c8) != *(longlong *)(in_stack_00000010 + 0x7b58)) {
    *(longlong *)(lVar16 + 0x7c8) = *(longlong *)(in_stack_00000010 + 0x7b58);
    if (uVar13 == 0) {
      iVar10 = 7;
      uVar13 = 1;
    }
    else {
      uVar13 = 8 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 2000) != *(longlong *)(in_stack_00000010 + 0x7b60)) {
    *(longlong *)(lVar16 + 2000) = *(longlong *)(in_stack_00000010 + 0x7b60);
    if (uVar13 == 0) {
      iVar10 = 8;
      uVar13 = 1;
    }
    else {
      uVar13 = 9 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7d8) != *(longlong *)(in_stack_00000010 + 0x7b68)) {
    *(longlong *)(lVar16 + 0x7d8) = *(longlong *)(in_stack_00000010 + 0x7b68);
    if (uVar13 == 0) {
      iVar10 = 9;
      uVar13 = 1;
    }
    else {
      uVar13 = 10 - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7e0) != *(longlong *)(in_stack_00000010 + 0x7b70)) {
    *(longlong *)(lVar16 + 0x7e0) = *(longlong *)(in_stack_00000010 + 0x7b70);
    if (uVar13 == 0) {
      iVar10 = 10;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xb - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7e8) != *(longlong *)(in_stack_00000010 + 0x7b78)) {
    *(longlong *)(lVar16 + 0x7e8) = *(longlong *)(in_stack_00000010 + 0x7b78);
    if (uVar13 == 0) {
      iVar10 = 0xb;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xc - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7f0) != *(longlong *)(in_stack_00000010 + 0x7b80)) {
    *(longlong *)(lVar16 + 0x7f0) = *(longlong *)(in_stack_00000010 + 0x7b80);
    if (uVar13 == 0) {
      iVar10 = 0xc;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xd - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x7f8) != *(longlong *)(in_stack_00000010 + 0x7b88)) {
    *(longlong *)(lVar16 + 0x7f8) = *(longlong *)(in_stack_00000010 + 0x7b88);
    if (uVar13 == 0) {
      iVar10 = 0xd;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xe - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x800) != *(longlong *)(in_stack_00000010 + 0x7b90)) {
    *(longlong *)(lVar16 + 0x800) = *(longlong *)(in_stack_00000010 + 0x7b90);
    if (uVar13 == 0) {
      iVar10 = 0xe;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xf - iVar10;
    }
  }
  if (*(longlong *)(lVar16 + 0x808) == *(longlong *)(in_stack_00000010 + 0x7b98)) {
LAB_180136d80:
    if (uVar13 != 0) goto LAB_180136d84;
  }
  else {
    *(longlong *)(lVar16 + 0x808) = *(longlong *)(in_stack_00000010 + 0x7b98);
    if (uVar13 != 0) {
      uVar13 = 0x10 - iVar10;
      goto LAB_180136d80;
    }
    iVar10 = 0xf;
    uVar13 = 1;
LAB_180136d84:
    (*in_stack_00000020)(*(undefined8 *)(lVar16 + 0x6b8),iVar10,uVar13);
    (*extraout_x11)();
  }
  uVar14 = *(uint *)(in_stack_00000038 + 0x36bc);
  if (uVar14 == 0 && in_stack_00000048 == in_stack_00000018) goto LAB_1801370bc;
  in_stack_00000040 = uVar14 & 0xf;
  uVar14 = (uVar14 & 10) >> 1 | (uVar14 & 5) << 1;
  lVar16 = LZCOUNT((uVar14 >> 2 | (uVar14 & 0x33333333) << 2) << 0x1c);
  uVar14 = (uint)lVar16;
  if ((1 - (uVar14 >> 5) & 0xff) == 0) {
    uVar12 = FUN_180136fb8(0xfc88);
    return uVar12;
  }
  *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) =
       *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  plVar2 = (longlong *)(in_stack_00000018 + 0xfc88);
  in_stack_00000138 = uVar25;
  while( true ) {
    lVar9 = in_stack_00000018 + lVar16 * 8;
    if (*(uint *)(lVar9 + 0x81c) < (uint)*(byte *)(lVar9 + 0x81b)) {
      fVar26 = (float)*(byte *)(lVar9 + 0x81b);
    }
    else {
      fVar26 = (float)*(uint *)(lVar9 + 0x81c);
    }
    lVar24 = in_stack_00000018 + lVar16 * 0x34;
    *(float *)(lVar24 + 0x86c) = fVar26;
    bVar5 = *(byte *)(lVar9 + 0x819);
    bVar6 = *(byte *)(lVar9 + 0x81a);
    bVar7 = *(byte *)(lVar9 + 0x818);
    *(undefined4 *)(lVar24 + 0x870) = 0x7f7fffff;
    if (bVar5 == 2 || bVar6 == 2) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)
                (&DAT_18022c130 +
                ((ulonglong)bVar7 | ((ulonglong)(uint)bVar5 | (ulonglong)(uint)bVar6 << 1) << 1) * 4
                );
    }
    *(undefined4 *)(lVar24 + 0x840) = uVar18;
    puVar11 = (undefined8 *)(in_stack_00000018 + 0x100e0 + lVar16 * 0x34);
    puVar17 = (undefined8 *)(in_stack_00000018 + 0x840 + lVar16 * 0x34);
    uVar25 = *puVar17;
    uVar28 = puVar17[3];
    uVar27 = puVar17[2];
    puVar11[1] = puVar17[1];
    *puVar11 = uVar25;
    puVar11[3] = uVar28;
    puVar11[2] = uVar27;
    uVar25 = puVar17[4];
    uVar18 = *(undefined4 *)(puVar17 + 6);
    puVar11[5] = puVar17[5];
    puVar11[4] = uVar25;
    *(undefined4 *)(puVar11 + 6) = uVar18;
    lVar9 = FUN_180200a68(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
    if (lVar9 != plVar2[lVar16]) {
      FUN_180200e40(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
      plVar2[lVar16] = lVar9;
    }
    uVar14 = (in_stack_00000040 & 0xaaaaaaaa) >> 1 | (in_stack_00000040 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    lVar16 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)lVar16;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  }
  lVar16 = (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0 +
           *(longlong *)(in_stack_00000018 + 0xf6d0);
  bVar8 = *(longlong *)(lVar16 + 0x710) != *plVar2;
  if (bVar8) {
    *(longlong *)(lVar16 + 0x710) = *plVar2;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar16 + 0x718) == *(longlong *)(in_stack_00000010 + 0x7c90)) {
LAB_18013701c:
    uVar22 = 3;
    iVar10 = 0;
  }
  else {
    *(longlong *)(lVar16 + 0x718) = *(longlong *)(in_stack_00000010 + 0x7c90);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_18013701c;
    }
    iVar10 = 1;
    uVar14 = 1;
    uVar22 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar16 + 0x720) != *(longlong *)(in_stack_00000010 + 0x7c98)) &&
     (*(longlong *)(lVar16 + 0x720) = *(longlong *)(in_stack_00000010 + 0x7c98), uVar13 = uVar22,
     uVar14 == 0)) {
    iVar10 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar16 + 0x728) == *(longlong *)(in_stack_00000010 + 0x7ca0)) {
LAB_180137080:
    if (uVar13 != 0) goto LAB_180137084;
  }
  else {
    *(longlong *)(lVar16 + 0x728) = *(longlong *)(in_stack_00000010 + 0x7ca0);
    if (uVar13 != 0) {
      uVar13 = 4 - iVar10;
      goto LAB_180137080;
    }
    iVar10 = 3;
    uVar13 = 1;
LAB_180137084:
    (*in_stack_00000020)(*(undefined8 *)(lVar16 + 0x6b8),iVar10,uVar13);
    (*extraout_x11_00)();
  }
  *(undefined4 *)(in_stack_00000038 + 0x36bc) = 0;
LAB_1801370bc:
  if (*(char *)(in_stack_00000028 + 0x68f) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar3 = in_stack_00000018 + 0xfcd8;
    uVar12 = 0;
    iVar10 = 0;
    lVar21 = 0;
    lVar23 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    uVar20 = 0;
    lVar16 = lVar23 + 0xaf0;
    lVar9 = lVar23 + 0xb30;
    lVar24 = lVar23 + 0xa70;
    do {
      lVar15 = *(longlong *)(lVar3 + lVar21 * 8);
      iVar19 = (int)uVar20;
      if (((*(longlong *)(lVar24 + lVar21 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + lVar21 * 4,
          *(int *)(lVar16 + lVar21 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar9 + lVar21 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + lVar21 * 4;
        *(longlong *)(lVar24 + lVar21 * 8) = lVar15;
        *(undefined4 *)(lVar16 + lVar21 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar9 + lVar21 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar20;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 1;
        }
      }
      uVar14 = iVar19 + 1;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar16 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar14 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        lVar15 = lVar23 + (ulonglong)uVar14 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 2;
        }
      }
      uVar14 = iVar19 + 2;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar23 + (ulonglong)uVar14 * 4 + 0xaf0) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar23 + (ulonglong)uVar14 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 3;
        }
      }
      uVar14 = iVar19 + 3;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar16 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar14 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar16 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + (ulonglong)uVar14 * 4 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 4;
        }
      }
      uVar14 = iVar19 + 4;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar16 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar23 + (ulonglong)uVar14 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 5;
        }
      }
      uVar14 = iVar19 + 5;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) == lVar15) {
        lVar4 = lVar23 + (ulonglong)uVar14 * 4;
        lVar1 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        if ((*(int *)(lVar4 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar4 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_180137368;
      }
      else {
LAB_180137368:
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        lVar15 = lVar23 + (ulonglong)uVar14 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 6;
        }
      }
      uVar14 = iVar19 + 6;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar14 * 8);
      if (((*(longlong *)(lVar24 + (ulonglong)uVar14 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4,
          *(int *)(lVar16 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar14 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar14 * 4;
        *(longlong *)(lVar24 + (ulonglong)uVar14 * 8) = lVar15;
        *(undefined4 *)(lVar16 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar14;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 7;
        }
      }
      uVar20 = (ulonglong)(iVar19 + 7);
      lVar15 = *(longlong *)(lVar3 + uVar20 * 8);
      if (((*(longlong *)(lVar24 + uVar20 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + uVar20 * 4,
          *(int *)(lVar16 + uVar20 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + uVar20 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + uVar20 * 4;
        *(longlong *)(lVar24 + uVar20 * 8) = lVar15;
        lVar15 = lVar23 + uVar20 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar20;
        }
        else {
          iVar10 = (iVar19 - (int)uVar12) + 8;
        }
      }
      uVar20 = (ulonglong)(iVar19 + 8U);
      lVar21 = lVar21 + 8;
    } while (iVar19 + 8U < 0x10);
    if (iVar10 != 0) {
      (*in_stack_00000020)();
      (*extraout_x11_01)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x68f) = 0;
  }
  if (*(char *)(in_stack_00000028 + 0x690) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar16 = *(longlong *)(in_stack_00000010 + 0x7d58);
    if (lVar16 == *(longlong *)(in_stack_00000010 + 0x7710)) {
      iVar10 = 0x2a;
    }
    else {
      iVar10 = *(int *)(in_stack_00000038 + 0x3d70);
    }
    lVar9 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
            (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    if (((lVar16 != *(longlong *)(lVar9 + 0xb70)) || (iVar10 != *(int *)(lVar9 + 0xb78))) ||
       (*(int *)(lVar9 + 0xb7c) != 0)) {
      *(longlong *)(lVar9 + 0xb70) = lVar16;
      *(int *)(lVar9 + 0xb78) = iVar10;
      *(undefined4 *)(lVar9 + 0xb7c) = 0;
      (*in_stack_00000020)();
      (*extraout_x11_02)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x690) = 0;
  }
  lVar16 = *(longlong *)(in_stack_00000018 + 0xf9b0);
  if (lVar16 != 0) {
    in_stack_00000058 = 0;
    uVar14 = *(uint *)(in_stack_00000038 + 0x39d8);
    in_stack_00000060 = *(uint *)(lVar16 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar16 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar16,uVar14 + *(int *)(lVar16 + 0x3c) *
                                         *(int *)(in_stack_00000038 + 0x39e8));
    (*extraout_x11_03)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar16 = *(longlong *)(in_stack_00000018 + 0xf9b8);
  if (lVar16 != 0) {
    in_stack_00000058 = 0;
    uVar14 = *(uint *)(in_stack_00000038 + 0x39dc);
    in_stack_00000060 = *(uint *)(lVar16 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar16 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar16,uVar14 + *(int *)(lVar16 + 0x3c) *
                                         *(int *)(in_stack_00000038 + 0x39ec));
    (*extraout_x11_04)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar16 = *(longlong *)(in_stack_00000018 + 0xf9c0);
  if (lVar16 != 0) {
    in_stack_00000058 = 0;
    uVar14 = *(uint *)(in_stack_00000038 + 0x39e0);
    in_stack_00000060 = *(uint *)(lVar16 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar16 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar16,uVar14 + *(int *)(lVar16 + 0x3c) *
                                         *(int *)(in_stack_00000038 + 0x39f0));
    (*extraout_x11_05)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar16 = *(longlong *)(in_stack_00000018 + 0xf9c8);
  if (lVar16 != 0) {
    in_stack_00000058 = 0;
    uVar14 = *(uint *)(in_stack_00000038 + 0x39e4);
    in_stack_00000060 = *(uint *)(lVar16 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar16 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar29 = (*in_stack_00000020)
                        (lVar16,uVar14 + *(int *)(lVar16 + 0x3c) *
                                         *(int *)(in_stack_00000038 + 0x39f4));
    (*extraout_x11_06)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
  }
  lVar16 = 0xbb4;
  if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
    lVar16 = 0x7b0;
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9d0);
  if ((lVar9 != 0) && (*(int *)(in_stack_00000018 + lVar16) != 0)) {
    lVar16 = 3000;
    if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
      lVar16 = 0x7b4;
    }
    if (*(int *)(in_stack_00000018 + lVar16) != 0) {
      uVar14 = *(uint *)(in_stack_00000038 + 0x39f8);
      in_stack_00000058 = 0;
      in_stack_00000060 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
      if (in_stack_00000060 == 0) {
        in_stack_00000060 = 1;
      }
      uStack0000000000000064 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(uVar14 & 0x1f);
      if (uStack0000000000000064 == 0) {
        uStack0000000000000064 = 1;
      }
      auVar29 = (*in_stack_00000020)
                          (lVar9,uVar14 + *(int *)(in_stack_00000038 + 0x39fc) *
                                          *(int *)(lVar9 + 0x3c));
      (*extraout_x11_07)(auVar29._0_8_,auVar29._8_8_,&stack0x00000058);
    }
  }
  return (ulonglong)in_stack_00000030;
}

