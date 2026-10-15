/*
 * FUN_180006748 at 180006748
 * undefined FUN_180006748(void)
 * Address ranges: 180006748-1800067f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180006748(longlong *param_1,undefined8 *param_2)

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
    lVar4 = CONCAT44(0,uVar2) << 3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      lVar4 = -1;
    }
    lVar4 = thunk_FUN_180102f80(lVar4);
    if (lVar4 == 0) {
      return 0;
    }
    thunk_FUN_180001218(lVar4,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

