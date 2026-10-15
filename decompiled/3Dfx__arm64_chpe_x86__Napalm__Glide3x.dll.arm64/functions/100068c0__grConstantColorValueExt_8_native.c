/*
 * _grConstantColorValueExt@8_native at 100068c0
 * undefined _grConstantColorValueExt@8_native(void)
 * Address ranges: 100068c0-100069eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValueExt_8_native(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  
  iVar4 = FUN_1000ae60();
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = FUN_1000b5c0(iVar4);
    if (((((uVar6 & 1) != 0) && (uVar6 = FUN_1000af10(iVar4), (uVar6 & 1) != 0)) &&
        (iVar5 = FUN_1000cd68(iVar4), iVar5 == 4)) &&
       (param_1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797))) {
      uVar6 = (ulonglong)*(uint *)(iVar4 + 0xc);
      iVar5 = FUN_10010da8(uVar6,param_2);
      if (iVar5 != *(int *)((int)uVar6 + param_1 * 0x9d + 0x246)) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6 & 0xffffffff,param_1,iVar5);
        *(int *)(*(uint *)(iVar4 + 0xc) + param_1 * 0x9d + 0x246) = iVar5;
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

