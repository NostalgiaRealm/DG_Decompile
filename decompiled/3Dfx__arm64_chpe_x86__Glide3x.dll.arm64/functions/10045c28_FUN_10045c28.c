/*
 * FUN_10045c28 at 10045c28
 * undefined FUN_10045c28(void)
 * Address ranges: 10045c28-10045d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10045c28(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar8;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 1;
  piVar3 = *(int **)(param_1 + (*(int *)(param_1 + 0x120) + 5) * 0x14);
  if (*piVar3 == 0) {
    if (*(int *)(param_1 + 0x120) == *(int *)(param_1 + 0x124)) {
      uVar8 = 0;
    }
    else {
      (*(code *)PTR_FUN_100a00c4)
                (*(undefined4 *)(param_1 + *(int *)(param_1 + 0x120) * 0x14 + 0x74));
      *(uint *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1U & 7;
      *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x120) + 5) * 0x14) =
           *(undefined4 *)(param_1 + *(int *)(param_1 + 0x120) * 0x14 + 0x6c);
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(piVar3 + 2);
    (*extraout_w11)();
    piVar1 = (int *)(param_1 + 0x128);
    *(int *)(param_1 + (*(int *)(param_1 + 0x120) + 5) * 0x14) = (int)piVar3 + piVar3[1] + 8;
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar2 + -1 == 0) {
      uVar7 = (*pcVar6)();
      (*extraout_w11_00)(uVar7);
    }
  }
  return uVar8;
}

