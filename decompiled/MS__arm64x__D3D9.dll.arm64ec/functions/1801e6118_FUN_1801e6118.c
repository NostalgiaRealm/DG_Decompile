/*
 * FUN_1801e6118 at 1801e6118
 * undefined FUN_1801e6118(void)
 * Address ranges: 1801e6118-1801e65ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e6118(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  
  lVar15 = param_1[-0x20];
  iVar11 = FUN_1801042d0(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar11 == 0) {
    puVar20 = param_1 + -0x23;
    puVar1 = (uint *)&DAT_00000e78;
    if (param_1[-0x20] != 0) {
      puVar1 = (uint *)(param_1[-0x20] + -0x59c0);
    }
    if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar8 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar8 = true;
      iVar13 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar13 == 0) {
        FUN_1801085c8();
        bVar8 = true;
      }
    }
    lVar19 = param_1[-0x20];
    plVar6 = (longlong *)&DAT_00000ee0;
    if (lVar19 != 0) {
      plVar6 = (longlong *)(lVar19 + -0x5958);
    }
    puVar1 = (uint *)&DAT_00000ee8;
    if (lVar19 != 0) {
      puVar1 = (uint *)(lVar19 + -0x5950);
    }
    if (*puVar1 != 0) {
      uVar16 = 0;
      do {
        uVar12 = (uint)uVar16;
        if (*(undefined8 **)(*plVar6 + uVar16 * 8) == puVar20) {
          if (uVar12 != 0xffffffff) {
            if (*(int *)(param_1 + -3) == 0) {
              piVar2 = (int *)&DAT_00000e68;
              if (lVar19 != 0) {
                piVar2 = (int *)(lVar19 + -0x59d0);
              }
              if (*piVar2 == 1) {
                puVar3 = (uint *)&DAT_00000ea8;
                if (lVar19 != 0) {
                  puVar3 = (uint *)(lVar19 + -0x5990);
                }
                (&DAT_18024ea60)[(ulonglong)*puVar3 * 0x4b] =
                     (&DAT_18024ea60)[(ulonglong)*puVar3 * 0x4b] +
                     (ulonglong)*(uint *)((longlong)param_1 + -0x14);
              }
            }
            uVar18 = *puVar1;
            if (uVar12 < uVar18) {
              while (uVar12 = (int)uVar16 + 1, uVar12 < uVar18) {
                *(undefined8 *)(*plVar6 + uVar16 * 8) =
                     *(undefined8 *)(*plVar6 + (ulonglong)uVar12 * 8);
                uVar16 = (ulonglong)uVar12;
                uVar18 = *puVar1;
              }
              *puVar1 = uVar18 - 1;
            }
            uVar10 = DAT_18024d928;
            puVar9 = __hybrid_os_arm64x_dispatch_icall;
            puVar4 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)&DAT_00000118) {
              puVar4 = param_1 + -1;
            }
            (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            uVar12 = (*extraout_x11)(uVar10,&DAT_1802290e0);
            if (uVar12 != 0) {
              (*(code *)puVar9)(0x180224000);
              iVar13 = (*extraout_x11_00)(puVar4);
              if (iVar13 == 0) {
                if (puVar4 == (undefined8 *)0x0) {
                  puVar17 = (undefined8 *)0x0;
                }
                else {
                  puVar17 = (undefined8 *)0xffffffffffffff70;
                  if (param_1 != (undefined8 *)&DAT_00000118) {
                    puVar17 = param_1 + -0x13;
                  }
                }
                if (((*(uint *)(puVar17 + 0xe) & 0x203) == 0) && (uVar18 = 0, uVar12 != 0)) {
                  do {
                    (*(code *)puVar9)(0x180224000);
                    lVar14 = (*extraout_x11_05)(uVar10,&DAT_1802290e0,uVar18);
                    if (lVar14 != 0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar19 != 0) {
                        plVar6 = (longlong *)(lVar19 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      auVar21 = (*(code *)puVar9)(0x180224000,lVar14,lVar7);
                      (*extraout_x11_06)(auVar21._0_8_,auVar21._8_8_,puVar4);
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar12);
                }
              }
              else if (iVar13 == 1) {
                if (puVar4 == (undefined8 *)0x0) {
                  puVar17 = (undefined8 *)0x0;
                }
                else {
                  puVar17 = (undefined8 *)0xffffffffffffff70;
                  if (param_1 != (undefined8 *)&DAT_00000118) {
                    puVar17 = param_1 + -0x13;
                  }
                }
                if (((*(uint *)(puVar17 + 0xe) & 0x203) == 0) && (uVar18 = 0, uVar12 != 0)) {
                  do {
                    (*(code *)puVar9)(0x180224000);
                    lVar14 = (*extraout_x11_03)(uVar10,&DAT_1802290e0,uVar18);
                    if (lVar14 != 0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar19 != 0) {
                        plVar6 = (longlong *)(lVar19 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      auVar21 = (*(code *)puVar9)(0x180224000,lVar14,lVar7);
                      (*extraout_x11_04)(auVar21._0_8_,auVar21._8_8_,puVar4);
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar12);
                }
              }
              else if (iVar13 == 2) {
                puVar17 = (undefined8 *)0xfffffffffffffef0;
                if (param_1 != (undefined8 *)&DAT_00000118) {
                  puVar17 = puVar20;
                }
                puVar5 = (undefined8 *)0x0;
                if (puVar4 != (undefined8 *)0x0) {
                  puVar5 = puVar17;
                }
                if (((*(uint *)((longlong)puVar5 + 0xf4) >> 9 & 1) == 0) &&
                   (uVar18 = 0, uVar12 != 0)) {
                  do {
                    (*(code *)puVar9)(0x180224000);
                    lVar14 = (*extraout_x11_01)(uVar10,&DAT_1802290e0,uVar18);
                    if (lVar14 != 0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar19 != 0) {
                        plVar6 = (longlong *)(lVar19 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      auVar21 = (*(code *)puVar9)(0x180224000,lVar14,lVar7);
                      (*extraout_x11_02)(auVar21._0_8_,auVar21._8_8_,puVar4);
                    }
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar12);
                }
              }
            }
          }
          break;
        }
        uVar16 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < *puVar1);
    }
    FUN_1801e5d38(puVar20);
    if (puVar20 != (undefined8 *)0x0) {
      param_1[-1] = &PTR_FUN_1802297e8;
      *param_1 = &PTR_FUN_18022f338;
      *puVar20 = &PTR_D3DPERF_GetStatus_native_180229eb0;
      FUN_180116678(param_1 + -0x22);
      FUN_1802229d8(puVar20,0x138);
    }
    if (bVar8) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  if (iVar11 == 0) {
    lVar19 = 0x6838;
    if (lVar15 != 0) {
      lVar19 = lVar15;
    }
    FUN_1801c3098(lVar19);
  }
  return iVar11;
}

