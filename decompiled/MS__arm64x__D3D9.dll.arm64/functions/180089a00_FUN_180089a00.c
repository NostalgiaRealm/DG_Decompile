/*
 * FUN_180089a00 at 180089a00
 * undefined FUN_180089a00(void)
 * Address ranges: 180089a00-180089abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089a00(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar4 = 0;
    lVar3 = param_1[3];
    if (*(int *)(param_1 + 2) == 0) {
      puVar5 = (undefined8 *)&DAT_00000008;
      goto LAB_180089a5c;
    }
    do {
      puVar5 = (undefined8 *)(param_1[1] + uVar4 * 0x18 + 0x10);
LAB_180089a5c:
      FUN_1800ee4f8(lVar3 + (ulonglong)uVar2 * 0x1ac0 + 0x22d8,*puVar5);
      (**(code **)(*(longlong *)*puVar5 + 0x10))();
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
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

