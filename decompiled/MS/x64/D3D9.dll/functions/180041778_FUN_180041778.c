/*
 * FUN_180041778 at 180041778
 * undefined __fastcall FUN_180041778(undefined8 * param_1)
 * Address ranges: 180041778-1800417e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180041778(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      puVar1 = (undefined8 *)&DAT_00000008;
      goto LAB_1800417a9;
    }
    do {
      puVar1 = (undefined8 *)(param_1[1] + uVar3 * 0x18 + 0x10);
LAB_1800417a9:
      FUN_1800fbcf0((LPVOID)*puVar1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

