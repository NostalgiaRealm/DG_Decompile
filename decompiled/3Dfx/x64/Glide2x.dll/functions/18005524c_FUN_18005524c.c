/*
 * FUN_18005524c at 18005524c
 * undefined __fastcall FUN_18005524c(longlong * param_1, longlong param_2)
 * Address ranges: 18005524c-1800552aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005524c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_18005d6fc(param_2 + param_1[2] * 2);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  FUN_18005ed10(puVar3,(undefined8 *)*param_1,param_1[2]);
  FUN_18005d720((LPVOID)*param_1);
  param_1[1] = (lVar1 - lVar2) + (longlong)puVar3;
  *param_1 = (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

