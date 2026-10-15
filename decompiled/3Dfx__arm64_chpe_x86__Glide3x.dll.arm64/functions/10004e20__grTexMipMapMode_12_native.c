/*
 * _grTexMipMapMode@12_native at 10004e20
 * undefined _grTexMipMapMode@12_native(void)
 * Address ranges: 10004e20-10004f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMipMapMode_12_native(ulonglong param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  
  param_1 = param_1 & 0xffffffff;
  iVar5 = FUN_100093b8();
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
    if ((int)param_1 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      piVar2 = (int *)(iVar5 + 0xc);
      iVar5 = (int)param_1 * 0x55;
      if ((*(byte *)(*piVar2 + iVar5 + 0x19f) != param_2) ||
         (*(int *)(*piVar2 + iVar5 + 0x1a0) != param_3)) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1 & 0xffffffff,param_2,param_3);
        *(char *)(*piVar2 + iVar5 + 0x19f) = (char)param_2;
        *(int *)(*piVar2 + iVar5 + 0x1a0) = param_3;
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

