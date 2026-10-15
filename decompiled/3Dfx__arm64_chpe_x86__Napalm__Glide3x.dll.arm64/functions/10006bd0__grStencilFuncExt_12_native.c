/*
 * _grStencilFuncExt@12_native at 10006bd0
 * undefined _grStencilFuncExt@12_native(void)
 * Address ranges: 10006bd0-10006d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grStencilFuncExt_12_native(int param_1,char param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  
  iVar5 = FUN_1000ae60();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar8 = FUN_1000b5c0(iVar5);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_1000af10(iVar5), (uVar8 & 1) != 0)) &&
       (iVar6 = FUN_1000cd68(iVar5), iVar6 == 4)) {
      piVar2 = (int *)(iVar5 + 0xc);
      iVar5 = *piVar2;
      if (7 < param_1) {
        param_1 = 7;
      }
      if (((param_1 != *(int *)(iVar5 + 0xf1)) || (param_2 != *(char *)(iVar5 + 0xf5))) ||
         (param_3 != *(char *)(iVar5 + 0xf6))) {
        uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar7,param_1,param_2,param_3);
        *(int *)(*piVar2 + 0xf1) = param_1;
        *(char *)(*piVar2 + 0xf5) = param_2;
        *(char *)(*piVar2 + 0xf6) = param_3;
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

