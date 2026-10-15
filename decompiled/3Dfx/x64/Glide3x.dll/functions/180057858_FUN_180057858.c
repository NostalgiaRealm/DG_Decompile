/*
 * FUN_180057858 at 180057858
 * undefined __fastcall FUN_180057858(longlong * param_1, longlong param_2)
 * Address ranges: 180057858-1800578b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057858(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_180060a9c(param_2 + param_1[2] * 2);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  FUN_180061330(puVar3,(undefined8 *)*param_1,param_1[2]);
  FUN_180060ac0((LPVOID)*param_1);
  param_1[1] = (lVar1 - lVar2) + (longlong)puVar3;
  *param_1 = (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

