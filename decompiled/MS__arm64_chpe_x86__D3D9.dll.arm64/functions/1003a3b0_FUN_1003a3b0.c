/*
 * FUN_1003a3b0 at 1003a3b0
 * undefined FUN_1003a3b0(void)
 * Address ranges: 1003a3b0-1003a517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a3b0(undefined8 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = &DAT_10171384 + param_2 * 0x8a;
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar7 + -1 == 0) {
    iVar7 = *(int *)(&DAT_10171558 + param_2 * 0x228);
    if (iVar7 != 0) {
      FUN_1003bf70(iVar7);
      FUN_10132260(iVar7,0x88);
    }
    *(undefined4 *)(&DAT_10171558 + param_2 * 0x228) = 0;
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar7 = 0;
    uVar6 = 0;
    do {
      if ((&DAT_10171380)[uVar6 * 0x8a] == (&DAT_10171380)[param_2 * 0x8a]) {
        iVar7 = (&DAT_10171384)[uVar6 * 0x8a] + iVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
    if (iVar7 == 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5);
    }
    (&DAT_10171380)[param_2 * 0x8a] = 0;
    FUN_101322d0(*(undefined4 *)(&DAT_10171580 + param_2 * 0x45));
    (&DAT_10171580)[param_2 * 0x45] = 0;
    (&DAT_10171588)[param_2 * 0x8a] = 0;
    FUN_101322d0(*(undefined4 *)(&DAT_1017158c + param_2 * 0x45));
    (&DAT_1017158c)[param_2 * 0x45] = 0;
    (&DAT_10171594)[param_2 * 0x8a] = 0;
    FUN_101322d0(*(undefined4 *)(&DAT_10171598 + param_2 * 0x45));
    (&DAT_10171598)[param_2 * 0x45] = 0;
    (&DAT_101715a0)[param_2 * 0x8a] = 0;
  }
  return;
}

