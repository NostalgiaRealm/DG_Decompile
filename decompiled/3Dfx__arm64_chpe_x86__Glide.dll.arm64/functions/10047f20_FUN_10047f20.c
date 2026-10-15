/*
 * FUN_10047f20 at 10047f20
 * undefined FUN_10047f20(void)
 * Address ranges: 10047f20-100481a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047f20(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (param_3 < 3) {
    iVar5 = *(int *)(param_1 + param_2 * 4 + 0x3164);
    switch(param_3) {
    case 0:
      *(undefined1 *)(iVar5 + 0x3015) = 1;
      iVar8 = 0x1014;
      break;
    case 1:
      *(undefined1 *)(iVar5 + 0x3016) = 1;
      iVar8 = 0x2014;
      break;
    case 2:
      *(undefined1 *)(iVar5 + 0x3014) = 1;
      iVar8 = 0x14;
    }
    iVar8 = iVar5 + iVar8;
    if (iVar8 != 0) {
      if (param_3 < 2) {
        if ((int)param_5 < param_6) {
          do {
            uVar6 = param_5 >> 2 & 3;
            pbVar2 = (byte *)(param_4 + (param_5 >> 4));
            uVar3 = param_5 & 3;
            uVar7 = (uint)*(short *)(param_4 + 0x10 + uVar6 * 6);
            uVar7 = (((int)*(short *)(param_4 + 0x28 + uVar3 * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar7 >> 8 & 1) & 0xffff0000 | (uVar7 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar2;
            uVar4 = 0xff;
            if ((int)uVar7 < 0x100) {
              uVar4 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar8 + param_5 * 0x10) = (float)(int)uVar4;
            uVar7 = (uint)*(short *)(param_4 + (uVar3 + 7) * 6);
            uVar7 = (((int)*(short *)(param_4 + (uVar6 + 3) * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar7 >> 8 & 1) & 0xffff0000 | (uVar7 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar2;
            uVar4 = 0xff;
            if ((int)uVar7 < 0x100) {
              uVar4 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar8 + 4 + param_5 * 0x10) = (float)(int)uVar4;
            uVar7 = (uint)*(short *)(param_4 + 0x14 + uVar6 * 6);
            uVar7 = (((int)*(short *)(param_4 + 0x2c + uVar3 * 6) << 0x17) >> 0x17) +
                    ((int)(-(uVar7 >> 8 & 1) & 0xffff0000 | (uVar7 & 0x1ff) << 7) >> 7) +
                    (uint)*pbVar2;
            uVar3 = 0xff;
            if ((int)uVar7 < 0x100) {
              uVar3 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
            }
            *(float *)(iVar8 + 8 + param_5 * 0x10) = (float)(int)uVar3;
            iVar1 = param_5 * 0x10;
            param_5 = param_5 + 1;
            *(undefined4 *)(iVar8 + 0xc + iVar1) = 0x437f0000;
          } while ((int)param_5 < param_6);
        }
      }
      else if ((int)param_5 < param_6) {
        do {
          *(float *)(iVar8 + param_5 * 0x10) = (float)*(byte *)(param_4 + 2 + param_5 * 4);
          *(float *)(iVar8 + 4 + param_5 * 0x10) = (float)*(byte *)(param_4 + 1 + param_5 * 4);
          *(float *)(iVar8 + 8 + param_5 * 0x10) = (float)*(byte *)(param_4 + param_5 * 4);
          iVar1 = param_5 * 0x10;
          param_5 = param_5 + 1;
          *(undefined4 *)(iVar8 + 0xc + iVar1) = 0x437f0000;
        } while ((int)param_5 < param_6);
      }
      *(undefined1 *)(*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 4) + 0x3156) = 1;
    }
  }
  return;
}

