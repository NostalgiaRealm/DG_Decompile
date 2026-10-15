/*
 * FUN_10038620 at 10038620
 * undefined FUN_10038620(void)
 * Address ranges: 10038620-100386bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038620(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulonglong extraout_x1;
  code *extraout_w11;
  undefined4 *extraout_w15;
  
  piVar1 = (int *)(param_1 + 0x44);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2;
    if (iVar2 == 0) {
      iVar5 = 1;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  while (iVar2 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    do {
      iVar2 = *piVar1;
      iVar5 = iVar2;
      if (iVar2 == 0) {
        iVar5 = 1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  iVar5 = FUN_1003d888(piVar1);
  *extraout_w15 = 0;
  if (iVar5 == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(extraout_x1 & 0xffffffff);
  }
  return;
}

