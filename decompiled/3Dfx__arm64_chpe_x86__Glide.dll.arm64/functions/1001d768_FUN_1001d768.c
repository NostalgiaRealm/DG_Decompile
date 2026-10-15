/*
 * FUN_1001d768 at 1001d768
 * undefined FUN_1001d768(void)
 * Address ranges: 1001d768-1001d853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001d768(int param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  undefined1 auVar7 [16];
  
  bVar3 = false;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if ((uint)param_3 < 3) {
      uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x98);
      uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x9c);
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
    }
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,param_3 & 0xffffffff
                            ,1,0,0,uVar5 & 0xffffffff,uVar6 & 0xffffffff,0);
    bVar3 = cVar4 != '\0';
    do {
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return bVar3;
}

