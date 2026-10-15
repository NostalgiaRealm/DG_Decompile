/*
 * FUN_140012228 at 140012228
 * undefined8 __cdecl FUN_140012228(longlong param_1, uint param_2, undefined2 * param_3)
 * Address ranges: 140012228-1400122bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012228(longlong param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < uVar1) {
      *param_3 = 0;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                        (*(longlong **)(param_1 + 0x10),param_2);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                (*(longlong **)(param_1 + 0x10),uVar2,param_3);
      return 1;
    }
  }
  return 0;
}

