/*
 * FUN_10062460 at 10062460
 * undefined FUN_10062460(void)
 * Address ranges: 10062460-10062543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062460(int param_1)

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
  undefined1 auStack_30 [16];
  
  FUN_10096840(auStack_30);
  piVar1 = (int *)(param_1 + 0x94);
  piVar2 = (int *)(*piVar1 + 0xc);
  if (*piVar2 != 0) {
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar3 + -1 == 0) {
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar7);
      if (*(int *)(*piVar1 + 8) != 0) {
        uVar7 = (*pcVar6)();
        (*extraout_w11_00)(uVar7,1);
      }
      *(undefined4 *)(*piVar1 + 8) = 0;
    }
  }
  FUN_10001630(param_1 + 0x7c);
  FUN_10096790(auStack_30);
  return;
}

