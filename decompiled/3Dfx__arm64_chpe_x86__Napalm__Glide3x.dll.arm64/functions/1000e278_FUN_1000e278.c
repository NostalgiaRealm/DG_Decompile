/*
 * FUN_1000e278 at 1000e278
 * undefined FUN_1000e278(void)
 * Address ranges: 1000e278-1000e49f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e278(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                 undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,int param_13)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int extraout_w1;
  uint extraout_w10;
  int extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  uint extraout_w13;
  uint extraout_w14;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if ((((param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797) && param_11 <= param_13) &&
          -1 < param_11) &&
        (uVar10 = FUN_10009a38(param_1,param_4,param_5,param_6,param_7), (uVar10 & 1) != 0)) &&
       ((param_8 == 3 || ((param_4 & 1) == (uint)(param_8 != 1))))) {
      param_3 = param_3 & 0xfffffff8;
      while ((int)param_4 < param_5) {
        iVar8 = FUN_10009b30(param_8,param_5,param_5,param_6,param_7);
        param_3 = iVar8 + param_3;
        param_5 = extraout_w1 + -1;
      }
      if (param_3 < *(uint *)(*(int *)(param_1 + 0xc) + param_2 * 0x4e8 + 0x45c)) {
        iVar8 = FUN_1000aed8(param_7);
        uVar3 = extraout_w14;
        if (param_6 < 0) {
          uVar3 = extraout_w13;
        }
        uVar4 = extraout_w13;
        if (param_6 < 0) {
          uVar4 = extraout_w14;
        }
        iVar8 = iVar8 * (uVar3 & 0xffff | uVar4 >> 0x10);
        iVar5 = iVar8 + (param_13 - param_11) * iVar8;
        if (extraout_w10 < iVar5 + param_3) {
          iVar5 = extraout_w10 - param_3;
        }
        iVar8 = *(int *)(extraout_w11 + 0x458) + iVar8 * param_11 + param_3;
        iVar2 = *(int *)(extraout_w12 + 0x454) + iVar8;
        FUN_10083b40(iVar2,param_9,iVar5);
        uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_00)(uVar9,iVar2,iVar8,iVar5);
      }
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

