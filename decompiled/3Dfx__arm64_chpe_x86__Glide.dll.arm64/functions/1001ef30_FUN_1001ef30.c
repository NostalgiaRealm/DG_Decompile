/*
 * FUN_1001ef30 at 1001ef30
 * undefined FUN_1001ef30(void)
 * Address ranges: 1001ef30-1001f073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ef30(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
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
    if (param_2 < 3) {
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
        do {
          FUN_10027688(*(undefined4 *)(param_1 + 0xc),iVar6,param_2,param_3,param_4,param_5 + 1);
          uVar5 = (*pcVar4)();
          (*extraout_w11)(uVar5,iVar6,param_2,param_3,param_4,param_5 + 1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
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

