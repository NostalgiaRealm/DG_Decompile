/*
 * FUN_18020eaf0 at 18020eaf0
 * undefined FUN_18020eaf0(void)
 * Address ranges: 18020eaf0-18020eb57;18020eb68-18020ebaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020eaf0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    lVar6 = CONCAT44(0,uVar3) * 0xc;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(0xc),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = FUN_1802229a8(lVar6);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar6,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0xc);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

