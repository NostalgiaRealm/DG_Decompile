/*
 * FUN_1400122c4 at 1400122c4
 * undefined8 __cdecl FUN_1400122c4(longlong param_1, undefined4 param_2)
 * Address ranges: 1400122c4-140012307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400122c4(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                      (*(longlong **)(param_1 + 0x10),param_2);
  }
  return uVar1;
}

