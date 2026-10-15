/*
 * FUN_180024c20 at 180024c20
 * undefined __cdecl FUN_180024c20(undefined8 * param_1)
 * Address ranges: 180024c20-180024c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  FUN_18000cab0(plVar2);
  thunk_FUN_1800010d8(plVar2 + 0x54d,puVar1,(ulonglong)*(uint *)(plVar2 + 0x1d));
  return;
}

