/*
 * _grReset@4_native at 10003b60
 * undefined _grReset@4_native(void)
 * Address ranges: 10003b60-10003c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grReset_4_native(ulonglong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  
  iVar5 = FUN_100093b8(param_1,param_1 & 0xffffffff);
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
    cVar4 = (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
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

