/*
 * _grSstIsBusy@0_native at 100022d0
 * undefined _grSstIsBusy@0_native(void)
 * Address ranges: 100022d0-1000236f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 _grSstIsBusy_0_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  iVar5 = FUN_1001ba50();
  uVar4 = 0;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(uVar6);
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
  return uVar4;
}

