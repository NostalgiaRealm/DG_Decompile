/*
 * _grFogTable@4_native at 100035f0
 * undefined _grFogTable@4_native(void)
 * Address ranges: 100035f0-100036a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogTable_4_native(undefined4 param_1)

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
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,param_1);
    FUN_10083b40(*(int *)(iVar4 + 0xc) + 0x3d4,param_1,*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xdc)
                );
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

