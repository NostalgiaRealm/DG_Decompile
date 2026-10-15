/*
 * FUN_1400120ec at 1400120ec
 * undefined8 __cdecl FUN_1400120ec(longlong param_1)
 * Address ranges: 1400120ec-140012127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400120ec(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return uVar1;
}

