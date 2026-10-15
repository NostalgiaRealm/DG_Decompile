/*
 * FUN_10086408 at 10086408
 * undefined FUN_10086408(void)
 * Address ranges: 10086408-10086583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10086408(undefined8 param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  puVar1 = (uint *)(param_2 + 0x18);
  puVar2 = (uint *)(param_2 + 0x10);
  uVar5 = *puVar1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10086440);
    (*(code *)uVar8)();
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = *puVar2 / uVar5;
  }
  puVar3 = (uint *)(param_2 + 0x1c);
  *param_3 = uVar7;
  puVar4 = (uint *)(param_2 + 0x14);
  uVar5 = *puVar3;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10086460);
    (*(code *)uVar8)();
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = *puVar4 / uVar5;
  }
  param_3[1] = uVar7;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar8 = (*extraout_w11)(uVar9,&local_70);
  FUN_1006dba8(uVar8,&local_80,*(undefined4 *)(param_2 + 0x24),*puVar2,*puVar4,*puVar1,*puVar3,
               local_70,uStack_6c);
  uVar7 = local_78 - local_80;
  param_3[2] = uVar7;
  uVar6 = iStack_74 - iStack_7c;
  param_3[3] = uVar6;
  param_3[4] = *(uint *)(&DAT_100b5468 + *(int *)(param_2 + 0x2c) * 4);
  uVar5 = *puVar1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10086518);
    (*(code *)uVar8)();
  }
  uVar10 = 0;
  if (uVar5 != 0) {
    uVar10 = *puVar2 / uVar5;
  }
  if (uVar7 <= uVar10) {
    uVar5 = *puVar3;
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10086534);
      (*(code *)uVar8)();
    }
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = *puVar4 / uVar5;
    }
    if (uVar6 <= uVar11) {
      uVar11 = uVar11 << 1;
      uVar10 = uVar10 << 1;
      goto LAB_1008655c;
    }
  }
  uVar11 = uVar6 * 2 - 1;
  uVar10 = uVar7 * 2 - 1;
LAB_1008655c:
  param_3[5] = uVar10;
  param_3[6] = uVar11;
  return;
}

