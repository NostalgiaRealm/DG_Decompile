/*
 * FUN_100505a0 at 100505a0
 * undefined FUN_100505a0(void)
 * Address ranges: 100505a0-1005095b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100505a0(float param_1,int param_2,undefined4 param_3,ushort param_4,char param_5,
                 ushort param_6,undefined2 param_7,undefined1 param_8,char param_9)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  
  uVar8 = 2;
  if ((param_4 & 0xf00) != 0x100) {
    uVar8 = 0;
  }
  switch(uVar8 | ~(param_4 >> 0xd) & 1) {
  case 1:
    FUN_1004cd90(param_2,param_6,param_8);
    uVar4 = FUN_1004d3d0(param_2,param_6,param_5);
    FUN_1004cea0(param_2,0,param_4,uVar4,0,0);
    uVar7 = 0x4000;
    if (param_5 == -1) {
      uVar7 = 0x4001;
    }
    uVar1 = 0x4006;
    if (param_5 == -1) {
      uVar1 = uVar7;
    }
    *(undefined4 *)(param_2 + 0x178) = uVar1;
    *(undefined4 *)(param_2 + 0x188) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x184) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x180) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x17c) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x198) = uVar1;
    *(float *)(param_2 + 0x1a8) = param_1;
    *(float *)(param_2 + 0x1a4) = param_1;
    *(float *)(param_2 + 0x1a0) = param_1;
    *(float *)(param_2 + 0x19c) = param_1;
    break;
  case 2:
    FUN_1004cd90(param_2,param_6,param_8);
    uVar4 = FUN_1004d3d0(param_2,param_6,param_5);
    FUN_1004cea0(param_2,0,param_4,uVar4,0,0);
    bVar3 = param_5 == -1;
    iVar6 = 5;
    if (bVar3) {
      iVar6 = 2;
    }
    uVar7 = 0x4000;
    if (bVar3) {
      uVar7 = 0x4001;
    }
    uVar1 = 0x4006;
    if (bVar3) {
      uVar1 = uVar7;
    }
    *(int *)(param_2 + 0x174) = iVar6;
    *(undefined4 *)(param_2 + 0x178) = uVar1;
    *(undefined4 *)(param_2 + 0x188) = 0x437f0000;
    piVar5 = (int *)0x0;
    *(undefined4 *)(param_2 + 0x184) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x180) = 0x437f0000;
    *(undefined4 *)(param_2 + 0x17c) = 0x437f0000;
    uVar2 = (iVar6 + *(int *)(param_2 + 0x134) + *(int *)(param_2 + 0x154) + 1U & 0x7f) << 0x18;
    goto LAB_10050714;
  case 3:
    FUN_1004cd90(param_2,param_6,param_8);
    uVar4 = FUN_1004d3d0(param_2,param_6,param_5);
    FUN_1004cea0(param_2,0,param_4,uVar4,1,0);
    uVar7 = 0x4000;
    if (param_5 == -1) {
      uVar7 = 0x4001;
    }
    uVar1 = 0x4006;
    if (param_5 == -1) {
      uVar1 = uVar7;
    }
    *(undefined4 *)(param_2 + 0x178) = uVar1;
    *(undefined4 *)(param_2 + 0x188) = 0xc37f0000;
    *(undefined4 *)(param_2 + 0x184) = 0xc37f0000;
    *(undefined4 *)(param_2 + 0x180) = 0xc37f0000;
    *(undefined4 *)(param_2 + 0x17c) = 0xc37f0000;
    *(undefined4 *)(param_2 + 0x198) = uVar1;
    param_1 = param_1 + 255.0;
    *(float *)(param_2 + 0x1a8) = param_1;
    *(float *)(param_2 + 0x1a4) = param_1;
    *(float *)(param_2 + 0x1a0) = param_1;
    *(float *)(param_2 + 0x19c) = param_1;
    break;
  default:
    goto switchD_10050620_default;
  }
  piVar5 = (int *)(param_2 + 0x194);
  iVar6 = 5;
  if (param_5 == -1) {
    iVar6 = 2;
  }
  *piVar5 = iVar6;
  *(int *)(param_2 + 0x174) = iVar6;
  uVar2 = (*(int *)(param_2 + 0x134) + iVar6 * 2 + *(int *)(param_2 + 0x154) + 1U & 0x7f) << 0x18 |
          0x32;
LAB_10050714:
  FUN_1006fbd8(param_3,uVar2,param_2 + 0x134,param_2 + 0x154,param_2 + 0x174,piVar5);
  param_4 = param_6;
switchD_10050620_default:
  FUN_1004cd90(param_2,param_7,param_8);
  uVar4 = FUN_1004d3d0(param_2,param_7,param_5);
  FUN_1004cea0(param_2,0,param_4,uVar4,(param_4 & 0xf00) == 0x100,0);
  uVar2 = (*(int *)(param_2 + 0x154) + *(int *)(param_2 + 0x134) + 1U & 0x7f) << 0x18;
  if (param_9 == '\0') {
    uVar2 = uVar2 | 0x43;
  }
  else {
    uVar2 = uVar2 | 0x1c;
  }
  FUN_1006fbd8(param_3,uVar2,(int *)(param_2 + 0x134),(int *)(param_2 + 0x154),0,0);
  return;
}

