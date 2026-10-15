/*
 * FUN_180151550 at 180151550
 * undefined FUN_180151550(void)
 * Address ranges: 180151550-1801515af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180151550(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar3 = CONCAT44(0,(int)param_1[1] << 1);
    lVar4 = uVar3 * 0x158;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    if (SUB168(auVar2 * ZEXT816(0x158),8) != 0) {
      lVar4 = -1;
    }
    lVar4 = FUN_1802229a8(lVar4);
    if (lVar4 != 0) {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar4,*param_1,0x158);
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar4;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (param_2 < uVar1) {
    if (3 < uVar1 - param_2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(*param_1 + (ulonglong)uVar1 * 0x158,
                          *param_1 + (ulonglong)(uVar1 - 1) * 0x158,0x158);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*param_1 + (ulonglong)uVar1 * 0x158,
                        *param_1 + (ulonglong)(uVar1 - 1) * 0x158,0x158);
  }
  *(undefined8 *)(*param_1 + (ulonglong)param_2 * 0x158) = param_3;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48((ulonglong)param_2 * 0x158 + *param_1 + 8,param_4,0x148);
}

