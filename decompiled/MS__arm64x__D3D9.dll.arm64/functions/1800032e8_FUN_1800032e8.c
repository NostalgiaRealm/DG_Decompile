/*
 * FUN_1800032e8 at 1800032e8
 * undefined FUN_1800032e8(void)
 * Address ranges: 1800032e8-180003393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800032e8(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    lVar4 = CONCAT44(0,uVar2) << 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      lVar4 = -1;
    }
    lVar4 = thunk_FUN_180102f80(lVar4);
    if (lVar4 == 0) {
      return 0;
    }
    thunk_FUN_180001218(lVar4,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 2);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

