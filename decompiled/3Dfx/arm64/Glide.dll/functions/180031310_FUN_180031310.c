/*
 * FUN_180031310 at 180031310
 * undefined __cdecl FUN_180031310(undefined8 * param_1)
 * Address ranges: 180031310-18003134b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031310(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  FUN_180021528(plVar2);
  thunk_FUN_180001218(plVar2 + 0x53a,puVar1,(ulonglong)*(uint *)(plVar2 + 0x1d));
  return;
}

