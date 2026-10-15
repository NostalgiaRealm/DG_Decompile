/*
 * FUN_1800ac478 at 1800ac478
 * undefined FUN_1800ac478(void)
 * Address ranges: 1800ac478-1800ac693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800ac478(longlong param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  longlong lVar11;
  uint uVar12;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  uVar12 = 1;
  bVar3 = false;
  if (*(longlong *)(param_1 + -0x59a8) != 0) {
    lVar11 = **(longlong **)(param_1 + -0x5a08);
    uVar6 = FUN_18000e020(lVar11);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_180022b70();
      if (((uVar6 & 1) == 0) || (*(char *)(lVar11 + 0x120) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      lVar11 = (*__imp_USER32_dll_GetCursor)();
      lVar7 = FUN_180022c10();
      bVar3 = lVar11 != lVar7;
    }
    uVar6 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        uVar5 = FUN_18000e020(*(undefined8 *)(*(longlong *)(param_1 + -0x5a08) + uVar6 * 8));
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
        uVar12 = uVar5 & 0xff & uVar12;
      } while (uVar1 < *(uint *)(param_1 + -0x5a00));
      if (uVar12 == 0) {
        FUN_180022c10();
        pcVar10 = *(code **)(DAT_18024de50 + 0x78);
        if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
          pcVar10 = __imp_USER32_dll_SetCursor;
        }
        (*pcVar10)();
        if (*(int *)(param_1 + -0x5a00) != 0) {
          uVar6 = 0;
          do {
            lVar11 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar6 * 8);
            plVar8 = *(longlong **)(lVar11 + 0x100);
            (**(code **)(*plVar8 + 0x68))(plVar8,param_2 != 0);
            *(bool *)(lVar11 + 0x120) = param_2 != 0;
            uVar12 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + -0x5a00));
        }
        goto LAB_1800ac654;
      }
    }
    if (param_2 == 0) {
      uVar9 = FUN_180022c10();
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + -0x59a8);
    }
    pcVar10 = *(code **)(DAT_18024de50 + 0x78);
    if (*(code **)(DAT_18024de50 + 0x78) == (code *)0x0) {
      pcVar10 = __imp_USER32_dll_SetCursor;
    }
    (*pcVar10)(uVar9);
    uVar6 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar6 * 8);
        plVar8 = *(longlong **)(lVar11 + 0x100);
        (**(code **)(*plVar8 + 0x68))(plVar8,0);
        *(undefined1 *)(lVar11 + 0x120) = 0;
        uVar12 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_1 + -0x5a00));
    }
  }
LAB_1800ac654:
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return bVar3;
}

