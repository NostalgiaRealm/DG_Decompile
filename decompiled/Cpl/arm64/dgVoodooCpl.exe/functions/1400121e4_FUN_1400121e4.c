/*
 * FUN_1400121e4 at 1400121e4
 * undefined8 __cdecl FUN_1400121e4(longlong param_1)
 * Address ranges: 1400121e4-14001221f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400121e4(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
  }
  return uVar1;
}

