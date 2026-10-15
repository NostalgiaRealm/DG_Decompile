/*
 * FUN_1011fe80 at 1011fe80
 * undefined FUN_1011fe80(void)
 * Address ranges: 1011fe80-1012006b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1011fe80(int param_1,int param_2,undefined4 param_3,longlong param_4,longlong *param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  code *extraout_w11;
  char *local_70;
  char *local_6c;
  int local_50;
  int local_4c;
  
  piVar1 = (int *)(param_1 + 0x18);
  param_5[1] = 0;
  *param_5 = 0;
  piVar2 = (int *)(param_1 + 0xc);
  param_5[2] = 0;
  cVar10 = '\x01';
  if (*(uint *)(param_1 + 0x24) < (uint)(*(int *)(*piVar2 + *piVar1 * 0x20 + 0x10) + param_2)) {
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar3 = *piVar1 + 1;
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      uVar9 = SoftwareBreakpoint(0xf004,0x1011ff08);
      (*(code *)uVar9)();
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar3 / uVar7;
    }
    local_4c = uVar3 - uVar8 * uVar7;
    local_50 = *piVar2 + local_4c * 0x20;
    uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar11);
    if (uVar12 < *(ulonglong *)(local_50 + 0x18)) {
      cVar10 = FUN_1011fab0(param_1);
      if (cVar10 == '\0') {
        local_6c = s_a_resource_descriptor_ring_buffe_10165a58;
        local_70 = s_Q_dgVoodoo__D3D12_Core__FATAL_ER_1016589f + 1;
        FUN_100f46a0(&local_70,8);
        (*(code *)PTR_FUN_1016c068)();
        return '\0';
      }
      *piVar1 = *piVar1 + 1;
    }
    else {
      *piVar1 = local_4c;
      *(undefined4 *)(*piVar2 + local_4c * 0x20 + 0x10) = 0;
    }
  }
  piVar4 = (int *)(param_1 + 0x28);
  plVar6 = (longlong *)(*piVar2 + *piVar1 * 0x20);
  plVar5 = plVar6 + 2;
  *param_5 = *plVar6 + (ulonglong)(uint)(*piVar4 * (int)*plVar5);
  *(int *)(param_5 + 1) = (int)plVar6[1] + *piVar4 * (int)*plVar5;
  *(undefined4 *)((int)param_5 + 0xc) = *(undefined4 *)((int)plVar6 + 0xc);
  *(int *)(param_5 + 2) = *piVar4;
  *(int *)plVar5 = (int)*plVar5 + param_2;
  *(undefined4 *)((int)plVar6 + 0x14) = param_3;
  plVar6[3] = param_4;
  return cVar10;
}

