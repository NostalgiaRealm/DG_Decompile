/*
 * FUN_180057ae0 at 180057ae0
 * undefined __cdecl FUN_180057ae0(undefined8 * param_1, longlong param_2)
 * Address ranges: 180057ae0-180057b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057ae0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)thunk_FUN_1800609d8(param_2 + param_1[2] * 2);
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  thunk_FUN_180001218(puVar3,puVar1,param_1[2]);
  thunk_FUN_180060a18((LPVOID)*param_1);
  *param_1 = puVar3;
  param_1[1] = (lVar2 - (longlong)puVar1) + (longlong)puVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

