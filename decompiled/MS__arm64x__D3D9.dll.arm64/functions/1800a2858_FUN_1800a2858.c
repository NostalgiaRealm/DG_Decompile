/*
 * FUN_1800a2858 at 1800a2858
 * undefined FUN_1800a2858(void)
 * Address ranges: 1800a2858-1800a28ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a2858(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                     (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  return plVar1 != (longlong *)0x0;
}

