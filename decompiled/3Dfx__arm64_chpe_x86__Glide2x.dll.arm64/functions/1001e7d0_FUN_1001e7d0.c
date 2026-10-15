/*
 * FUN_1001e7d0 at 1001e7d0
 * undefined FUN_1001e7d0(void)
 * Address ranges: 1001e7d0-1001e8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e7d0(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
      piVar2 = (int *)(param_1 + 0xc);
      param_2 = param_2 * 0x41;
      if ((param_3 != *(byte *)(*piVar2 + param_2 + 0x153)) ||
         (param_4 != *(byte *)(*piVar2 + param_2 + 0x154))) {
        auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,param_3,param_4);
        *(char *)(*piVar2 + param_2 + 0x153) = (char)param_3;
        *(char *)(*piVar2 + param_2 + 0x154) = (char)param_4;
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

