/*
 * FUN_100be8a0 at 100be8a0
 * undefined FUN_100be8a0(void)
 * Address ranges: 100be8a0-100be95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100be8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 4);
  iVar6 = 0;
  if (*piVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
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
    if (*(int *)(param_1 + 8) + iVar6 == 0) {
      FUN_100be998(param_1 + -0x5c);
    }
    if (iVar3 == 0) {
      if (iVar6 == 0) {
        FUN_100b1f90(iVar2 + 0x58e0);
      }
    }
    else {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar6 = (*extraout_w11)(iVar3);
    }
  }
  return iVar6;
}

