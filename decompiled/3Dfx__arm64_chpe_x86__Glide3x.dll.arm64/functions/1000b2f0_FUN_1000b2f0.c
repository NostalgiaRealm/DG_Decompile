/*
 * FUN_1000b2f0 at 1000b2f0
 * undefined FUN_1000b2f0(void)
 * Address ranges: 1000b2f0-1000b397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b2f0(int param_1,undefined4 param_2,byte param_3,undefined2 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 extraout_x1;
  ulonglong uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  
  uVar5 = (ulonglong)param_3;
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
    uVar6 = (ulonglong)*(uint *)(param_1 + 0xc);
    uVar4 = FUN_1000ee20(uVar6,param_2,uVar5,param_4);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(uVar4,uVar4 & 0xffffffff);
    (*extraout_w11)(uVar6 & 0xffffffff,extraout_x1,uVar5 & 0xffffffff);
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

