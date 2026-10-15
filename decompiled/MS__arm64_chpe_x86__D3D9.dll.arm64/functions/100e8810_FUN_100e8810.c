/*
 * FUN_100e8810 at 100e8810
 * undefined FUN_100e8810(void)
 * Address ranges: 100e8810-100e88cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e8810(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x18);
  iVar6 = 0;
  if (*piVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x28);
    do {
      iVar6 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (*(int *)(param_1 + 0x1c) + iVar6 == 0) {
      FUN_100e8908(param_1 + -0x5c);
    }
    if (iVar3 == 0) {
      if (iVar6 == 0) {
        FUN_100d3450(iVar2 + 0x66b4);
      }
    }
    else {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar6 = (*extraout_w11)(iVar3);
    }
  }
  return iVar6;
}

