/*
 * FUN_1800a28b0 at 1800a28b0
 * undefined FUN_1800a28b0(void)
 * Address ranges: 1800a28b0-1800a2903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a28b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                     (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  }
  return plVar1 != (longlong *)0x0;
}

