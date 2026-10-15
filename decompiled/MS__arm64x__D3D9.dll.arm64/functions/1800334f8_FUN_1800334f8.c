/*
 * FUN_1800334f8 at 1800334f8
 * undefined FUN_1800334f8(void)
 * Address ranges: 1800334f8-180033dbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800334f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint uVar25;
  longlong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x11_01;
  longlong extraout_x12;
  ulonglong uVar26;
  longlong extraout_x12_00;
  longlong extraout_x12_01;
  longlong extraout_x13;
  longlong extraout_x13_00;
  longlong extraout_x13_01;
  ulonglong uVar27;
  uint *puVar28;
  uint *extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  uint uVar29;
  ulonglong *puVar30;
  undefined8 *puVar31;
  longlong lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  
  auVar37 = FUN_180001640();
  puVar11 = auVar37._8_8_;
  lVar8 = auVar37._0_8_;
  lVar5 = extraout_x15 * -0x10;
  *(undefined4 *)(&stack0xffffffffffffffb8 + lVar5) = param_4;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar8 + 0xb0);
  uVar29 = *(uint *)(lVar8 + 0x98);
  if (uVar29 == 0) {
LAB_1800335ac:
    puVar30 = (ulonglong *)0x0;
  }
  else {
    uVar1 = *puVar11;
    uVar19 = 0;
    uVar21 = uVar29;
    do {
      uVar25 = uVar21 + uVar19 >> 1;
      uVar27 = *(ulonglong *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar25 * 0x2f0);
      uVar6 = uVar25;
      if (uVar27 <= uVar1) {
        if (uVar1 <= uVar27) break;
        uVar19 = uVar25 + 1;
        uVar25 = uVar25 + 1;
        uVar6 = uVar21;
      }
      uVar21 = uVar6;
    } while (uVar21 != uVar19);
    if ((uVar25 == uVar29) ||
       (puVar22 = (ulonglong *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar25 * 0x2f0),
       puVar30 = puVar22 + 2, *puVar22 != (ulonglong)uVar1)) goto LAB_1800335ac;
  }
  if (puVar30 == (ulonglong *)0x0) {
    func_0x000180222c50(&stack0x00000010 + lVar5,0,0x2e0);
    puVar9 = (undefined8 *)FUN_180102f80(0x270);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      *(undefined8 *)(&stack0x00000010 + lVar5) = 0;
    }
    else {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      thunk_FUN_180001218(puVar9 + 3,puVar11,0x254);
      *(undefined8 **)(&stack0x00000010 + lVar5) = puVar9;
    }
    puVar31 = (undefined8 *)0x0;
    if (puVar9 == (undefined8 *)0x0) goto LAB_180033d88;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0x100;
    (&stack0xffffffffffffffd8)[lVar5] = 1;
    uVar10 = thunk_FUN_180102f80(0x100);
    uVar17 = *(undefined8 *)(lVar8 + 8);
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = uVar10;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar10;
    *(uint **)(&stack0x000002f0 + lVar5) = puVar11;
    *(undefined8 *)(&stack0x000002f8 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000300 + lVar5) = uVar17;
    *(undefined8 *)(&stack0x00000308 + lVar5) = 0;
    func_0x000180222c50(&stack0x00000350 + lVar5,0,0x430);
    func_0x000180222c50(&stack0x000003c0 + lVar5,0,0x3c0);
    *(undefined4 *)(&stack0x00000000 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000318 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000310 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000328 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000320 + lVar5) = 0;
    *(undefined4 *)(&stack0x00000310 + lVar5) = 0x10040;
    *(undefined8 *)(&stack0x00000338 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000330 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000348 + lVar5) = 0;
    *(undefined8 *)(&stack0x00000340 + lVar5) = 0;
    *(undefined1 **)(&stack0x00000340 + lVar5) = &stack0x00000366 + lVar5;
    *(undefined2 *)(&stack0x00000348 + lVar5) = 0x40;
    *(undefined8 *)(&stack0x000003a8 + lVar5) = 0x41040000110400;
    *(undefined4 *)(&stack0x000003b0 + lVar5) = 0x20000d00;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = 0x43425844;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
    *(undefined8 *)(&stack0x000005c4 + lVar5) = 0x11080300210803;
    *(undefined8 *)(&stack0x000005bc + lVar5) = 0x31080300410803;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = 0x100000000;
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar5) = 0x100000000;
    *(undefined8 *)(&stack0x000005d4 + lVar5) = 0x11080400210804;
    *(undefined8 *)(&stack0x000005cc + lVar5) = 0x31080400410804;
    uVar10 = FUN_1800f5a90(&stack0xffffffffffffffc0 + lVar5,&stack0xffffffffffffffe0 + lVar5,0x24);
    *(int *)(*(longlong *)(&stack0xffffffffffffffc0 + lVar5) + 0x20) =
         (int)*(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) -
         (int)*(longlong *)(&stack0xffffffffffffffc0 + lVar5);
    FUN_180076f20(uVar10,&stack0xffffffffffffffc0 + lVar5,&stack0x000002f0 + lVar5);
    FUN_1800f5ba0(&stack0xffffffffffffffc0 + lVar5);
    uVar10 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
    uVar27 = 0;
    uVar19 = *(uint *)(lVar8 + -0x20);
    lVar23 = *(longlong *)(lVar8 + -0x28);
    uVar29 = puVar11[2];
    iVar7 = (int)*(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) - (int)uVar10;
    *(undefined8 *)(&stack0x00000018 + lVar5) = uVar10;
    *(int *)(&stack0x00000020 + lVar5) = iVar7;
    lVar23 = lVar23 + (ulonglong)uVar19 * 0x18c0;
    plVar15 = *(longlong **)(lVar23 + 0x6b0);
    if (uVar29 != 0) {
      *(longlong *)(&stack0xffffffffffffffa0 + lVar5) = lVar23;
      puVar28 = puVar11 + 0x85;
      puVar16 = &stack0x00000300 + lVar5;
      puVar14 = &stack0x00000304 + lVar5;
      puVar13 = &stack0x00000308 + lVar5;
      puVar12 = &stack0x0000030c + lVar5;
      do {
        bVar3 = *(byte *)((longlong)puVar28 + uVar27);
        bVar2 = *(byte *)((longlong)puVar11 + (ulonglong)bVar3 * 8 + 0x19);
        auVar36 = FUN_180079d90(bVar2);
        uVar29 = puVar11[(ulonglong)bVar3 * 2 + 5];
        *(uint *)(extraout_x12 + extraout_x15_00) = bVar2 & 0xf;
        uVar19 = puVar11[(ulonglong)bVar3 * 2 + 6];
        *(longlong *)(extraout_x13 + extraout_x15_00) = auVar36._0_8_;
        *(int *)(puVar16 + extraout_x15_00) = (int)(char)uVar29;
        *(undefined4 *)(extraout_x11 + extraout_x15_00) =
             *(undefined4 *)(&DAT_18022c180 + (ulonglong)(byte)uVar19 * 4);
        *(uint *)(puVar14 + extraout_x15_00) =
             (uint)*(byte *)((longlong)puVar11 + (ulonglong)bVar3 * 8 + 0x17) << 2;
        if (param_3 == (undefined8 *)0x0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)(char)uVar29 * 4);
        }
        uVar29 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar29;
        *(uint *)(puVar13 + extraout_x15_00) = (uint)(iVar20 != 0);
        *(int *)(puVar12 + extraout_x15_00) = iVar20;
        puVar28 = extraout_x14;
      } while (uVar29 < auVar36._8_4_);
      lVar23 = *(longlong *)(&stack0xffffffffffffffa0 + lVar5);
    }
    lVar18 = *plVar15;
    *(undefined8 *)(&stack0xffffffffffffffa8 + lVar5) = 0;
    (**(code **)(lVar18 + 0x58))
              (plVar15,&stack0x000002f0 + lVar5,uVar27,uVar10,iVar7,&stack0xffffffffffffffa8 + lVar5
              );
    plVar15 = *(longlong **)(&stack0xffffffffffffffa8 + lVar5);
    *(longlong **)(&stack0x00000028 + lVar5) = plVar15;
    if (plVar15 == (longlong *)0x0) {
LAB_1800339b0:
      if (puVar9 != (undefined8 *)0x0) {
        thunk_FUN_180102fc0(*puVar9);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        FUN_180102fc0(puVar9,0x270);
      }
    }
    else {
      lVar23 = FUN_1800328f0(puVar11 + 0x95,param_3,uVar10,iVar7,*(undefined8 *)(lVar23 + 0x6b0));
      *(longlong *)(&stack0x00000030 + lVar5) = lVar23;
      if (lVar23 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        goto LAB_1800339b0;
      }
      uVar10 = 0;
      uVar35 = param_3[1];
      uVar34 = *param_3;
      uVar33 = param_3[3];
      uVar17 = param_3[2];
      uVar29 = 0;
      uVar19 = *(uint *)(lVar8 + 0x98);
      uVar1 = *puVar11;
      uVar27 = (ulonglong)uVar1;
      *(uint *)(&stack0x000002ac + lVar5) = puVar11[0x12a];
      *(undefined8 *)(&stack0x00000040 + lVar5) = uVar35;
      *(undefined8 *)(&stack0x00000038 + lVar5) = uVar34;
      *(undefined8 *)(&stack0x00000050 + lVar5) = uVar33;
      *(undefined8 *)(&stack0x00000048 + lVar5) = uVar17;
      uVar34 = param_3[4];
      uVar33 = param_3[7];
      uVar17 = param_3[6];
      *(undefined8 *)(&stack0x00000060 + lVar5) = param_3[5];
      *(undefined8 *)(&stack0x00000058 + lVar5) = uVar34;
      *(undefined8 *)(&stack0x00000070 + lVar5) = uVar33;
      *(undefined8 *)(&stack0x00000068 + lVar5) = uVar17;
      *(undefined4 *)(&stack0x000002a8 + lVar5) = 1;
      *(undefined8 *)(&stack0x000002b8 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002b0 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002c8 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002c0 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002d8 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002d0 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002e8 + lVar5) = 0;
      *(undefined8 *)(&stack0x000002e0 + lVar5) = 0;
      if (uVar19 != 0) {
        uVar21 = 0;
        uVar25 = uVar19;
        do {
          uVar29 = uVar25 + uVar21 >> 1;
          uVar26 = *(ulonglong *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar29 * 0x2f0);
          uVar6 = uVar29;
          if (uVar26 <= uVar27) {
            if (uVar27 <= uVar26) break;
            uVar21 = uVar29 + 1;
            uVar29 = uVar29 + 1;
            uVar6 = uVar25;
          }
          uVar25 = uVar6;
        } while (uVar25 != uVar21);
      }
      if ((uVar29 == uVar19) ||
         (puVar30 = (ulonglong *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar29 * 0x2f0),
         *puVar30 != uVar27)) {
        uVar21 = *(uint *)(lVar8 + 0x9c);
        if (uVar21 == uVar19) {
          uVar19 = 0x10;
          if (uVar21 != 0) {
            uVar19 = uVar21 << 1;
          }
          lVar23 = thunk_FUN_180102f80((ulonglong)uVar19 * 0x2f0);
          if (lVar23 != 0) {
            uVar26 = 0;
            if (*(int *)(lVar8 + 0x98) != 0) {
              do {
                thunk_FUN_180001218(lVar23 + uVar26 * 0x2f0,
                                    *(longlong *)(lVar8 + 0x90) + uVar26 * 0x2f0,0x2f0);
                uVar21 = (int)uVar26 + 1;
                uVar26 = (ulonglong)uVar21;
              } while (uVar21 < *(uint *)(lVar8 + 0x98));
            }
            thunk_FUN_180102fc0(*(undefined8 *)(lVar8 + 0x88));
            *(longlong *)(lVar8 + 0x88) = lVar23;
            *(longlong *)(lVar8 + 0x90) = lVar23;
            *(uint *)(lVar8 + 0x9c) = uVar19;
          }
        }
        uVar19 = *(uint *)(lVar8 + 0x98);
        if (*(uint *)(lVar8 + 0x9c) != uVar19) {
          while (uVar29 < uVar19) {
            thunk_FUN_180001218(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar19 * 0x2f0,
                                *(longlong *)(lVar8 + 0x90) + (ulonglong)(uVar19 - 1) * 0x2f0,0x2f0)
            ;
            uVar19 = uVar19 - 1;
          }
          lVar23 = (ulonglong)uVar29 * 0x2f0;
          *(int *)(lVar8 + 0x98) = *(int *)(lVar8 + 0x98) + 1;
          *(uint *)(lVar23 + *(longlong *)(lVar8 + 0x90) + 8) = uVar1;
          thunk_FUN_180001218(lVar23 + *(longlong *)(lVar8 + 0x90) + 0x10,&stack0x00000010 + lVar5,
                              0x2e0);
          *(ulonglong *)(*(longlong *)(lVar8 + 0x90) + lVar23) = uVar27;
        }
      }
      else {
        thunk_FUN_180001218(puVar30 + 2,&stack0x00000010 + lVar5,0x2e0);
      }
      puVar30 = (ulonglong *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar29 * 0x2f0 + 0x10);
    }
    thunk_FUN_180102fc0(uVar10);
    puVar31 = (undefined8 *)0x0;
    if (puVar30 == (ulonglong *)0x0) goto LAB_180033d88;
  }
  *(ulonglong **)(&stack0xffffffffffffffa0 + lVar5) = puVar30;
  puVar22 = puVar30 + 0x53;
  *(uint **)(&stack0xffffffffffffffb0 + lVar5) = puVar11;
  uVar29 = 0xffffffff;
  uVar27 = 0;
  do {
    uVar26 = puVar30[uVar27 * 10 + 3];
    uVar19 = (uint)uVar27;
    if ((uVar26 == 0) ||
       (*(int *)(&stack0xffffffffffffffa8 + lVar5) = (int)*puVar22,
       ((byte)(&stack0xffffffffffffffa8)[((int)uVar19 >> 3) + lVar5] >> (ulonglong)(uVar19 & 7) & 1)
       == 0)) {
      if (uVar29 == 0xffffffff) {
        uVar29 = uVar19;
      }
    }
    else {
      iVar7 = func_0x000180222c00(param_3,puVar30 + uVar27 * 10 + 5,0x40);
      if (iVar7 == 0) {
        puVar31 = *(undefined8 **)(&stack0xffffffffffffffa0 + lVar5);
        *(ulonglong *)(lVar8 + 0x78) = uVar26;
        *(undefined8 *)(lVar8 + 0x80) = puVar31[uVar27 * 10 + 4];
        goto LAB_180033d5c;
      }
    }
    uVar19 = uVar19 + 1;
    uVar27 = (ulonglong)uVar19;
  } while ((int)uVar19 < 8);
  lVar23 = *(longlong *)(&stack0xffffffffffffffb0 + lVar5);
  puVar31 = *(undefined8 **)(&stack0xffffffffffffffa0 + lVar5);
  if (uVar19 == 8) {
    if (uVar29 == 0xffffffff) {
      uVar29 = 0;
    }
    plVar15 = (longlong *)puVar31[(longlong)(int)uVar29 * 10 + 3];
    if (plVar15 != (longlong *)0x0) {
      lVar32 = *(longlong *)(lVar8 + -0x28);
      lVar18 = lVar32 + (ulonglong)*(uint *)(lVar8 + -0x20) * 0x18c0;
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar32 + 0x620);
      if (plVar15 == *(longlong **)(lVar18 + 0xba0)) {
        *(undefined8 *)(lVar18 + 0xba0) = 0;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar32 + 0x620);
      lVar32 = *(longlong *)(lVar8 + -0x28);
      plVar15 = (longlong *)puVar31[(longlong)(int)uVar29 * 10 + 4];
      lVar18 = lVar32 + (ulonglong)*(uint *)(lVar8 + -0x20) * 0x18c0;
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar32 + 0x620);
      if (plVar15 == *(longlong **)(lVar18 + 0xba0)) {
        *(undefined8 *)(lVar18 + 0xba0) = 0;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar32 + 0x620);
    }
    uVar26 = 0;
    uVar27 = (ulonglong)*(uint *)(puVar31 + 2);
    uVar10 = puVar31[1];
    lVar18 = *(longlong *)(lVar8 + -0x28) + (ulonglong)*(uint *)(lVar8 + -0x20) * 0x18c0;
    plVar15 = *(longlong **)(lVar18 + 0x6b0);
    if (*(int *)(lVar23 + 8) != 0) {
      *(ulonglong *)(&stack0xffffffffffffffa0 + lVar5) = uVar27;
      *(undefined8 *)(&stack0xffffffffffffffa8 + lVar5) = uVar10;
      *(longlong *)(&stack0xffffffffffffffb0 + lVar5) = lVar18;
      puVar16 = &stack0x00000b08 + lVar5;
      puVar14 = &stack0x00000b0c + lVar5;
      do {
        lVar32 = uVar26 << 5;
        lVar18 = lVar23 + (ulonglong)*(byte *)(lVar23 + 0x214 + uVar26) * 8;
        bVar2 = *(byte *)(lVar18 + 0x19);
        auVar36 = FUN_180079d90(bVar2);
        cVar4 = *(char *)(lVar18 + 0x14);
        *(uint *)(extraout_x14_00 + lVar32) = bVar2 & 0xf;
        bVar2 = *(byte *)(lVar18 + 0x18);
        *(longlong *)(extraout_x15_01 + lVar32) = auVar36._0_8_;
        *(int *)(extraout_x12_00 + lVar32) = (int)cVar4;
        *(undefined4 *)(extraout_x13_00 + lVar32) =
             *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
        *(uint *)(extraout_x11_00 + lVar32) = (uint)*(byte *)(lVar18 + 0x17) << 2;
        if (param_3 == (undefined8 *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)cVar4 * 4);
        }
        uVar19 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar19;
        *(uint *)(puVar16 + lVar32) = (uint)(iVar7 != 0);
        *(int *)(puVar14 + lVar32) = iVar7;
      } while (uVar19 < auVar36._8_4_);
      lVar18 = *(longlong *)(&stack0xffffffffffffffb0 + lVar5);
      uVar27 = *(ulonglong *)(&stack0xffffffffffffffa0 + lVar5);
      uVar10 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar5);
    }
    lVar32 = *plVar15;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5) = 0;
    (**(code **)(lVar32 + 0x58))
              (plVar15,&stack0x00000af0 + lVar5,uVar26,uVar10,uVar27,
               &stack0xffffffffffffffa0 + lVar5);
    uVar10 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5);
    uVar27 = 0;
    *(undefined8 *)(lVar8 + 0x78) = uVar10;
    puVar31[(longlong)(int)uVar29 * 10 + 3] = uVar10;
    plVar15 = *(longlong **)(lVar18 + 0x6b0);
    uVar26 = (ulonglong)*(uint *)(puVar31 + 2);
    uVar10 = puVar31[1];
    if (*(int *)(lVar23 + 0x25c) != 0) {
      *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5) = uVar10;
      *(ulonglong *)(&stack0xffffffffffffffb0 + lVar5) = uVar26;
      puVar16 = &stack0x00001308 + lVar5;
      puVar14 = &stack0x0000130c + lVar5;
      do {
        lVar32 = uVar27 << 5;
        lVar18 = lVar23 + (ulonglong)*(byte *)(lVar23 + 0x468 + uVar27) * 8;
        bVar2 = *(byte *)(lVar18 + 0x26d);
        auVar36 = FUN_180079d90(bVar2);
        cVar4 = *(char *)(lVar18 + 0x268);
        *(uint *)(extraout_x14_01 + lVar32) = bVar2 & 0xf;
        bVar2 = *(byte *)(lVar18 + 0x26c);
        *(longlong *)(extraout_x15_02 + lVar32) = auVar36._0_8_;
        *(int *)(extraout_x12_01 + lVar32) = (int)cVar4;
        *(undefined4 *)(extraout_x13_01 + lVar32) =
             *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
        *(uint *)(extraout_x11_01 + lVar32) = (uint)*(byte *)(lVar18 + 0x26b) << 2;
        if (param_3 == (undefined8 *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)cVar4 * 4);
        }
        uVar19 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar19;
        *(uint *)(puVar16 + lVar32) = (uint)(iVar7 != 0);
        *(int *)(puVar14 + lVar32) = iVar7;
      } while (uVar19 < auVar36._8_4_);
      uVar26 = *(ulonglong *)(&stack0xffffffffffffffb0 + lVar5);
      uVar10 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5);
    }
    lVar23 = *plVar15;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5) = 0;
    (**(code **)(lVar23 + 0x58))
              (plVar15,&stack0x000012f0 + lVar5,uVar27,uVar10,uVar26,
               &stack0xffffffffffffffa0 + lVar5);
    uVar10 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar5);
    *(undefined8 *)(lVar8 + 0x80) = uVar10;
    puVar31[(longlong)(int)uVar29 * 10 + 4] = uVar10;
    *(byte *)((longlong)puVar22 + (longlong)((int)uVar29 >> 3)) =
         *(byte *)((longlong)puVar22 + (longlong)((int)uVar29 >> 3)) |
         (byte)(1 << (ulonglong)(uVar29 & 7));
  }
LAB_180033d5c:
  *(undefined8 *)(lVar8 + -0x18) = *puVar31;
  *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(&stack0xffffffffffffffb8 + lVar5);
  iVar7 = 8;
  puVar9 = (undefined8 *)(lVar8 + 0x30);
  puVar24 = puVar31 + 0x54;
  do {
    iVar7 = iVar7 + -1;
    *puVar9 = *puVar24;
    puVar9 = puVar9 + 1;
    puVar24 = puVar24 + 1;
  } while (iVar7 != 0);
LAB_180033d88:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0xb0);
  return puVar31 != (undefined8 *)0x0;
}

