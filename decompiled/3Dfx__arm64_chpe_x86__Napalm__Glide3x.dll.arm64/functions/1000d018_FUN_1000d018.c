/*
 * FUN_1000d018 at 1000d018
 * undefined FUN_1000d018(void)
 * Address ranges: 1000d018-1000d1cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d018(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(param_1 + 0xc);
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7,param_2);
    cVar4 = *(char *)(*piVar2 + 0xe4);
    *(char *)(*piVar2 + 0xe4) = (char)param_2;
    if (param_2 == 6) {
      if ((cVar4 != '\x06') && (iVar3 = *piVar2, *(char *)(iVar3 + 0x1f1) == '\0')) {
        *(undefined8 *)(iVar3 + 0x1e9) = *(undefined8 *)(iVar3 + 0x135);
        *(undefined8 *)(iVar3 + 0x1e1) = *(undefined8 *)(iVar3 + 0x12d);
        *(undefined1 *)(*piVar2 + 0x1f1) = 1;
        iVar3 = *piVar2;
        *(undefined8 *)(iVar3 + 0x1e9) = *(undefined8 *)(iVar3 + 0x135);
        *(undefined8 *)(iVar3 + 0x1e1) = *(undefined8 *)(iVar3 + 0x12d);
        iVar3 = *piVar2;
        (*(code *)PTR_FUN_100a81e8)
                  (iVar3 + 0x12d,0,0,*(undefined4 *)(iVar3 + 0x1b9),*(undefined4 *)(iVar3 + 0x1bd));
        uVar7 = (*pcVar6)(*piVar2,*piVar2 + 0x12d);
        (*extraout_w11_00)(uVar7);
      }
    }
    else {
      iVar3 = *piVar2;
      if (*(char *)(iVar3 + 0x1f1) != '\0') {
        *(undefined8 *)(iVar3 + 0x135) = *(undefined8 *)(iVar3 + 0x1e9);
        *(undefined8 *)(iVar3 + 0x12d) = *(undefined8 *)(iVar3 + 0x1e1);
        uVar7 = (*pcVar6)(*piVar2,*piVar2 + 0x12d);
        (*extraout_w11_01)(uVar7);
        *(undefined1 *)(*piVar2 + 0x1f1) = 0;
      }
    }
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

