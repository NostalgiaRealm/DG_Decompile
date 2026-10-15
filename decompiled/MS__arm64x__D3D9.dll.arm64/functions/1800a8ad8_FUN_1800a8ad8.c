/*
 * FUN_1800a8ad8 at 1800a8ad8
 * undefined FUN_1800a8ad8(void)
 * Address ranges: 1800a8ad8-1800a8ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a8ad8(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  
  lVar13 = param_1[-0x10];
  iVar9 = FUN_180001590(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar9 == 0) {
    puVar18 = param_1 + -0x13;
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[-0x10] != 0) {
      puVar2 = (uint *)(param_1[-0x10] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar8 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar8 = true;
      iVar11 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar11 == 0) {
        FUN_180003398();
        bVar8 = true;
      }
    }
    lVar17 = param_1[-0x10];
    plVar1 = (longlong *)&DAT_00000ed0;
    if (lVar17 != 0) {
      plVar1 = (longlong *)(lVar17 + -0x5968);
    }
    puVar2 = (uint *)&DAT_00000ed8;
    if (lVar17 != 0) {
      puVar2 = (uint *)(lVar17 + -0x5960);
    }
    if (*puVar2 != 0) {
      uVar14 = 0;
      do {
        uVar10 = (uint)uVar14;
        if (*(undefined8 **)(*plVar1 + uVar14 * 8) == puVar18) {
          if (uVar10 != 0xffffffff) {
            puVar3 = (uint *)&DAT_00000ea8;
            if (lVar17 != 0) {
              puVar3 = (uint *)(lVar17 + -0x5990);
            }
            (&DAT_180253a70)[(ulonglong)*puVar3 * 0x4b] =
                 (&DAT_180253a70)[(ulonglong)*puVar3 * 0x4b] +
                 (ulonglong)*(uint *)((longlong)param_1 + -0x14);
            uVar16 = *puVar2;
            if (uVar10 < uVar16) {
              while (uVar10 = (int)uVar14 + 1, uVar10 < uVar16) {
                *(undefined8 *)(*plVar1 + uVar14 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar10 * 8);
                uVar14 = (ulonglong)uVar10;
                uVar16 = *puVar2;
              }
              *puVar2 = uVar16 - 1;
            }
            plVar1 = DAT_18024de60;
            puVar4 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)0x98) {
              puVar4 = param_1 + -1;
            }
            uVar10 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229468);
            if (uVar10 != 0) {
              iVar11 = (**(code **)*puVar4)(puVar4);
              if (iVar11 == 0) {
                puVar15 = (undefined8 *)0xffffffffffffff70;
                if (param_1 != (undefined8 *)0x98) {
                  puVar15 = puVar18;
                }
                puVar5 = (undefined8 *)0x0;
                if (puVar4 != (undefined8 *)0x0) {
                  puVar5 = puVar15;
                }
                if (((*(uint *)(puVar5 + 0xe) & 0x203) == 0) && (uVar16 = 0, uVar10 != 0)) {
                  do {
                    plVar12 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar16);
                    if (plVar12 != (longlong *)0x0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar17 != 0) {
                        plVar6 = (longlong *)(lVar17 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,puVar4);
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < uVar10);
                }
              }
              else if (iVar11 == 1) {
                puVar15 = (undefined8 *)0xffffffffffffff70;
                if (param_1 != (undefined8 *)0x98) {
                  puVar15 = puVar18;
                }
                puVar5 = (undefined8 *)0x0;
                if (puVar4 != (undefined8 *)0x0) {
                  puVar5 = puVar15;
                }
                if (((*(uint *)(puVar5 + 0xe) & 0x203) == 0) && (uVar16 = 0, uVar10 != 0)) {
                  do {
                    plVar12 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar16);
                    if (plVar12 != (longlong *)0x0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar17 != 0) {
                        plVar6 = (longlong *)(lVar17 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      (**(code **)(*plVar12 + 0x20))(plVar12,lVar7,puVar4);
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < uVar10);
                }
              }
              else if (iVar11 == 2) {
                if (puVar4 == (undefined8 *)0x0) {
                  puVar15 = (undefined8 *)0x0;
                }
                else {
                  puVar15 = (undefined8 *)0xfffffffffffffef0;
                  if (param_1 != (undefined8 *)0x98) {
                    puVar15 = param_1 + -0x23;
                  }
                }
                if (((*(uint *)((longlong)puVar15 + 0xf4) >> 9 & 1) == 0) &&
                   (uVar16 = 0, uVar10 != 0)) {
                  do {
                    plVar12 = (longlong *)
                              (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_180229468,uVar16);
                    if (plVar12 != (longlong *)0x0) {
                      plVar6 = (longlong *)&DAT_00000e28;
                      if (lVar17 != 0) {
                        plVar6 = (longlong *)(lVar17 + -0x5a10);
                      }
                      lVar7 = 0;
                      if (*plVar6 != 0) {
                        lVar7 = *plVar6 + 0x88;
                      }
                      (**(code **)(*plVar12 + 0x28))(plVar12,lVar7,puVar4);
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < uVar10);
                }
              }
            }
          }
          break;
        }
        uVar14 = (ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < *puVar2);
    }
    FUN_1800a88f0(puVar18);
    if (puVar18 != (undefined8 *)0x0) {
      param_1[-1] = &PTR_DAT_180230270;
      *param_1 = &PTR_FUN_180235fa8;
      *puVar18 = &PTR_D3DPERF_GetStatus_180229eb0;
      FUN_18000b538(param_1 + -0x12);
      FUN_180102fc0(puVar18,0x418);
    }
    if (bVar8) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  if (iVar9 == 0) {
    lVar17 = 0x6838;
    if (lVar13 != 0) {
      lVar17 = lVar13;
    }
    FUN_1800a9f28(lVar17);
  }
  return iVar9;
}

