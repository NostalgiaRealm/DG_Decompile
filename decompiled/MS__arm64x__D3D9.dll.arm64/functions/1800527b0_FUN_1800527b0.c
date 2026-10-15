/*
 * FUN_1800527b0 at 1800527b0
 * undefined FUN_1800527b0(void)
 * Address ranges: 1800527b0-180052f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800527b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  longlong extraout_x11;
  longlong extraout_x11_00;
  longlong extraout_x11_01;
  longlong extraout_x12;
  ulonglong uVar26;
  longlong extraout_x12_00;
  longlong extraout_x12_01;
  uint *puVar27;
  uint *extraout_x13;
  longlong extraout_x13_00;
  longlong extraout_x13_01;
  ulonglong uVar28;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  longlong lVar29;
  uint uVar30;
  undefined8 uVar31;
  longlong lVar32;
  undefined8 uVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  
  auVar37 = FUN_180001640();
  puVar14 = auVar37._8_8_;
  lVar9 = auVar37._0_8_;
  lVar5 = extraout_x15 * -0x10;
  *(undefined4 *)(&stack0xffffffffffffffa4 + lVar5) = param_4;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar9 + 0xc0);
  uVar30 = *(uint *)(lVar9 + 0xa8);
  if (uVar30 == 0) {
LAB_18005286c:
    lVar29 = 0;
  }
  else {
    uVar2 = *puVar14;
    uVar21 = 0;
    uVar22 = uVar30;
    do {
      uVar25 = uVar22 + uVar21 >> 1;
      uVar28 = *(ulonglong *)(*(longlong *)(lVar9 + 0xa0) + (ulonglong)uVar25 * 0x2e0);
      uVar7 = uVar25;
      if (uVar28 <= uVar2) {
        if (uVar2 <= uVar28) break;
        uVar21 = uVar25 + 1;
        uVar25 = uVar25 + 1;
        uVar7 = uVar22;
      }
      uVar22 = uVar7;
    } while (uVar22 != uVar21);
    if (uVar25 == uVar30) goto LAB_18005286c;
    if (*(ulonglong *)((ulonglong)uVar25 * 0x2e0 + *(longlong *)(lVar9 + 0xa0)) != (ulonglong)uVar2)
    goto LAB_18005286c;
    lVar29 = ((ulonglong)uVar25 * 0x2e0 | 0x10) + *(longlong *)(lVar9 + 0xa0);
  }
  if (lVar29 == 0) {
    func_0x000180222c50(&stack0x00000080 + lVar5,0,0x2d0);
    puVar10 = (undefined8 *)FUN_180102f80(0x270);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      *(undefined8 *)(&stack0x00000080 + lVar5) = 0;
    }
    else {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      thunk_FUN_180001218(puVar10 + 3,puVar14,0x254);
      *(undefined8 **)(&stack0x00000080 + lVar5) = puVar10;
    }
    if (puVar10 != (undefined8 *)0x0) {
      uVar28 = 0;
      if (puVar14[2] != 0) {
        puVar27 = puVar14 + 0x85;
        puVar19 = &stack0x0000035c + lVar5;
        puVar18 = &stack0x00000360 + lVar5;
        puVar17 = &stack0x00000364 + lVar5;
        puVar16 = &stack0x00000368 + lVar5;
        puVar15 = &stack0x0000036c + lVar5;
        do {
          bVar3 = *(byte *)((longlong)puVar14 +
                           (ulonglong)*(byte *)((longlong)puVar27 + uVar28) * 8 + 0x19);
          auVar36 = FUN_180079d90(bVar3);
          cVar4 = *(char *)(extraout_x15_00 + 0x14);
          *(uint *)(extraout_x11 + extraout_x14) = bVar3 & 0xf;
          bVar3 = *(byte *)(extraout_x15_00 + 0x18);
          *(longlong *)(extraout_x12 + extraout_x14) = auVar36._0_8_;
          *(int *)(puVar18 + extraout_x14) = (int)cVar4;
          *(undefined4 *)(puVar19 + extraout_x14) =
               *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar3 * 4);
          *(uint *)(puVar17 + extraout_x14) = (uint)*(byte *)(extraout_x15_00 + 0x17) << 2;
          if (param_3 == (undefined8 *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)cVar4 * 4);
          }
          uVar30 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar30;
          *(uint *)(puVar16 + extraout_x14) = (uint)(iVar8 != 0);
          *(int *)(puVar15 + extraout_x14) = iVar8;
          puVar27 = extraout_x13;
        } while (uVar30 < auVar36._8_4_);
      }
      lVar11 = FUN_1800ed3b0(*(longlong *)(lVar9 + -0x28) +
                             (ulonglong)*(uint *)(lVar9 + -0x20) * 0x1ac0 + 0x22c0,
                             &stack0x00000350 + lVar5);
      *(longlong *)(&stack0x00000088 + lVar5) = lVar11;
      if (lVar11 != 0) {
        lVar11 = FUN_180051d00(lVar9 + -0x30,puVar14 + 0x95,param_3);
        *(longlong *)(&stack0x00000090 + lVar5) = lVar11;
        if (lVar11 != 0) {
          uVar30 = 0;
          uVar35 = param_3[1];
          uVar33 = *param_3;
          uVar31 = param_3[3];
          uVar20 = param_3[2];
          uVar21 = *(uint *)(lVar9 + 0xa8);
          uVar2 = *puVar14;
          uVar28 = (ulonglong)uVar2;
          *(uint *)(&stack0x0000030c + lVar5) = puVar14[0x12a];
          *(undefined8 *)(&stack0x000000a0 + lVar5) = uVar35;
          *(undefined8 *)(&stack0x00000098 + lVar5) = uVar33;
          *(undefined8 *)(&stack0x000000b0 + lVar5) = uVar31;
          *(undefined8 *)(&stack0x000000a8 + lVar5) = uVar20;
          uVar33 = param_3[4];
          uVar31 = param_3[7];
          uVar20 = param_3[6];
          *(undefined8 *)(&stack0x000000c0 + lVar5) = param_3[5];
          *(undefined8 *)(&stack0x000000b8 + lVar5) = uVar33;
          *(undefined8 *)(&stack0x000000d0 + lVar5) = uVar31;
          *(undefined8 *)(&stack0x000000c8 + lVar5) = uVar20;
          *(undefined4 *)(&stack0x00000308 + lVar5) = 1;
          *(undefined8 *)(&stack0x00000318 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000310 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000328 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000320 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000338 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000330 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000348 + lVar5) = 0;
          *(undefined8 *)(&stack0x00000340 + lVar5) = 0;
          if (uVar21 != 0) {
            uVar22 = 0;
            uVar25 = uVar21;
            do {
              uVar30 = uVar25 + uVar22 >> 1;
              uVar26 = *(ulonglong *)(*(longlong *)(lVar9 + 0xa0) + (ulonglong)uVar30 * 0x2e0);
              uVar7 = uVar30;
              if (uVar26 <= uVar28) {
                if (uVar28 <= uVar26) break;
                uVar22 = uVar30 + 1;
                uVar30 = uVar30 + 1;
                uVar7 = uVar25;
              }
              uVar25 = uVar7;
            } while (uVar25 != uVar22);
          }
          if ((uVar30 == uVar21) ||
             (puVar23 = (ulonglong *)(*(longlong *)(lVar9 + 0xa0) + (ulonglong)uVar30 * 0x2e0),
             *puVar23 != uVar28)) {
            uVar22 = *(uint *)(lVar9 + 0xac);
            if (uVar22 == uVar21) {
              uVar21 = 0x10;
              if (uVar22 != 0) {
                uVar21 = uVar22 << 1;
              }
              lVar29 = thunk_FUN_180102f80((ulonglong)uVar21 * 0x2e0);
              if (lVar29 != 0) {
                uVar26 = 0;
                if (*(int *)(lVar9 + 0xa8) != 0) {
                  do {
                    thunk_FUN_180001218(lVar29 + uVar26 * 0x2e0,
                                        *(longlong *)(lVar9 + 0xa0) + uVar26 * 0x2e0,0x2e0);
                    uVar22 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar22;
                  } while (uVar22 < *(uint *)(lVar9 + 0xa8));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(lVar9 + 0x98));
                *(longlong *)(lVar9 + 0x98) = lVar29;
                *(longlong *)(lVar9 + 0xa0) = lVar29;
                *(uint *)(lVar9 + 0xac) = uVar21;
              }
            }
            uVar21 = *(uint *)(lVar9 + 0xa8);
            if (*(uint *)(lVar9 + 0xac) != uVar21) {
              while (uVar30 < uVar21) {
                thunk_FUN_180001218(*(longlong *)(lVar9 + 0xa0) + (ulonglong)uVar21 * 0x2e0,
                                    *(longlong *)(lVar9 + 0xa0) + (ulonglong)(uVar21 - 1) * 0x2e0,
                                    0x2e0);
                uVar21 = uVar21 - 1;
              }
              lVar29 = (ulonglong)uVar30 * 0x2e0;
              *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
              *(uint *)(lVar29 + *(longlong *)(lVar9 + 0xa0) + 8) = uVar2;
              thunk_FUN_180001218(lVar29 + *(longlong *)(lVar9 + 0xa0) + 0x10,
                                  &stack0x00000080 + lVar5,0x2d0);
              *(ulonglong *)(*(longlong *)(lVar9 + 0xa0) + lVar29) = uVar28;
            }
          }
          else {
            thunk_FUN_180001218(puVar23 + 2,&stack0x00000080 + lVar5,0x2d0);
          }
          lVar29 = ((ulonglong)uVar30 * 0x2e0 | 0x10) + *(longlong *)(lVar9 + 0xa0);
          goto LAB_180052b3c;
        }
      }
      if (puVar10 != (undefined8 *)0x0) {
        thunk_FUN_180102fc0(*puVar10);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        FUN_180102fc0(puVar10,0x270);
        puVar10 = (undefined8 *)0x0;
        goto LAB_180052f60;
      }
    }
LAB_180052b3c:
    puVar10 = (undefined8 *)0x0;
    if (lVar29 == 0) goto LAB_180052f60;
  }
  *(longlong *)(&stack0xffffffffffffffa8 + lVar5) = lVar29;
  *(uint **)(&stack0xffffffffffffffb0 + lVar5) = puVar14;
  puVar1 = (undefined4 *)(lVar29 + 0x288);
  uVar30 = 0xffffffff;
  uVar28 = 0;
  do {
    lVar11 = *(longlong *)(lVar29 + 8 + uVar28 * 0x50);
    uVar21 = (uint)uVar28;
    if ((lVar11 == 0) ||
       (*(undefined4 *)(&stack0xffffffffffffffa0 + lVar5) = *puVar1,
       ((byte)(&stack0xffffffffffffffa0)[((int)uVar21 >> 3) + lVar5] >> (ulonglong)(uVar21 & 7) & 1)
       == 0)) {
      if (uVar30 == 0xffffffff) {
        uVar30 = uVar21;
      }
    }
    else {
      iVar8 = func_0x000180222c00(param_3,uVar28 * 0x50 + lVar29 + 0x18,0x40);
      if (iVar8 == 0) {
        puVar10 = *(undefined8 **)(&stack0xffffffffffffffa8 + lVar5);
        uVar20 = puVar10[uVar28 * 10 + 2];
        *(longlong *)(&stack0x00000028 + lVar5) = lVar11;
        *(undefined8 *)(&stack0x00000030 + lVar5) = uVar20;
        goto LAB_180052de0;
      }
    }
    uVar21 = uVar21 + 1;
    uVar28 = (ulonglong)uVar21;
  } while ((int)uVar21 < 8);
  puVar10 = *(undefined8 **)(&stack0xffffffffffffffa8 + lVar5);
  lVar29 = *(longlong *)(&stack0xffffffffffffffb0 + lVar5);
  if (uVar21 == 8) {
    if (uVar30 == 0xffffffff) {
      uVar30 = 0;
    }
    uVar28 = 0;
    if (*(int *)(lVar29 + 8) != 0) {
      lVar11 = lVar29 + 0x214;
      puVar19 = &stack0x00000b5c + lVar5;
      puVar18 = &stack0x00000b60 + lVar5;
      puVar17 = &stack0x00000b64 + lVar5;
      puVar16 = &stack0x00000b68 + lVar5;
      puVar15 = &stack0x00000b6c + lVar5;
      do {
        bVar3 = *(byte *)(lVar29 + (ulonglong)*(byte *)(lVar11 + uVar28) * 8 + 0x19);
        auVar36 = FUN_180079d90(bVar3);
        cVar4 = *(char *)(extraout_x15_01 + 0x14);
        *(uint *)(extraout_x11_00 + extraout_x14_00) = bVar3 & 0xf;
        bVar3 = *(byte *)(extraout_x15_01 + 0x18);
        *(longlong *)(extraout_x12_00 + extraout_x14_00) = auVar36._0_8_;
        *(int *)(puVar18 + extraout_x14_00) = (int)cVar4;
        *(undefined4 *)(puVar19 + extraout_x14_00) =
             *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar3 * 4);
        *(uint *)(puVar17 + extraout_x14_00) = (uint)*(byte *)(extraout_x15_01 + 0x17) << 2;
        if (param_3 == (undefined8 *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)cVar4 * 4);
        }
        uVar21 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar21;
        *(uint *)(puVar16 + extraout_x14_00) = (uint)(iVar8 != 0);
        *(int *)(puVar15 + extraout_x14_00) = iVar8;
        lVar11 = extraout_x13_00;
      } while (uVar21 < auVar36._8_4_);
    }
    uVar20 = FUN_1800ed3b0(*(longlong *)(lVar9 + -0x28) +
                           (ulonglong)*(uint *)(lVar9 + -0x20) * 0x1ac0 + 0x22c0,
                           &stack0x00000b50 + lVar5);
    *(undefined8 *)(&stack0x00000028 + lVar5) = uVar20;
    uVar28 = 0;
    puVar10[(longlong)(int)uVar30 * 10 + 1] = uVar20;
    if (*(int *)(lVar29 + 0x25c) != 0) {
      lVar11 = lVar29 + 0x468;
      puVar19 = &stack0x0000135c + lVar5;
      puVar18 = &stack0x00001360 + lVar5;
      puVar17 = &stack0x00001364 + lVar5;
      puVar16 = &stack0x00001368 + lVar5;
      puVar15 = &stack0x0000136c + lVar5;
      do {
        bVar3 = *(byte *)(lVar29 + (ulonglong)*(byte *)(lVar11 + uVar28) * 8 + 0x26d);
        auVar36 = FUN_180079d90(bVar3);
        cVar4 = *(char *)(extraout_x15_02 + 0x268);
        *(uint *)(extraout_x11_01 + extraout_x14_01) = bVar3 & 0xf;
        bVar3 = *(byte *)(extraout_x15_02 + 0x26c);
        *(longlong *)(extraout_x12_01 + extraout_x14_01) = auVar36._0_8_;
        *(int *)(puVar18 + extraout_x14_01) = (int)cVar4;
        *(undefined4 *)(puVar19 + extraout_x14_01) =
             *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar3 * 4);
        *(uint *)(puVar17 + extraout_x14_01) = (uint)*(byte *)(extraout_x15_02 + 0x26b) << 2;
        if (param_3 == (undefined8 *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((longlong)param_3 + (ulonglong)(uint)(int)cVar4 * 4);
        }
        uVar21 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar21;
        *(uint *)(puVar16 + extraout_x14_01) = (uint)(iVar8 != 0);
        *(int *)(puVar15 + extraout_x14_01) = iVar8;
        lVar11 = extraout_x13_01;
      } while (uVar21 < auVar36._8_4_);
    }
    uVar20 = FUN_1800ed3b0(*(longlong *)(lVar9 + -0x28) +
                           (ulonglong)*(uint *)(lVar9 + -0x20) * 0x1ac0 + 0x22c0,
                           &stack0x00001350 + lVar5);
    puVar10[(longlong)(int)uVar30 * 10 + 2] = uVar20;
    *(undefined8 *)(&stack0x00000030 + lVar5) = uVar20;
    *(byte *)((longlong)puVar1 + (longlong)((int)uVar30 >> 3)) =
         *(byte *)((longlong)puVar1 + (longlong)((int)uVar30 >> 3)) |
         (byte)(1 << (ulonglong)(uVar30 & 7));
  }
LAB_180052de0:
  uVar30 = *(uint *)(lVar9 + -0x20);
  *(undefined8 *)(&stack0x00000020 + lVar5) = *puVar10;
  *(undefined4 *)(&stack0x00000038 + lVar5) = *(undefined4 *)(&stack0xffffffffffffffa4 + lVar5);
  uVar20 = puVar10[0x53];
  *(undefined8 *)(&stack0x0000003c + lVar5) = puVar10[0x52];
  *(undefined8 *)(&stack0x00000044 + lVar5) = uVar20;
  uVar20 = puVar10[0x55];
  *(undefined8 *)(&stack0x0000004c + lVar5) = puVar10[0x54];
  *(undefined8 *)(&stack0x00000054 + lVar5) = uVar20;
  uVar20 = puVar10[0x57];
  *(undefined8 *)(&stack0x0000005c + lVar5) = puVar10[0x56];
  *(undefined8 *)(&stack0x00000064 + lVar5) = uVar20;
  uVar20 = puVar10[0x59];
  *(undefined8 *)(&stack0x0000006c + lVar5) = puVar10[0x58];
  *(undefined8 *)(&stack0x00000074 + lVar5) = uVar20;
  lVar29 = *(longlong *)(lVar9 + -0x28) + (ulonglong)uVar30 * 0x1ac0;
  FUN_180101630(lVar29 + 0x1bc0);
  if (*(char *)(lVar29 + 0x1dc4) == '\0') {
LAB_180052f1c:
    plVar13 = *(longlong **)(lVar29 + 0x1da0);
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = *(undefined8 *)(&stack0x00000028 + lVar5);
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = *(undefined8 *)(&stack0x00000020 + lVar5);
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = *(undefined8 *)(&stack0x00000038 + lVar5);
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = *(undefined8 *)(&stack0x00000030 + lVar5);
    uVar35 = *(undefined8 *)(&stack0x00000048 + lVar5);
    uVar33 = *(undefined8 *)(&stack0x00000040 + lVar5);
    uVar31 = *(undefined8 *)(&stack0x00000058 + lVar5);
    uVar20 = *(undefined8 *)(&stack0x00000050 + lVar5);
    *plVar13 = lVar9 + -0x30;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = uVar35;
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = uVar33;
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar5) = uVar31;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = uVar20;
    *(undefined8 *)(&stack0x00000008 + lVar5) = *(undefined8 *)(&stack0x00000068 + lVar5);
    *(undefined8 *)(&stack0x00000000 + lVar5) = *(undefined8 *)(&stack0x00000060 + lVar5);
    *(undefined8 *)(&stack0x00000018 + lVar5) = *(undefined8 *)(&stack0x00000078 + lVar5);
    *(undefined8 *)(&stack0x00000010 + lVar5) = *(undefined8 *)(&stack0x00000070 + lVar5);
    lVar34 = *(longlong *)(&stack0xffffffffffffffc0 + lVar5);
    lVar32 = *(longlong *)(&stack0xffffffffffffffd8 + lVar5);
    lVar11 = *(longlong *)(&stack0xffffffffffffffd0 + lVar5);
    plVar13[2] = *(longlong *)(&stack0xffffffffffffffc8 + lVar5);
    plVar13[1] = lVar34;
    plVar13[4] = lVar32;
    plVar13[3] = lVar11;
    lVar34 = *(longlong *)(&stack0xffffffffffffffe0 + lVar5);
    lVar32 = *(longlong *)(&stack0xfffffffffffffff8 + lVar5);
    lVar11 = *(longlong *)(&stack0xfffffffffffffff0 + lVar5);
    plVar13[6] = *(longlong *)(&stack0xffffffffffffffe8 + lVar5);
    plVar13[5] = lVar34;
    plVar13[8] = lVar32;
    plVar13[7] = lVar11;
    lVar34 = *(longlong *)(&stack0x00000000 + lVar5);
    lVar32 = *(longlong *)(&stack0x00000018 + lVar5);
    lVar11 = *(longlong *)(&stack0x00000010 + lVar5);
    plVar13[10] = *(longlong *)(&stack0x00000008 + lVar5);
    plVar13[9] = lVar34;
    plVar13[0xc] = lVar32;
    plVar13[0xb] = lVar11;
    FUN_180052f98();
  }
  else {
    puVar12 = (undefined8 *)FUN_180101500(lVar29 + 0x1bc0,0x68);
    pcVar6 = __imp_KERNEL32_dll_Sleep;
    if (puVar12 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar29 + 0x1bc0) = 0;
      (*pcVar6)(100);
      FUN_180101630(lVar29 + 0x1bc0);
      goto LAB_180052f1c;
    }
    FUN_1800015a0(lVar29 + 0x1dc0);
    uVar35 = *(undefined8 *)(&stack0x00000028 + lVar5);
    uVar33 = *(undefined8 *)(&stack0x00000020 + lVar5);
    uVar31 = *(undefined8 *)(&stack0x00000038 + lVar5);
    uVar20 = *(undefined8 *)(&stack0x00000030 + lVar5);
    puVar12[1] = 0x68;
    puVar12[2] = lVar9 + -0x30;
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5) = uVar35;
    *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5) = uVar33;
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = uVar31;
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = uVar20;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5) = *(undefined8 *)(&stack0x00000048 + lVar5);
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = *(undefined8 *)(&stack0x00000040 + lVar5);
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar5) = *(undefined8 *)(&stack0x00000058 + lVar5);
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5) = *(undefined8 *)(&stack0x00000050 + lVar5);
    *(undefined8 *)(&stack0x00000008 + lVar5) = *(undefined8 *)(&stack0x00000068 + lVar5);
    *(undefined8 *)(&stack0x00000000 + lVar5) = *(undefined8 *)(&stack0x00000060 + lVar5);
    *(undefined8 *)(&stack0x00000018 + lVar5) = *(undefined8 *)(&stack0x00000078 + lVar5);
    *(undefined8 *)(&stack0x00000010 + lVar5) = *(undefined8 *)(&stack0x00000070 + lVar5);
    uVar33 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
    uVar31 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5);
    uVar20 = *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5);
    puVar12[4] = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
    puVar12[3] = uVar33;
    puVar12[6] = uVar31;
    puVar12[5] = uVar20;
    uVar33 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5);
    uVar31 = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar5);
    uVar20 = *(undefined8 *)(&stack0xfffffffffffffff0 + lVar5);
    puVar12[8] = *(undefined8 *)(&stack0xffffffffffffffe8 + lVar5);
    puVar12[7] = uVar33;
    puVar12[10] = uVar31;
    puVar12[9] = uVar20;
    uVar33 = *(undefined8 *)(&stack0x00000000 + lVar5);
    uVar31 = *(undefined8 *)(&stack0x00000018 + lVar5);
    uVar20 = *(undefined8 *)(&stack0x00000010 + lVar5);
    puVar12[0xc] = *(undefined8 *)(&stack0x00000008 + lVar5);
    puVar12[0xb] = uVar33;
    puVar12[0xe] = uVar31;
    puVar12[0xd] = uVar20;
    puVar24 = (undefined8 *)((longlong)puVar12 + 0x7fU & 0xfffffffffffffff8);
    *puVar24 = 0;
    *puVar12 = FUN_180052f98;
    *(undefined8 **)(lVar29 + (ulonglong)*(uint *)(lVar29 + 0x1dbc) * 0x28 + 0x1c50) = puVar24;
    pcVar6 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(lVar29 + 0x1dc5) != '\0') {
      *(undefined4 *)(lVar29 + 0x1bc0) = 0;
      (*pcVar6)(*(undefined8 *)(lVar29 + 0x1c40));
      goto LAB_180052f60;
    }
  }
  *(undefined4 *)(lVar29 + 0x1bc0) = 0;
LAB_180052f60:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar9 + 0xc0);
  return puVar10 != (undefined8 *)0x0;
}

