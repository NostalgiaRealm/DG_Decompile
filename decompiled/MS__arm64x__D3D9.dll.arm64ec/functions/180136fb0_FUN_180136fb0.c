/*
 * FUN_180136fb0 at 180136fb0
 * undefined FUN_180136fb0(void)
 * Address ranges: 180136fb0-180136fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180136fb0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  uint uVar16;
  longlong lVar17;
  longlong *unaff_x20;
  undefined1 auVar18 [16];
  longlong in_stack_00000010;
  longlong in_stack_00000018;
  code *in_stack_00000020;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
  uint uStack0000000000000064;
  
  lVar8 = (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0 +
          *(longlong *)(in_stack_00000018 + 0xf6d0);
  bVar5 = *(longlong *)(lVar8 + 0x710) != *unaff_x20;
  if (bVar5) {
    *(longlong *)(lVar8 + 0x710) = *unaff_x20;
  }
  uVar9 = (uint)bVar5;
  if (*(longlong *)(lVar8 + 0x718) == *(longlong *)(in_stack_00000010 + 0x7c90)) {
LAB_18013701c:
    uVar16 = 3;
    iVar6 = 0;
  }
  else {
    *(longlong *)(lVar8 + 0x718) = *(longlong *)(in_stack_00000010 + 0x7c90);
    if (bVar5) {
      uVar9 = 2;
      goto LAB_18013701c;
    }
    iVar6 = 1;
    uVar9 = 1;
    uVar16 = 2;
  }
  uVar10 = uVar9;
  if ((*(longlong *)(lVar8 + 0x720) != *(longlong *)(in_stack_00000010 + 0x7c98)) &&
     (*(longlong *)(lVar8 + 0x720) = *(longlong *)(in_stack_00000010 + 0x7c98), uVar10 = uVar16,
     uVar9 == 0)) {
    iVar6 = 2;
    uVar10 = 1;
  }
  if (*(longlong *)(lVar8 + 0x728) == *(longlong *)(in_stack_00000010 + 0x7ca0)) {
LAB_180137080:
    if (uVar10 == 0) goto LAB_1801370b4;
  }
  else {
    *(longlong *)(lVar8 + 0x728) = *(longlong *)(in_stack_00000010 + 0x7ca0);
    if (uVar10 != 0) {
      uVar10 = 4 - iVar6;
      goto LAB_180137080;
    }
    iVar6 = 3;
    uVar10 = 1;
  }
  (*in_stack_00000020)(*(undefined8 *)(lVar8 + 0x6b8),iVar6,uVar10);
  (*extraout_x11)();
LAB_1801370b4:
  *(undefined4 *)(in_stack_00000038 + 0x36bc) = 0;
  if (*(char *)(in_stack_00000028 + 0x68f) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar3 = in_stack_00000018 + 0xfcd8;
    uVar7 = 0;
    iVar6 = 0;
    lVar15 = 0;
    lVar17 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    uVar13 = 0;
    lVar8 = lVar17 + 0xaf0;
    lVar14 = lVar17 + 0xb30;
    lVar2 = lVar17 + 0xa70;
    do {
      lVar11 = *(longlong *)(lVar3 + lVar15 * 8);
      iVar12 = (int)uVar13;
      if (((*(longlong *)(lVar2 + lVar15 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + lVar15 * 4,
          *(int *)(lVar8 + lVar15 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar14 + lVar15 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + lVar15 * 4;
        *(longlong *)(lVar2 + lVar15 * 8) = lVar11;
        *(undefined4 *)(lVar8 + lVar15 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar14 + lVar15 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          iVar6 = 1;
          uVar7 = uVar13;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 1;
        }
      }
      uVar9 = iVar12 + 1;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4,
          *(int *)(lVar8 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar17 + (ulonglong)uVar9 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        lVar11 = lVar17 + (ulonglong)uVar9 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 2;
        }
      }
      uVar9 = iVar12 + 2;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4,
          *(int *)(lVar17 + (ulonglong)uVar9 * 4 + 0xaf0) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar17 + (ulonglong)uVar9 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 3;
        }
      }
      uVar9 = iVar12 + 3;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4,
          *(int *)(lVar8 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar17 + (ulonglong)uVar9 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar8 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar17 + (ulonglong)uVar9 * 4 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 4;
        }
      }
      uVar9 = iVar12 + 4;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4,
          *(int *)(lVar8 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar17 + (ulonglong)uVar9 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 5;
        }
      }
      uVar9 = iVar12 + 5;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) == lVar11) {
        lVar4 = lVar17 + (ulonglong)uVar9 * 4;
        lVar1 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        if ((*(int *)(lVar4 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar4 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_180137368;
      }
      else {
LAB_180137368:
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        lVar11 = lVar17 + (ulonglong)uVar9 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 6;
        }
      }
      uVar9 = iVar12 + 6;
      lVar11 = *(longlong *)(lVar3 + (ulonglong)uVar9 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar9 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4,
          *(int *)(lVar8 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar14 + (ulonglong)uVar9 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar9 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar9 * 8) = lVar11;
        *(undefined4 *)(lVar8 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          uVar7 = (ulonglong)uVar9;
          iVar6 = 1;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 7;
        }
      }
      uVar13 = (ulonglong)(iVar12 + 7);
      lVar11 = *(longlong *)(lVar3 + uVar13 * 8);
      if (((*(longlong *)(lVar2 + uVar13 * 8) != lVar11) ||
          (lVar4 = in_stack_00000018 + uVar13 * 4,
          *(int *)(lVar8 + uVar13 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar17 + uVar13 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + uVar13 * 4;
        *(longlong *)(lVar2 + uVar13 * 8) = lVar11;
        lVar11 = lVar17 + uVar13 * 4;
        *(undefined4 *)(lVar11 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar11 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar6 == 0) {
          iVar6 = 1;
          uVar7 = uVar13;
        }
        else {
          iVar6 = (iVar12 - (int)uVar7) + 8;
        }
      }
      uVar13 = (ulonglong)(iVar12 + 8U);
      lVar15 = lVar15 + 8;
    } while (iVar12 + 8U < 0x10);
    if (iVar6 != 0) {
      (*in_stack_00000020)();
      (*extraout_x11_00)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x68f) = 0;
  }
  if (*(char *)(in_stack_00000028 + 0x690) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar8 = *(longlong *)(in_stack_00000010 + 0x7d58);
    if (lVar8 == *(longlong *)(in_stack_00000010 + 0x7710)) {
      iVar6 = 0x2a;
    }
    else {
      iVar6 = *(int *)(in_stack_00000038 + 0x3d70);
    }
    lVar14 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    if (((lVar8 != *(longlong *)(lVar14 + 0xb70)) || (iVar6 != *(int *)(lVar14 + 0xb78))) ||
       (*(int *)(lVar14 + 0xb7c) != 0)) {
      *(longlong *)(lVar14 + 0xb70) = lVar8;
      *(int *)(lVar14 + 0xb78) = iVar6;
      *(undefined4 *)(lVar14 + 0xb7c) = 0;
      (*in_stack_00000020)();
      (*extraout_x11_01)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x690) = 0;
  }
  lVar8 = *(longlong *)(in_stack_00000018 + 0xf9b0);
  if (lVar8 != 0) {
    in_stack_00000058 = 0;
    uVar9 = *(uint *)(in_stack_00000038 + 0x39d8);
    in_stack_00000060 = *(uint *)(lVar8 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar8 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar18 = (*in_stack_00000020)
                        (lVar8,uVar9 + *(int *)(lVar8 + 0x3c) * *(int *)(in_stack_00000038 + 0x39e8)
                        );
    (*extraout_x11_02)(auVar18._0_8_,auVar18._8_8_,&stack0x00000058);
  }
  lVar8 = *(longlong *)(in_stack_00000018 + 0xf9b8);
  if (lVar8 != 0) {
    in_stack_00000058 = 0;
    uVar9 = *(uint *)(in_stack_00000038 + 0x39dc);
    in_stack_00000060 = *(uint *)(lVar8 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar8 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar18 = (*in_stack_00000020)
                        (lVar8,uVar9 + *(int *)(lVar8 + 0x3c) * *(int *)(in_stack_00000038 + 0x39ec)
                        );
    (*extraout_x11_03)(auVar18._0_8_,auVar18._8_8_,&stack0x00000058);
  }
  lVar8 = *(longlong *)(in_stack_00000018 + 0xf9c0);
  if (lVar8 != 0) {
    in_stack_00000058 = 0;
    uVar9 = *(uint *)(in_stack_00000038 + 0x39e0);
    in_stack_00000060 = *(uint *)(lVar8 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar8 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar18 = (*in_stack_00000020)
                        (lVar8,uVar9 + *(int *)(lVar8 + 0x3c) * *(int *)(in_stack_00000038 + 0x39f0)
                        );
    (*extraout_x11_04)(auVar18._0_8_,auVar18._8_8_,&stack0x00000058);
  }
  lVar8 = *(longlong *)(in_stack_00000018 + 0xf9c8);
  if (lVar8 != 0) {
    in_stack_00000058 = 0;
    uVar9 = *(uint *)(in_stack_00000038 + 0x39e4);
    in_stack_00000060 = *(uint *)(lVar8 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar8 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar18 = (*in_stack_00000020)
                        (lVar8,uVar9 + *(int *)(lVar8 + 0x3c) * *(int *)(in_stack_00000038 + 0x39f4)
                        );
    (*extraout_x11_05)(auVar18._0_8_,auVar18._8_8_,&stack0x00000058);
  }
  lVar8 = 0xbb4;
  if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
    lVar8 = 0x7b0;
  }
  lVar14 = *(longlong *)(in_stack_00000018 + 0xf9d0);
  if ((lVar14 != 0) && (*(int *)(in_stack_00000018 + lVar8) != 0)) {
    lVar8 = 3000;
    if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
      lVar8 = 0x7b4;
    }
    if (*(int *)(in_stack_00000018 + lVar8) != 0) {
      uVar9 = *(uint *)(in_stack_00000038 + 0x39f8);
      in_stack_00000058 = 0;
      in_stack_00000060 = *(uint *)(lVar14 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
      if (in_stack_00000060 == 0) {
        in_stack_00000060 = 1;
      }
      uStack0000000000000064 = *(uint *)(lVar14 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
      if (uStack0000000000000064 == 0) {
        uStack0000000000000064 = 1;
      }
      auVar18 = (*in_stack_00000020)
                          (lVar14,uVar9 + *(int *)(in_stack_00000038 + 0x39fc) *
                                          *(int *)(lVar14 + 0x3c));
      (*extraout_x11_06)(auVar18._0_8_,auVar18._8_8_,&stack0x00000058);
    }
  }
  return in_stack_00000030;
}

