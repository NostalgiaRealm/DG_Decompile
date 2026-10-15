/*
 * FUN_10037d80 at 10037d80
 * undefined FUN_10037d80(void)
 * Address ranges: 10037d80-1003808f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037d80(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (param_3 < 4) {
    iVar6 = *(int *)(param_1 + param_2 * 4 + 0x32e4);
    switch(param_3) {
    case 0:
      *(undefined1 *)(iVar6 + 0x3015) = 1;
      iVar9 = 0x1014;
      break;
    case 1:
      *(undefined1 *)(iVar6 + 0x3016) = 1;
      iVar9 = 0x2014;
      break;
    default:
      *(undefined1 *)(iVar6 + 0x3014) = 1;
      iVar9 = 0x14;
    }
    iVar9 = iVar6 + iVar9;
    if (iVar9 != 0) {
      if (param_3 == 3) {
        if ((int)param_5 < param_6) {
          do {
            *(float *)(iVar9 + param_5 * 0x10) = (float)*(byte *)(param_4 + 2 + param_5 * 4);
            *(float *)(iVar9 + 4 + param_5 * 0x10) = (float)*(byte *)(param_4 + 1 + param_5 * 4);
            *(float *)(iVar9 + 8 + param_5 * 0x10) = (float)*(byte *)(param_4 + param_5 * 4);
            iVar1 = param_5 * 4;
            iVar2 = param_5 * 0x10;
            param_5 = param_5 + 1;
            *(float *)(iVar9 + 0xc + iVar2) = (float)*(byte *)(param_4 + 3 + iVar1);
          } while ((int)param_5 < param_6);
        }
      }
      else if (param_3 < 2) {
        if ((int)param_5 < param_6) {
          do {
            uVar4 = param_5 & 3;
            pbVar3 = (byte *)(param_4 + (param_5 >> 4));
            uVar7 = param_5 >> 2 & 3;
            uVar8 = (uint)*(short *)(param_4 + 0x28 + uVar4 * 6);
            uVar8 = (((int)*(short *)(param_4 + 0x10 + uVar7 * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar8 >> 8 & 1) & 0xffff0000 | (uVar8 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar3;
            uVar5 = 0xff;
            if ((int)uVar8 < 0x100) {
              uVar5 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar9 + param_5 * 0x10) = (float)(int)uVar5;
            uVar8 = (uint)*(short *)(param_4 + (uVar4 + 7) * 6);
            uVar8 = (((int)*(short *)(param_4 + (uVar7 + 3) * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar8 >> 8 & 1) & 0xffff0000 | (uVar8 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar3;
            uVar5 = 0xff;
            if ((int)uVar8 < 0x100) {
              uVar5 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar9 + 4 + param_5 * 0x10) = (float)(int)uVar5;
            uVar8 = (uint)*(short *)(param_4 + 0x14 + uVar7 * 6);
            uVar8 = (((int)*(short *)(param_4 + 0x2c + uVar4 * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar8 >> 8 & 1) & 0xffff0000 | (uVar8 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar3;
            uVar4 = 0xff;
            if ((int)uVar8 < 0x100) {
              uVar4 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar9 + 8 + param_5 * 0x10) = (float)(int)uVar4;
            iVar1 = param_5 * 0x10;
            param_5 = param_5 + 1;
            *(undefined4 *)(iVar9 + 0xc + iVar1) = 0x437f0000;
          } while ((int)param_5 < param_6);
        }
      }
      else if ((int)param_5 < param_6) {
        do {
          *(float *)(iVar9 + param_5 * 0x10) = (float)*(byte *)(param_4 + 2 + param_5 * 4);
          *(float *)(iVar9 + 4 + param_5 * 0x10) = (float)*(byte *)(param_4 + 1 + param_5 * 4);
          *(float *)(iVar9 + 8 + param_5 * 0x10) = (float)*(byte *)(param_4 + param_5 * 4);
          iVar1 = param_5 * 0x10;
          param_5 = param_5 + 1;
          *(undefined4 *)(iVar9 + 0xc + iVar1) = 0x437f0000;
        } while ((int)param_5 < param_6);
      }
      *(undefined1 *)(*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 4) + 0x32d6) = 1;
    }
  }
  return;
}

