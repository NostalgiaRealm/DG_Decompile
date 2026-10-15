/*
 * FUN_1000c180 at 1000c180
 * undefined FUN_1000c180(void)
 * Address ranges: 1000c180-1000c237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c180(int param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
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
    if (param_2 != *(ushort *)(*(int *)(param_1 + 0xc) + 0x131)) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar4,param_2);
      *(short *)(*(int *)(param_1 + 0xc) + 0x131) = (short)param_2;
    }
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

