/*
 * FUN_180012088 at 180012088
 * undefined __fastcall FUN_180012088(longlong param_1)
 * Address ranges: 180012088-18001211c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012088(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = param_1 + 0x150;
  lVar4 = 4;
  do {
    puVar1 = (undefined8 *)(lVar2 + -0x10);
    lVar2 = lVar2 + -0x20;
    FUN_1800fbcf0((LPVOID)*puVar1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar5 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      FUN_1800fbcf0(*(LPVOID *)(*(longlong *)(param_1 + 0xc0) + 0x18 + uVar5 * 0x28));
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 200));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

