/*
 * _grDrawPoint@4_native at 10001410
 * undefined _grDrawPoint@4_native(void)
 * Address ranges: 10001410-100014a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4_native(ulonglong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  iVar4 = FUN_1001beb0(param_1,param_1 & 0xffffffff);
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
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
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

