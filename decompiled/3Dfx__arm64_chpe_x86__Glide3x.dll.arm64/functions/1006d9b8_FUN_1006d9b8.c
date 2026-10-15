/*
 * FUN_1006d9b8 at 1006d9b8
 * undefined FUN_1006d9b8(void)
 * Address ranges: 1006d9b8-1006db4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006d9b8(undefined8 param_1,int param_2,undefined8 *param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  code *extraout_w11;
  undefined8 uVar9;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  
  puVar1 = (uint *)(param_2 + 0x14);
  uVar8 = *(uint *)(param_2 + 0x1c);
  puVar2 = (uint *)(param_2 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x1006da00);
    (*(code *)uVar4)();
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = *puVar1 / uVar8;
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    uVar4 = SoftwareBreakpoint(0xf004,0x1006da14);
    (*(code *)uVar4)();
  }
  uVar3 = 0;
  if (uVar8 != 0) {
    uVar3 = *puVar2 / uVar8;
  }
  (*(code *)PTR_FUN_100a01e8)(param_3 + 4,0,0,uVar3,uVar7);
  if (*(int *)(param_2 + 0x28) - 1U < 2) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,&local_80);
    uVar4 = (*(code *)PTR_FUN_100a01e8)(param_3,0,0,local_80,uStack_7c);
    if (param_4 == (int *)0x0) {
      uVar8 = *puVar1;
      uVar7 = *puVar2;
    }
    else {
      uVar8 = param_4[3] - param_4[1];
      uVar7 = param_4[2] - *param_4;
    }
    puVar6 = (undefined8 *)
             FUN_1006d838(uVar4,auStack_90,*(undefined4 *)(param_2 + 0x24),uVar7,uVar8,
                          *(uint *)(param_2 + 0x18),*(uint *)(param_2 + 0x1c),local_80,uStack_7c);
    uVar9 = puVar6[1];
    uVar4 = *puVar6;
  }
  else {
    (*(code *)PTR_FUN_100a01e8)(param_3,0,0,*puVar2,*puVar1);
    uVar9 = param_3[1];
    uVar4 = *param_3;
  }
  param_3[3] = uVar9;
  param_3[2] = uVar4;
  return;
}

