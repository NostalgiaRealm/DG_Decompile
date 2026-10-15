/*
 * FUN_1801c1b58 at 1801c1b58
 * undefined FUN_1801c1b58(void)
 * Address ranges: 1801c1b58-1801c200b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c1b58(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  
  lVar14 = param_1[-0x10];
  iVar10 = FUN_1801042d0(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar10 == 0) {
    puVar19 = param_1 + -0x13;
    puVar1 = (uint *)&DAT_00000e78;
    if (param_1[-0x10] != 0) {
      puVar1 = (uint *)(param_1[-0x10] + -0x59c0);
    }
    if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar7 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar7 = true;
      iVar12 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar12 == 0) {
        FUN_1801085c8();
        bVar7 = true;
      }
    }
    lVar18 = param_1[-0x10];
    plVar5 = (longlong *)&DAT_00000ed0;
    if (lVar18 != 0) {
      plVar5 = (longlong *)(lVar18 + -0x5968);
    }
    puVar1 = (uint *)&DAT_00000ed8;
    if (lVar18 != 0) {
      puVar1 = (uint *)(lVar18 + -0x5960);
    }
    if (*puVar1 != 0) {
      uVar15 = 0;
      do {
        uVar11 = (uint)uVar15;
        if (*(undefined8 **)(*plVar5 + uVar15 * 8) == puVar19) {
          if (uVar11 != 0xffffffff) {
            puVar2 = (uint *)&DAT_00000ea8;
            if (lVar18 != 0) {
              puVar2 = (uint *)(lVar18 + -0x5990);
            }
            (&DAT_18024ea60)[(ulonglong)*puVar2 * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*puVar2 * 0x4b] +
                 (ulonglong)*(uint *)((longlong)param_1 + -0x14);
            uVar17 = *puVar1;
            if (uVar11 < uVar17) {
              while (uVar11 = (int)uVar15 + 1, uVar11 < uVar17) {
                *(undefined8 *)(*plVar5 + uVar15 * 8) =
                     *(undefined8 *)(*plVar5 + (ulonglong)uVar11 * 8);
                uVar15 = (ulonglong)uVar11;
                uVar17 = *puVar1;
              }
              *puVar1 = uVar17 - 1;
            }
            uVar9 = DAT_18024d928;
            puVar8 = __hybrid_os_arm64x_dispatch_icall;
            puVar3 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)0x98) {
              puVar3 = param_1 + -1;
            }
            (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            uVar11 = (*extraout_x11)(uVar9,&DAT_1802290e0);
            if (uVar11 != 0) {
              (*(code *)puVar8)(0x180224000);
              iVar12 = (*extraout_x11_00)(puVar3);
              if (iVar12 == 0) {
                puVar16 = (undefined8 *)0xffffffffffffff70;
                if (param_1 != (undefined8 *)0x98) {
                  puVar16 = puVar19;
                }
                puVar4 = (undefined8 *)0x0;
                if (puVar3 != (undefined8 *)0x0) {
                  puVar4 = puVar16;
                }
                if (((*(uint *)(puVar4 + 0xe) & 0x203) == 0) && (uVar17 = 0, uVar11 != 0)) {
                  do {
                    (*(code *)puVar8)(0x180224000);
                    lVar13 = (*extraout_x11_05)(uVar9,&DAT_1802290e0,uVar17);
                    if (lVar13 != 0) {
                      plVar5 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar5 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar6 = 0;
                      if (*plVar5 != 0) {
                        lVar6 = *plVar5 + 0x88;
                      }
                      auVar20 = (*(code *)puVar8)(0x180224000,lVar13,lVar6);
                      (*extraout_x11_06)(auVar20._0_8_,auVar20._8_8_,puVar3);
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar11);
                }
              }
              else if (iVar12 == 1) {
                puVar16 = (undefined8 *)0xffffffffffffff70;
                if (param_1 != (undefined8 *)0x98) {
                  puVar16 = puVar19;
                }
                puVar4 = (undefined8 *)0x0;
                if (puVar3 != (undefined8 *)0x0) {
                  puVar4 = puVar16;
                }
                if (((*(uint *)(puVar4 + 0xe) & 0x203) == 0) && (uVar17 = 0, uVar11 != 0)) {
                  do {
                    (*(code *)puVar8)(0x180224000);
                    lVar13 = (*extraout_x11_03)(uVar9,&DAT_1802290e0,uVar17);
                    if (lVar13 != 0) {
                      plVar5 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar5 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar6 = 0;
                      if (*plVar5 != 0) {
                        lVar6 = *plVar5 + 0x88;
                      }
                      auVar20 = (*(code *)puVar8)(0x180224000,lVar13,lVar6);
                      (*extraout_x11_04)(auVar20._0_8_,auVar20._8_8_,puVar3);
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar11);
                }
              }
              else if (iVar12 == 2) {
                if (puVar3 == (undefined8 *)0x0) {
                  puVar16 = (undefined8 *)0x0;
                }
                else {
                  puVar16 = (undefined8 *)0xfffffffffffffef0;
                  if (param_1 != (undefined8 *)0x98) {
                    puVar16 = param_1 + -0x23;
                  }
                }
                if (((*(uint *)((longlong)puVar16 + 0xf4) >> 9 & 1) == 0) &&
                   (uVar17 = 0, uVar11 != 0)) {
                  do {
                    (*(code *)puVar8)(0x180224000);
                    lVar13 = (*extraout_x11_01)(uVar9,&DAT_1802290e0,uVar17);
                    if (lVar13 != 0) {
                      plVar5 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar5 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar6 = 0;
                      if (*plVar5 != 0) {
                        lVar6 = *plVar5 + 0x88;
                      }
                      auVar20 = (*(code *)puVar8)(0x180224000,lVar13,lVar6);
                      (*extraout_x11_02)(auVar20._0_8_,auVar20._8_8_,puVar3);
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar11);
                }
              }
            }
          }
          break;
        }
        uVar15 = (ulonglong)(uVar11 + 1);
      } while (uVar11 + 1 < *puVar1);
    }
    FUN_18011a5a0(puVar19);
    FUN_180119e68(puVar19);
    if (puVar19 != (undefined8 *)0x0) {
      param_1[-1] = &PTR_FUN_180229728;
      *param_1 = &PTR_FUN_18022e310;
      *puVar19 = &PTR_D3DPERF_GetStatus_native_180229eb0;
      FUN_180116678(param_1 + -0x12);
      FUN_1802229d8(puVar19,0x418);
    }
    if (bVar7) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  if (iVar10 == 0) {
    lVar18 = 0x6838;
    if (lVar14 != 0) {
      lVar18 = lVar14;
    }
    FUN_1801c3098(lVar18);
  }
  return iVar10;
}

