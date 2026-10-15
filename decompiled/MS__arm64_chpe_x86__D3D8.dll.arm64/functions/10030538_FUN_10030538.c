/*
 * FUN_10030538 at 10030538
 * undefined FUN_10030538(void)
 * Address ranges: 10030538-1003069f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030538(undefined8 param_1,int param_2)

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
  
  piVar1 = &DAT_101387c4 + param_2 * 0x8a;
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
    iVar7 = *(int *)(&DAT_10138998 + param_2 * 0x228);
    if (iVar7 != 0) {
      FUN_100320a0(iVar7);
      FUN_100fec90(iVar7,0x88);
    }
    *(undefined4 *)(&DAT_10138998 + param_2 * 0x228) = 0;
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar7 = 0;
    uVar6 = 0;
    do {
      if ((&DAT_101387c0)[uVar6 * 0x8a] == (&DAT_101387c0)[param_2 * 0x8a]) {
        iVar7 = (&DAT_101387c4)[uVar6 * 0x8a] + iVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
    if (iVar7 == 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5);
    }
    (&DAT_101387c0)[param_2 * 0x8a] = 0;
    FUN_100fed00(*(undefined4 *)(&DAT_101389c0 + param_2 * 0x45));
    (&DAT_101389c0)[param_2 * 0x45] = 0;
    (&DAT_101389c8)[param_2 * 0x8a] = 0;
    FUN_100fed00(*(undefined4 *)(&DAT_101389cc + param_2 * 0x45));
    (&DAT_101389cc)[param_2 * 0x45] = 0;
    (&DAT_101389d4)[param_2 * 0x8a] = 0;
    FUN_100fed00(*(undefined4 *)(&DAT_101389d8 + param_2 * 0x45));
    (&DAT_101389d8)[param_2 * 0x45] = 0;
    (&DAT_101389e0)[param_2 * 0x8a] = 0;
  }
  return;
}

