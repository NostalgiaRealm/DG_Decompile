/*
 * FUN_1000bad8 at 1000bad8
 * undefined FUN_1000bad8(void)
 * Address ranges: 1000bad8-1000bb9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000bad8(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
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
    uVar5 = (ulonglong)*(uint *)(param_1 + 0xc);
    iVar4 = FUN_1000ee20(uVar5,param_2);
    if (iVar4 != *(int *)((int)uVar5 + 0xfa)) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5 & 0xffffffff,iVar4);
      *(int *)(*(uint *)(param_1 + 0xc) + 0xfa) = iVar4;
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

