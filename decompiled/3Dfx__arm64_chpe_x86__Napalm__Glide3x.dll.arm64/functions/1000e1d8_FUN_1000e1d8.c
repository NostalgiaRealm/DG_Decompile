/*
 * FUN_1000e1d8 at 1000e1d8
 * undefined FUN_1000e1d8(void)
 * Address ranges: 1000e1d8-1000e277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e1d8(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    piVar5 = (int *)(param_1 + 0xc);
    iVar6 = 0x1310;
    FUN_10010ed8(*piVar5 + 0x1310);
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*piVar5,*piVar5 + iVar6);
    (*extraout_w11)(uVar4);
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

