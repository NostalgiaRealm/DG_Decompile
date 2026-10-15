/*
 * FUN_1007f530 at 1007f530
 * undefined FUN_1007f530(void)
 * Address ranges: 1007f530-1007f79b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f530(int param_1,uint param_2,int param_3,float param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  code *extraout_w11;
  undefined4 *puVar10;
  float fVar11;
  
  if (4 < param_2) {
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 == 0) {
    return;
  }
  if (10 < param_3 - 1U) {
    return;
  }
  iVar8 = param_1 + 0x90;
  uVar6 = param_2 - 1;
  switch(param_3) {
  case 1:
    if (5 < (uint)param_4) {
      return;
    }
    puVar10 = (undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
    puVar9 = (undefined4 *)(iVar8 + uVar6 * 0x34 + 0x794);
    goto LAB_1007f5d0;
  case 2:
    if (5 < (uint)param_4) {
      return;
    }
    puVar10 = (undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
    puVar9 = (undefined4 *)(iVar8 + uVar6 * 0x34 + 0x798);
    goto LAB_1007f5d0;
  case 3:
    if (5 < (uint)param_4) {
      return;
    }
    puVar10 = (undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
    puVar9 = (undefined4 *)(iVar8 + uVar6 * 0x34 + 0x79c);
LAB_1007f5d0:
    *puVar9 = *puVar10;
    break;
  case 4:
    iVar5 = iVar8 + uVar6 * 0x34;
    *(float *)(iVar5 + 0x7ac) = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
    *(float *)(iVar5 + 0x7b0) = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
    *(float *)(iVar5 + 0x7b4) = (float)((uint)param_4 & 0xff) / 255.0;
    pfVar1 = (float *)(iVar8 + (param_2 + 0x25) * 0x34);
    fVar11 = (float)((uint)param_4 >> 0x18) / 255.0;
    goto LAB_1007f694;
  case 5:
    iVar8 = iVar8 + uVar6 * 8 + 0x769;
    goto LAB_1007f6a4;
  case 6:
    iVar8 = iVar8 + uVar6 * 8 + 0x76a;
    goto LAB_1007f6a4;
  case 7:
    iVar8 = iVar8 + uVar6 * 8 + 0x768;
LAB_1007f6a4:
    *(bool *)iVar8 = param_4 == 2.8026e-45;
    break;
  case 8:
    fVar11 = 15.99;
    if (((param_4 <= 15.99) && (fVar11 = -16.0, -16.0 <= param_4)) &&
       (fVar11 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
      fVar11 = param_4;
    }
    pfVar1 = (float *)(iVar8 + uVar6 * 0x34 + 0x7a0);
LAB_1007f694:
    *pfVar1 = fVar11;
    break;
  case 9:
    *(char *)(iVar8 + uVar6 * 8 + 0x76b) = SUB41(param_4,0);
    break;
  case 10:
    if (0x10 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    *(float *)(iVar8 + uVar6 * 0x34 + 0x7a4) = param_4;
    break;
  case 0xb:
    uVar3 = *(uint *)(param_1 + 0xe78);
    uVar4 = 1 << (ulonglong)(uVar6 & 0x1f);
    uVar2 = uVar3 & (uVar4 ^ 0xffffffff);
    if (param_4 != 0.0) {
      uVar2 = uVar4 | uVar3;
    }
    *(uint *)(param_1 + 0xe78) = uVar2;
    *(undefined1 *)(param_1 + 0xf6a0) = 1;
    param_1 = param_1 + 0xf698;
    goto LAB_1007f778;
  }
  param_1 = param_1 + 0xf69c;
LAB_1007f778:
  pbVar7 = (byte *)(((int)uVar6 >> 3) + param_1);
  *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar6 & 7));
  return;
}

