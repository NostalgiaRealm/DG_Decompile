/*
 * FUN_180136e94 at 180136e94
 * undefined FUN_180136e94(void)
 * Address ranges: 180136e94-180136fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180136e94(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined8 *puVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *unaff_x20;
  longlong unaff_x21;
  longlong unaff_x22;
  longlong unaff_x26;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  longlong in_stack_00000010;
  longlong in_stack_00000018;
  code *in_stack_00000020;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  longlong in_stack_00000038;
  uint in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
  uint uStack0000000000000064;
  
  while( true ) {
    uVar12 = param_1 & 0xffffffff;
    lVar9 = unaff_x22 + uVar12 * 8;
    if (*(uint *)(lVar9 + 0x81c) < (uint)*(byte *)(lVar9 + 0x81b)) {
      fVar25 = (float)*(byte *)(lVar9 + 0x81b);
    }
    else {
      fVar25 = (float)*(uint *)(lVar9 + 0x81c);
    }
    lVar23 = unaff_x22 + (param_1 & 0xffffffff) * 0x34;
    *(float *)(lVar23 + 0x86c) = fVar25;
    bVar5 = *(byte *)(lVar9 + 0x819);
    bVar6 = *(byte *)(lVar9 + 0x81a);
    bVar7 = *(byte *)(lVar9 + 0x818);
    *(undefined4 *)(lVar23 + 0x870) = 0x7f7fffff;
    if (bVar5 == 2 || bVar6 == 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)
                (&DAT_18022c130 +
                ((ulonglong)bVar7 | ((ulonglong)(uint)bVar5 | (ulonglong)(uint)bVar6 << 1) << 1) * 4
                );
    }
    *(undefined4 *)(lVar23 + 0x840) = uVar17;
    puVar11 = (undefined8 *)(unaff_x21 + (param_1 & 0xffffffff) * 0x34);
    puVar16 = (undefined8 *)(unaff_x26 + (param_1 & 0xffffffff) * 0x34);
    uVar24 = *puVar16;
    uVar27 = puVar16[3];
    uVar26 = puVar16[2];
    puVar11[1] = puVar16[1];
    *puVar11 = uVar24;
    puVar11[3] = uVar27;
    puVar11[2] = uVar26;
    uVar24 = puVar16[4];
    uVar17 = *(undefined4 *)(puVar16 + 6);
    puVar11[5] = puVar16[5];
    puVar11[4] = uVar24;
    *(undefined4 *)(puVar11 + 6) = uVar17;
    lVar9 = FUN_180200a68(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
    if (lVar9 != unaff_x20[uVar12]) {
      FUN_180200e40(*(longlong *)(in_stack_00000010 + 0x76d8) + 0x628);
      unaff_x20[uVar12] = lVar9;
    }
    uVar13 = (in_stack_00000040 & 0xaaaaaaaa) >> 1 | (in_stack_00000040 & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    param_1 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
    uVar13 = (uint)param_1;
    if ((1 - (uVar13 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar13 >> 3)) =
         *(byte *)((longlong)&stack0x00000040 + (longlong)((int)uVar13 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
  }
  lVar9 = (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0 +
          *(longlong *)(in_stack_00000018 + 0xf6d0);
  bVar8 = *(longlong *)(lVar9 + 0x710) != *unaff_x20;
  if (bVar8) {
    *(longlong *)(lVar9 + 0x710) = *unaff_x20;
  }
  uVar13 = (uint)bVar8;
  if (*(longlong *)(lVar9 + 0x718) == *(longlong *)(in_stack_00000010 + 0x7c90)) {
LAB_18013701c:
    uVar21 = 3;
    iVar10 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x718) = *(longlong *)(in_stack_00000010 + 0x7c90);
    if (bVar8) {
      uVar13 = 2;
      goto LAB_18013701c;
    }
    iVar10 = 1;
    uVar13 = 1;
    uVar21 = 2;
  }
  uVar14 = uVar13;
  if ((*(longlong *)(lVar9 + 0x720) != *(longlong *)(in_stack_00000010 + 0x7c98)) &&
     (*(longlong *)(lVar9 + 0x720) = *(longlong *)(in_stack_00000010 + 0x7c98), uVar14 = uVar21,
     uVar13 == 0)) {
    iVar10 = 2;
    uVar14 = 1;
  }
  if (*(longlong *)(lVar9 + 0x728) == *(longlong *)(in_stack_00000010 + 0x7ca0)) {
LAB_180137080:
    if (uVar14 == 0) goto LAB_1801370b4;
  }
  else {
    *(longlong *)(lVar9 + 0x728) = *(longlong *)(in_stack_00000010 + 0x7ca0);
    if (uVar14 != 0) {
      uVar14 = 4 - iVar10;
      goto LAB_180137080;
    }
    iVar10 = 3;
    uVar14 = 1;
  }
  (*in_stack_00000020)(*(undefined8 *)(lVar9 + 0x6b8),iVar10,uVar14);
  (*extraout_x11)();
LAB_1801370b4:
  *(undefined4 *)(in_stack_00000038 + 0x36bc) = 0;
  if (*(char *)(in_stack_00000028 + 0x68f) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar3 = in_stack_00000018 + 0xfcd8;
    uVar12 = 0;
    iVar10 = 0;
    lVar20 = 0;
    lVar22 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    uVar19 = 0;
    lVar9 = lVar22 + 0xaf0;
    lVar23 = lVar22 + 0xb30;
    lVar2 = lVar22 + 0xa70;
    do {
      lVar15 = *(longlong *)(lVar3 + lVar20 * 8);
      iVar18 = (int)uVar19;
      if (((*(longlong *)(lVar2 + lVar20 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + lVar20 * 4,
          *(int *)(lVar9 + lVar20 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + lVar20 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + lVar20 * 4;
        *(longlong *)(lVar2 + lVar20 * 8) = lVar15;
        *(undefined4 *)(lVar9 + lVar20 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + lVar20 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar19;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 1;
        }
      }
      uVar13 = iVar18 + 1;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4,
          *(int *)(lVar9 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        lVar15 = lVar22 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 2;
        }
      }
      uVar13 = iVar18 + 2;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4,
          *(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 3;
        }
      }
      uVar13 = iVar18 + 3;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4,
          *(int *)(lVar9 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar9 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 4;
        }
      }
      uVar13 = iVar18 + 4;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4,
          *(int *)(lVar9 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar22 + (ulonglong)uVar13 * 4 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 5;
        }
      }
      uVar13 = iVar18 + 5;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) == lVar15) {
        lVar4 = lVar22 + (ulonglong)uVar13 * 4;
        lVar1 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        if ((*(int *)(lVar4 + 0xaf0) != *(int *)(lVar1 + 0xfe8)) ||
           (*(int *)(lVar4 + 0xb30) != *(int *)(lVar1 + 0x102c))) goto LAB_180137368;
      }
      else {
LAB_180137368:
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        lVar15 = lVar22 + (ulonglong)uVar13 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 6;
        }
      }
      uVar13 = iVar18 + 6;
      lVar15 = *(longlong *)(lVar3 + (ulonglong)uVar13 * 8);
      if (((*(longlong *)(lVar2 + (ulonglong)uVar13 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4,
          *(int *)(lVar9 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar23 + (ulonglong)uVar13 * 4) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + (ulonglong)uVar13 * 4;
        *(longlong *)(lVar2 + (ulonglong)uVar13 * 8) = lVar15;
        *(undefined4 *)(lVar9 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar23 + (ulonglong)uVar13 * 4) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          uVar12 = (ulonglong)uVar13;
          iVar10 = 1;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 7;
        }
      }
      uVar19 = (ulonglong)(iVar18 + 7);
      lVar15 = *(longlong *)(lVar3 + uVar19 * 8);
      if (((*(longlong *)(lVar2 + uVar19 * 8) != lVar15) ||
          (lVar4 = in_stack_00000018 + uVar19 * 4,
          *(int *)(lVar9 + uVar19 * 4) != *(int *)(lVar4 + 0xfe8))) ||
         (*(int *)(lVar22 + uVar19 * 4 + 0xb30) != *(int *)(lVar4 + 0x102c))) {
        lVar4 = in_stack_00000018 + uVar19 * 4;
        *(longlong *)(lVar2 + uVar19 * 8) = lVar15;
        lVar15 = lVar22 + uVar19 * 4;
        *(undefined4 *)(lVar15 + 0xaf0) = *(undefined4 *)(lVar4 + 0xfe8);
        *(undefined4 *)(lVar15 + 0xb30) = *(undefined4 *)(lVar4 + 0x102c);
        if (iVar10 == 0) {
          iVar10 = 1;
          uVar12 = uVar19;
        }
        else {
          iVar10 = (iVar18 - (int)uVar12) + 8;
        }
      }
      uVar19 = (ulonglong)(iVar18 + 8U);
      lVar20 = lVar20 + 8;
    } while (iVar18 + 8U < 0x10);
    if (iVar10 != 0) {
      (*in_stack_00000020)();
      (*extraout_x11_00)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x68f) = 0;
  }
  if (*(char *)(in_stack_00000028 + 0x690) != '\0' || in_stack_00000048 != in_stack_00000018) {
    lVar9 = *(longlong *)(in_stack_00000010 + 0x7d58);
    if (lVar9 == *(longlong *)(in_stack_00000010 + 0x7710)) {
      iVar10 = 0x2a;
    }
    else {
      iVar10 = *(int *)(in_stack_00000038 + 0x3d70);
    }
    lVar23 = *(longlong *)(in_stack_00000018 + 0xf6d0) +
             (ulonglong)*(uint *)(in_stack_00000018 + 0x18) * 0x18c0;
    if (((lVar9 != *(longlong *)(lVar23 + 0xb70)) || (iVar10 != *(int *)(lVar23 + 0xb78))) ||
       (*(int *)(lVar23 + 0xb7c) != 0)) {
      *(longlong *)(lVar23 + 0xb70) = lVar9;
      *(int *)(lVar23 + 0xb78) = iVar10;
      *(undefined4 *)(lVar23 + 0xb7c) = 0;
      (*in_stack_00000020)();
      (*extraout_x11_01)();
    }
    *(undefined1 *)(in_stack_00000028 + 0x690) = 0;
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9b0);
  if (lVar9 != 0) {
    in_stack_00000058 = 0;
    uVar13 = *(uint *)(in_stack_00000038 + 0x39d8);
    in_stack_00000060 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar28 = (*in_stack_00000020)
                        (lVar9,uVar13 + *(int *)(lVar9 + 0x3c) *
                                        *(int *)(in_stack_00000038 + 0x39e8));
    (*extraout_x11_02)(auVar28._0_8_,auVar28._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9b8);
  if (lVar9 != 0) {
    in_stack_00000058 = 0;
    uVar13 = *(uint *)(in_stack_00000038 + 0x39dc);
    in_stack_00000060 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar28 = (*in_stack_00000020)
                        (lVar9,uVar13 + *(int *)(lVar9 + 0x3c) *
                                        *(int *)(in_stack_00000038 + 0x39ec));
    (*extraout_x11_03)(auVar28._0_8_,auVar28._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9c0);
  if (lVar9 != 0) {
    in_stack_00000058 = 0;
    uVar13 = *(uint *)(in_stack_00000038 + 0x39e0);
    in_stack_00000060 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar28 = (*in_stack_00000020)
                        (lVar9,uVar13 + *(int *)(lVar9 + 0x3c) *
                                        *(int *)(in_stack_00000038 + 0x39f0));
    (*extraout_x11_04)(auVar28._0_8_,auVar28._8_8_,&stack0x00000058);
  }
  lVar9 = *(longlong *)(in_stack_00000018 + 0xf9c8);
  if (lVar9 != 0) {
    in_stack_00000058 = 0;
    uVar13 = *(uint *)(in_stack_00000038 + 0x39e4);
    in_stack_00000060 = *(uint *)(lVar9 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
    if (in_stack_00000060 == 0) {
      in_stack_00000060 = 1;
    }
    uStack0000000000000064 = *(uint *)(lVar9 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
    if (uStack0000000000000064 == 0) {
      uStack0000000000000064 = 1;
    }
    auVar28 = (*in_stack_00000020)
                        (lVar9,uVar13 + *(int *)(lVar9 + 0x3c) *
                                        *(int *)(in_stack_00000038 + 0x39f4));
    (*extraout_x11_05)(auVar28._0_8_,auVar28._8_8_,&stack0x00000058);
  }
  lVar9 = 0xbb4;
  if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
    lVar9 = 0x7b0;
  }
  lVar23 = *(longlong *)(in_stack_00000018 + 0xf9d0);
  if ((lVar23 != 0) && (*(int *)(in_stack_00000018 + lVar9) != 0)) {
    lVar9 = 3000;
    if (*(char *)(in_stack_00000050 + 0x662) == '\0') {
      lVar9 = 0x7b4;
    }
    if (*(int *)(in_stack_00000018 + lVar9) != 0) {
      uVar13 = *(uint *)(in_stack_00000038 + 0x39f8);
      in_stack_00000058 = 0;
      in_stack_00000060 = *(uint *)(lVar23 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
      if (in_stack_00000060 == 0) {
        in_stack_00000060 = 1;
      }
      uStack0000000000000064 = *(uint *)(lVar23 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
      if (uStack0000000000000064 == 0) {
        uStack0000000000000064 = 1;
      }
      auVar28 = (*in_stack_00000020)
                          (lVar23,uVar13 + *(int *)(in_stack_00000038 + 0x39fc) *
                                           *(int *)(lVar23 + 0x3c));
      (*extraout_x11_06)(auVar28._0_8_,auVar28._8_8_,&stack0x00000058);
    }
  }
  return in_stack_00000030;
}

