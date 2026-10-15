/*
 * FUN_18005b208 at 18005b208
 * bool __cdecl FUN_18005b208(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18005b208-18005b20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18005b208(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
  }
  return plVar1 != (longlong *)0x0;
}

