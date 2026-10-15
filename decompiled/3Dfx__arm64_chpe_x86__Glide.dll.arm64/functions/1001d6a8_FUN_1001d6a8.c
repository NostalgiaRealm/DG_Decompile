/*
 * FUN_1001d6a8 at 1001d6a8
 * undefined FUN_1001d6a8(void)
 * Address ranges: 1001d6a8-1001d767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001d6a8(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                 ulonglong param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,param_3 & 0xffffffff
                            ,param_4 & 0xffffffff,param_5 & 0xffffffff);
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

