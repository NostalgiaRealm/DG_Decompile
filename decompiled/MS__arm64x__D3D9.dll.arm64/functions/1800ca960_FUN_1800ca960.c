/*
 * FUN_1800ca960 at 1800ca960
 * undefined FUN_1800ca960(void)
 * Address ranges: 1800ca960-1800cadb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ca960(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  
  lVar14 = param_1[-0x20];
  iVar10 = FUN_180001590(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar10 == 0) {
    puVar19 = param_1 + -0x23;
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[-0x20] != 0) {
      puVar2 = (uint *)(param_1[-0x20] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar9 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar9 = true;
      iVar12 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar12 == 0) {
        FUN_180003398();
        bVar9 = true;
      }
    }
    lVar18 = param_1[-0x20];
    plVar1 = (longlong *)&DAT_00000ee0;
    if (lVar18 != 0) {
      plVar1 = (longlong *)(lVar18 + -0x5958);
    }
    puVar2 = (uint *)&DAT_00000ee8;
    if (lVar18 != 0) {
      puVar2 = (uint *)(lVar18 + -0x5950);
    }
    if (*puVar2 != 0) {
      uVar15 = 0;
      do {
        uVar11 = (uint)uVar15;
        if (*(undefined8 **)(*plVar1 + uVar15 * 8) == puVar19) {
          if (uVar11 != 0xffffffff) {
            if (*(int *)(param_1 + -3) == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar18 != 0) {
                piVar3 = (int *)(lVar18 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar18 != 0) {
                  puVar4 = (uint *)(lVar18 + -0x5990);
                }
                (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] +
                     (ulonglong)*(uint *)((longlong)param_1 + -0x14);
              }
            }
            uVar17 = *puVar2;
            if (uVar11 < uVar17) {
              while (uVar11 = (int)uVar15 + 1, uVar11 < uVar17) {
                *(undefined8 *)(*plVar1 + uVar15 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar11 * 8);
                uVar15 = (ulonglong)uVar11;
                uVar17 = *puVar2;
              }
              *puVar2 = uVar17 - 1;
            }
            plVar1 = DAT_18024de60;
            puVar5 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)&DAT_00000118) {
              puVar5 = param_1 + -1;
            }
            uVar11 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229468);
            if (uVar11 != 0) {
              iVar12 = (**(code **)*puVar5)(puVar5);
              if (iVar12 == 0) {
                if (puVar5 == (undefined8 *)0x0) {
                  puVar16 = (undefined8 *)0x0;
                }
                else {
                  puVar16 = (undefined8 *)0xffffffffffffff70;
                  if (param_1 != (undefined8 *)&DAT_00000118) {
                    puVar16 = param_1 + -0x13;
                  }
                }
                if (((*(uint *)(puVar16 + 0xe) & 0x203) == 0) && (uVar17 = 0, uVar11 != 0)) {
                  do {
                    plVar13 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar17);
                    if (plVar13 != (longlong *)0x0) {
                      plVar7 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar7 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar8 = 0;
                      if (*plVar7 != 0) {
                        lVar8 = *plVar7 + 0x88;
                      }
                      (**(code **)(*plVar13 + 0x18))(plVar13,lVar8,puVar5);
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar11);
                }
              }
              else if (iVar12 == 1) {
                if (puVar5 == (undefined8 *)0x0) {
                  puVar16 = (undefined8 *)0x0;
                }
                else {
                  puVar16 = (undefined8 *)0xffffffffffffff70;
                  if (param_1 != (undefined8 *)&DAT_00000118) {
                    puVar16 = param_1 + -0x13;
                  }
                }
                if (((*(uint *)(puVar16 + 0xe) & 0x203) == 0) && (uVar17 = 0, uVar11 != 0)) {
                  do {
                    plVar13 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar17);
                    if (plVar13 != (longlong *)0x0) {
                      plVar7 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar7 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar8 = 0;
                      if (*plVar7 != 0) {
                        lVar8 = *plVar7 + 0x88;
                      }
                      (**(code **)(*plVar13 + 0x20))(plVar13,lVar8,puVar5);
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar11);
                }
              }
              else if (iVar12 == 2) {
                puVar16 = (undefined8 *)0xfffffffffffffef0;
                if (param_1 != (undefined8 *)&DAT_00000118) {
                  puVar16 = puVar19;
                }
                puVar6 = (undefined8 *)0x0;
                if (puVar5 != (undefined8 *)0x0) {
                  puVar6 = puVar16;
                }
                if (((*(uint *)((longlong)puVar6 + 0xf4) >> 9 & 1) == 0) &&
                   (uVar17 = 0, uVar11 != 0)) {
                  do {
                    plVar13 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar17);
                    if (plVar13 != (longlong *)0x0) {
                      plVar7 = (longlong *)&DAT_00000e28;
                      if (lVar18 != 0) {
                        plVar7 = (longlong *)(lVar18 + -0x5a10);
                      }
                      lVar8 = 0;
                      if (*plVar7 != 0) {
                        lVar8 = *plVar7 + 0x88;
                      }
                      (**(code **)(*plVar13 + 0x28))(plVar13,lVar8,puVar5);
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
      } while (uVar11 + 1 < *puVar2);
    }
    FUN_1800ca618(puVar19);
    if (puVar19 != (undefined8 *)0x0) {
      param_1[-1] = &PTR_DAT_1802335f0;
      *param_1 = &PTR_FUN_180236ce0;
      *puVar19 = &PTR_D3DPERF_GetStatus_180229eb0;
      FUN_18000b538(param_1 + -0x22);
      FUN_180102fc0(puVar19,0x138);
    }
    if (bVar9) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  if (iVar10 == 0) {
    lVar18 = 0x6838;
    if (lVar14 != 0) {
      lVar18 = lVar14;
    }
    FUN_1800a9f28(lVar18);
  }
  return iVar10;
}

