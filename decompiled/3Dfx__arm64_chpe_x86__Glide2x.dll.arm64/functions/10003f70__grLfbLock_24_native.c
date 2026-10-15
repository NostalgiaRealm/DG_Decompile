/*
 * _grLfbLock@24_native at 10003f70
 * undefined _grLfbLock@24_native(void)
 * Address ranges: 10003f70-1000403b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbLock_24_native(undefined4 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  
  iVar5 = FUN_1001ba50();
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
    auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(auVar6._0_8_ & 0xffffffff,param_1,auVar6._8_8_ & 0xffffffff,
                            param_3 & 0xffffffff,param_4 & 0xffffffff);
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

