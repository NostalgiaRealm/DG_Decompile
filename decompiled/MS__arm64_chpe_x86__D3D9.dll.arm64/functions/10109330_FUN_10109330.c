/*
 * FUN_10109330 at 10109330
 * undefined FUN_10109330(void)
 * Address ranges: 10109330-101094c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10109330(int param_1,int param_2,undefined4 param_3,ulonglong param_4,int param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_101325d0(param_7,0,(param_4 & 0x3fffffff) << 2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar10 = 1;
  uVar9 = 0;
  if ((uint)param_4 != 0) {
    do {
      uVar8 = auVar11._0_8_;
      if (iVar10 == 0) goto LAB_10109498;
      psVar1 = (short *)(param_5 + uVar9 * 2);
      sVar2 = *psVar1;
      auVar11._8_2_ = sVar2;
      auVar11._0_8_ = uVar8;
      auVar11._10_6_ = 0;
      if (sVar2 != 0) {
        uVar4 = FUN_10131458(param_3,sVar2,&DAT_10165190);
        iVar5 = FUN_10131570(param_3,*psVar1,&DAT_10165190);
        if (iVar5 != 0) {
          uVar6 = (*pcVar3)();
          iVar7 = (*extraout_w11)(uVar6,iVar5,uVar4,0);
          if (-1 < iVar7) {
            uVar4 = (*pcVar3)(*(undefined4 *)(param_1 + param_2 * 0x1510 + 0x510),extraout_x1,
                              *(undefined2 *)(param_6 + uVar9 * 8 + 4));
            iVar7 = (*extraout_w11_00)(uVar4,*extraout_w8);
            if (-1 < iVar7) {
              auVar11 = FUN_101322d0(iVar5);
              goto LAB_10109488;
            }
          }
        }
        auVar11 = FUN_101322d0(iVar5);
        iVar10 = 0;
      }
LAB_10109488:
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)param_4);
    if (iVar10 == 0) {
LAB_10109498:
      FUN_101094c8(auVar11._0_8_,auVar11._8_8_,param_4 & 0xffffffff,param_7,param_8);
    }
  }
  return iVar10;
}

