/*
 * FUN_1400125e0 at 1400125e0
 * undefined8 __cdecl FUN_1400125e0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1400125e0-14001264b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400125e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))
                      (*(longlong **)(param_1 + 0x10),uVar1,param_3,param_4);
  }
  return uVar2;
}

