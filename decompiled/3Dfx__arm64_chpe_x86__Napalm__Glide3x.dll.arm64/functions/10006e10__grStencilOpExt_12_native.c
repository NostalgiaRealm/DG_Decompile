/*
 * _grStencilOpExt@12_native at 10006e10
 * undefined _grStencilOpExt@12_native(void)
 * Address ranges: 10006e10-10006f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grStencilOpExt_12_native(uint param_1,uint param_2,uint param_3)

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
        param_1 = 0;
      }
      if (7 < param_2) {
        param_2 = 0;
      }
      if (7 < param_3) {
        param_3 = 0;
      }
      if (((param_1 != *(uint *)(iVar5 + 0xf8)) || (param_2 != *(uint *)(iVar5 + 0xfc))) ||
         (param_3 != *(uint *)(iVar5 + 0x100))) {
        uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar7,param_1,param_2,param_3);
        *(uint *)(*piVar2 + 0xf8) = param_1;
        *(uint *)(*piVar2 + 0xfc) = param_2;
        *(uint *)(*piVar2 + 0x100) = param_3;
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

