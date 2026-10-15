/*
 * FUN_18002995c at 18002995c
 * undefined FUN_18002995c(void)
 * Address ranges: 18002995c-180029c43;180029ca4-180029d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002995c(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong unaff_x19;
  uint unaff_w20;
  longlong unaff_x21;
  longlong unaff_x24;
  longlong *unaff_x26;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong in_stack_00000018;
  uint in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000054;
  
  lVar15 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  bVar7 = *(longlong *)(lVar15 + 0x790) != *unaff_x26;
  if (bVar7) {
    *(longlong *)(lVar15 + 0x790) = *unaff_x26;
  }
  uVar12 = (uint)bVar7;
  if (*(longlong *)(lVar15 + 0x798) == *(longlong *)(unaff_x24 + 0x7b28)) {
LAB_1800299b8:
    uVar19 = 3;
    lVar9 = 0;
  }
  else {
    *(longlong *)(lVar15 + 0x798) = *(longlong *)(unaff_x24 + 0x7b28);
    if (bVar7) {
      uVar12 = 2;
      goto LAB_1800299b8;
    }
    lVar9 = 1;
    uVar12 = 1;
    uVar19 = 2;
  }
  uVar11 = uVar12;
  if ((*(longlong *)(lVar15 + 0x7a0) != *(longlong *)(unaff_x24 + 0x7b30)) &&
     (*(longlong *)(lVar15 + 0x7a0) = *(longlong *)(unaff_x24 + 0x7b30), uVar11 = uVar19,
     uVar12 == 0)) {
    lVar9 = 2;
    uVar11 = 1;
  }
  if (*(longlong *)(lVar15 + 0x7a8) != *(longlong *)(unaff_x24 + 0x7b38)) {
    *(longlong *)(lVar15 + 0x7a8) = *(longlong *)(unaff_x24 + 0x7b38);
    if (uVar11 == 0) {
      lVar9 = 3;
      uVar11 = 1;
    }
    else {
      uVar11 = 4 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7b0) != *(longlong *)(unaff_x24 + 0x7b40)) {
    *(longlong *)(lVar15 + 0x7b0) = *(longlong *)(unaff_x24 + 0x7b40);
    if (uVar11 == 0) {
      lVar9 = 4;
      uVar11 = 1;
    }
    else {
      uVar11 = 5 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7b8) != *(longlong *)(unaff_x24 + 0x7b48)) {
    *(longlong *)(lVar15 + 0x7b8) = *(longlong *)(unaff_x24 + 0x7b48);
    if (uVar11 == 0) {
      lVar9 = 5;
      uVar11 = 1;
    }
    else {
      uVar11 = 6 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7c0) != *(longlong *)(unaff_x24 + 0x7b50)) {
    *(longlong *)(lVar15 + 0x7c0) = *(longlong *)(unaff_x24 + 0x7b50);
    if (uVar11 == 0) {
      lVar9 = 6;
      uVar11 = 1;
    }
    else {
      uVar11 = 7 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7c8) != *(longlong *)(unaff_x24 + 0x7b58)) {
    *(longlong *)(lVar15 + 0x7c8) = *(longlong *)(unaff_x24 + 0x7b58);
    if (uVar11 == 0) {
      lVar9 = 7;
      uVar11 = 1;
    }
    else {
      uVar11 = 8 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 2000) != *(longlong *)(unaff_x24 + 0x7b60)) {
    *(longlong *)(lVar15 + 2000) = *(longlong *)(unaff_x24 + 0x7b60);
    if (uVar11 == 0) {
      lVar9 = 8;
      uVar11 = 1;
    }
    else {
      uVar11 = 9 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7d8) != *(longlong *)(unaff_x24 + 0x7b68)) {
    *(longlong *)(lVar15 + 0x7d8) = *(longlong *)(unaff_x24 + 0x7b68);
    if (uVar11 == 0) {
      lVar9 = 9;
      uVar11 = 1;
    }
    else {
      uVar11 = 10 - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7e0) != *(longlong *)(unaff_x24 + 0x7b70)) {
    *(longlong *)(lVar15 + 0x7e0) = *(longlong *)(unaff_x24 + 0x7b70);
    if (uVar11 == 0) {
      lVar9 = 10;
      uVar11 = 1;
    }
    else {
      uVar11 = 0xb - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7e8) != *(longlong *)(unaff_x24 + 0x7b78)) {
    *(longlong *)(lVar15 + 0x7e8) = *(longlong *)(unaff_x24 + 0x7b78);
    if (uVar11 == 0) {
      lVar9 = 0xb;
      uVar11 = 1;
    }
    else {
      uVar11 = 0xc - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7f0) != *(longlong *)(unaff_x24 + 0x7b80)) {
    *(longlong *)(lVar15 + 0x7f0) = *(longlong *)(unaff_x24 + 0x7b80);
    if (uVar11 == 0) {
      lVar9 = 0xc;
      uVar11 = 1;
    }
    else {
      uVar11 = 0xd - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x7f8) != *(longlong *)(unaff_x24 + 0x7b88)) {
    *(longlong *)(lVar15 + 0x7f8) = *(longlong *)(unaff_x24 + 0x7b88);
    if (uVar11 == 0) {
      lVar9 = 0xd;
      uVar11 = 1;
    }
    else {
      uVar11 = 0xe - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x800) != *(longlong *)(unaff_x24 + 0x7b90)) {
    *(longlong *)(lVar15 + 0x800) = *(longlong *)(unaff_x24 + 0x7b90);
    if (uVar11 == 0) {
      lVar9 = 0xe;
      uVar11 = 1;
    }
    else {
      uVar11 = 0xf - (int)lVar9;
    }
  }
  if (*(longlong *)(lVar15 + 0x808) == *(longlong *)(unaff_x24 + 0x7b98)) {
LAB_180029c24:
    if (uVar11 != 0) goto LAB_180029c28;
  }
  else {
    *(longlong *)(lVar15 + 0x808) = *(longlong *)(unaff_x24 + 0x7b98);
    if (uVar11 != 0) {
      uVar11 = 0x10 - (int)lVar9;
      goto LAB_180029c24;
    }
    lVar9 = 0xf;
    uVar11 = 1;
LAB_180029c28:
    (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x50))
              (*(longlong **)(lVar15 + 0x6b8),lVar9,uVar11,lVar15 + lVar9 * 8 + 0x790);
  }
  uVar12 = *(uint *)(in_stack_00000018 + 0x36bc);
  if (uVar12 == 0 && in_stack_00000028 == unaff_x19) goto LAB_180029f1c;
  in_stack_00000020 = uVar12 & 0xf;
  uVar12 = (uVar12 & 10) >> 1 | (uVar12 & 5) << 1;
  lVar15 = LZCOUNT((uVar12 >> 2 | (uVar12 & 0x33333333) << 2) << 0x1c);
  uVar12 = (uint)lVar15;
  if ((1 - (uVar12 >> 5) & 0xff) == 0) {
    uVar22 = FUN_180029e34(0xfc88);
    return uVar22;
  }
  *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) =
       *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  plVar8 = (longlong *)(unaff_x19 + 0xfc88);
  while( true ) {
    lVar9 = unaff_x19 + lVar15 * 8;
    if (*(uint *)(lVar9 + 0x81c) < (uint)*(byte *)(lVar9 + 0x81b)) {
      fVar23 = (float)*(byte *)(lVar9 + 0x81b);
    }
    else {
      fVar23 = (float)*(uint *)(lVar9 + 0x81c);
    }
    lVar21 = unaff_x19 + lVar15 * 0x34;
    *(float *)(lVar21 + 0x86c) = fVar23;
    bVar4 = *(byte *)(lVar9 + 0x819);
    bVar5 = *(byte *)(lVar9 + 0x81a);
    bVar6 = *(byte *)(lVar9 + 0x818);
    *(undefined4 *)(lVar21 + 0x870) = 0x7f7fffff;
    if (bVar4 == 2 || bVar5 == 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)
                (&DAT_1802310b0 +
                ((ulonglong)bVar6 | ((ulonglong)(uint)bVar4 | (ulonglong)(uint)bVar5 << 1) << 1) * 4
                );
    }
    puVar10 = (undefined8 *)(unaff_x19 + 0x100e0 + lVar15 * 0x34);
    *(undefined4 *)(lVar21 + 0x840) = uVar17;
    puVar16 = (undefined8 *)(unaff_x19 + 0x840 + lVar15 * 0x34);
    uVar26 = *puVar16;
    uVar25 = puVar16[3];
    uVar24 = puVar16[2];
    puVar10[1] = puVar16[1];
    *puVar10 = uVar26;
    puVar10[3] = uVar25;
    puVar10[2] = uVar24;
    uVar24 = puVar16[4];
    uVar17 = *(undefined4 *)(puVar16 + 6);
    puVar10[5] = puVar16[5];
    puVar10[4] = uVar24;
    *(undefined4 *)(puVar10 + 6) = uVar17;
    lVar9 = FUN_1800e3830(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
    if (lVar9 != plVar8[lVar15]) {
      FUN_1800e3bf8(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
      plVar8[lVar15] = lVar9;
    }
    uVar12 = (in_stack_00000020 & 0xaaaaaaaa) >> 1 | (in_stack_00000020 & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    lVar15 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
    uVar12 = (uint)lVar15;
    if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) =
         *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  }
  uVar22 = (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  lVar9 = *(longlong *)(unaff_x19 + 0xf6d0);
  lVar15 = uVar22 + lVar9;
  bVar7 = *(longlong *)(lVar15 + 0x710) != *plVar8;
  if (bVar7) {
    *(longlong *)(lVar15 + 0x710) = *plVar8;
  }
  uVar12 = (uint)bVar7;
  if (*(longlong *)(lVar15 + 0x718) == *(longlong *)(unaff_x24 + 0x7c90)) {
LAB_180029e94:
    uVar19 = 3;
    lVar21 = 0;
  }
  else {
    *(longlong *)(lVar15 + 0x718) = *(longlong *)(unaff_x24 + 0x7c90);
    if (bVar7) {
      uVar12 = 2;
      goto LAB_180029e94;
    }
    lVar21 = 1;
    uVar12 = 1;
    uVar19 = 2;
  }
  uVar11 = uVar12;
  if ((*(longlong *)(lVar15 + 0x720) != *(longlong *)(unaff_x24 + 0x7c98)) &&
     (*(longlong *)(lVar15 + 0x720) = *(longlong *)(unaff_x24 + 0x7c98), uVar11 = uVar19,
     uVar12 == 0)) {
    lVar21 = 2;
    uVar11 = 1;
  }
  if (*(longlong *)(lVar15 + 0x728) == *(longlong *)(unaff_x24 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar11 != 0) goto LAB_180029ef4;
  }
  else {
    *(longlong *)(lVar15 + 0x728) = *(longlong *)(unaff_x24 + 0x7ca0);
    if (uVar11 != 0) {
      uVar11 = 4 - (int)lVar21;
      goto LAB_180029ef0;
    }
    lVar21 = 3;
    uVar11 = 1;
LAB_180029ef4:
    (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0xd0))
              (*(longlong **)(lVar15 + 0x6b8),lVar21,uVar11,(uVar22 | lVar21 << 3) + lVar9 + 0x710);
  }
  *(undefined4 *)(in_stack_00000018 + 0x36bc) = 0;
LAB_180029f1c:
  if (*(char *)(unaff_x21 + 0x68f) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar2 = unaff_x19 + 0xfcd8;
    uVar19 = 0;
    iVar13 = 0;
    lVar20 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    uVar12 = 0;
    lVar18 = 0;
    lVar15 = lVar20 + 0xaf0;
    lVar9 = lVar20 + 0xb30;
    lVar21 = lVar20 + 0xa70;
    do {
      lVar14 = *(longlong *)(lVar2 + lVar18 * 8);
      if (((*(longlong *)(lVar21 + lVar18 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + lVar18 * 4, *(int *)(lVar15 + lVar18 * 4) != *(int *)(lVar3 + 0xfe8))
          ) || (*(int *)(lVar9 + lVar18 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + lVar18 * 4;
        *(longlong *)(lVar21 + lVar18 * 8) = lVar14;
        *(undefined4 *)(lVar15 + lVar18 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar9 + lVar18 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar12;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 1;
        }
      }
      uVar11 = uVar12 + 1;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar15 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar11 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        lVar14 = lVar20 + (ulonglong)uVar11 * 4;
        *(undefined4 *)(lVar14 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 2;
        }
      }
      uVar11 = uVar12 + 2;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar20 + (ulonglong)uVar11 * 4 + 0xaf0) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        *(undefined4 *)(lVar20 + (ulonglong)uVar11 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar11 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 3;
        }
      }
      uVar11 = uVar12 + 3;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar15 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar11 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        *(undefined4 *)(lVar15 + (ulonglong)uVar11 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar20 + (ulonglong)uVar11 * 4 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 4;
        }
      }
      uVar11 = uVar12 + 4;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar15 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        *(undefined4 *)(lVar20 + (ulonglong)uVar11 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar11 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 5;
        }
      }
      uVar11 = uVar12 + 5;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) == lVar14) {
        lVar3 = lVar20 + (ulonglong)uVar11 * 4;
        lVar1 = unaff_x19 + (ulonglong)uVar11 * 4;
        if ((*(int *)(lVar3 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar3 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        lVar14 = lVar20 + (ulonglong)uVar11 * 4;
        *(undefined4 *)(lVar14 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 6;
        }
      }
      uVar11 = uVar12 + 6;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar15 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar9 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        *(undefined4 *)(lVar15 + (ulonglong)uVar11 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar9 + (ulonglong)uVar11 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 7;
        }
      }
      uVar11 = uVar12 + 7;
      lVar14 = *(longlong *)(lVar2 + (ulonglong)uVar11 * 8);
      if (((*(longlong *)(lVar21 + (ulonglong)uVar11 * 8) != lVar14) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar11 * 4,
          *(int *)(lVar15 + (ulonglong)uVar11 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar11 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar11 * 4;
        *(longlong *)(lVar21 + (ulonglong)uVar11 * 8) = lVar14;
        lVar14 = lVar20 + (ulonglong)uVar11 * 4;
        *(undefined4 *)(lVar14 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar13 == 0) {
          iVar13 = 1;
          uVar19 = uVar11;
        }
        else {
          iVar13 = (uVar12 - uVar19) + 8;
        }
      }
      uVar12 = uVar12 + 8;
      lVar18 = lVar18 + 8;
    } while (uVar12 < 0x10);
    if (iVar13 != 0) {
      (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(unaff_x21 + 0x68f) = 0;
  }
  if (*(char *)(unaff_x21 + 0x690) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar15 = *(longlong *)(unaff_x24 + 0x7d58);
    if (lVar15 == *(longlong *)(unaff_x24 + 0x7710)) {
      iVar13 = 0x2a;
    }
    else {
      iVar13 = *(int *)(in_stack_00000018 + 0x3d70);
    }
    lVar9 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    if (((lVar15 != *(longlong *)(lVar9 + 0xb70)) || (iVar13 != *(int *)(lVar9 + 0xb78))) ||
       (*(int *)(lVar9 + 0xb7c) != 0)) {
      *(longlong *)(lVar9 + 0xb70) = lVar15;
      *(int *)(lVar9 + 0xb78) = iVar13;
      *(undefined4 *)(lVar9 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar9 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(unaff_x21 + 0x690) = 0;
  }
  plVar8 = *(longlong **)(unaff_x19 + 0xf9b0);
  if (plVar8 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39d8);
    in_stack_00000050 = *(uint *)((longlong)plVar8 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar8 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,uVar12 + *(int *)((longlong)plVar8 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39e8),&stack0x00000048);
  }
  plVar8 = *(longlong **)(unaff_x19 + 0xf9b8);
  if (plVar8 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39dc);
    in_stack_00000050 = *(uint *)((longlong)plVar8 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar8 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,uVar12 + *(int *)((longlong)plVar8 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39ec),&stack0x00000048);
  }
  plVar8 = *(longlong **)(unaff_x19 + 0xf9c0);
  if (plVar8 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39e0);
    in_stack_00000050 = *(uint *)((longlong)plVar8 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar8 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,uVar12 + *(int *)((longlong)plVar8 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39f0),&stack0x00000048);
  }
  plVar8 = *(longlong **)(unaff_x19 + 0xf9c8);
  if (plVar8 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39e4);
    in_stack_00000050 = *(uint *)((longlong)plVar8 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar8 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,uVar12 + *(int *)((longlong)plVar8 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39f4),&stack0x00000048);
  }
  lVar15 = 0xbb4;
  if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
    lVar15 = 0x7b0;
  }
  plVar8 = *(longlong **)(unaff_x19 + 0xf9d0);
  if ((plVar8 != (longlong *)0x0) && (*(int *)(unaff_x19 + lVar15) != 0)) {
    lVar15 = 3000;
    if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
      lVar15 = 0x7b4;
    }
    if (*(int *)(unaff_x19 + lVar15) != 0) {
      uVar12 = *(uint *)(in_stack_00000018 + 0x39f8);
      in_stack_00000048 = 0;
      in_stack_00000050 = *(uint *)((longlong)plVar8 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
      if (in_stack_00000050 == 0) {
        in_stack_00000050 = 1;
      }
      uStack0000000000000054 = *(uint *)(plVar8 + 5) >> (ulonglong)(uVar12 & 0x1f);
      if (uStack0000000000000054 == 0) {
        uStack0000000000000054 = 1;
      }
      (**(code **)(*plVar8 + 0x18))
                (plVar8,uVar12 + *(int *)(in_stack_00000018 + 0x39fc) *
                                 *(int *)((longlong)plVar8 + 0x3c),&stack0x00000048);
    }
  }
  return (ulonglong)unaff_w20;
}

