/*
 * FUN_18009efdc at 18009efdc
 * undefined __fastcall FUN_18009efdc(longlong * param_1)
 * Address ranges: 18009efdc-18009effb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009efdc(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[7] != 0) {
    (**(code **)(*plVar1 + 0x118))(plVar1,0,0);
  }
  return;
}

