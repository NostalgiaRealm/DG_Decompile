/*
 * FUN_180029d10 at 180029d10
 * undefined FUN_180029d10(void)
 * Address ranges: 180029d10-180029e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180029d10(ulonglong param_1)

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
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong unaff_x19;
  undefined4 unaff_w20;
  longlong unaff_x21;
  longlong unaff_x22;
  longlong *unaff_x23;
  longlong unaff_x24;
  int unaff_w25;
  longlong unaff_x26;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uStack0000000000000010;
  longlong in_stack_00000018;
  uint in_stack_00000020;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000054;
  
  uStack0000000000000010 = unaff_w20;
  while( true ) {
    uVar22 = param_1 & 0xffffffff;
    lVar8 = unaff_x19 + uVar22 * 8;
    if (*(uint *)(lVar8 + 0x81c) < (uint)*(byte *)(lVar8 + 0x81b)) {
      fVar23 = (float)*(byte *)(lVar8 + 0x81b);
    }
    else {
      fVar23 = (float)*(uint *)(lVar8 + 0x81c);
    }
    lVar21 = unaff_x19 + (param_1 & 0xffffffff) * 0x34;
    *(float *)(lVar21 + 0x86c) = fVar23;
    bVar4 = *(byte *)(lVar8 + 0x819);
    bVar5 = *(byte *)(lVar8 + 0x81a);
    bVar6 = *(byte *)(lVar8 + 0x818);
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
    puVar10 = (undefined8 *)(unaff_x22 + (param_1 & 0xffffffff) * 0x34);
    *(undefined4 *)(lVar21 + 0x840) = uVar17;
    puVar16 = (undefined8 *)(unaff_x26 + (param_1 & 0xffffffff) * 0x34);
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
    lVar8 = FUN_1800e3830(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
    if (lVar8 != unaff_x23[uVar22]) {
      FUN_1800e3bf8(*(longlong *)(unaff_x24 + 0x76d8) + 0x628);
      unaff_x23[uVar22] = lVar8;
    }
    uVar12 = (in_stack_00000020 & 0xaaaaaaaa) >> 1 | (in_stack_00000020 & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    param_1 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
    uVar12 = (uint)param_1;
    if ((unaff_w25 - (uVar12 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) =
         *(byte *)((longlong)&stack0x00000020 + (longlong)((int)uVar12 >> 3)) &
         ((byte)(unaff_w25 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  }
  uVar22 = (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  lVar21 = *(longlong *)(unaff_x19 + 0xf6d0);
  lVar8 = uVar22 + lVar21;
  bVar7 = *(longlong *)(lVar8 + 0x710) != *unaff_x23;
  if (bVar7) {
    *(longlong *)(lVar8 + 0x710) = *unaff_x23;
  }
  uVar12 = (uint)bVar7;
  if (*(longlong *)(lVar8 + 0x718) == *(longlong *)(unaff_x24 + 0x7c90)) {
LAB_180029e94:
    uVar18 = 3;
    lVar11 = 0;
  }
  else {
    *(longlong *)(lVar8 + 0x718) = *(longlong *)(unaff_x24 + 0x7c90);
    if (bVar7) {
      uVar12 = 2;
      goto LAB_180029e94;
    }
    lVar11 = 1;
    uVar12 = 1;
    uVar18 = 2;
  }
  uVar13 = uVar12;
  if ((*(longlong *)(lVar8 + 0x720) != *(longlong *)(unaff_x24 + 0x7c98)) &&
     (*(longlong *)(lVar8 + 0x720) = *(longlong *)(unaff_x24 + 0x7c98), uVar13 = uVar18, uVar12 == 0
     )) {
    lVar11 = 2;
    uVar13 = 1;
  }
  if (*(longlong *)(lVar8 + 0x728) == *(longlong *)(unaff_x24 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar13 == 0) goto LAB_180029f14;
  }
  else {
    *(longlong *)(lVar8 + 0x728) = *(longlong *)(unaff_x24 + 0x7ca0);
    if (uVar13 != 0) {
      uVar13 = 4 - (int)lVar11;
      goto LAB_180029ef0;
    }
    lVar11 = 3;
    uVar13 = 1;
  }
  (**(code **)(**(longlong **)(lVar8 + 0x6b8) + 0xd0))
            (*(longlong **)(lVar8 + 0x6b8),lVar11,uVar13,(uVar22 | lVar11 << 3) + lVar21 + 0x710);
LAB_180029f14:
  *(undefined4 *)(in_stack_00000018 + 0x36bc) = 0;
  if (*(char *)(unaff_x21 + 0x68f) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar2 = unaff_x19 + 0xfcd8;
    uVar18 = 0;
    iVar14 = 0;
    lVar20 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    uVar12 = 0;
    lVar19 = 0;
    lVar8 = lVar20 + 0xaf0;
    lVar21 = lVar20 + 0xb30;
    lVar11 = lVar20 + 0xa70;
    do {
      lVar15 = *(longlong *)(lVar2 + lVar19 * 8);
      if (((*(longlong *)(lVar11 + lVar19 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + lVar19 * 4, *(int *)(lVar8 + lVar19 * 4) != *(int *)(lVar3 + 0xfe8)))
         || (*(int *)(lVar21 + lVar19 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + lVar19 * 4;
        *(longlong *)(lVar11 + lVar19 * 8) = lVar15;
        *(undefined4 *)(lVar8 + lVar19 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar21 + lVar19 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar12;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 1;
        }
      }
      uVar13 = uVar12 + 1;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar8 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        lVar15 = lVar20 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 2;
        }
      }
      uVar13 = uVar12 + 2;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar20 + (ulonglong)uVar13 * 4 + 0xaf0) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar21 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar20 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar21 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 3;
        }
      }
      uVar13 = uVar12 + 3;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar8 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar8 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar20 + (ulonglong)uVar13 * 4 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 4;
        }
      }
      uVar13 = uVar12 + 4;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar8 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar21 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar20 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar21 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 5;
        }
      }
      uVar13 = uVar12 + 5;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) == lVar15) {
        lVar3 = lVar20 + (ulonglong)uVar13 * 4;
        lVar1 = unaff_x19 + (ulonglong)uVar13 * 4;
        if ((*(int *)(lVar3 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar3 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        lVar15 = lVar20 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 6;
        }
      }
      uVar13 = uVar12 + 6;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar8 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar21 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar8 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar21 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 7;
        }
      }
      uVar13 = uVar12 + 7;
      lVar15 = *(longlong *)(lVar2 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar11 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar13 * 4,
          *(int *)(lVar8 + (ulonglong)uVar13 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar20 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar11 + (ulonglong)uVar13 * 8) = lVar15;
        lVar15 = lVar20 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar18 = uVar13;
        }
        else {
          iVar14 = (uVar12 - uVar18) + 8;
        }
      }
      uVar12 = uVar12 + 8;
      lVar19 = lVar19 + 8;
    } while (uVar12 < 0x10);
    if (iVar14 != 0) {
      (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(unaff_x21 + 0x68f) = 0;
  }
  if (*(char *)(unaff_x21 + 0x690) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar8 = *(longlong *)(unaff_x24 + 0x7d58);
    if (lVar8 == *(longlong *)(unaff_x24 + 0x7710)) {
      iVar14 = 0x2a;
    }
    else {
      iVar14 = *(int *)(in_stack_00000018 + 0x3d70);
    }
    lVar21 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    if (((lVar8 != *(longlong *)(lVar21 + 0xb70)) || (iVar14 != *(int *)(lVar21 + 0xb78))) ||
       (*(int *)(lVar21 + 0xb7c) != 0)) {
      *(longlong *)(lVar21 + 0xb70) = lVar8;
      *(int *)(lVar21 + 0xb78) = iVar14;
      *(undefined4 *)(lVar21 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar21 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(unaff_x21 + 0x690) = 0;
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9b0);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39d8);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar12 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39e8),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9b8);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39dc);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar12 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39ec),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9c0);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39e0);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar12 + *(int *)((longlong)plVar9 + 0x3c) *
                               *(int *)(in_stack_00000018 + 0x39f0),&stack0x00000048);
  }
  plVar9 = *(longlong **)(unaff_x19 + 0xf9c8);
  if (plVar9 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar12 = *(uint *)(in_stack_00000018 + 0x39e4);
    in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar12 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar9 + 0x18))
              (plVar9,uVar12 + *(int *)((longlong)plVar9 + 0x3c) *
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
      uVar12 = *(uint *)(in_stack_00000018 + 0x39f8);
      in_stack_00000048 = 0;
      in_stack_00000050 = *(uint *)((longlong)plVar9 + 0x24) >> (ulonglong)(uVar12 & 0x1f);
      if (in_stack_00000050 == 0) {
        in_stack_00000050 = 1;
      }
      uStack0000000000000054 = *(uint *)(plVar9 + 5) >> (ulonglong)(uVar12 & 0x1f);
      if (uStack0000000000000054 == 0) {
        uStack0000000000000054 = 1;
      }
      (**(code **)(*plVar9 + 0x18))
                (plVar9,uVar12 + *(int *)(in_stack_00000018 + 0x39fc) *
                                 *(int *)((longlong)plVar9 + 0x3c),&stack0x00000048);
    }
  }
  return uStack0000000000000010;
}

