/*
 * FUN_140012060 at 140012060
 * undefined * __cdecl FUN_140012060(longlong param_1)
 * Address ranges: 140012060-140012063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_140012060(longlong param_1)

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

