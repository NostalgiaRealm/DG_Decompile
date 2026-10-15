/*
 * FUN_1800c4ce8 at 1800c4ce8
 * undefined FUN_1800c4ce8(void)
 * Address ranges: 1800c4ce8-1800c4d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c4ce8(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(longlong *)(param_1 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
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
  uVar3 = FUN_18000b3e0(param_1 + -0x68,param_2);
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar3;
}

