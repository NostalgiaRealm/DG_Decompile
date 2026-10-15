/*
 * FUN_1001d1d8 at 1001d1d8
 * undefined FUN_1001d1d8(void)
 * Address ranges: 1001d1d8-1001d28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d1d8(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 != 0) {
      FUN_1007ac00(param_2,*(int *)(param_1 + 0xc) + 0xe0,0x135);
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(int *)(param_1 + 0xc),param_2 + 0x135);
      (*extraout_w11)(uVar4);
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

