/*
 * FUN_180055e00 at 180055e00
 * bool __fastcall FUN_180055e00(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 180055e00-180055e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180055e00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
  }
  return plVar1 != (longlong *)0x0;
}

