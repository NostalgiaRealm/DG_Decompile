/*
 * _grConstantColorValue4@16_native at 100031d0
 * undefined _grConstantColorValue4@16_native(void)
 * Address ranges: 100031d0-100032f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue4_16_native(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  int extraout_s0;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = param_2;
  iVar8 = param_3;
  iVar9 = param_4;
  iVar5 = FUN_1001ba50();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(iVar5 + 0xc);
    iVar5 = *piVar2;
    if ((((iVar7 != *(int *)(iVar5 + 0xea)) || (iVar8 != *(int *)(iVar5 + 0xee))) ||
        (iVar9 != *(int *)(iVar5 + 0xf2))) || (extraout_s0 != *(int *)(iVar5 + 0xf6))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_2,param_3,param_4,param_1,uVar6);
      *(int *)(*piVar2 + 0xea) = param_2;
      *(int *)(*piVar2 + 0xee) = param_3;
      *(int *)(*piVar2 + 0xf2) = param_4;
      *(undefined4 *)(*piVar2 + 0xf6) = param_1;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

