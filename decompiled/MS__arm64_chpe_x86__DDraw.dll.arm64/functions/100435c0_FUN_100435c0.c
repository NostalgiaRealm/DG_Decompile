/*
 * FUN_100435c0 at 100435c0
 * undefined FUN_100435c0(void)
 * Address ranges: 100435c0-1004367b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100435c0(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *extraout_w1;
  undefined1 uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  
  uVar7 = (ulonglong)param_1;
  piVar1 = (int *)(param_1 + 0x2c);
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
  uVar6 = 1;
  iVar5 = FUN_1003d888(piVar1);
  *extraout_w1 = 0;
  if (iVar5 == 0) {
    DAT_100c2944 = uVar6;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7 & 0xffffffff,1,0);
    DAT_100c2944 = 0;
  }
  return;
}

