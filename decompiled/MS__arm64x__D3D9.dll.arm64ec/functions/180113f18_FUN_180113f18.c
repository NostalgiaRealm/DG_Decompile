/*
 * FUN_180113f18 at 180113f18
 * undefined FUN_180113f18(void)
 * Address ranges: 180113f18-180113f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180113f18(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = param_1 + 0x150;
  lVar5 = 4;
  do {
    puVar1 = (undefined8 *)(lVar3 + -0x10);
    lVar5 = lVar5 + -1;
    lVar3 = lVar3 + -0x20;
    FUN_1802229d8(*puVar1);
  } while (lVar5 != 0);
  uVar4 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      FUN_1802229d8(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar4 * 0x28 + 0x18));
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 200));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

