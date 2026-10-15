/*
 * FUN_1004e600 at 1004e600
 * undefined FUN_1004e600(void)
 * Address ranges: 1004e600-1004e7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e600(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float local_40;
  
  if ((((*param_2 != *(int *)(param_1 + 0xe40)) || (param_2[1] != *(int *)(param_1 + 0xe44))) ||
      (param_2[2] != *(int *)(param_1 + 0xe48))) || (param_2[3] != *(int *)(param_1 + 0xe4c))) {
    FUN_10047f98(param_1,0,0,0);
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar8 = *(int *)(param_1 + 0xf830);
    if ((iVar8 == 0) && (iVar8 = *(int *)(param_1 + 0xf840), iVar8 == 0)) {
      fVar10 = 1.0;
      local_40 = 1.0;
    }
    else {
      uVar7 = *(uint *)(iVar8 + 0x14);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar6 = (*extraout_w11)(iVar8,0);
      uVar1 = *(uint *)(iVar8 + 0x18);
      local_40 = (float)uVar6 / (float)uVar7;
      (*pcVar5)();
      uVar7 = (*extraout_w11_00)(iVar8,0);
      fVar10 = (float)uVar7 / (float)uVar1;
    }
    iVar8 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xe40) = uVar9;
    *(int *)(param_1 + 0xe50) = (int)((float)iVar8 * local_40);
    *(int *)(param_1 + 0xe54) = (int)((float)iVar2 * fVar10);
    *(int *)(param_1 + 0xe58) = (int)((float)iVar3 * local_40);
    *(int *)(param_1 + 0xe5c) = (int)((float)iVar4 * fVar10);
    *(undefined1 *)(param_1 + 0xf6a1) = 1;
  }
  return;
}

