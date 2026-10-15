/*
 * FUN_1000c628 at 1000c628
 * undefined FUN_1000c628(void)
 * Address ranges: 1000c628-1000c797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c628(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
    if ((param_2 < 3) ||
       ((param_2 == 3 && (iVar5 = FUN_1000ae88(param_1), (&DAT_100a23f5)[iVar5 * 0x18] != '\0')))) {
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      iVar5 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
        do {
          FUN_1000f020(*(undefined4 *)(param_1 + 0xc),iVar5,param_2,param_3,param_4,param_5 + 1);
          uVar6 = (*pcVar4)();
          (*extraout_w11)(uVar6,iVar5,param_2,param_3,param_4,param_5 + 1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
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

