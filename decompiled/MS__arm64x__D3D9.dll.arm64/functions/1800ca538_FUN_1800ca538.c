/*
 * FUN_1800ca538 at 1800ca538
 * undefined FUN_1800ca538(void)
 * Address ranges: 1800ca538-1800ca613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ca538(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  lVar3 = *(longlong *)(param_1 + 0x40);
  iVar2 = FUN_180001590(lVar3 + 0xcc);
  if (*(int *)(lVar3 + 200) + iVar2 == 0) {
    if (((*(uint *)(*(longlong *)(lVar3 + 0x80) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar2 == 0) {
        FUN_180003398();
      }
    }
    FUN_180023590(lVar3,0,0);
    thunk_FUN_180102fc0(*(undefined8 *)(lVar3 + 0x90));
    *(undefined8 *)(lVar3 + 0x90) = 0;
    FUN_1800c9620(lVar3);
    FUN_180102fc0(lVar3,0xd8);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

