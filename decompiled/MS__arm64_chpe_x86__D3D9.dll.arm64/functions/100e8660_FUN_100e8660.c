/*
 * FUN_100e8660 at 100e8660
 * undefined FUN_100e8660(void)
 * Address ranges: 100e8660-100e86fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e8660(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x18);
  do {
    iVar5 = *piVar1 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 0x28) == 0) {
    if (iVar5 == 1) {
      piVar1 = (int *)(&DAT_000066bc + *(int *)(param_1 + 0x24));
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
    }
  }
  else {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(uVar4);
  }
  return iVar5;
}

