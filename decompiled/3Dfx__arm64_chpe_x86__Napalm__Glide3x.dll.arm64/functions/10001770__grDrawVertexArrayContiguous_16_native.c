/*
 * _grDrawVertexArrayContiguous@16_native at 10001770
 * undefined _grDrawVertexArrayContiguous@16_native(void)
 * Address ranges: 10001770-10001833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawVertexArrayContiguous_16_native
               (undefined4 param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *extraout_w8;
  code *extraout_w11;
  
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
    FUN_1000e758(*(undefined4 *)(iVar4 + 0xc));
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,*extraout_w8,param_1,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff);
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

