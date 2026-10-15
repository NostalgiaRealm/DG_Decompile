/*
 * FUN_1800546a8 at 1800546a8
 * undefined __cdecl FUN_1800546a8(undefined8 * param_1)
 * Address ranges: 1800546a8-18005470b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800546a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_180069d08;
  FUN_180054b70((longlong)param_1);
  thunk_FUN_180063700((LPVOID)param_1[0xd2]);
  thunk_FUN_180063700((LPVOID)param_1[0xcb]);
  thunk_FUN_180063700((LPVOID)param_1[0xc9]);
  lVar3 = 8;
  puVar2 = param_1 + 0xc3;
  do {
    puVar1 = puVar2 + -0xb;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + -0xc;
    thunk_FUN_180063700((LPVOID)*puVar1);
  } while (lVar3 != 0);
  return;
}

