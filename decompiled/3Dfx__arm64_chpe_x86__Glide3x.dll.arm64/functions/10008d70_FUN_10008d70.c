/*
 * FUN_10008d70 at 10008d70
 * undefined FUN_10008d70(void)
 * Address ranges: 10008d70-10008e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008d70(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar2 = (int *)(param_1 + 0x38);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    piVar3 = (int *)(param_1 + 0xc);
    uVar8 = 0;
    do {
      *(float *)(*piVar3 + uVar8 * 0xc + 0x11d4) = (float)*(uint *)(param_3 + uVar8 * 4) / 255.0;
      *(float *)(*piVar3 + uVar8 * 0xc + 0x11d8) = (float)*(uint *)(param_4 + uVar8 * 4) / 255.0;
      iVar1 = uVar8 * 4;
      iVar4 = uVar8 + 0x17d;
      uVar8 = uVar8 + 1;
      *(float *)(*piVar3 + iVar4 * 0xc) = (float)*(uint *)(param_5 + iVar1) / 255.0;
    } while (uVar8 < 0x100);
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*piVar3,*piVar3 + 0x11d4);
    (*extraout_w11)(uVar7);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

