/*
 * _grTexNCCTable@4_native at 10004130
 * undefined _grTexNCCTable@4_native(void)
 * Address ranges: 10004130-1000423b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexNCCTable_4_native(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  int iVar7;
  
  iVar5 = FUN_100093b8();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    iVar7 = 0;
    if (0 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797)) {
      do {
        uVar6 = (*pcVar4)();
        (*extraout_w11)(uVar6,iVar7,param_1);
        *(char *)(*(int *)(iVar5 + 0xc) + iVar7 + 0x137) = (char)param_1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(*(int *)(iVar5 + 0x1c) + 0x797));
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

