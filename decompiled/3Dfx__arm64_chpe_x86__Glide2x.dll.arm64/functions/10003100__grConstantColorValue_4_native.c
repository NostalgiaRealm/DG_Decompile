/*
 * _grConstantColorValue@4_native at 10003100
 * undefined _grConstantColorValue@4_native(void)
 * Address ranges: 10003100-100031c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue_4_native(ulonglong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  
  iVar4 = FUN_1001ba50(param_1,param_1 & 0xffffffff);
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
    uVar6 = (ulonglong)*(uint *)(iVar4 + 0xc);
    iVar5 = FUN_10027080(uVar6);
    if (iVar5 != *(int *)((int)uVar6 + 0xe6)) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6 & 0xffffffff,iVar5);
      *(int *)(*(uint *)(iVar4 + 0xc) + 0xe6) = iVar5;
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

