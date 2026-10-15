/*
 * FUN_1800556f4 at 1800556f4
 * undefined __fastcall FUN_1800556f4(longlong * param_1, longlong param_2)
 * Address ranges: 1800556f4-180055752
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800556f4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_18005db9c(param_2 + param_1[2] * 2);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  FUN_18005f1b0(puVar3,(undefined8 *)*param_1,param_1[2]);
  FUN_18005dbc0((LPVOID)*param_1);
  param_1[1] = (lVar1 - lVar2) + (longlong)puVar3;
  *param_1 = (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

