/*
 * FUN_18002979c at 18002979c
 * undefined FUN_18002979c(void)
 * Address ranges: 18002979c-180029943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002979c(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong unaff_x19;
  uint unaff_w20;
  longlong unaff_x21;
  longlong unaff_x22;
  ulonglong unaff_x23;
  longlong unaff_x24;
  longlong unaff_x25;
  longlong *unaff_x26;
  longlong unaff_x27;
  longlong unaff_x28;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uStack0000000000000010;
  longlong in_stack_00000018;
  uint in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000054;
  
  uStack0000000000000010 = unaff_w20;
  do {
    lVar9 = unaff_x19 + (unaff_x23 & 0xffffffff) * 8;
    if (*(uint *)(lVar9 + 0x734) < (uint)*(byte *)(lVar9 + 0x733)) {
      fVar24 = (float)*(byte *)(lVar9 + 0x733);
    }
    else {
      fVar24 = (float)*(uint *)(lVar9 + 0x734);
    }
    lVar22 = (unaff_x23 & 0xffffffff) * 0x34;
    lVar11 = unaff_x19 + lVar22;
    *(float *)(lVar11 + 0xdc) = fVar24;
    bVar5 = *(byte *)(lVar9 + 0x731);
    bVar6 = *(byte *)(lVar9 + 0x732);
    uVar19 = (ulonglong)bVar6;
    uVar14 = (uint)*(byte *)(lVar9 + 0x730);
    bVar8 = uVar14 == 2;
    if (bVar8) {
      uVar14 = 0;
    }
    if (!bVar8) {
      fVar24 = 3.4028235e+38;
    }
    uVar17 = (uint)bVar6;
    *(float *)(lVar11 + 0xe0) = fVar24;
    *(float *)(lVar11 + 0x420) = fVar24;
    if (bVar5 == 2 || uVar17 == 2) {
      *(undefined4 *)(lVar11 + 0xb0) = 0x55;
      if (bVar5 != 2 && bVar6 != 2) goto LAB_18002985c;
      uVar18 = 0xd5;
    }
    else {
      uVar19 = (ulonglong)uVar17;
      *(undefined4 *)(lVar11 + 0xb0) =
           *(undefined4 *)
            (&DAT_1802310b0 +
            ((ulonglong)uVar14 | ((ulonglong)(uint)bVar5 | (ulonglong)uVar17 << 1) << 1) * 4);
LAB_18002985c:
      uVar18 = *(undefined4 *)
                (&DAT_1802310d0 + ((ulonglong)uVar14 | ((ulonglong)bVar5 | uVar19 << 1) << 1) * 4);
    }
    *(undefined4 *)(unaff_x28 + lVar22) = uVar18;
    puVar12 = (undefined8 *)(lVar22 + unaff_x25);
    lVar9 = 0x3f0;
    if (1 < (*(int *)(unaff_x27 + (unaff_x23 & 0xffffffff) * 4) + 0xfbU & 0xff)) {
      lVar9 = 0xb0;
    }
    puVar20 = (undefined8 *)(lVar11 + lVar9);
    uVar27 = *puVar20;
    uVar26 = puVar20[3];
    uVar25 = puVar20[2];
    puVar12[1] = puVar20[1];
    *puVar12 = uVar27;
    puVar12[3] = uVar26;
    puVar12[2] = uVar25;
    uVar25 = puVar20[4];
    puVar12[5] = puVar20[5];
    puVar12[4] = uVar25;
    *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar20 + 6);
    lVar9 = FUN_1800e3830(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
    if (lVar9 != unaff_x26[unaff_x23 & 0xffffffff]) {
      FUN_1800e3bf8(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
      unaff_x26[unaff_x23 & 0xffffffff] = lVar9;
    }
    iVar15 = (int)(uint)unaff_x23 >> 3;
    *(byte *)(unaff_x22 + iVar15) =
         *(byte *)(unaff_x22 + iVar15) & ((byte)(1 << (ulonglong)((uint)unaff_x23 & 7)) ^ 0xff);
    uVar14 = (in_stack_00000020 & 0xaaaaaaaa) >> 1 | (in_stack_00000020 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    unaff_x23 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)unaff_x23;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  } while( true );
  lVar9 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  bVar8 = *(longlong *)(lVar9 + 0x790) != *unaff_x26;
  if (bVar8) {
    *(longlong *)(lVar9 + 0x790) = *unaff_x26;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar9 + 0x798) == *(longlong *)(unaff_x24 + 0x7b28)) {
LAB_1800299b8:
    uVar17 = 3;
    lVar11 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x798) = *(longlong *)(unaff_x24 + 0x7b28);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_1800299b8;
    }
    lVar11 = 1;
    uVar14 = 1;
    uVar17 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar9 + 0x7a0) != *(longlong *)(unaff_x24 + 0x7b30)) &&
     (*(longlong *)(lVar9 + 0x7a0) = *(longlong *)(unaff_x24 + 0x7b30), uVar13 = uVar17, uVar14 == 0
     )) {
    lVar11 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar9 + 0x7a8) != *(longlong *)(unaff_x24 + 0x7b38)) {
    *(longlong *)(lVar9 + 0x7a8) = *(longlong *)(unaff_x24 + 0x7b38);
    if (uVar13 == 0) {
      lVar11 = 3;
      uVar13 = 1;
    }
    else {
      uVar13 = 4 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7b0) != *(longlong *)(unaff_x24 + 0x7b40)) {
    *(longlong *)(lVar9 + 0x7b0) = *(longlong *)(unaff_x24 + 0x7b40);
    if (uVar13 == 0) {
      lVar11 = 4;
      uVar13 = 1;
    }
    else {
      uVar13 = 5 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7b8) != *(longlong *)(unaff_x24 + 0x7b48)) {
    *(longlong *)(lVar9 + 0x7b8) = *(longlong *)(unaff_x24 + 0x7b48);
    if (uVar13 == 0) {
      lVar11 = 5;
      uVar13 = 1;
    }
    else {
      uVar13 = 6 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7c0) != *(longlong *)(unaff_x24 + 0x7b50)) {
    *(longlong *)(lVar9 + 0x7c0) = *(longlong *)(unaff_x24 + 0x7b50);
    if (uVar13 == 0) {
      lVar11 = 6;
      uVar13 = 1;
    }
    else {
      uVar13 = 7 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7c8) != *(longlong *)(unaff_x24 + 0x7b58)) {
    *(longlong *)(lVar9 + 0x7c8) = *(longlong *)(unaff_x24 + 0x7b58);
    if (uVar13 == 0) {
      lVar11 = 7;
      uVar13 = 1;
    }
    else {
      uVar13 = 8 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 2000) != *(longlong *)(unaff_x24 + 0x7b60)) {
    *(longlong *)(lVar9 + 2000) = *(longlong *)(unaff_x24 + 0x7b60);
    if (uVar13 == 0) {
      lVar11 = 8;
      uVar13 = 1;
    }
    else {
      uVar13 = 9 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7d8) != *(longlong *)(unaff_x24 + 0x7b68)) {
    *(longlong *)(lVar9 + 0x7d8) = *(longlong *)(unaff_x24 + 0x7b68);
    if (uVar13 == 0) {
      lVar11 = 9;
      uVar13 = 1;
    }
    else {
      uVar13 = 10 - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7e0) != *(longlong *)(unaff_x24 + 0x7b70)) {
    *(longlong *)(lVar9 + 0x7e0) = *(longlong *)(unaff_x24 + 0x7b70);
    if (uVar13 == 0) {
      lVar11 = 10;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xb - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7e8) != *(longlong *)(unaff_x24 + 0x7b78)) {
    *(longlong *)(lVar9 + 0x7e8) = *(longlong *)(unaff_x24 + 0x7b78);
    if (uVar13 == 0) {
      lVar11 = 0xb;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xc - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7f0) != *(longlong *)(unaff_x24 + 0x7b80)) {
    *(longlong *)(lVar9 + 0x7f0) = *(longlong *)(unaff_x24 + 0x7b80);
    if (uVar13 == 0) {
      lVar11 = 0xc;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xd - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x7f8) != *(longlong *)(unaff_x24 + 0x7b88)) {
    *(longlong *)(lVar9 + 0x7f8) = *(longlong *)(unaff_x24 + 0x7b88);
    if (uVar13 == 0) {
      lVar11 = 0xd;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xe - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x800) != *(longlong *)(unaff_x24 + 0x7b90)) {
    *(longlong *)(lVar9 + 0x800) = *(longlong *)(unaff_x24 + 0x7b90);
    if (uVar13 == 0) {
      lVar11 = 0xe;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xf - (int)lVar11;
    }
  }
  if (*(longlong *)(lVar9 + 0x808) == *(longlong *)(unaff_x24 + 0x7b98)) {
LAB_180029c24:
    if (uVar13 != 0) goto LAB_180029c28;
  }
  else {
    *(longlong *)(lVar9 + 0x808) = *(longlong *)(unaff_x24 + 0x7b98);
    if (uVar13 != 0) {
      uVar13 = 0x10 - (int)lVar11;
      goto LAB_180029c24;
    }
    lVar11 = 0xf;
    uVar13 = 1;
LAB_180029c28:
    (**(code **)(**(longlong **)(lVar9 + 0x6b8) + 0x50))
              (*(longlong **)(lVar9 + 0x6b8),lVar11,uVar13,lVar9 + lVar11 * 8 + 0x790);
  }
  uVar14 = *(uint *)(in_stack_00000018 + 0x36bc);
  uVar17 = uStack0000000000000010;
  if (uVar14 == 0 && in_stack_00000028 == unaff_x19) goto LAB_180029f1c;
  in_stack_00000020 = uVar14 & 0xf;
  uVar14 = (uVar14 & 10) >> 1 | (uVar14 & 5) << 1;
  lVar9 = LZCOUNT((uVar14 >> 2 | (uVar14 & 0x33333333) << 2) << 0x1c);
  uVar14 = (uint)lVar9;
  if ((1 - (uVar14 >> 5) & 0xff) == 0) {
    uVar19 = FUN_180029e34(0xfc88);
    return uVar19;
  }
  *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) =
       *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  plVar10 = (longlong *)(unaff_x19 + 0xfc88);
  while( true ) {
    lVar11 = unaff_x19 + lVar9 * 8;
    if (*(uint *)(lVar11 + 0x81c) < (uint)*(byte *)(lVar11 + 0x81b)) {
      fVar24 = (float)*(byte *)(lVar11 + 0x81b);
    }
    else {
      fVar24 = (float)*(uint *)(lVar11 + 0x81c);
    }
    lVar22 = unaff_x19 + lVar9 * 0x34;
    *(float *)(lVar22 + 0x86c) = fVar24;
    bVar5 = *(byte *)(lVar11 + 0x819);
    bVar6 = *(byte *)(lVar11 + 0x81a);
    bVar7 = *(byte *)(lVar11 + 0x818);
    *(undefined4 *)(lVar22 + 0x870) = 0x7f7fffff;
    if (bVar5 == 2 || bVar6 == 2) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)
                (&DAT_1802310b0 +
                ((ulonglong)bVar7 | ((ulonglong)(uint)bVar5 | (ulonglong)(uint)bVar6 << 1) << 1) * 4
                );
    }
    puVar12 = (undefined8 *)(unaff_x19 + 0x100e0 + lVar9 * 0x34);
    *(undefined4 *)(lVar22 + 0x840) = uVar18;
    puVar20 = (undefined8 *)(unaff_x19 + 0x840 + lVar9 * 0x34);
    uVar27 = *puVar20;
    uVar26 = puVar20[3];
    uVar25 = puVar20[2];
    puVar12[1] = puVar20[1];
    *puVar12 = uVar27;
    puVar12[3] = uVar26;
    puVar12[2] = uVar25;
    uVar25 = puVar20[4];
    uVar18 = *(undefined4 *)(puVar20 + 6);
    puVar12[5] = puVar20[5];
    puVar12[4] = uVar25;
    *(undefined4 *)(puVar12 + 6) = uVar18;
    lVar11 = FUN_1800e3830(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
    if (lVar11 != plVar10[lVar9]) {
      FUN_1800e3bf8(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
      plVar10[lVar9] = lVar11;
    }
    uVar14 = (in_stack_00000020 & 0xaaaaaaaa) >> 1 | (in_stack_00000020 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)lVar9;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  }
  uVar19 = (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  lVar11 = *(longlong *)(unaff_x19 + 0xf6d0);
  lVar9 = uVar19 + lVar11;
  bVar8 = *(longlong *)(lVar9 + 0x710) != *plVar10;
  if (bVar8) {
    *(longlong *)(lVar9 + 0x710) = *plVar10;
  }
  uVar14 = (uint)bVar8;
  if (*(longlong *)(lVar9 + 0x718) == *(longlong *)(unaff_x24 + 0x7c90)) {
LAB_180029e94:
    uVar17 = 3;
    lVar22 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x718) = *(longlong *)(unaff_x24 + 0x7c90);
    if (bVar8) {
      uVar14 = 2;
      goto LAB_180029e94;
    }
    lVar22 = 1;
    uVar14 = 1;
    uVar17 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar9 + 0x720) != *(longlong *)(unaff_x24 + 0x7c98)) &&
     (*(longlong *)(lVar9 + 0x720) = *(longlong *)(unaff_x24 + 0x7c98), uVar13 = uVar17, uVar14 == 0
     )) {
    lVar22 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar9 + 0x728) == *(longlong *)(unaff_x24 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar13 != 0) goto LAB_180029ef4;
  }
  else {
    *(longlong *)(lVar9 + 0x728) = *(longlong *)(unaff_x24 + 0x7ca0);
    if (uVar13 != 0) {
      uVar13 = 4 - (int)lVar22;
      goto LAB_180029ef0;
    }
    lVar22 = 3;
    uVar13 = 1;
LAB_180029ef4:
    (**(code **)(**(longlong **)(lVar9 + 0x6b8) + 0xd0))
              (*(longlong **)(lVar9 + 0x6b8),lVar22,uVar13,(uVar19 | lVar22 << 3) + lVar11 + 0x710);
  }
  *(undefined4 *)(in_stack_00000018 + 0x36bc) = 0;
  uVar17 = uStack0000000000000010;
LAB_180029f1c:
  if (*(char *)(unaff_x21 + 0x68f) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar3 = unaff_x19 + 0xfcd8;
    uVar13 = 0;
    iVar15 = 0;
    lVar23 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    uVar14 = 0;
    lVar21 = 0;
    lVar9 = lVar23 + 0xaf0;
    lVar11 = lVar23 + 0xb30;
    lVar22 = lVar23 + 0xa70;
    do {
      lVar16 = *(longlong *)(lVar3 + lVar21 * 8);
      if (((*(longlong *)(lVar22 + lVar21 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + lVar21 * 4, *(int *)(lVar9 + lVar21 * 4) != *(int *)(lVar4 + 0xfe8)))
         || (*(int *)(lVar11 + lVar21 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + lVar21 * 4;
        *(longlong *)(lVar22 + lVar21 * 8) = lVar16;
        *(undefined4 *)(lVar9 + lVar21 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + lVar21 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar14;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 1;
        }
      }
      uVar2 = uVar14 + 1;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar9 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar2 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        lVar16 = lVar23 + (ulonglong)uVar2 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 2;
        }
      }
      uVar2 = uVar14 + 2;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar23 + (ulonglong)uVar2 * 4 + 0xaf0) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar11 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        *(undefined4 *)(lVar23 + (ulonglong)uVar2 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + (ulonglong)uVar2 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 3;
        }
      }
      uVar2 = uVar14 + 3;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar9 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar2 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        *(undefined4 *)(lVar9 + (ulonglong)uVar2 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + (ulonglong)uVar2 * 4 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 4;
        }
      }
      uVar2 = uVar14 + 4;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar9 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar11 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        *(undefined4 *)(lVar23 + (ulonglong)uVar2 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + (ulonglong)uVar2 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 5;
        }
      }
      uVar2 = uVar14 + 5;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) == lVar16) {
        lVar4 = lVar23 + (ulonglong)uVar2 * 4;
        lVar1 = unaff_x19 + (ulonglong)uVar2 * 4;
        if ((*(int *)(lVar4 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar4 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        lVar16 = lVar23 + (ulonglong)uVar2 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 6;
        }
      }
      uVar2 = uVar14 + 6;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar9 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar11 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        *(undefined4 *)(lVar9 + (ulonglong)uVar2 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + (ulonglong)uVar2 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 7;
        }
      }
      uVar2 = uVar14 + 7;
      lVar16 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
      if (((*(longlong *)(lVar22 + (ulonglong)uVar2 * 8) != lVar16) ||
          (lVar4 = unaff_x19 + (ulonglong)uVar2 * 4,
          *(int *)(lVar9 + (ulonglong)uVar2 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar2 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = unaff_x19 + (ulonglong)uVar2 * 4;
        *(longlong *)(lVar22 + (ulonglong)uVar2 * 8) = lVar16;
        lVar16 = lVar23 + (ulonglong)uVar2 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar13 = uVar2;
        }
        else {
          iVar15 = (uVar14 - uVar13) + 8;
        }
      }
      uVar14 = uVar14 + 8;
      lVar21 = lVar21 + 8;
    } while (uVar14 < 0x10);
    if (iVar15 != 0) {
      (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(unaff_x21 + 0x68f) = 0;
  }
  if (*(char *)(unaff_x21 + 0x690) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar9 = *(longlong *)(unaff_x24 + 0x7d58);
    if (lVar9 == *(longlong *)(unaff_x24 + 0x7710)) {
      iVar15 = 0x2a;
    }
    else {
      iVar15 = *(int *)(in_stack_00000018 + 0x3d70);
    }
    lVar11 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    if (((lVar9 != *(longlong *)(lVar11 + 0xb70)) || (iVar15 != *(int *)(lVar11 + 0xb78))) ||
       (*(int *)(lVar11 + 0xb7c) != 0)) {
      *(longlong *)(lVar11 + 0xb70) = lVar9;
      *(int *)(lVar11 + 0xb78) = iVar15;
      *(undefined4 *)(lVar11 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar11 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(unaff_x21 + 0x690) = 0;
  }
  plVar10 = *(longlong **)(unaff_x19 + 0xf9b0);
  if (plVar10 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39d8);
    in_stack_00000050 = *(uint *)((longlong)plVar10 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar10 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar10 + 0x18))
              (plVar10,uVar14 + *(int *)((longlong)plVar10 + 0x3c) *
                                *(int *)(in_stack_00000018 + 0x39e8),&stack0x00000048);
  }
  plVar10 = *(longlong **)(unaff_x19 + 0xf9b8);
  if (plVar10 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39dc);
    in_stack_00000050 = *(uint *)((longlong)plVar10 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar10 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar10 + 0x18))
              (plVar10,uVar14 + *(int *)((longlong)plVar10 + 0x3c) *
                                *(int *)(in_stack_00000018 + 0x39ec),&stack0x00000048);
  }
  plVar10 = *(longlong **)(unaff_x19 + 0xf9c0);
  if (plVar10 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39e0);
    in_stack_00000050 = *(uint *)((longlong)plVar10 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar10 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar10 + 0x18))
              (plVar10,uVar14 + *(int *)((longlong)plVar10 + 0x3c) *
                                *(int *)(in_stack_00000018 + 0x39f0),&stack0x00000048);
  }
  plVar10 = *(longlong **)(unaff_x19 + 0xf9c8);
  if (plVar10 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39e4);
    in_stack_00000050 = *(uint *)((longlong)plVar10 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar10 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar10 + 0x18))
              (plVar10,uVar14 + *(int *)((longlong)plVar10 + 0x3c) *
                                *(int *)(in_stack_00000018 + 0x39f4),&stack0x00000048);
  }
  lVar9 = 0xbb4;
  if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
    lVar9 = 0x7b0;
  }
  plVar10 = *(longlong **)(unaff_x19 + 0xf9d0);
  if ((plVar10 != (longlong *)0x0) && (*(int *)(unaff_x19 + lVar9) != 0)) {
    lVar9 = 3000;
    if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
      lVar9 = 0x7b4;
    }
    if (*(int *)(unaff_x19 + lVar9) != 0) {
      uVar14 = *(uint *)(in_stack_00000018 + 0x39f8);
      in_stack_00000048 = 0;
      in_stack_00000050 = *(uint *)((longlong)plVar10 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
      if (in_stack_00000050 == 0) {
        in_stack_00000050 = 1;
      }
      uStack0000000000000054 = *(uint *)(plVar10 + 5) >> (ulonglong)(uVar14 & 0x1f);
      if (uStack0000000000000054 == 0) {
        uStack0000000000000054 = 1;
      }
      (**(code **)(*plVar10 + 0x18))
                (plVar10,uVar14 + *(int *)(in_stack_00000018 + 0x39fc) *
                                  *(int *)((longlong)plVar10 + 0x3c),&stack0x00000048);
    }
  }
  return (ulonglong)uVar17;
}

