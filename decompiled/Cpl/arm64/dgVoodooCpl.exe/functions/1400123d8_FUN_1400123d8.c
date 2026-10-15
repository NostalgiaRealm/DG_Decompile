/*
 * FUN_1400123d8 at 1400123d8
 * undefined8 __cdecl FUN_1400123d8(longlong param_1, undefined4 param_2)
 * Address ranges: 1400123d8-1400123db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400123d8(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                      (*(longlong **)(param_1 + 0x10),param_2);
  }
  return uVar1;
}

