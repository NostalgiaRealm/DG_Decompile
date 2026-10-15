/*
 * FUN_180100d48 at 180100d48
 * undefined FUN_180100d48(void)
 * Address ranges: 180100d48-180100d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180100d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (*__imp_USER32_dll_IsWindowUnicode)(param_2);
  pcVar2 = __imp_USER32_dll_SetWindowLongPtrA;
  if (iVar1 != 0) {
    pcVar2 = __imp_USER32_dll_SetWindowLongPtrW;
  }
  (*pcVar2)(param_2,0xfffffffc,param_3);
  return;
}

