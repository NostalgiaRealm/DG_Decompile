/*
 * FUN_140012064 at 140012064
 * undefined * __cdecl FUN_140012064(longlong param_1)
 * Address ranges: 140012064-1400120a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_140012064(longlong param_1)

{
  undefined *puVar1;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x20) == '\0') {
    puVar1 = &DAT_140026ff0;
  }
  else {
    puVar1 = (undefined *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  }
  return puVar1;
}

