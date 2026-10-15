/*
 * FUN_1800ca098 at 1800ca098
 * undefined FUN_1800ca098(void)
 * Address ranges: 1800ca098-1800ca2df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ca098(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar8 = FUN_180001590((longlong)param_1 + 0x124);
  if ((int)param_1[0x24] + iVar8 == 0) {
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[3] != 0) {
      puVar2 = (uint *)(param_1[3] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar6 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar6 = true;
      iVar8 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar8 == 0) {
        FUN_180003398();
      }
    }
    lVar10 = param_1[3];
    bVar7 = lVar10 != 0;
    lVar1 = 0;
    if (bVar7) {
      lVar1 = lVar10 + -0x6838;
    }
    plVar5 = (longlong *)&DAT_00000ee0;
    if (bVar7) {
      plVar5 = (longlong *)(lVar10 + -0x5958);
    }
    puVar2 = (uint *)&DAT_00000ee8;
    if (bVar7) {
      puVar2 = (uint *)(lVar10 + -0x5950);
    }
    if (*puVar2 != 0) {
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        if (*(longlong **)(*plVar5 + uVar12 * 8) == param_1) {
          if (uVar11 != 0xffffffff) {
            if ((int)param_1[0x20] == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar10 != 0) {
                piVar3 = (int *)(lVar10 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar10 != 0) {
                  puVar4 = (uint *)(lVar10 + -0x5990);
                }
                (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_180253a70)[(ulonglong)*puVar4 * 0x4b] +
                     (ulonglong)*(uint *)((longlong)param_1 + 0x104);
              }
            }
            uVar13 = *puVar2;
            if (uVar11 < uVar13) {
              while (uVar9 = uVar11 + 1, uVar9 < uVar13) {
                *(undefined8 *)(*plVar5 + (ulonglong)uVar11 * 8) =
                     *(undefined8 *)(*plVar5 + (ulonglong)uVar9 * 8);
                uVar11 = uVar9;
                uVar13 = *puVar2;
              }
              *puVar2 = uVar13 - 1;
            }
            plVar5 = (longlong *)0x0;
            if (param_1 != (longlong *)0x0) {
              plVar5 = param_1 + 0x22;
            }
            FUN_180001b20(lVar1,plVar5);
          }
          break;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
      } while (uVar11 + 1 < *puVar2);
    }
    uVar11 = 0;
    if (*(short *)((longlong)param_1 + 0x3c) != 0) {
      do {
        (**(code **)(*param_1 + 0x30))(param_1,uVar11);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)((longlong)param_1 + 0x3c));
    }
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x1c] + 0x18))();
    }
    param_1[0x1c] = 0;
    param_1[0x22] = (longlong)&PTR_DAT_1802335f0;
    param_1[0x23] = (longlong)&PTR_FUN_180236ce0;
    *param_1 = (longlong)&PTR_D3DPERF_GetStatus_180229eb0;
    FUN_18000b538(param_1 + 1);
    FUN_180102fc0(param_1,0x138);
    if (bVar6) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

