/*
 * FUN_18000cd40 at 18000cd40
 * undefined FUN_18000cd40(void)
 * Address ranges: 18000cd40-18000cddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000cd40(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_50 [48];
  
  iVar1 = FUN_1800015a0(DAT_18024e310 + 0x30);
  if (iVar1 == 1) {
    iVar1 = *(int *)(DAT_18024e310 + 0x2c);
    while (iVar1 != 0) {
      (*__imp_USER32_dll_PeekMessageA)(auStack_50,0,0,0,0x400000);
      iVar1 = *(int *)(DAT_18024e310 + 0x2c);
    }
  }
  FUN_1800015a0(DAT_18024e310 + 0x28);
  iVar1 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
  if (iVar1 == 0) {
    FUN_180003398(1);
  }
  return param_1;
}

