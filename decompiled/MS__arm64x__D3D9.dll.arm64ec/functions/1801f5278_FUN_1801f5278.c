/*
 * FUN_1801f5278 at 1801f5278
 * undefined FUN_1801f5278(void)
 * Address ranges: 1801f5278-1801f52db;1801f52ec-1801f5333;1801f5344-1801f5353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1801f5278(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  
  *param_1 = *param_2;
  FUN_1802229d8(*(undefined8 *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,param_2[5]);
    lVar3 = CONCAT44(0,param_2[5]) << 2;
    if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
      lVar3 = -1;
    }
    lVar3 = FUN_1802229a8(lVar3);
    *(longlong *)(param_1 + 2) = lVar3;
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar3,*(undefined8 *)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
    }
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2[8] != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,param_2[9]);
    lVar3 = CONCAT44(0,param_2[9]) << 3;
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      lVar3 = -1;
    }
    lVar3 = FUN_1802229a8(lVar3);
    *(longlong *)(param_1 + 6) = lVar3;
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar3,*(undefined8 *)(param_2 + 6),(ulonglong)(uint)param_2[8] << 3);
    }
  }
  return param_1;
}

