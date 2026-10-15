/*
 * FUN_1001edd8 at 1001edd8
 * undefined FUN_1001edd8(void)
 * Address ranges: 1001edd8-1001ef2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001edd8(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
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
    iVar4 = FUN_1001d188(param_1);
    if ((((&DAT_1009e191)[iVar4 * 0x18] == '\0') &&
        (*(char *)(*(int *)(param_1 + 0x1c) + 0x7b5) != '\0')) && (param_2 != 0)) {
      if (param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797) && param_3 < 3) {
        FUN_10027688(*(undefined4 *)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6 + 1);
        uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar5,param_2,param_3,param_4,param_5,param_6 + 1);
      }
    }
    else {
      FUN_1001ef30(param_1,param_3,param_4,param_5,param_6);
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

