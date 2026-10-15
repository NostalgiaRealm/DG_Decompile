/*
 * FUN_100330e8 at 100330e8
 * undefined FUN_100330e8(void)
 * Address ranges: 100330e8-100333b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100330e8(int param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_60;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  fVar6 = (float)*param_4;
  fVar5 = (float)param_4[1];
  fVar8 = (float)param_4[2];
  fVar10 = (float)param_4[3];
  if ((((*(float *)(param_1 + 900) != fVar6) || (*(float *)(param_1 + 0x388) != fVar5)) ||
      (*(float *)(param_1 + 0x38c) != fVar8)) ||
     (((*(float *)(param_1 + 0x390) != fVar10 || (*(float *)(param_1 + 0x394) != (float)param_4[4]))
      || ((*(float *)(param_1 + 0x398) != (float)param_4[5] || (*(char *)(param_1 + 0x1908) != '\0')
          ))))) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    if (param_5 == 0) {
      fVar9 = 1.0;
      local_60 = 1.0;
    }
    else {
      uVar4 = *(uint *)(param_5 + 0x14);
      (*pcVar2)();
      uVar3 = (*extraout_w11_00)(param_5,0);
      uVar1 = *(uint *)(param_5 + 0x18);
      local_60 = (float)uVar3 / (float)uVar4;
      (*pcVar2)();
      uVar4 = (*extraout_w11_01)(param_5,0);
      fVar9 = (float)uVar4 / (float)uVar1;
    }
    *(float *)(param_2 + 0x304) = fVar6;
    *(float *)(param_2 + 0x308) = fVar5;
    *(float *)(param_2 + 0x30c) = fVar8;
    *(float *)(param_2 + 0x310) = fVar10;
    fVar7 = fVar8 * local_60;
    *(float *)(param_2 + 0x334) = fVar6 * local_60;
    fVar6 = fVar10 * fVar9;
    *(float *)(param_2 + 0x338) = fVar5 * fVar9;
    *(float *)(param_2 + 0x33c) = fVar7;
    *(float *)(param_2 + 0x340) = fVar6;
    uVar4 = param_4[4];
    *(uint *)(param_2 + 0x344) = uVar4;
    *(uint *)(param_2 + 0x314) = uVar4;
    uVar4 = param_4[5];
    *(uint *)(param_2 + 0x348) = uVar4;
    *(uint *)(param_2 + 0x318) = uVar4;
    fVar5 = 0.5;
    *(undefined1 *)(param_3 + 0xe) = 1;
    if (*(char *)(param_1 + 0xe) == '\0') {
      fVar9 = 0.5;
    }
    else {
      fVar9 = fVar9 * 0.5;
      fVar5 = local_60 * 0.5;
      fVar6 = fVar10;
      fVar7 = fVar8;
    }
    *(float *)(param_2 + 0x364) = fVar5;
    *(float *)(param_2 + 0x368) = fVar9;
    *(float *)(param_2 + 0x930) = fVar7;
    *(float *)(param_2 + 0x934) = fVar6;
    *(float *)(param_2 + 0x908) = fVar8;
    *(float *)(param_2 + 0x90c) = fVar10;
    *(undefined1 *)(param_3 + 0x11) = 1;
    FUN_10032568(param_1);
    *(undefined1 *)(param_1 + 0x1908) = 0;
  }
  return;
}

