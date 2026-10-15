/*
 * FUN_180029950 at 180029950
 * undefined FUN_180029950(void)
 * Address ranges: 180029950-18002995b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180029950(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong unaff_x19;
  longlong unaff_x24;
  longlong *unaff_x26;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint in_stack_00000010;
  longlong in_stack_00000018;
  uint in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000054;
  undefined8 in_stack_00000120;
  
  uVar25 = in_stack_00000120;
  lVar8 = in_stack_00000040;
  lVar17 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  bVar7 = *(longlong *)(lVar17 + 0x790) != *unaff_x26;
  if (bVar7) {
    *(longlong *)(lVar17 + 0x790) = *unaff_x26;
  }
  uVar14 = (uint)bVar7;
  if (*(longlong *)(lVar17 + 0x798) == *(longlong *)(unaff_x24 + 0x7b28)) {
LAB_1800299b8:
    uVar21 = 3;
    lVar10 = 0;
  }
  else {
    *(longlong *)(lVar17 + 0x798) = *(longlong *)(unaff_x24 + 0x7b28);
    if (bVar7) {
      uVar14 = 2;
      goto LAB_1800299b8;
    }
    lVar10 = 1;
    uVar14 = 1;
    uVar21 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar17 + 0x7a0) != *(longlong *)(unaff_x24 + 0x7b30)) &&
     (*(longlong *)(lVar17 + 0x7a0) = *(longlong *)(unaff_x24 + 0x7b30), uVar13 = uVar21,
     uVar14 == 0)) {
    lVar10 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar17 + 0x7a8) != *(longlong *)(unaff_x24 + 0x7b38)) {
    *(longlong *)(lVar17 + 0x7a8) = *(longlong *)(unaff_x24 + 0x7b38);
    if (uVar13 == 0) {
      lVar10 = 3;
      uVar13 = 1;
    }
    else {
      uVar13 = 4 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7b0) != *(longlong *)(unaff_x24 + 0x7b40)) {
    *(longlong *)(lVar17 + 0x7b0) = *(longlong *)(unaff_x24 + 0x7b40);
    if (uVar13 == 0) {
      lVar10 = 4;
      uVar13 = 1;
    }
    else {
      uVar13 = 5 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7b8) != *(longlong *)(unaff_x24 + 0x7b48)) {
    *(longlong *)(lVar17 + 0x7b8) = *(longlong *)(unaff_x24 + 0x7b48);
    if (uVar13 == 0) {
      lVar10 = 5;
      uVar13 = 1;
    }
    else {
      uVar13 = 6 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7c0) != *(longlong *)(unaff_x24 + 0x7b50)) {
    *(longlong *)(lVar17 + 0x7c0) = *(longlong *)(unaff_x24 + 0x7b50);
    if (uVar13 == 0) {
      lVar10 = 6;
      uVar13 = 1;
    }
    else {
      uVar13 = 7 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7c8) != *(longlong *)(unaff_x24 + 0x7b58)) {
    *(longlong *)(lVar17 + 0x7c8) = *(longlong *)(unaff_x24 + 0x7b58);
    if (uVar13 == 0) {
      lVar10 = 7;
      uVar13 = 1;
    }
    else {
      uVar13 = 8 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 2000) != *(longlong *)(unaff_x24 + 0x7b60)) {
    *(longlong *)(lVar17 + 2000) = *(longlong *)(unaff_x24 + 0x7b60);
    if (uVar13 == 0) {
      lVar10 = 8;
      uVar13 = 1;
    }
    else {
      uVar13 = 9 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7d8) != *(longlong *)(unaff_x24 + 0x7b68)) {
    *(longlong *)(lVar17 + 0x7d8) = *(longlong *)(unaff_x24 + 0x7b68);
    if (uVar13 == 0) {
      lVar10 = 9;
      uVar13 = 1;
    }
    else {
      uVar13 = 10 - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7e0) != *(longlong *)(unaff_x24 + 0x7b70)) {
    *(longlong *)(lVar17 + 0x7e0) = *(longlong *)(unaff_x24 + 0x7b70);
    if (uVar13 == 0) {
      lVar10 = 10;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xb - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7e8) != *(longlong *)(unaff_x24 + 0x7b78)) {
    *(longlong *)(lVar17 + 0x7e8) = *(longlong *)(unaff_x24 + 0x7b78);
    if (uVar13 == 0) {
      lVar10 = 0xb;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xc - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7f0) != *(longlong *)(unaff_x24 + 0x7b80)) {
    *(longlong *)(lVar17 + 0x7f0) = *(longlong *)(unaff_x24 + 0x7b80);
    if (uVar13 == 0) {
      lVar10 = 0xc;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xd - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x7f8) != *(longlong *)(unaff_x24 + 0x7b88)) {
    *(longlong *)(lVar17 + 0x7f8) = *(longlong *)(unaff_x24 + 0x7b88);
    if (uVar13 == 0) {
      lVar10 = 0xd;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xe - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x800) != *(longlong *)(unaff_x24 + 0x7b90)) {
    *(longlong *)(lVar17 + 0x800) = *(longlong *)(unaff_x24 + 0x7b90);
    if (uVar13 == 0) {
      lVar10 = 0xe;
      uVar13 = 1;
    }
    else {
      uVar13 = 0xf - (int)lVar10;
    }
  }
  if (*(longlong *)(lVar17 + 0x808) == *(longlong *)(unaff_x24 + 0x7b98)) {
LAB_180029c24:
    if (uVar13 != 0) goto LAB_180029c28;
  }
  else {
    *(longlong *)(lVar17 + 0x808) = *(longlong *)(unaff_x24 + 0x7b98);
    if (uVar13 != 0) {
      uVar13 = 0x10 - (int)lVar10;
      goto LAB_180029c24;
    }
    lVar10 = 0xf;
    uVar13 = 1;
LAB_180029c28:
    (**(code **)(**(longlong **)(lVar17 + 0x6b8) + 0x50))
              (*(longlong **)(lVar17 + 0x6b8),lVar10,uVar13,lVar17 + lVar10 * 8 + 0x790);
  }
  uVar14 = *(uint *)(in_stack_00000018 + 0x36bc);
  if (uVar14 == 0 && in_stack_00000028 == unaff_x19) goto LAB_180029f1c;
  in_stack_00000020 = uVar14 & 0xf;
  uVar14 = (uVar14 & 10) >> 1 | (uVar14 & 5) << 1;
  lVar17 = LZCOUNT((uVar14 >> 2 | (uVar14 & 0x33333333) << 2) << 0x1c);
  uVar14 = (uint)lVar17;
  if ((1 - (uVar14 >> 5) & 0xff) == 0) {
    uVar23 = FUN_180029e34(0xfc88);
    return uVar23;
  }
  *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) =
       *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  plVar9 = (longlong *)(unaff_x19 + 0xfc88);
  in_stack_00000040 = lVar8;
  in_stack_00000120 = uVar25;
  while( true ) {
    lVar8 = unaff_x19 + lVar17 * 8;
    if (*(uint *)(lVar8 + 0x81c) < (uint)*(byte *)(lVar8 + 0x81b)) {
      fVar24 = (float)*(byte *)(lVar8 + 0x81b);
    }
    else {
      fVar24 = (float)*(uint *)(lVar8 + 0x81c);
    }
    lVar10 = unaff_x19 + lVar17 * 0x34;
    *(float *)(lVar10 + 0x86c) = fVar24;
    bVar4 = *(byte *)(lVar8 + 0x819);
    bVar5 = *(byte *)(lVar8 + 0x81a);
    bVar6 = *(byte *)(lVar8 + 0x818);
    *(undefined4 *)(lVar10 + 0x870) = 0x7f7fffff;
    if (bVar4 == 2 || bVar5 == 2) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)
                (&DAT_1802310b0 +
                ((ulonglong)bVar6 | ((ulonglong)(uint)bVar4 | (ulonglong)(uint)bVar5 << 1) << 1) * 4
                );
    }
    puVar11 = (undefined8 *)(unaff_x19 + 0x100e0 + lVar17 * 0x34);
    *(undefined4 *)(lVar10 + 0x840) = uVar19;
    puVar18 = (undefined8 *)(unaff_x19 + 0x840 + lVar17 * 0x34);
    uVar27 = *puVar18;
    uVar26 = puVar18[3];
    uVar25 = puVar18[2];
    puVar11[1] = puVar18[1];
    *puVar11 = uVar27;
    puVar11[3] = uVar26;
    puVar11[2] = uVar25;
    uVar25 = puVar18[4];
    uVar19 = *(undefined4 *)(puVar18 + 6);
    puVar11[5] = puVar18[5];
    puVar11[4] = uVar25;
    *(undefined4 *)(puVar11 + 6) = uVar19;
    lVar8 = FUN_1800e3830(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
    if (lVar8 != plVar9[lVar17]) {
      FUN_1800e3bf8(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
      plVar9[lVar17] = lVar8;
    }
    lVar8 = in_stack_00000040;
    uVar14 = (in_stack_00000020 & 0xaaaaaaaa) >> 1 | (in_stack_00000020 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    lVar17 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)lVar17;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) =
         *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar14 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
  }
  uVar23 = (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  lVar10 = *(longlong *)(unaff_x19 + 0xf6d0);
  lVar17 = uVar23 + lVar10;
  bVar7 = *(longlong *)(lVar17 + 0x710) != *plVar9;
  if (bVar7) {
    *(longlong *)(lVar17 + 0x710) = *plVar9;
  }
  uVar14 = (uint)bVar7;
  if (*(longlong *)(lVar17 + 0x718) == *(longlong *)(unaff_x24 + 0x7c90)) {
LAB_180029e94:
    uVar21 = 3;
    lVar12 = 0;
  }
  else {
    *(longlong *)(lVar17 + 0x718) = *(longlong *)(unaff_x24 + 0x7c90);
    if (bVar7) {
      uVar14 = 2;
      goto LAB_180029e94;
    }
    lVar12 = 1;
    uVar14 = 1;
    uVar21 = 2;
  }
  uVar13 = uVar14;
  if ((*(longlong *)(lVar17 + 0x720) != *(longlong *)(unaff_x24 + 0x7c98)) &&
     (*(longlong *)(lVar17 + 0x720) = *(longlong *)(unaff_x24 + 0x7c98), uVar13 = uVar21,
     uVar14 == 0)) {
    lVar12 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar17 + 0x728) == *(longlong *)(unaff_x24 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar13 != 0) goto LAB_180029ef4;
  }
  else {
    *(longlong *)(lVar17 + 0x728) = *(longlong *)(unaff_x24 + 0x7ca0);
    if (uVar13 != 0) {
      uVar13 = 4 - (int)lVar12;
      goto LAB_180029ef0;
    }
    lVar12 = 3;
    uVar13 = 1;
LAB_180029ef4:
    (**(code **)(**(longlong **)(lVar17 + 0x6b8) + 0xd0))
              (*(longlong **)(lVar17 + 0x6b8),lVar12,uVar13,(uVar23 | lVar12 << 3) + lVar10 + 0x710)
    ;
  }
  *(undefined4 *)(in_stack_00000018 + 0x36bc) = 0;
LAB_180029f1c:
  if (*(char *)(lVar8 + 0x68f) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar2 = unaff_x19 + 0xfcd8;
    uVar21 = 0;
    iVar15 = 0;
    lVar22 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    uVar14 = 0;
    lVar20 = 0;
    lVar17 = lVar22 + 0xaf0;
    lVar10 = lVar22 + 0xb30;
    lVar12 = lVar22 + 0xa70;
    do {
      lVar16 = *(longlong *)(lVar2 + lVar20 * 8);
      if (((*(longlong *)(lVar12 + lVar20 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + lVar20 * 4, *(int *)(lVar17 + lVar20 * 4) != *(int *)(lVar3 + 0xfe8))
          ) || (*(int *)(lVar10 + lVar20 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + lVar20 * 4;
        *(longlong *)(lVar12 + lVar20 * 8) = lVar16;
        *(undefined4 *)(lVar17 + lVar20 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar10 + lVar20 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar14;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 1;
        }
      }
      uVar13 = uVar14 + 1;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar17 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        lVar16 = lVar22 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 2;
        }
      }
      uVar13 = uVar14 + 2;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 3;
        }
      }
      uVar13 = uVar14 + 3;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar17 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        *(undefined4 *)(lVar17 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 4;
        }
      }
      uVar13 = uVar14 + 4;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar17 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 5;
        }
      }
      uVar13 = uVar14 + 5;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) == lVar16) {
        lVar3 = lVar22 + (ulonglong)uVar13 * 4;
        lVar1 = unaff_x19 + (ulonglong)uVar13 * 4;
        if ((*(int *)(lVar3 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar3 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        lVar16 = lVar22 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 6;
        }
      }
      uVar13 = uVar14 + 6;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar17 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar10 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        *(undefined4 *)(lVar17 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar10 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 7;
        }
      }
      uVar13 = uVar14 + 7;
      lVar16 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar12 + (ulonglong)uVar13 * 8) != lVar16) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar17 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar12 + (ulonglong)uVar13 * 8) = lVar16;
        lVar16 = lVar22 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar16 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar16 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar15 == 0) {
          iVar15 = 1;
          uVar21 = uVar13;
        }
        else {
          iVar15 = (uVar14 - uVar21) + 8;
        }
      }
      uVar14 = uVar14 + 8;
      lVar20 = lVar20 + 8;
    } while (uVar14 < 0x10);
    if (iVar15 != 0) {
      (**(code **)(**(longlong **)(lVar22 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(lVar8 + 0x68f) = 0;
  }
  if (*(char *)(lVar8 + 0x690) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar17 = *(longlong *)(unaff_x24 + 0x7d58);
    if (lVar17 == *(longlong *)(unaff_x24 + 0x7710)) {
      iVar15 = 0x2a;
    }
    else {
      iVar15 = *(int *)(in_stack_00000018 + 0x3d70);
    }
    lVar10 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    if (((lVar17 != *(longlong *)(lVar10 + 0xb70)) || (iVar15 != *(int *)(lVar10 + 0xb78))) ||
       (*(int *)(lVar10 + 0xb7c) != 0)) {
      *(longlong *)(lVar10 + 0xb70) = lVar17;
      *(int *)(lVar10 + 0xb78) = iVar15;
      *(undefined4 *)(lVar10 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar10 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(lVar8 + 0x690) = 0;
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9b0);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39d8);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar14 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39e8),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9b8);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39dc);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar14 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39ec),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9c0);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39e0);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar14 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39f0),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9c8);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar14 = *(uint *)(in_stack_00000018 + 0x39e4);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar14 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar14 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39f4),&stack0x00000048);
  }
  lVar8 = 0xbb4;
  if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
    lVar8 = 0x7b0;
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9d0);
  if ((plVar9 != (longlong *)0x0) && (*(int *)(unaff_x19 + lVar8) != 0)) {
    lVar8 = 3000;
    if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
      lVar8 = 0x7b4;
    }
    if (*(int *)(unaff_x19 + lVar8) != 0) {
      uVar14 = *(uint *)(in_stack_00000018 + 0x39f8);
      in_stack_00000048 = 0;
      in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar14 & 0x1f);
      if (in_stack_00000050 == 0) {
        in_stack_00000050 = 1;
      }
      uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar14 & 0x1f);
      if (uStack0000000000000054 == 0) {
        uStack0000000000000054 = 1;
      }
      (**(code **)(*plVar9 + 0x18))
                (plVar9,uVar14 + *(int *)(in_stack_00000018 + 0x39fc) *
                                 *(int *)((longlong)plVar9 + 0x3c),&stack0x00000048);
    }
  }
  return (ulonglong)in_stack_00000010;
}

