/*
 * _grDrawVertexArray@12_native at 100016b0
 * undefined _grDrawVertexArray@12_native(void)
 * Address ranges: 100016b0-10001767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawVertexArray_12_native(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  
  param_1 = param_1 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  param_3 = param_3 & 0xffffffff;
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
    FUN_1000e758(*(int *)(iVar4 + 0xc));
    puVar6 = (undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3d0);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,*puVar6,param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff);
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

