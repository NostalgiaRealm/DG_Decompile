/*
 * FUN_100517b8 at 100517b8
 * undefined FUN_100517b8(void)
 * Address ranges: 100517b8-10051a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100517b8(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 extraout_x1;
  ulonglong extraout_x14;
  uint uVar8;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
    goto switchD_100517f8_caseD_0;
  case 1:
    bVar5 = (param_4 & 0xff0) == 0x100;
    break;
  default:
    goto switchD_100517f8_caseD_2;
  case 4:
    bVar5 = (param_4 & 0xdf0) == 0;
    break;
  case 7:
    goto switchD_100517f8_caseD_7;
  }
  if (bVar5) {
switchD_100517f8_caseD_0:
    *(undefined8 *)(param_2 + 0x154) = 0x400100000002;
    *(undefined8 *)(param_2 + 0x164) = 0x100000001;
    *(undefined8 *)(param_2 + 0x15c) = 0x100000001;
    uVar6 = 0;
    goto LAB_100519c8;
  }
switchD_100517f8_caseD_2:
  uVar6 = FUN_1004d288(param_2,param_4,0,0,0,8,0);
  if ((param_4 & 0xf0) != 0) {
    FUN_100505a0(0x3c23d70a,param_2,param_3,param_4,0xff,uVar6,uVar6,8,0);
  }
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    uVar8 = 0x1d;
    break;
  case 2:
    uVar8 = 0x39;
    break;
  case 3:
    uVar8 = 0x31;
    goto LAB_10051908;
  case 4:
    uVar8 = 0x1d;
    goto LAB_10051908;
  case 5:
    uVar8 = 0x18;
    break;
  case 6:
    uVar8 = 0x31;
    break;
  default:
    uVar8 = 0;
LAB_10051908:
    bVar5 = false;
    goto LAB_1005190c;
  }
  bVar5 = true;
LAB_1005190c:
  FUN_1004cd90(param_2,uVar6,8);
  FUN_1004cea0(param_2,0,extraout_x14 & 0xffffffff,0xff,0,0);
  iVar7 = FUN_1006e8f0(param_2,param_2 + 0x178,*(undefined4 *)(param_2 + 0x40),0xb4,0xff,0,0);
  piVar1 = (int *)(param_2 + 0x154);
  piVar2 = (int *)(param_2 + 0x174);
  *piVar2 = iVar7;
  iVar4 = *piVar1;
  piVar3 = piVar2;
  if (bVar5) {
    piVar3 = piVar1;
    piVar1 = piVar2;
  }
  FUN_1006fbd8(param_3,(*(int *)(param_2 + 0x134) + iVar7 + iVar4 + 1U & 0x7f) << 0x18 | uVar8,
               (int *)(param_2 + 0x134),piVar3,piVar1,0);
  FUN_1004d200(param_2,extraout_x1,uVar6,3);
LAB_100519c8:
  FUN_1006fbd8(param_3,(*(int *)(param_2 + 0x154) + 1U & 0x7f) << 0x18 | 0x4000d,
               (int *)(param_2 + 0x154),0,0,0);
  FUN_1004d390(param_2,uVar6);
switchD_100517f8_caseD_7:
  return;
}

