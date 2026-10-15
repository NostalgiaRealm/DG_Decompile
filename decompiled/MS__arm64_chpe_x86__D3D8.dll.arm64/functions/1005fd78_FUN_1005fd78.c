/*
 * FUN_1005fd78 at 1005fd78
 * undefined FUN_1005fd78(void)
 * Address ranges: 1005fd78-1006004b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005fd78(int param_1,int param_2,int param_3,uint *param_4,int param_5)

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
  fVar10 = (float)param_4[2];
  fVar9 = (float)param_4[3];
  if ((((*(float *)(param_1 + 0x578) != fVar6) || (*(float *)(param_1 + 0x57c) != fVar5)) ||
      (*(float *)(param_1 + 0x580) != fVar10)) ||
     (((*(float *)(param_1 + 0x584) != fVar9 || (*(float *)(param_1 + 0x588) != (float)param_4[4]))
      || ((*(float *)(param_1 + 0x58c) != (float)param_4[5] || (*(char *)(param_1 + 0x5958) != '\0')
          ))))) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    if (param_5 == 0) {
      fVar8 = 1.0;
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
      fVar8 = (float)uVar4 / (float)uVar1;
    }
    *(float *)(param_2 + 0x4e8) = fVar6;
    *(float *)(param_2 + 0x4ec) = fVar5;
    *(float *)(param_2 + 0x4f0) = fVar10;
    *(float *)(param_2 + 0x4f4) = fVar9;
    fVar7 = fVar10 * local_60;
    *(float *)(param_2 + 0x518) = fVar6 * local_60;
    fVar6 = fVar9 * fVar8;
    *(float *)(param_2 + 0x51c) = fVar5 * fVar8;
    *(float *)(param_2 + 0x520) = fVar7;
    *(float *)(param_2 + 0x524) = fVar6;
    uVar4 = param_4[4];
    *(uint *)(param_2 + 0x528) = uVar4;
    *(uint *)(param_2 + 0x4f8) = uVar4;
    uVar4 = param_4[5];
    *(uint *)(param_2 + 0x52c) = uVar4;
    *(uint *)(param_2 + 0x4fc) = uVar4;
    fVar5 = 0.5;
    *(undefined1 *)(param_3 + 0xe) = 1;
    if (*(char *)(param_1 + 0xe) == '\0') {
      fVar8 = 0.5;
    }
    else {
      fVar8 = fVar8 * 0.5;
      fVar5 = local_60 * 0.5;
      fVar6 = fVar9;
      fVar7 = fVar10;
    }
    *(float *)(param_2 + 0x548) = fVar5;
    *(float *)(param_2 + 0x54c) = fVar8;
    *(float *)(param_2 + 0x4c40) = fVar7;
    *(float *)(param_2 + 0x4c44) = fVar6;
    *(float *)(param_2 + 0x4c18) = fVar10;
    *(float *)(param_2 + 0x4c1c) = fVar9;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x46a0) = fVar7;
    *(float *)(param_2 + 0x46a4) = -fVar6;
    *(undefined1 *)(param_3 + 0x34) = 1;
    FUN_1005f298(param_1);
    *(undefined1 *)(param_1 + 0x5958) = 0;
  }
  return;
}

