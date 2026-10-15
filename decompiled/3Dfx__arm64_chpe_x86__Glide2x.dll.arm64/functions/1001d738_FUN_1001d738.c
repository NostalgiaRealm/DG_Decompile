/*
 * FUN_1001d738 at 1001d738
 * undefined FUN_1001d738(void)
 * Address ranges: 1001d738-1001d7f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d738(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
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
    iVar2 = *(int *)(param_1 + 0xc);
    if (param_2 != *(int *)(iVar2 + 0x129)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(iVar2,param_2 != 0);
      (*extraout_w11)(uVar5);
      *(int *)(*(int *)(param_1 + 0xc) + 0x129) = param_2;
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

