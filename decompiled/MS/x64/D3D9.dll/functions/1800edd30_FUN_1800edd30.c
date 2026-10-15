/*
 * FUN_1800edd30 at 1800edd30
 * undefined __fastcall FUN_1800edd30(longlong * param_1, longlong param_2)
 * Address ranges: 1800edd30-1800edd8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800edd30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_1800fbccc(param_2 + param_1[2] * 2);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  FUN_1800fbec0(puVar3,(undefined8 *)*param_1,param_1[2]);
  FUN_1800fbcf0((LPVOID)*param_1);
  param_1[1] = (lVar1 - lVar2) + (longlong)puVar3;
  *param_1 = (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

