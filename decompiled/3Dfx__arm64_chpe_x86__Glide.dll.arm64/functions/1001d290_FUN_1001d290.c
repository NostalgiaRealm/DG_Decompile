/*
 * FUN_1001d290 at 1001d290
 * undefined FUN_1001d290(void)
 * Address ranges: 1001d290-1001d3e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d290(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
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
    if (param_2 != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_2);
      FUN_1007ac00(*(int *)(param_1 + 0xc) + 0xe0,param_2,0x135);
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
        do {
          FUN_1001f760(param_1,iVar6,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
      }
      FUN_1001d098(param_1);
      if (param_3 == '\0') {
        uVar5 = (*pcVar4)(*(int *)(param_1 + 0xc),param_2 + 0x135);
        (*extraout_w11_00)(uVar5);
      }
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

