/*
 * FUN_1001dff8 at 1001dff8
 * undefined FUN_1001dff8(void)
 * Address ranges: 1001dff8-1001e193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001dff8(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 char param_7)

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
    if ((((param_2 != *(byte *)(iVar3 + 0x141)) || (param_3 != *(byte *)(iVar3 + 0x142))) ||
        (param_4 != *(byte *)(iVar3 + 0x143))) ||
       (((param_5 != *(byte *)(iVar3 + 0x144) || (param_6 != *(uint *)(iVar3 + 0x145))) ||
        (param_7 != *(char *)(iVar3 + 0x214))))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_2,param_3,param_4,param_5,param_6,param_7);
      *(char *)(*piVar2 + 0x141) = (char)param_2;
      *(char *)(*piVar2 + 0x142) = (char)param_3;
      *(char *)(*piVar2 + 0x143) = (char)param_4;
      *(char *)(*piVar2 + 0x144) = (char)param_5;
      *(uint *)(*piVar2 + 0x145) = param_6 & 0xff;
      *(char *)(*piVar2 + 0x214) = param_7;
      FUN_1001d098(param_1);
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

