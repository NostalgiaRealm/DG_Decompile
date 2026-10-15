/*
 * FUN_18010be98 at 18010be98
 * undefined FUN_18010be98(void)
 * Address ranges: 18010be98-18010befb;18010bf0c-18010bf43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010be98(longlong *param_1,undefined8 *param_2)

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
    lVar5 = CONCAT44(0,uVar2) << 3;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar2);
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = FUN_1802229a8(lVar5);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar5,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8) = *param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar4;
}

