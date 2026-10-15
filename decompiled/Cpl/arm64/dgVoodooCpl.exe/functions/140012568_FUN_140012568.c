/*
 * FUN_140012568 at 140012568
 * undefined8 __cdecl FUN_140012568(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 140012568-14001256f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012568(longlong param_1,undefined4 param_2,undefined4 param_3)

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
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                      (*(longlong **)(param_1 + 0x10),uVar1,param_3);
  }
  return uVar2;
}

