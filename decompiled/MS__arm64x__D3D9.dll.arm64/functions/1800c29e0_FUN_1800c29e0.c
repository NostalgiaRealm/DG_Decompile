/*
 * FUN_1800c29e0 at 1800c29e0
 * undefined FUN_1800c29e0(void)
 * Address ranges: 1800c29e0-1800c2b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c29e0(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_1[3];
  iVar3 = FUN_180001590(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar3 == 0) {
    if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
    lVar7 = param_1[3];
    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x1d0))(*(longlong **)(lVar7 + 0x28),param_1[6]);
    uVar6 = *(uint *)(lVar7 + 0x6988);
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        if (*(undefined8 **)(*(longlong *)(lVar7 + 0x6980) + uVar5 * 8) == param_1) {
          if ((int)uVar5 != -1) {
            while (uVar1 = (int)uVar5 + 1, uVar1 < uVar6) {
              *(undefined8 *)(*(longlong *)(lVar7 + 0x6980) + uVar5 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar7 + 0x6980) + (ulonglong)uVar1 * 8);
              uVar5 = (ulonglong)uVar1;
              uVar6 = *(uint *)(lVar7 + 0x6988);
            }
            *(int *)(lVar7 + 0x6988) = *(int *)(lVar7 + 0x6988) + -1;
          }
          break;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < uVar6);
    }
    (**(code **)(*(longlong *)param_1[6] + 8))();
    *param_1 = &PTR_FUN_180236820;
    param_1[6] = 0;
    FUN_180102fc0(param_1,0x48);
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  if (iVar3 == 0) {
    FUN_1800a9f28(lVar8 + 0x6838);
  }
  return iVar3;
}

