/*
 * FUN_10016818 at 10016818
 * undefined FUN_10016818(void)
 * Address ranges: 10016818-10016ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016818(uint *param_1,int *param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 extraout_x1;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulonglong local_40;
  ulonglong local_38;
  
  FUN_10019908(param_1,param_2,0);
  puVar1 = param_1 + 0x79;
  *puVar1 = *puVar1 - 1;
  if (param_4 != '\0') {
    auVar10 = FUN_10014cc0(param_1,extraout_x1,0xffffffff,1);
    uVar6 = auVar10._0_8_;
    local_38 = uVar6;
    uVar7 = FUN_10014cc0(param_1,auVar10._8_8_,0xffffffff,1);
    local_40 = uVar7;
    FUN_10002470(param_2,0x890200000210,uVar6 & 0xffffffff,*param_1 | 0x80000000,
                 param_1[*puVar1 * 6 + 0x31] * 0x10 + 8,0);
    FUN_10002470(param_2,0x890200000210,uVar7 & 0xffffffff,*param_1 | 0x80000000,0x44c0,0);
    FUN_10002470(param_2,0x10200000210,*param_1 | ((uint)uVar7 & 0xff | 0xffc00200) << 8,
                 uVar6 & 0xffffffff,0x44ac,0);
    FUN_10014dd8(param_1,param_2,&local_40);
    FUN_10014dd8(param_1,param_2,&local_38);
  }
  FUN_10002470(param_2,0x28810200012010,0x80000004,0xffffffff,0,1);
  piVar2 = param_2 + 1;
  iVar4 = (param_1[*puVar1 * 6 + 0x33] - *piVar2) + *param_2;
  uVar8 = iVar4 + 0x7e;
  uVar5 = 0x750100030000;
  if (0xff < uVar8) {
    uVar5 = 0x850100110000;
  }
  FUN_10002470(param_2,uVar5,0xffffffff,0xffffffff,0,iVar4 + (uint)(uVar8 < 0x100) * 4 + -6);
  uVar8 = *puVar1;
  if (param_1[uVar8 * 6 + 0x35] != 0) {
    uVar9 = 0;
    do {
      iVar4 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      iVar4 = *(int *)(param_1[uVar8 * 6 + 0x34] + iVar4);
      *(int *)(iVar4 + *param_2 + -4) = (*piVar2 - iVar4) - *param_2;
      uVar8 = *puVar1;
    } while (uVar9 < param_1[uVar8 * 6 + 0x35]);
  }
  puVar3 = param_1 + uVar8 * 6 + 0x34;
  FUN_101322d0(*puVar3);
  puVar3[0] = 0;
  puVar3[1] = 0;
  param_1[uVar8 * 6 + 0x36] = 0;
  if (param_4 != '\0') {
    FUN_10002470(param_2,0x28810200012010,*param_1 | 0x80000000,0xffffffff,0x44c0,1);
  }
  FUN_10002470(param_2,0x810200012010,4,0xffffffff,0,4);
  *(uint *)(param_1[*puVar1 * 6 + 0x32] + *param_2 + -4) =
       (*piVar2 - param_1[*puVar1 * 6 + 0x32]) - *param_2;
  return;
}

