/*
 * _grTexFilterMode@12_native at 100048f0
 * undefined _grTexFilterMode@12_native(void)
 * Address ranges: 100048f0-10004a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexFilterMode_12_native(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  iVar5 = FUN_1000ae60();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (param_1 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      piVar2 = (int *)(iVar5 + 0xc);
      iVar5 = *piVar2 + param_1 * 0x9d;
      if ((param_2 != *(byte *)(iVar5 + 500)) || (param_3 != *(byte *)(iVar5 + 0x1f5))) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1,param_2,param_3);
        *(char *)(*piVar2 + param_1 * 0x9d + 500) = (char)param_2;
        *(char *)(*piVar2 + param_1 * 0x9d + 0x1f5) = (char)param_3;
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

