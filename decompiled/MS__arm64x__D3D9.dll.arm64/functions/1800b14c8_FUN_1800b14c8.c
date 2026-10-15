/*
 * FUN_1800b14c8 at 1800b14c8
 * undefined FUN_1800b14c8(void)
 * Address ranges: 1800b14c8-1800b159f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b14c8(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar4 = DAT_18024e310;
    if (iVar3 == 0) {
      FUN_180003398();
      lVar4 = DAT_18024e310;
    }
  }
  bVar2 = true;
  *(int *)(param_1 + 0x5cac) = param_2;
  if ((*(int *)(param_1 + -0x59d0) != 3) && ((*(uint *)(param_1 + -0x59c0) >> 5 & 1) == 0)) {
    if ((*(uint *)(param_1 + -0x59c0) >> 7 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = param_2 != 0;
    }
  }
  *(bool *)(param_1 + -0x1d) = bVar2;
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return 0;
}

