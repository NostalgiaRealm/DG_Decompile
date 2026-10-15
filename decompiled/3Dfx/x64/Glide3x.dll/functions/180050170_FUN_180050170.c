/*
 * FUN_180050170 at 180050170
 * undefined __fastcall FUN_180050170(undefined8 * param_1)
 * Address ranges: 180050170-1800501d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050170(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_180066cf8;
  FUN_180050638((longlong)param_1);
  FUN_180060ac0((LPVOID)param_1[0xd2]);
  FUN_180060ac0((LPVOID)param_1[0xcb]);
  FUN_180060ac0((LPVOID)param_1[0xc9]);
  puVar2 = param_1 + 0xc3;
  lVar3 = 8;
  do {
    puVar1 = puVar2 + -0xb;
    puVar2 = puVar2 + -0xc;
    FUN_180060ac0((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

