/*
 * FUN_10002100 at 10002100
 * undefined FUN_10002100(void)
 * Address ranges: 10002100-1000223f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002100(undefined8 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  
  piVar1 = &DAT_100be154 + param_2 * 0x8a;
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar5 + -1 == 0) {
    iVar5 = *(int *)(&DAT_100be328 + param_2 * 0x228);
    if (iVar5 != 0) {
      FUN_10004360(iVar5);
      param_1 = FUN_10091460(iVar5,0x88);
    }
    *(undefined4 *)(&DAT_100be328 + param_2 * 0x228) = 0;
    iVar5 = FUN_10002240(param_1,param_2);
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar5 == 0) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6);
      uVar6 = (*pcVar4)();
      (*extraout_w11_00)(uVar6);
    }
    (&DAT_100be150)[param_2 * 0x8a] = 0;
    FUN_100914d0(*(undefined4 *)(&DAT_100be350 + param_2 * 0x45));
    (&DAT_100be350)[param_2 * 0x45] = 0;
    (&DAT_100be358)[param_2 * 0x8a] = 0;
    FUN_100914d0(*(undefined4 *)(&DAT_100be35c + param_2 * 0x45));
    (&DAT_100be35c)[param_2 * 0x45] = 0;
    (&DAT_100be364)[param_2 * 0x8a] = 0;
    FUN_100914d0(*(undefined4 *)(&DAT_100be368 + param_2 * 0x45));
    (&DAT_100be368)[param_2 * 0x45] = 0;
    (&DAT_100be370)[param_2 * 0x8a] = 0;
  }
  return;
}

