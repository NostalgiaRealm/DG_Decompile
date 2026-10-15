/*
 * FUN_1800c6c40 at 1800c6c40
 * undefined FUN_1800c6c40(void)
 * Address ranges: 1800c6c40-1800c6e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c6c40(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  iVar7 = FUN_180001590((longlong)param_1 + 0xa4);
  if ((int)param_1[0x14] + iVar7 == 0) {
    puVar2 = (uint *)&DAT_00000e78;
    if (param_1[3] != 0) {
      puVar2 = (uint *)(param_1[3] + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar7 == 0) {
        FUN_180003398();
      }
    }
    lVar10 = param_1[3];
    bVar6 = lVar10 != 0;
    lVar1 = 0;
    if (bVar6) {
      lVar1 = lVar10 + -0x6838;
    }
    plVar4 = (longlong *)&DAT_00000ec0;
    if (bVar6) {
      plVar4 = (longlong *)(lVar10 + -0x5978);
    }
    puVar2 = (uint *)&DAT_00000ec8;
    if (bVar6) {
      puVar2 = (uint *)(lVar10 + -0x5970);
    }
    if (*puVar2 != 0) {
      uVar8 = 0;
      do {
        uVar11 = (uint)uVar8;
        if (*(longlong **)(*plVar4 + uVar8 * 8) == param_1) {
          if (uVar11 != 0xffffffff) {
            puVar3 = (uint *)&DAT_00000ea8;
            if (lVar10 != 0) {
              puVar3 = (uint *)(lVar10 + -0x5990);
            }
            (&DAT_180253a70)[(ulonglong)*puVar3 * 0x4b] =
                 (&DAT_180253a70)[(ulonglong)*puVar3 * 0x4b] +
                 (ulonglong)*(uint *)((longlong)param_1 + 0x84);
            uVar9 = *puVar2;
            if (uVar11 < uVar9) {
              while (uVar11 = (int)uVar8 + 1, uVar11 < uVar9) {
                *(undefined8 *)(*plVar4 + uVar8 * 8) =
                     *(undefined8 *)(*plVar4 + (ulonglong)uVar11 * 8);
                uVar8 = (ulonglong)uVar11;
                uVar9 = *puVar2;
              }
              *puVar2 = uVar9 - 1;
            }
            plVar4 = (longlong *)0x0;
            if (param_1 != (longlong *)0x0) {
              plVar4 = param_1 + 0x12;
            }
            FUN_180001b20(lVar1,plVar4);
          }
          break;
        }
        uVar8 = (ulonglong)(uVar11 + 1);
      } while (uVar11 + 1 < *puVar2);
    }
    FUN_18000ece0(param_1);
    for (iVar7 = (int)param_1[0x10]; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar11 = (uint)*(ushort *)((longlong)param_1 + 0x3c);
      if (*(ushort *)((longlong)param_1 + 0x3c) != 0) {
        do {
          (**(code **)(*param_1 + 0x30))(param_1,iVar7 + -1,uVar11 - 1);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    param_1[0xb] = 0;
    param_1[0x12] = (longlong)&PTR_DAT_180230270;
    param_1[0x13] = (longlong)&PTR_FUN_180236ab0;
    *param_1 = (longlong)&PTR_D3DPERF_GetStatus_180229eb0;
    FUN_18000b538(param_1 + 1);
    FUN_180102fc0(param_1,0x148);
    if (bVar5) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

