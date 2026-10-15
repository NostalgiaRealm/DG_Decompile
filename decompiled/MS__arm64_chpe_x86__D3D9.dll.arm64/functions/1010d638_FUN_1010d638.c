/*
 * FUN_1010d638 at 1010d638
 * undefined FUN_1010d638(void)
 * Address ranges: 1010d638-1010d6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1010d638(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  undefined1 auStack_50 [8];
  int local_48;
  
  uVar2 = *param_2;
  uVar5 = (*(code *)PTR_FUN_1016c09c)(0);
  iVar6 = (*(code *)PTR_FUN_1016c1ac)(uVar5,uVar2,auStack_50);
  if ((iVar6 == 0) || (local_48 == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_48 = (*extraout_w11)(param_1,param_3);
    if (local_48 == 0) {
      return 0;
    }
  }
  piVar1 = (int *)(local_48 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  return local_48;
}

