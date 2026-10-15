/*
 * FUN_14001250c at 14001250c
 * undefined8 __cdecl FUN_14001250c(longlong param_1, undefined4 param_2)
 * Address ranges: 14001250c-140012563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14001250c(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                      (*(longlong **)(param_1 + 0x10),uVar1);
  }
  return uVar2;
}

