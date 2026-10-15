/*
 * FUN_1800d8e08 at 1800d8e08
 * undefined FUN_1800d8e08(void)
 * Address ranges: 1800d8e08-1800d8ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1800d8e08(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  
  *param_1 = *param_2;
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,param_2[5]);
    lVar3 = CONCAT44(0,param_2[5]) << 2;
    if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
      lVar3 = -1;
    }
    lVar3 = thunk_FUN_180102f80(lVar3);
    *(longlong *)(param_1 + 2) = lVar3;
    if (lVar3 != 0) {
      thunk_FUN_180001218(lVar3,*(undefined8 *)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
    }
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2[8] != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,param_2[9]);
    lVar3 = CONCAT44(0,param_2[9]) << 3;
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      lVar3 = -1;
    }
    lVar3 = thunk_FUN_180102f80(lVar3);
    *(longlong *)(param_1 + 6) = lVar3;
    if (lVar3 != 0) {
      thunk_FUN_180001218(lVar3,*(undefined8 *)(param_2 + 6),(ulonglong)(uint)param_2[8] << 3);
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
    }
  }
  return param_1;
}

