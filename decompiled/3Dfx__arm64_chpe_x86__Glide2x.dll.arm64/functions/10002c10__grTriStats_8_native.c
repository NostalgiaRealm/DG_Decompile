/*
 * _grTriStats@8_native at 10002c10
 * undefined _grTriStats@8_native(void)
 * Address ranges: 10002c10-10002ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTriStats_8_native(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_28;
  
  iVar4 = FUN_1001ba50();
  *param_1 = 0;
  *param_2 = 0;
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
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,auStack_50);
    *param_1 = local_28;
    *param_2 = local_48;
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

