/*
 * _grTexClampMode@12_native at 10004320
 * undefined _grTexClampMode@12_native(void)
 * Address ranges: 10004320-10004437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexClampMode_12_native(int param_1,uint param_2,uint param_3)

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
      if ((param_2 != *(byte *)(iVar5 + 0x1f2)) || (param_3 != *(byte *)(iVar5 + 499))) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1,param_2,param_3);
        *(char *)(*piVar2 + param_1 * 0x9d + 0x1f2) = (char)param_2;
        *(char *)(*piVar2 + param_1 * 0x9d + 499) = (char)param_3;
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

