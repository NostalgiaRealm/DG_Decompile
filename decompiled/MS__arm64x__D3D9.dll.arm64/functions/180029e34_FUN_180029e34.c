/*
 * FUN_180029e34 at 180029e34
 * undefined FUN_180029e34(void)
 * Address ranges: 180029e34-18002a5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180029e34(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong unaff_x19;
  undefined4 unaff_w20;
  longlong unaff_x21;
  longlong *unaff_x23;
  longlong unaff_x24;
  longlong in_stack_00000018;
  longlong in_stack_00000028;
  longlong in_stack_00000038;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  uint uStack0000000000000054;
  
  uVar16 = (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
  lVar14 = *(longlong *)(unaff_x19 + 0xf6d0);
  lVar7 = uVar16 + lVar14;
  bVar4 = *(longlong *)(lVar7 + 0x710) != *unaff_x23;
  if (bVar4) {
    *(longlong *)(lVar7 + 0x710) = *unaff_x23;
  }
  uVar8 = (uint)bVar4;
  if (*(longlong *)(lVar7 + 0x718) == *(longlong *)(unaff_x24 + 0x7c90)) {
LAB_180029e94:
    uVar12 = 3;
    lVar6 = 0;
  }
  else {
    *(longlong *)(lVar7 + 0x718) = *(longlong *)(unaff_x24 + 0x7c90);
    if (bVar4) {
      uVar8 = 2;
      goto LAB_180029e94;
    }
    lVar6 = 1;
    uVar8 = 1;
    uVar12 = 2;
  }
  uVar9 = uVar8;
  if ((*(longlong *)(lVar7 + 0x720) != *(longlong *)(unaff_x24 + 0x7c98)) &&
     (*(longlong *)(lVar7 + 0x720) = *(longlong *)(unaff_x24 + 0x7c98), uVar9 = uVar12, uVar8 == 0))
  {
    lVar6 = 2;
    uVar9 = 1;
  }
  if (*(longlong *)(lVar7 + 0x728) == *(longlong *)(unaff_x24 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar9 == 0) goto LAB_180029f14;
  }
  else {
    *(longlong *)(lVar7 + 0x728) = *(longlong *)(unaff_x24 + 0x7ca0);
    if (uVar9 != 0) {
      uVar9 = 4 - (int)lVar6;
      goto LAB_180029ef0;
    }
    lVar6 = 3;
    uVar9 = 1;
  }
  (**(code **)(**(longlong **)(lVar7 + 0x6b8) + 0xd0))
            (*(longlong **)(lVar7 + 0x6b8),lVar6,uVar9,(uVar16 | lVar6 << 3) + lVar14 + 0x710);
LAB_180029f14:
  *(undefined4 *)(in_stack_00000018 + 0x36bc) = 0;
  if (*(char *)(unaff_x21 + 0x68f) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar2 = unaff_x19 + 0xfcd8;
    uVar12 = 0;
    iVar10 = 0;
    lVar15 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    uVar8 = 0;
    lVar13 = 0;
    lVar7 = lVar15 + 0xaf0;
    lVar14 = lVar15 + 0xb30;
    lVar6 = lVar15 + 0xa70;
    do {
      lVar11 = *(longlong *)(lVar2 + lVar13 * 8);
      if (((*(longlong *)(lVar6 + lVar13 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + lVar13 * 4, *(int *)(lVar7 + lVar13 * 4) != *(int *)(lVar3 + 0xfe8)))
         || (*(int *)(lVar14 + lVar13 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + lVar13 * 4;
        *(longlong *)(lVar6 + lVar13 * 8) = lVar11;
        *(undefined4 *)(lVar7 + lVar13 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + lVar13 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar8;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 1;
        }
      }
      uVar9 = uVar8 + 1;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar7 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar15 + (ulonglong)uVar9 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        lVar11 = lVar15 + (ulonglong)uVar9 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 2;
        }
      }
      uVar9 = uVar8 + 2;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar15 + (ulonglong)uVar9 * 4 + 0xaf0) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar15 + (ulonglong)uVar9 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 3;
        }
      }
      uVar9 = uVar8 + 3;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar7 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar15 + (ulonglong)uVar9 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar7 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar15 + (ulonglong)uVar9 * 4 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 4;
        }
      }
      uVar9 = uVar8 + 4;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar7 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar15 + (ulonglong)uVar9 * 4 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 5;
        }
      }
      uVar9 = uVar8 + 5;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) == lVar11) {
        lVar3 = lVar15 + (ulonglong)uVar9 * 4;
        lVar1 = unaff_x19 + (ulonglong)uVar9 * 4;
        if ((*(int *)(lVar3 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar3 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        lVar11 = lVar15 + (ulonglong)uVar9 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 6;
        }
      }
      uVar9 = uVar8 + 6;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar7 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar7 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 7;
        }
      }
      uVar9 = uVar8 + 7;
      lVar11 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar6 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar3 = unaff_x19 + (ulonglong)uVar9 * 4,
          *(int *)(lVar7 + (ulonglong)uVar9 * 4) != *(int *)(lVar3 + 0xfe8))) ||
         (*(int *)(lVar15 + (ulonglong)uVar9 * 4 + 0xb30) != *(int *)(lVar3 + 0x102c))) {
        lVar3 = unaff_x19 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar6 + (ulonglong)uVar9 * 8) = lVar11;
        lVar11 = lVar15 + (ulonglong)uVar9 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar3 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar3 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar9;
        }
        else {
          iVar10 = (uVar8 - uVar12) + 8;
        }
      }
      uVar8 = uVar8 + 8;
      lVar13 = lVar13 + 8;
    } while (uVar8 < 0x10);
    if (iVar10 != 0) {
      (**(code **)(**(longlong **)(lVar15 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(unaff_x21 + 0x68f) = 0;
  }
  if (*(char *)(unaff_x21 + 0x690) != '\0' || in_stack_00000028 != unaff_x19) {
    lVar7 = *(longlong *)(unaff_x24 + 0x7d58);
    if (lVar7 == *(longlong *)(unaff_x24 + 0x7710)) {
      iVar10 = 0x2a;
    }
    else {
      iVar10 = *(int *)(in_stack_00000018 + 0x3d70);
    }
    lVar14 = *(longlong *)(unaff_x19 + 0xf6d0) + (ulonglong)*(uint *)(unaff_x19 + 0x18) * 0x18c0;
    if (((lVar7 != *(longlong *)(lVar14 + 0xb70)) || (iVar10 != *(int *)(lVar14 + 0xb78))) ||
       (*(int *)(lVar14 + 0xb7c) != 0)) {
      *(longlong *)(lVar14 + 0xb70) = lVar7;
      *(int *)(lVar14 + 0xb78) = iVar10;
      *(undefined4 *)(lVar14 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar14 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(unaff_x21 + 0x690) = 0;
  }
  plVar5 = *(longlong **)(unaff_x19 + 0xf9b0);
  if (plVar5 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar8 = *(uint *)(in_stack_00000018 + 0x39d8);
    in_stack_00000050 = *(uint *)((longlong)plVar5 + 0x24) >> (ulonglong)(uVar8 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar5 + 5) >> (ulonglong)(uVar8 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,uVar8 + *(int *)((longlong)plVar5 + 0x3c) *
                              *(int *)(in_stack_00000018 + 0x39e8),&stack0x00000048);
  }
  plVar5 = *(longlong **)(unaff_x19 + 0xf9b8);
  if (plVar5 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar8 = *(uint *)(in_stack_00000018 + 0x39dc);
    in_stack_00000050 = *(uint *)((longlong)plVar5 + 0x24) >> (ulonglong)(uVar8 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar5 + 5) >> (ulonglong)(uVar8 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,uVar8 + *(int *)((longlong)plVar5 + 0x3c) *
                              *(int *)(in_stack_00000018 + 0x39ec),&stack0x00000048);
  }
  plVar5 = *(longlong **)(unaff_x19 + 0xf9c0);
  if (plVar5 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar8 = *(uint *)(in_stack_00000018 + 0x39e0);
    in_stack_00000050 = *(uint *)((longlong)plVar5 + 0x24) >> (ulonglong)(uVar8 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar5 + 5) >> (ulonglong)(uVar8 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,uVar8 + *(int *)((longlong)plVar5 + 0x3c) *
                              *(int *)(in_stack_00000018 + 0x39f0),&stack0x00000048);
  }
  plVar5 = *(longlong **)(unaff_x19 + 0xf9c8);
  if (plVar5 != (longlong *)0x0) {
    in_stack_00000048 = 0;
    uVar8 = *(uint *)(in_stack_00000018 + 0x39e4);
    in_stack_00000050 = *(uint *)((longlong)plVar5 + 0x24) >> (ulonglong)(uVar8 & 0x1f);
    if (in_stack_00000050 == 0) {
      in_stack_00000050 = 1;
    }
    uStack0000000000000054 = *(uint *)(plVar5 + 5) >> (ulonglong)(uVar8 & 0x1f);
    if (uStack0000000000000054 == 0) {
      uStack0000000000000054 = 1;
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,uVar8 + *(int *)((longlong)plVar5 + 0x3c) *
                              *(int *)(in_stack_00000018 + 0x39f4),&stack0x00000048);
  }
  lVar7 = 0xbb4;
  if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
    lVar7 = 0x7b0;
  }
  plVar5 = *(longlong **)(unaff_x19 + 0xf9d0);
  if ((plVar5 != (longlong *)0x0) && (*(int *)(unaff_x19 + lVar7) != 0)) {
    lVar7 = 3000;
    if (*(char *)(in_stack_00000038 + 0x662) == '\0') {
      lVar7 = 0x7b4;
    }
    if (*(int *)(unaff_x19 + lVar7) != 0) {
      uVar8 = *(uint *)(in_stack_00000018 + 0x39f8);
      in_stack_00000048 = 0;
      in_stack_00000050 = *(uint *)((longlong)plVar5 + 0x24) >> (ulonglong)(uVar8 & 0x1f);
      if (in_stack_00000050 == 0) {
        in_stack_00000050 = 1;
      }
      uStack0000000000000054 = *(uint *)(plVar5 + 5) >> (ulonglong)(uVar8 & 0x1f);
      if (uStack0000000000000054 == 0) {
        uStack0000000000000054 = 1;
      }
      (**(code **)(*plVar5 + 0x18))
                (plVar5,uVar8 + *(int *)(in_stack_00000018 + 0x39fc) *
                                *(int *)((longlong)plVar5 + 0x3c),&stack0x00000048);
    }
  }
  return unaff_w20;
}

