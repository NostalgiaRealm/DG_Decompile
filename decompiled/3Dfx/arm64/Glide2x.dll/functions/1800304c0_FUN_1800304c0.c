/*
 * FUN_1800304c0 at 1800304c0
 * undefined __cdecl FUN_1800304c0(undefined8 * param_1)
 * Address ranges: 1800304c0-1800304fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800304c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  FUN_1800206d8(plVar2);
  thunk_FUN_180001218(plVar2 + 0x53a,puVar1,(ulonglong)*(uint *)(plVar2 + 0x1d));
  return;
}

