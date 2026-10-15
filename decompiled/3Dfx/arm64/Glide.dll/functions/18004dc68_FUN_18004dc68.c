/*
 * FUN_18004dc68 at 18004dc68
 * undefined __cdecl FUN_18004dc68(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined8 param_8)
 * Address ranges: 18004dc68-18004dcff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004dc68(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x200))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6,param_7,param_8
             ,in_stack_00000040,in_stack_00000048);
  FUN_18004b630(param_1);
  return;
}

