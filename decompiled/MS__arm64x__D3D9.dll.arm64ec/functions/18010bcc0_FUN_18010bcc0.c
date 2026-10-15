/*
 * FUN_18010bcc0 at 18010bcc0
 * undefined FUN_18010bcc0(void)
 * Address ranges: 18010bcc0-18010bd27;18010bd38-18010bd87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010bcc0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    lVar6 = CONCAT44(0,uVar3) * 0x50;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(0x50),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = FUN_1802229a8(lVar6);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar6,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x50);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    uVar7 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x50);
    puVar1[1] = param_2[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    uVar7 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar7;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    uVar7 = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[8] = uVar7;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

