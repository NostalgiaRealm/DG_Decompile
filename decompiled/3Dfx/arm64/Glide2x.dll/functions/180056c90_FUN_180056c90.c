/*
 * FUN_180056c90 at 180056c90
 * undefined __cdecl FUN_180056c90(undefined8 * param_1, longlong param_2)
 * Address ranges: 180056c90-180056cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056c90(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_18005fb88(param_2 + param_1[2] * 2);
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  thunk_FUN_180001218(puVar3,puVar1,param_1[2]);
  thunk_FUN_18005fbc8((LPVOID)*param_1);
  *param_1 = puVar3;
  param_1[1] = (lVar2 - (longlong)puVar1) + (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

