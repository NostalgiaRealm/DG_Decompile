/*
 * FUN_1800c85b8 at 1800c85b8
 * undefined FUN_1800c85b8(void)
 * Address ranges: 1800c85b8-1800c8707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c85b8(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar3 = FUN_180001590((longlong)param_1 + 0xc);
  if (iVar3 + *(int *)(param_1 + 1) == 0) {
    if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar3 == 0) {
        FUN_180003398();
      }
    }
    lVar5 = param_1[3];
    uVar6 = *(uint *)(lVar5 + 0x6968);
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(undefined8 **)(*(longlong *)(lVar5 + 0x6960) + uVar4 * 8) == param_1) {
          if ((int)uVar4 != -1) {
            while (uVar1 = (int)uVar4 + 1, uVar1 < uVar6) {
              *(undefined8 *)(*(longlong *)(lVar5 + 0x6960) + uVar4 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar5 + 0x6960) + (ulonglong)uVar1 * 8);
              uVar4 = (ulonglong)uVar1;
              uVar6 = *(uint *)(lVar5 + 0x6968);
            }
            *(int *)(lVar5 + 0x6968) = *(int *)(lVar5 + 0x6968) + -1;
          }
          break;
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < uVar6);
    }
    FUN_180102fc0(param_1[0x4f],0x254);
    param_1[0x4f] = 0;
    thunk_FUN_180102fc0(param_1[0x50]);
    param_1[0x50] = 0;
    *(undefined4 *)(param_1 + 0x51) = 0;
    FUN_1800797d0(param_1 + 4);
    *param_1 = &PTR_FUN_180236c38;
    FUN_180102fc0(param_1,0x298);
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return;
}

