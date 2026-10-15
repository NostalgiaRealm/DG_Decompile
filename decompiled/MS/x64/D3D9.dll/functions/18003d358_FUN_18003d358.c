/*
 * FUN_18003d358 at 18003d358
 * undefined __fastcall FUN_18003d358(undefined8 * param_1)
 * Address ranges: 18003d358-18003d3e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d358(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar1 = 0;
      goto LAB_18003d382;
    }
    do {
      lVar1 = param_1[1] + uVar3 * 0x18;
LAB_18003d382:
      if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800fbcf0((LPVOID)0x0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

