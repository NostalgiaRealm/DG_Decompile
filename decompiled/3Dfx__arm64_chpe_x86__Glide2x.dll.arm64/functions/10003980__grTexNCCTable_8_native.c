/*
 * _grTexNCCTable@8_native at 10003980
 * undefined _grTexNCCTable@8_native(void)
 * Address ranges: 10003980-10003a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_8_native(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  
  iVar4 = FUN_1001ba50();
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
    if (param_1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_1,param_2);
      *(char *)(*(int *)(iVar4 + 0xc) + param_1 + 0x137) = (char)param_2;
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

