/*
 * FUN_1800df2d0 at 1800df2d0
 * undefined FUN_1800df2d0(void)
 * Address ranges: 1800df2d0-1800df31b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800df2d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
  }
  return plVar1 != (longlong *)0x0;
}

