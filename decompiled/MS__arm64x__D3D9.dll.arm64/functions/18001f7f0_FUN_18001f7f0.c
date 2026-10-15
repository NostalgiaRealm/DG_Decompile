/*
 * FUN_18001f7f0 at 18001f7f0
 * undefined FUN_18001f7f0(void)
 * Address ranges: 18001f7f0-18001f887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_18001f7f0(undefined1 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_50 [48];
  
  iVar2 = FUN_1800015a0(DAT_18024e310 + 0x30);
  if (iVar2 == 1) {
    iVar2 = *(int *)(DAT_18024e310 + 0x2c);
    while (iVar2 != 0) {
      (*__imp_USER32_dll_PeekMessageA)(auStack_50,0,0,0,0x400000);
      iVar2 = *(int *)(DAT_18024e310 + 0x2c);
    }
  }
  lVar1 = DAT_18024e310;
  *param_1 = 1;
  iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(lVar1);
  if (iVar2 == 0) {
    FUN_180003398();
  }
  return param_1;
}

