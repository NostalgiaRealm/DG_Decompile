/*
 * FUN_1006f770 at 1006f770
 * undefined FUN_1006f770(void)
 * Address ranges: 1006f770-1006f8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006f770(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,
                int param_5,undefined4 param_6)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *extraout_w11;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_10083b70(param_6,0,(param_4 & 0x3fffffff) << 2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar10 = 1;
  uVar9 = 0;
  if ((uint)param_4 != 0) {
    do {
      uVar8 = auVar11._0_8_;
      if (iVar10 == 0) goto LAB_1006f880;
      psVar1 = (short *)(param_5 + uVar9 * 2);
      sVar2 = *psVar1;
      auVar11._8_2_ = sVar2;
      auVar11._0_8_ = uVar8;
      auVar11._10_6_ = 0;
      if (sVar2 != 0) {
        uVar4 = FUN_10083058(param_3,sVar2,&DAT_100a1b18);
        iVar5 = FUN_10083170(param_3,*psVar1,&DAT_100a1b18);
        if (iVar5 != 0) {
          uVar6 = (*pcVar3)();
          iVar7 = (*extraout_w11)(uVar6,iVar5,uVar4,0);
          if (-1 < iVar7) {
            auVar11 = FUN_10083420(iVar5);
            goto LAB_1006f870;
          }
        }
        auVar11 = FUN_10083420(iVar5);
        iVar10 = 0;
      }
LAB_1006f870:
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)param_4);
    if (iVar10 == 0) {
LAB_1006f880:
      FUN_1006f8b0(auVar11._0_8_,auVar11._8_8_,param_4 & 0xffffffff,param_6);
    }
  }
  return iVar10;
}

