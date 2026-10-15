/*
 * FUN_180162568 at 180162568
 * undefined FUN_180162568(void)
 * Address ranges: 180162568-180162657;180162660-180162803;180162808-18016285f;180162874-1801628af;1801628b4-1801628ef;1801628f8-180162d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00018016266c) */
/* WARNING: Removing unreachable block (ram,0x000180162678) */
/* WARNING: Removing unreachable block (ram,0x0001801626a4) */
/* WARNING: Removing unreachable block (ram,0x0001801626f4) */
/* WARNING: Removing unreachable block (ram,0x0001801626ec) */
/* WARNING: Removing unreachable block (ram,0x0001801626f8) */
/* WARNING: Removing unreachable block (ram,0x000180162714) */
/* WARNING: Removing unreachable block (ram,0x00018016271c) */
/* WARNING: Removing unreachable block (ram,0x000180162744) */
/* WARNING: Removing unreachable block (ram,0x00018016275c) */
/* WARNING: Removing unreachable block (ram,0x0001801627a0) */
/* WARNING: Removing unreachable block (ram,0x0001801627a8) */
/* WARNING: Removing unreachable block (ram,0x0001801627bc) */
/* WARNING: Removing unreachable block (ram,0x0001801627c4) */
/* WARNING: Removing unreachable block (ram,0x0001801627c8) */
/* WARNING: Removing unreachable block (ram,0x0001801627d0) */
/* WARNING: Removing unreachable block (ram,0x0001801627d8) */
/* WARNING: Removing unreachable block (ram,0x0001801627e0) */
/* WARNING: Removing unreachable block (ram,0x0001801627f4) */
/* WARNING: Removing unreachable block (ram,0x000180162808) */
/* WARNING: Removing unreachable block (ram,0x000180162814) */
/* WARNING: Removing unreachable block (ram,0x000180162820) */
/* WARNING: Removing unreachable block (ram,0x000180162838) */
/* WARNING: Removing unreachable block (ram,0x000180162844) */
/* WARNING: Removing unreachable block (ram,0x000180162874) */
/* WARNING: Removing unreachable block (ram,0x000180162888) */
/* WARNING: Removing unreachable block (ram,0x000180162894) */
/* WARNING: Removing unreachable block (ram,0x0001801628bc) */
/* WARNING: Removing unreachable block (ram,0x000180162898) */
/* WARNING: Removing unreachable block (ram,0x0001801628f8) */
/* WARNING: Removing unreachable block (ram,0x00018016298c) */
/* WARNING: Removing unreachable block (ram,0x000180162990) */

bool FUN_180162568(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong lVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  longlong lVar29;
  undefined8 uVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  longlong lStack_8;
  
  auVar32 = FUN_180104f10();
  puVar10 = auVar32._8_8_;
  lVar22 = auVar32._0_8_;
  lVar4 = extraout_x15 * -0x10;
  *(undefined4 *)(&stack0xffffffffffffffc8 + lVar4) = param_4;
  thunk_FUN_1802236f8(lVar22 + 0xc0);
  uVar26 = *(uint *)(lVar22 + 0xa8);
  if (uVar26 == 0) {
LAB_180162618:
    lVar23 = 0;
  }
  else {
    uVar1 = *puVar10;
    uVar19 = 0;
    uVar17 = uVar26;
    do {
      uVar21 = uVar17 + uVar19 >> 1;
      uVar15 = *(ulonglong *)(*(longlong *)(lVar22 + 0xa0) + (ulonglong)uVar21 * 0x2e0);
      uVar5 = uVar21;
      if (uVar15 <= uVar1) {
        if (uVar1 <= uVar15) break;
        uVar19 = uVar21 + 1;
        uVar21 = uVar21 + 1;
        uVar5 = uVar17;
      }
      uVar17 = uVar5;
    } while (uVar17 != uVar19);
    if (uVar21 == uVar26) goto LAB_180162618;
    if (*(ulonglong *)((ulonglong)uVar21 * 0x2e0 + *(longlong *)(lVar22 + 0xa0)) != (ulonglong)uVar1
       ) goto LAB_180162618;
    lVar23 = ((ulonglong)uVar21 * 0x2e0 | 0x10) + *(longlong *)(lVar22 + 0xa0);
  }
  if (lVar23 == 0) {
    FUN_180222c50(&stack0x000000a0 + lVar4,0,0x2d0);
    puVar7 = (undefined8 *)FUN_1802229a8(0x270);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(puVar7 + 3,puVar10,0x254);
    }
    *(undefined8 *)(&stack0x000000a0 + lVar4) = 0;
    puVar7 = (undefined8 *)0x0;
    goto LAB_180162d70;
  }
  *(longlong *)(&stack0xffffffffffffffb8 + lVar4) = lVar22;
  *(longlong *)(&stack0xffffffffffffffc0 + lVar4) = lVar23;
  puVar24 = (undefined4 *)(lVar23 + 0x288);
  *(uint **)(&stack0xffffffffffffffd0 + lVar4) = puVar10;
  *(longlong *)(&stack0xffffffffffffffd8 + lVar4) = lVar23 + 0x18;
  uVar26 = 0xffffffff;
  uVar15 = 0;
  do {
    lVar25 = *(longlong *)(lVar23 + 8 + uVar15 * 0x50);
    uVar19 = (uint)uVar15;
    if ((lVar25 == 0) ||
       (*(undefined4 *)(&stack0xffffffffffffffb0 + lVar4) = *puVar24,
       ((byte)(&stack0xffffffffffffffb0)[((int)uVar19 >> 3) + lVar4] >> (ulonglong)(uVar19 & 7) & 1)
       == 0)) {
      if (uVar26 == 0xffffffff) {
        uVar26 = uVar19;
      }
    }
    else {
      iVar6 = FUN_180222c00(param_3,uVar15 * 0x50 + *(longlong *)(&stack0xffffffffffffffd8 + lVar4),
                            0x40);
      if (iVar6 == 0) {
        lVar22 = *(longlong *)(&stack0xffffffffffffffb8 + lVar4);
        puVar7 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4);
        uVar18 = puVar7[uVar15 * 10 + 2];
        *(longlong *)(&stack0x00000048 + lVar4) = lVar25;
        *(undefined8 *)(&stack0x00000050 + lVar4) = uVar18;
        goto LAB_180162bdc;
      }
    }
    uVar19 = uVar19 + 1;
    uVar15 = (ulonglong)uVar19;
  } while ((int)uVar19 < 8);
  lVar23 = *(longlong *)(&stack0xffffffffffffffd0 + lVar4);
  lVar22 = *(longlong *)(&stack0xffffffffffffffb8 + lVar4);
  puVar7 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4);
  if (uVar19 == 8) {
    iVar6 = *(int *)(lVar23 + 8);
    if (uVar26 == 0xffffffff) {
      uVar26 = 0;
    }
    *(uint *)(&stack0xffffffffffffffb0 + lVar4) = uVar26;
    uVar15 = 0;
    if (iVar6 != 0) {
      *(undefined4 **)(&stack0xffffffffffffffb8 + lVar4) = puVar24;
      *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4) = puVar7;
      lVar25 = lVar23 + 0x214;
      puVar16 = &stack0x00000b7c + lVar4;
      puVar14 = &stack0x00000b80 + lVar4;
      puVar13 = &stack0x00000b84 + lVar4;
      puVar12 = &stack0x00000b88 + lVar4;
      puVar11 = &stack0x00000b8c + lVar4;
      do {
        lVar29 = uVar15 * 0x20;
        lVar25 = lVar23 + (ulonglong)*(byte *)(lVar25 + uVar15) * 8;
        bVar2 = *(byte *)(lVar25 + 0x19);
        auVar33 = FUN_18018e3e8(bVar2);
        cVar3 = *(char *)(lVar25 + 0x14);
        *(uint *)(extraout_x11 + lVar29) = bVar2 & 0xf;
        bVar2 = *(byte *)(lVar25 + 0x18);
        *(longlong *)(extraout_x12 + lVar29) = auVar33._0_8_;
        *(int *)(puVar14 + lVar29) = (int)cVar3;
        *(undefined4 *)(puVar16 + lVar29) = *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
        *(uint *)(puVar13 + lVar29) = (uint)*(byte *)(lVar25 + 0x17) << 2;
        if (param_3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar3 * 4);
        }
        uVar26 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar26;
        *(uint *)(puVar12 + lVar29) = (uint)(iVar6 != 0);
        *(int *)(puVar11 + lVar29) = iVar6;
        lVar25 = extraout_x15_00;
      } while (uVar26 < auVar33._8_4_);
      puVar24 = *(undefined4 **)(&stack0xffffffffffffffb8 + lVar4);
      puVar7 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4);
    }
    uVar18 = FUN_180204620(*(longlong *)(lVar22 + -0x28) +
                           (ulonglong)*(uint *)(lVar22 + -0x20) * 0x1ac0 + 0x22c0,
                           &stack0x00000b70 + lVar4);
    uVar15 = 0;
    *(undefined8 *)(&stack0x00000048 + lVar4) = uVar18;
    puVar8 = puVar7 + (longlong)*(int *)(&stack0xffffffffffffffb0 + lVar4) * 10;
    puVar8[1] = uVar18;
    if (*(int *)(lVar23 + 0x25c) != 0) {
      *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4) = puVar8;
      lVar25 = lVar23 + 0x468;
      *(undefined4 **)(&stack0xffffffffffffffb8 + lVar4) = puVar24;
      *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4) = puVar7;
      puVar16 = &stack0x0000137c + lVar4;
      puVar14 = &stack0x00001380 + lVar4;
      puVar13 = &stack0x00001384 + lVar4;
      puVar12 = &stack0x00001388 + lVar4;
      puVar11 = &stack0x0000138c + lVar4;
      do {
        lVar29 = uVar15 * 0x20;
        lVar25 = lVar23 + (ulonglong)*(byte *)(lVar25 + uVar15) * 8;
        bVar2 = *(byte *)(lVar25 + 0x26d);
        auVar33 = FUN_18018e3e8(bVar2);
        cVar3 = *(char *)(lVar25 + 0x268);
        *(uint *)(extraout_x11_00 + lVar29) = bVar2 & 0xf;
        bVar2 = *(byte *)(lVar25 + 0x26c);
        *(longlong *)(extraout_x12_00 + lVar29) = auVar33._0_8_;
        *(int *)(puVar14 + lVar29) = (int)cVar3;
        *(undefined4 *)(puVar16 + lVar29) = *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
        *(uint *)(puVar13 + lVar29) = (uint)*(byte *)(lVar25 + 0x26b) << 2;
        if (param_3 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar3 * 4);
        }
        uVar26 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar26;
        *(uint *)(puVar12 + lVar29) = (uint)(iVar6 != 0);
        *(int *)(puVar11 + lVar29) = iVar6;
        lVar25 = extraout_x15_01;
      } while (uVar26 < auVar33._8_4_);
      puVar24 = *(undefined4 **)(&stack0xffffffffffffffb8 + lVar4);
      puVar7 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar4);
      puVar8 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4);
    }
    uVar18 = FUN_180204620(*(longlong *)(lVar22 + -0x28) +
                           (ulonglong)*(uint *)(lVar22 + -0x20) * 0x1ac0 + 0x22c0,
                           &stack0x00001370 + lVar4);
    uVar26 = *(uint *)(&stack0xffffffffffffffb0 + lVar4);
    puVar8[2] = uVar18;
    *(undefined8 *)(&stack0x00000050 + lVar4) = uVar18;
    iVar6 = (int)uVar26 >> 3;
    *(byte *)((longlong)puVar24 + (longlong)iVar6) =
         *(byte *)((longlong)puVar24 + (longlong)iVar6) | (byte)(1 << (ulonglong)(uVar26 & 7));
  }
LAB_180162bdc:
  uVar26 = *(uint *)(lVar22 + -0x20);
  *(undefined8 *)(&stack0x00000040 + lVar4) = *puVar7;
  *(undefined4 *)(&stack0x00000058 + lVar4) = *(undefined4 *)(&stack0xffffffffffffffc8 + lVar4);
  uVar18 = puVar7[0x53];
  *(undefined8 *)(&stack0x0000005c + lVar4) = puVar7[0x52];
  *(undefined8 *)(&stack0x00000064 + lVar4) = uVar18;
  uVar18 = puVar7[0x55];
  *(undefined8 *)(&stack0x0000006c + lVar4) = puVar7[0x54];
  *(undefined8 *)(&stack0x00000074 + lVar4) = uVar18;
  uVar18 = puVar7[0x57];
  *(undefined8 *)(&stack0x0000007c + lVar4) = puVar7[0x56];
  *(undefined8 *)(&stack0x00000084 + lVar4) = uVar18;
  uVar18 = puVar7[0x59];
  *(undefined8 *)(&stack0x0000008c + lVar4) = puVar7[0x58];
  *(undefined8 *)(&stack0x00000094 + lVar4) = uVar18;
  lVar23 = *(longlong *)(lVar22 + -0x28) + (ulonglong)uVar26 * 0x1ac0;
  FUN_180221850(lVar23 + 0x1bc0);
  if (*(char *)(lVar23 + 0x1dc4) == '\0') {
LAB_180162d28:
    uVar18 = *(undefined8 *)(&stack0x00000050 + lVar4);
    plVar9 = *(longlong **)(lVar23 + 0x1da0);
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4) = *(undefined8 *)(&stack0x00000048 + lVar4);
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4) = *(undefined8 *)(&stack0x00000040 + lVar4);
    (&lStack_8)[extraout_x15 * -2] = *(longlong *)(&stack0x00000058 + lVar4);
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar4) = uVar18;
    uVar27 = *(undefined8 *)(&stack0x00000068 + lVar4);
    uVar18 = *(undefined8 *)(&stack0x00000060 + lVar4);
    uVar30 = *(undefined8 *)(&stack0x00000078 + lVar4);
    uVar28 = *(undefined8 *)(&stack0x00000070 + lVar4);
    *plVar9 = lVar22 + -0x30;
    *(undefined8 *)(&stack0x00000008 + lVar4) = uVar27;
    *(undefined8 *)(&stack0x00000000 + lVar4) = uVar18;
    *(undefined8 *)(&stack0x00000018 + lVar4) = uVar30;
    *(undefined8 *)(&stack0x00000010 + lVar4) = uVar28;
    *(undefined8 *)(&stack0x00000028 + lVar4) = *(undefined8 *)(&stack0x00000088 + lVar4);
    *(undefined8 *)(&stack0x00000020 + lVar4) = *(undefined8 *)(&stack0x00000080 + lVar4);
    *(undefined8 *)(&stack0x00000038 + lVar4) = *(undefined8 *)(&stack0x00000098 + lVar4);
    *(undefined8 *)(&stack0x00000030 + lVar4) = *(undefined8 *)(&stack0x00000090 + lVar4);
    lVar25 = *(longlong *)(&stack0xffffffffffffffe0 + lVar4);
    lVar31 = (&lStack_8)[extraout_x15 * -2];
    lVar29 = *(longlong *)(&stack0xfffffffffffffff0 + lVar4);
    plVar9[2] = *(longlong *)(&stack0xffffffffffffffe8 + lVar4);
    plVar9[1] = lVar25;
    plVar9[4] = lVar31;
    plVar9[3] = lVar29;
    lVar25 = *(longlong *)(&stack0x00000000 + lVar4);
    lVar31 = *(longlong *)(&stack0x00000018 + lVar4);
    lVar29 = *(longlong *)(&stack0x00000010 + lVar4);
    plVar9[6] = *(longlong *)(&stack0x00000008 + lVar4);
    plVar9[5] = lVar25;
    plVar9[8] = lVar31;
    plVar9[7] = lVar29;
    lVar25 = *(longlong *)(&stack0x00000020 + lVar4);
    lVar31 = *(longlong *)(&stack0x00000038 + lVar4);
    lVar29 = *(longlong *)(&stack0x00000030 + lVar4);
    plVar9[10] = *(longlong *)(&stack0x00000028 + lVar4);
    plVar9[9] = lVar25;
    plVar9[0xc] = lVar31;
    plVar9[0xb] = lVar29;
    FUN_180162da0();
  }
  else {
    puVar8 = (undefined8 *)FUN_1802218b0(lVar23 + 0x1bc0,0x68);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar23 + 0x1bc0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar23 + 0x1bc0);
      goto LAB_180162d28;
    }
    FUN_1801042e0(lVar23 + 0x1dc0);
    uVar27 = *(undefined8 *)(&stack0x00000048 + lVar4);
    uVar18 = *(undefined8 *)(&stack0x00000040 + lVar4);
    lVar25 = *(longlong *)(&stack0x00000058 + lVar4);
    uVar28 = *(undefined8 *)(&stack0x00000050 + lVar4);
    puVar8[1] = 0x68;
    puVar8[2] = lVar22 + -0x30;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4) = uVar27;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4) = uVar18;
    (&lStack_8)[extraout_x15 * -2] = lVar25;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar4) = uVar28;
    *(undefined8 *)(&stack0x00000008 + lVar4) = *(undefined8 *)(&stack0x00000068 + lVar4);
    *(undefined8 *)(&stack0x00000000 + lVar4) = *(undefined8 *)(&stack0x00000060 + lVar4);
    *(undefined8 *)(&stack0x00000018 + lVar4) = *(undefined8 *)(&stack0x00000078 + lVar4);
    *(undefined8 *)(&stack0x00000010 + lVar4) = *(undefined8 *)(&stack0x00000070 + lVar4);
    *(undefined8 *)(&stack0x00000028 + lVar4) = *(undefined8 *)(&stack0x00000088 + lVar4);
    *(undefined8 *)(&stack0x00000020 + lVar4) = *(undefined8 *)(&stack0x00000080 + lVar4);
    *(undefined8 *)(&stack0x00000038 + lVar4) = *(undefined8 *)(&stack0x00000098 + lVar4);
    *(undefined8 *)(&stack0x00000030 + lVar4) = *(undefined8 *)(&stack0x00000090 + lVar4);
    uVar18 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4);
    lVar25 = (&lStack_8)[extraout_x15 * -2];
    uVar27 = *(undefined8 *)(&stack0xfffffffffffffff0 + lVar4);
    puVar8[4] = *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4);
    puVar8[3] = uVar18;
    puVar8[6] = lVar25;
    puVar8[5] = uVar27;
    uVar18 = *(undefined8 *)(&stack0x00000000 + lVar4);
    uVar28 = *(undefined8 *)(&stack0x00000018 + lVar4);
    uVar27 = *(undefined8 *)(&stack0x00000010 + lVar4);
    puVar8[8] = *(undefined8 *)(&stack0x00000008 + lVar4);
    puVar8[7] = uVar18;
    puVar8[10] = uVar28;
    puVar8[9] = uVar27;
    uVar18 = *(undefined8 *)(&stack0x00000020 + lVar4);
    uVar28 = *(undefined8 *)(&stack0x00000038 + lVar4);
    uVar27 = *(undefined8 *)(&stack0x00000030 + lVar4);
    puVar8[0xc] = *(undefined8 *)(&stack0x00000028 + lVar4);
    puVar8[0xb] = uVar18;
    puVar8[0xe] = uVar28;
    puVar8[0xd] = uVar27;
    puVar20 = (undefined8 *)((longlong)puVar8 + 0x7fU & 0xfffffffffffffff8);
    DataMemoryBarrier(2,3);
    *puVar20 = 0;
    *puVar8 = FUN_180162da0;
    *(undefined8 **)(lVar23 + (ulonglong)*(uint *)(lVar23 + 0x1dbc) * 0x28 + 0x1c50) = puVar20;
    if (*(char *)(lVar23 + 0x1dc5) != '\0') {
      FUN_180221bb0(lVar23 + 0x1bc0);
      thunk_FUN_180223874(*(undefined8 *)(lVar23 + 0x1c40));
      goto LAB_180162d70;
    }
  }
  FUN_180221bb0(lVar23 + 0x1bc0);
LAB_180162d70:
  thunk_FUN_18022370c(lVar22 + 0xc0);
  return puVar7 != (undefined8 *)0x0;
}

