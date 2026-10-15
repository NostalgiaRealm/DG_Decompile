/*
 * FUN_180103158 at 180103158
 * undefined FUN_180103158(void)
 * Address ranges: 180103158-180103197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180103158(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*__imp_KERNEL32_dll_lstrlenA)();
  (*__imp_USER32_dll_CharLowerBuffA)(param_1,uVar1);
  return param_1;
}

