/*
 * FUN_1001e4a8 at 1001e4a8
 * undefined FUN_1001e4a8(void)
 * Address ranges: 1001e4a8-1001e5d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e4a8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  code *extraout_w11;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
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
    local_20 = 0;
    local_18 = *(undefined4 *)(*piVar2 + 0x98);
    local_14 = *(undefined4 *)(*piVar2 + 0x9c);
    local_30 = param_2;
    iStack_2c = param_3;
    iStack_28 = param_4;
    iStack_24 = param_5;
    (*(code *)PTR_FUN_1009d194)(&local_30,&local_30,&local_20);
    iVar3 = *piVar2;
    if ((((local_30 != *(int *)(iVar3 + 0x10a)) || (iStack_2c != *(int *)(iVar3 + 0x10e))) ||
        (iStack_28 != *(int *)(iVar3 + 0x112))) || (iStack_24 != *(int *)(iVar3 + 0x116))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,&local_30);
      iVar3 = *piVar2;
      *(ulonglong *)(iVar3 + 0x112) = CONCAT44(iStack_24,iStack_28);
      *(ulonglong *)(iVar3 + 0x10a) = CONCAT44(iStack_2c,local_30);
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

