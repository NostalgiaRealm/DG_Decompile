/*
 * FUN_1800a34f8 at 1800a34f8
 * undefined __fastcall FUN_1800a34f8(undefined8 * param_1)
 * Address ranges: 1800a34f8-1800a3517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a34f8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[2];
  *(undefined1 *)(param_1[1] + 0xd6a) = *(undefined1 *)(param_1 + 3);
  FUN_1800e05b4(plVar1,lVar2,0);
  return;
}

