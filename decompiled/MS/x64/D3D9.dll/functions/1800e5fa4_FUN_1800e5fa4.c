/*
 * FUN_1800e5fa4 at 1800e5fa4
 * undefined __fastcall FUN_1800e5fa4(undefined8 * param_1)
 * Address ranges: 1800e5fa4-1800e607a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e5fa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_180106c60;
  puVar1 = param_1 + 0xd6;
  param_1[0xd5] = &PTR_FUN_180106e18;
  *puVar1 = &PTR_LAB_180106cf0;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar5 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,puVar1);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xd9));
  }
  puVar3 = DAT_1801123b8;
  if (DAT_1801123b8 != (undefined8 *)0x0) {
    FUN_1800e9c3c(DAT_1801123b8);
    FUN_1800fbcf0(puVar3);
  }
  DAT_1801123b8 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_1800de514((longlong)param_1);
  lVar6 = 0x10;
  puVar3 = param_1 + 0x36a0;
  do {
    puVar3 = puVar3 + -0x358;
    FUN_1800e5e50((longlong)puVar3);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1800f489c(puVar1);
  FUN_1800de04c(param_1);
  return;
}

