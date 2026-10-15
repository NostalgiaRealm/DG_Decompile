/*
 * FUN_1800de04c at 1800de04c
 * undefined __fastcall FUN_1800de04c(undefined8 * param_1)
 * Address ranges: 1800de04c-1800de0b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800de04c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_D3DPERF_GetStatus_1801067d8;
  FUN_1800de514((longlong)param_1);
  FUN_1800fbcf0((LPVOID)param_1[0xd2]);
  FUN_1800fbcf0((LPVOID)param_1[0xcb]);
  FUN_1800fbcf0((LPVOID)param_1[0xc9]);
  puVar2 = param_1 + 0xc3;
  lVar3 = 8;
  do {
    puVar1 = puVar2 + -0xb;
    puVar2 = puVar2 + -0xc;
    FUN_1800fbcf0((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

