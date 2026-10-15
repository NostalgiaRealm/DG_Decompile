/*
 * _grSstVRetraceOn@0_native at 10002220
 * undefined _grSstVRetraceOn@0_native(void)
 * Address ranges: 10002220-100022c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstVRetraceOn_0_native(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  iVar5 = FUN_1001beb0();
  bVar3 = false;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(uVar6);
    bVar3 = cVar4 != '\0';
    do {
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return bVar3;
}

