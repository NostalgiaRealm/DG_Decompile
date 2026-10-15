/*
 * _grLfbConstantDepth@4_native at 10004380
 * undefined _grLfbConstantDepth@4_native(void)
 * Address ranges: 10004380-1000443b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4_native(short param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
  iVar4 = FUN_1001beb0();
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
    if (param_1 != *(short *)(*(int *)(iVar4 + 0xc) + 0x12f)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_1);
      *(short *)(*(int *)(iVar4 + 0xc) + 0x12f) = param_1;
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

