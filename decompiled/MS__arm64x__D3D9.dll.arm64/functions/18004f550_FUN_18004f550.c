/*
 * FUN_18004f550 at 18004f550
 * undefined FUN_18004f550(void)
 * Address ranges: 18004f550-18004f5eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f550(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar3 = 0;
      goto LAB_18004f58c;
    }
    do {
      lVar3 = param_1[1] + uVar2 * 0x40;
LAB_18004f58c:
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FUN_1800ee4f8(param_1[3]);
        (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))();
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
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

