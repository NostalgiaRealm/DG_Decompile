/*
 * FUN_18000cc80 at 18000cc80
 * undefined FUN_18000cc80(void)
 * Address ranges: 18000cc80-18000cd37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18000cc80(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x100) >> 0xb & 1) != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x28) + 0xe78) >> 2 & 1) == 0) &&
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
    uVar3 = FUN_18000ca28(param_1,0);
    if (bVar1) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar3;
}

