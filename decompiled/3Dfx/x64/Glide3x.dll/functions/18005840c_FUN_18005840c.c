/*
 * FUN_18005840c at 18005840c
 * bool __fastcall FUN_18005840c(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 18005840c-180058437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18005840c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
  }
  return plVar1 != (longlong *)0x0;
}

