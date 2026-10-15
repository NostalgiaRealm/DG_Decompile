/*
 * FUN_180047c18 at 180047c18
 * undefined FUN_180047c18(void)
 * Address ranges: 180047c18-180047c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047c18(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x1d8))(plVar1,0);
  *(uint *)(plVar1 + 500) = *(uint *)(plVar1 + 500) & 0x7fffffff;
  return;
}

