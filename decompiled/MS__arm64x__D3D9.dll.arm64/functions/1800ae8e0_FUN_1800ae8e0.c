/*
 * FUN_1800ae8e0 at 1800ae8e0
 * undefined FUN_1800ae8e0(void)
 * Address ranges: 1800ae8e0-1800ae9a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ae8e0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) != '\0') {
    (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x28))();
    *(undefined1 *)(param_1 + -0x5b27) = 0;
    uVar3 = 0;
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar3;
}

