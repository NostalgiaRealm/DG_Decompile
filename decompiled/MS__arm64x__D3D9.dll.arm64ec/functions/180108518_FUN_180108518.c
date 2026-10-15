/*
 * FUN_180108518 at 180108518
 * undefined FUN_180108518(void)
 * Address ranges: 180108518-18010857b;18010858c-1801085c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180108518(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    lVar5 = CONCAT44(0,uVar2) << 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = FUN_1802229a8(lVar5);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar5,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 2);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = *param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar4;
}

