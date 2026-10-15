/*
 * FUN_1000b820 at 1000b820
 * undefined FUN_1000b820(void)
 * Address ranges: 1000b820-1000b953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b820(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
    if (0xf < (int)param_2) {
      param_2 = 0;
    }
    if (0xf < (int)param_3) {
      param_3 = 0;
    }
    if ((((param_2 != *(byte *)(iVar3 + 0xe2)) || (param_3 != *(byte *)(iVar3 + 0xe3))) ||
        (param_4 != *(byte *)(iVar3 + 0xe4))) || (param_5 != *(byte *)(iVar3 + 0xe5))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_2,param_3,param_4,param_5);
      *(char *)(*piVar2 + 0xe2) = (char)param_2;
      *(char *)(*piVar2 + 0xe3) = (char)param_3;
      *(char *)(*piVar2 + 0xe4) = (char)param_4;
      *(char *)(*piVar2 + 0xe5) = (char)param_5;
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

