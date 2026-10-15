/*
 * FUN_10120fc8 at 10120fc8
 * undefined FUN_10120fc8(void)
 * Address ranges: 10120fc8-1012118f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10120fc8(int param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
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
  
  piVar2 = (int *)(param_1 + 0x14);
  piVar3 = (int *)(param_1 + 8);
  param_4[1] = 0;
  *param_4 = 0;
  iVar6 = *piVar3;
  cVar10 = '\x01';
  if (*(uint *)(param_1 + 0x1c) < *(int *)(iVar6 + *piVar2 * 0x20 + 0xc) + 1U) {
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar4 = *piVar2 + 1;
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      uVar9 = SoftwareBreakpoint(0xf004,0x10121048);
      (*(code *)uVar9)();
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar4 / uVar7;
    }
    local_50 = uVar4 - uVar8 * uVar7;
    iVar1 = local_50 * 0x20;
    uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar11);
    if (uVar12 < *(ulonglong *)(iVar6 + iVar1 + 0x18)) {
      cVar10 = FUN_10120bb8(param_1);
      if (cVar10 == '\0') {
        local_6c = s_a_query_ring_buffer_10165a80;
        local_70 = s_Q_dgVoodoo__D3D12_Core__FATAL_ER_1016589f + 1;
        FUN_100f46a0(&local_70,8);
        (*(code *)PTR_FUN_1016c068)();
        return '\0';
      }
      *piVar2 = *piVar2 + 1;
    }
    else {
      *piVar2 = local_50;
      *(undefined4 *)(*piVar3 + local_50 * 0x20 + 0xc) = 0;
    }
  }
  puVar5 = (undefined4 *)(*piVar3 + *piVar2 * 0x20);
  piVar2 = puVar5 + 3;
  *(undefined4 *)param_4 = *puVar5;
  *(undefined4 *)((int)param_4 + 4) = puVar5[1];
  *(int *)(param_4 + 1) = *piVar2;
  *(int *)((int)param_4 + 0xc) = puVar5[2] + *piVar2 * 8;
  *piVar2 = *piVar2 + 1;
  puVar5[4] = param_2;
  *(undefined8 *)(puVar5 + 6) = param_3;
  return cVar10;
}

