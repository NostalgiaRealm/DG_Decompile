/*
 * _grAlphaTestReferenceValue@4_native at 100029a0
 * undefined _grAlphaTestReferenceValue@4_native(void)
 * Address ranges: 100029a0-10002a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestReferenceValue_4_native(char param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
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
    if (param_1 != *(char *)(*(int *)(iVar4 + 0xc) + 0x128)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_1);
      *(char *)(*(int *)(iVar4 + 0xc) + 0x128) = param_1;
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

