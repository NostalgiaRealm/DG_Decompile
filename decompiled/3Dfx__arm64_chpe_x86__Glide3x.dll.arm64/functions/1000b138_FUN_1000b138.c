/*
 * FUN_1000b138 at 1000b138
 * undefined FUN_1000b138(void)
 * Address ranges: 1000b138-1000b2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000b138(int param_1,int param_2)

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
    cVar4 = *(char *)(*piVar2 + 0xe0);
    *(char *)(*piVar2 + 0xe0) = (char)param_2;
    if (param_2 == 6) {
      if ((cVar4 != '\x06') && (iVar3 = *piVar2, *(char *)(iVar3 + 0x18e) == '\0')) {
        *(undefined8 *)(iVar3 + 0x186) = *(undefined8 *)(iVar3 + 0x112);
        *(undefined8 *)(iVar3 + 0x17e) = *(undefined8 *)(iVar3 + 0x10a);
        *(undefined1 *)(*piVar2 + 0x18e) = 1;
        iVar3 = *piVar2;
        *(undefined8 *)(iVar3 + 0x186) = *(undefined8 *)(iVar3 + 0x112);
        *(undefined8 *)(iVar3 + 0x17e) = *(undefined8 *)(iVar3 + 0x10a);
        iVar3 = *piVar2;
        (*(code *)PTR_FUN_100a01e8)
                  (iVar3 + 0x10a,0,0,*(undefined4 *)(iVar3 + 0x156),*(undefined4 *)(iVar3 + 0x15a));
        uVar7 = (*pcVar6)(*piVar2,*piVar2 + 0x10a);
        (*extraout_w11_00)(uVar7);
      }
    }
    else {
      iVar3 = *piVar2;
      if (*(char *)(iVar3 + 0x18e) != '\0') {
        *(undefined8 *)(iVar3 + 0x112) = *(undefined8 *)(iVar3 + 0x186);
        *(undefined8 *)(iVar3 + 0x10a) = *(undefined8 *)(iVar3 + 0x17e);
        uVar7 = (*pcVar6)(*piVar2,*piVar2 + 0x10a);
        (*extraout_w11_01)(uVar7);
        *(undefined1 *)(*piVar2 + 0x18e) = 0;
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

