/*
 * FUN_18000e138 at 18000e138
 * undefined FUN_18000e138(void)
 * Address ranges: 18000e138-18000e1f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000e138(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 0xe78) >> 2 & 1) == 0) &&
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
    FUN_1800031b8(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xe28),
                  *(undefined4 *)(param_1 + 0xe8),param_2);
    uVar3 = 0;
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar3;
}

