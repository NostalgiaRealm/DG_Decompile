/*
 * FUN_100542f0 at 100542f0
 * undefined FUN_100542f0(void)
 * Address ranges: 100542f0-100544b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100542f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  ulonglong uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  piVar1 = (int *)(param_1 + 0x18);
  if (param_2 == *piVar1) {
    *piVar1 = param_2;
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar6 = (*extraout_w11)(param_2);
    piVar2 = (int *)(param_1 + 0x28);
    *piVar2 = iVar6;
    if (iVar6 == 0) {
      uVar4 = 0;
      uVar8 = extraout_x1;
    }
    else {
      uVar7 = (*pcVar3)();
      uVar4 = (*extraout_w11_00)(uVar7);
      uVar8 = extraout_x1_00;
    }
    *(undefined1 *)(param_1 + 0xfc) = uVar4;
    local_40 = *(undefined4 *)(*(int *)(*piVar1 + 4) + 0x50);
    local_3c = 0;
    local_34 = 0;
    if (*piVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)*(uint *)(*(int *)(*piVar2 + 4) + 0x50);
    }
    uVar7 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9);
    cVar5 = (*extraout_w11_01)(uVar7,&local_40,uVar9 & 0xffffffff);
    if (cVar5 != '\0') {
      iVar6 = *(int *)(param_2 + 4);
      local_50 = *(undefined4 *)(iVar6 + 0x50);
      local_4c = *(undefined4 *)(iVar6 + 0x6c);
      local_48 = *(undefined4 *)(iVar6 + 0x70);
      if (*piVar2 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = *(undefined4 *)(*(int *)(*piVar2 + 4) + 0x50);
      }
      local_5c = 0;
      uVar7 = (*pcVar3)();
      (*extraout_w11_02)(uVar7,1,1,&local_50,&local_60);
      *(undefined2 *)(param_1 + 0xfe) = 0x100;
    }
  }
  return;
}

