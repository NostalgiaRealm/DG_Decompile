/*
 * FUN_1800a33a4 at 1800a33a4
 * undefined __fastcall FUN_1800a33a4(undefined8 * param_1)
 * Address ranges: 1800a33a4-1800a33ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a33a4(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[2];
  uVar1 = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar2 + 0xc44) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar2 + 0xc40) = uVar1;
  FUN_1800e05b4(plVar3,lVar4,0);
  return;
}

