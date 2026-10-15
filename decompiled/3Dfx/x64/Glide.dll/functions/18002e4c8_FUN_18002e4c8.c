/*
 * FUN_18002e4c8 at 18002e4c8
 * undefined __fastcall FUN_18002e4c8(undefined8 * param_1)
 * Address ranges: 18002e4c8-18002e503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e4c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  FUN_18001f7bc(plVar2);
  FUN_18005f1b0(plVar2 + 0x53a,puVar1,(ulonglong)*(uint *)(plVar2 + 0x1d));
  return;
}

