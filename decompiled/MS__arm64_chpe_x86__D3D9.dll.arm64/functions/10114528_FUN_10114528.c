/*
 * FUN_10114528 at 10114528
 * undefined FUN_10114528(void)
 * Address ranges: 10114528-10114607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_10114528(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  longlong lVar9;
  int local_30 [2];
  undefined8 local_28;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_30[0] = 0;
  lVar9 = 0;
  iVar3 = *(int *)(param_1 + 0x910) * 8;
  local_28 = CONCAT44(iVar3 + 8,iVar3);
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar8 = (*extraout_w11)(uVar7,0,&local_28,local_30);
  if (-1 < iVar8) {
    plVar1 = (longlong *)(iVar3 + local_30[0]);
    do {
      lVar9 = *plVar1;
      lVar2 = lVar9;
      if (lVar9 == 0) {
        lVar2 = 0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(plVar1),0x10);
      if (bVar5) {
        *plVar1 = lVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    local_28 = 0;
    uVar7 = (*pcVar6)();
    (*extraout_w11_00)(uVar7,0,&local_28);
  }
  return lVar9;
}

