/*
 * FUN_180031cc0 at 180031cc0
 * undefined FUN_180031cc0(void)
 * Address ranges: 180031cc0-180031d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031cc0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar2 = 0;
      goto LAB_180031cfc;
    }
    do {
      lVar2 = param_1[1] + uVar3 * 0x18;
LAB_180031cfc:
      if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))();
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 2));
  }
  thunk_FUN_180102fc0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  thunk_FUN_180102fc0(0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

