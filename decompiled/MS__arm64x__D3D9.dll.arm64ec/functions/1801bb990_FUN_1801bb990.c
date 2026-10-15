/*
 * FUN_1801bb990 at 1801bb990
 * undefined FUN_1801bb990(void)
 * Address ranges: 1801bb990-1801bbadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801bb990(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = DAT_18024d8fc;
  *param_1 = &DAT_18022e2f0;
  param_1[0x11] = &PTR_FUN_1802296c8;
  param_1[0x14] = &PTR_FUN_18022e240;
  uVar5 = 0;
  uVar2 = DAT_18024d8fc;
  if (uVar6 != 0) {
    do {
      iVar4 = (int)uVar5;
      if (*(undefined8 **)(DAT_18024d900 + uVar5 * 8) == param_1) {
        uVar6 = uVar6 - 1;
        if (uVar6 - iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(DAT_18024d900 + uVar5 * 8,DAT_18024d900 + (ulonglong)(iVar4 + 1) * 8,
                              (ulonglong)(uVar6 - iVar4) << 3);
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
      uVar2 = uVar6;
    } while (iVar4 + 1U < uVar6);
  }
  DAT_18024d8fc = uVar2;
  if (uVar6 == 0) {
    if (DAT_18024d8f0 != 0) {
      thunk_FUN_1802236bc();
      DAT_18024d8f0 = 0;
    }
    FUN_1801c1640();
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    if (DAT_18024d920 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      if (DAT_18024d920 != 0) {
        uVar3 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(uVar3,1);
      }
      DAT_18024d920 = 0;
      FUN_18021fa28(DAT_18024d928);
      DAT_18024d928 = 0;
    }
    if (DAT_18024d8fc == 0) {
      FUN_1802229d8(DAT_18024d900);
      DAT_18024d900 = 0;
      FUN_1801c1640();
    }
  }
  FUN_1802229d8(param_1[0x1e]);
  FUN_180105808(param_1);
  return;
}

