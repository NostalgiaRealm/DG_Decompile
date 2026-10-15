/*
 * _grFinish@0_native at 100023e0
 * undefined _grFinish@0_native(void)
 * Address ranges: 100023e0-1000249f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFinish_0_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar5 = FUN_1000ae60();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar6);
    uVar6 = (*pcVar4)();
    (*extraout_w11_00)(uVar6);
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

