/*
 * FUN_1001d9f0 at 1001d9f0
 * undefined FUN_1001d9f0(void)
 * Address ranges: 1001d9f0-1001daab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d9f0(int param_1,int param_2)

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
    if (param_2 != *(int *)(iVar2 + 0xfe)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(iVar2,param_2 == 1);
      (*extraout_w11)(uVar5);
      *(int *)(*(int *)(param_1 + 0xc) + 0xfe) = param_2;
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

