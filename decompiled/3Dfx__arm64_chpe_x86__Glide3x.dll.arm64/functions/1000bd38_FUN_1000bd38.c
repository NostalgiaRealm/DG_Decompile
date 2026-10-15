/*
 * FUN_1000bd38 at 1000bd38
 * undefined FUN_1000bd38(void)
 * Address ranges: 1000bd38-1000beaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000bd38(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

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
    if ((((param_2 != *(byte *)(iVar3 + 0x14e)) || (param_3 != *(byte *)(iVar3 + 0x14f))) ||
        (param_4 != *(byte *)(iVar3 + 0x150))) ||
       ((param_5 != *(byte *)(iVar3 + 0x151) || (param_6 != *(int *)(iVar3 + 0x152))))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_2,param_3,param_4,param_5,param_6);
      *(char *)(*piVar2 + 0x14e) = (char)param_2;
      *(char *)(*piVar2 + 0x14f) = (char)param_3;
      *(char *)(*piVar2 + 0x150) = (char)param_4;
      *(char *)(*piVar2 + 0x151) = (char)param_5;
      *(int *)(*piVar2 + 0x152) = param_6;
      FUN_1000ad98(param_1);
      *(undefined4 *)(*piVar2 + 0x294) = 0;
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

