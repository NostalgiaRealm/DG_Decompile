/*
 * FUN_1000beb0 at 1000beb0
 * undefined FUN_1000beb0(void)
 * Address ranges: 1000beb0-1000bf93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000beb0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(param_1 + 0xc);
    iVar3 = *piVar2;
    if ((param_2 != *(int *)(iVar3 + 0x11b)) || (param_3 != *(int *)(iVar3 + 0x11f))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (iVar3,param_2 != 0,param_3 != 0);
      (*extraout_w11)(uVar6);
      *(int *)(*piVar2 + 0x11b) = param_2;
      *(int *)(*piVar2 + 0x11f) = param_3;
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

