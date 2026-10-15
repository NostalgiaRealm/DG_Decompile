/*
 * FUN_180055f34 at 180055f34
 * undefined __fastcall FUN_180055f34(undefined8 * param_1)
 * Address ranges: 180055f34-180055fd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055f34(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar2 = 0;
      goto LAB_180055f61;
    }
    do {
      lVar2 = (ulonglong)uVar1 * 0x40 + param_1[1];
LAB_180055f61:
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1800e7600((longlong *)param_1[3],*(longlong *)(lVar2 + 0x10));
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 2));
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

