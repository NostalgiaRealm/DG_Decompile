/*
 * FUN_1800b7240 at 1800b7240
 * undefined FUN_1800b7240(void)
 * Address ranges: 1800b7240-1800b7337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b7240(longlong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
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
  uVar3 = (**(code **)(*(longlong *)(&DAT_180253850)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b]
                      + 0x130))();
  if ((uVar3 < 5) && ((0x12U >> (ulonglong)(uVar3 & 0x1f) & 1) != 0)) {
    uVar4 = 0x88760874;
  }
  else if (uVar3 == 2) {
    uVar4 = 0x88760870;
  }
  else {
    uVar4 = 0;
    if (uVar3 == 3) {
      uVar4 = 0x88760868;
    }
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar4;
}

