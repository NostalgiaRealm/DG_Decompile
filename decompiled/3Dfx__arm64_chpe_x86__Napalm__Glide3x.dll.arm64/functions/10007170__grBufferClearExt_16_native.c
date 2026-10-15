/*
 * _grBufferClearExt@16_native at 10007170
 * undefined _grBufferClearExt@16_native(void)
 * Address ranges: 10007170-1000721b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferClearExt_16_native
               (ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
  param_1 = param_1 & 0xffffffff;
  param_2 = param_2 & 0xff;
  param_4 = param_4 & 0xff;
  iVar4 = FUN_1000ae60();
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,
                    param_4 & 0xffffffff);
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

