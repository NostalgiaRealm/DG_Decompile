/*
 * FUN_1000a798 at 1000a798
 * undefined FUN_1000a798(void)
 * Address ranges: 1000a798-1000a8bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a798(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(param_1 + 0xc);
    uVar7 = 0;
    do {
      *(float *)(*piVar2 + uVar7 * 0xc + 0x1310) = (float)*(uint *)(param_3 + uVar7 * 4) / 255.0;
      *(float *)(*piVar2 + (uVar7 + 0x197) * 0xc) = (float)*(uint *)(param_4 + uVar7 * 4) / 255.0;
      uVar3 = uVar7 + 1;
      *(float *)(*piVar2 + uVar7 * 0xc + 0x1318) = (float)*(uint *)(param_5 + uVar7 * 4) / 255.0;
      uVar7 = uVar3;
    } while (uVar3 < 0x100);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*piVar2,*piVar2 + 0x1310);
    (*extraout_w11)(uVar6);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

