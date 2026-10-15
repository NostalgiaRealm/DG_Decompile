/*
 * FUN_10051c38 at 10051c38
 * undefined FUN_10051c38(void)
 * Address ranges: 10051c38-10051e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051c38(int param_1,int param_2,undefined4 param_3,ushort param_4)

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
    goto switchD_10051c78_caseD_0;
  case 1:
    bVar5 = (param_4 & 0xff0) == 0x100;
    break;
  default:
    goto switchD_10051c78_caseD_2;
  case 4:
    bVar5 = (param_4 & 0xdf0) == 0;
    break;
  case 7:
    goto switchD_10051c78_caseD_7;
  }
  if (bVar5) {
switchD_10051c78_caseD_0:
    *(undefined8 *)(param_2 + 0x154) = 0x400100000002;
    *(undefined8 *)(param_2 + 0x164) = 0x100000001;
    *(undefined8 *)(param_2 + 0x15c) = 0x100000001;
    uVar6 = 0;
    goto LAB_10051e48;
  }
switchD_10051c78_caseD_2:
  uVar6 = FUN_1004d708(param_2,param_4,0,0,0,8,0);
  if ((param_4 & 0xf0) != 0) {
    FUN_10050a20(0x3c23d70a,param_2,param_3,param_4,0xff,uVar6,uVar6,8,0);
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
    goto LAB_10051d88;
  case 4:
    uVar8 = 0x1d;
    goto LAB_10051d88;
  case 5:
    uVar8 = 0x18;
    break;
  case 6:
    uVar8 = 0x31;
    break;
  default:
    uVar8 = 0;
LAB_10051d88:
    bVar5 = false;
    goto LAB_10051d8c;
  }
  bVar5 = true;
LAB_10051d8c:
  FUN_1004d210(param_2,uVar6,8);
  FUN_1004d320(param_2,0,extraout_x14 & 0xffffffff,0xff,0,0);
  iVar7 = FUN_1006ed70(param_2,param_2 + 0x178,*(undefined4 *)(param_2 + 0x40),0xb4,0xff,0,0);
  piVar1 = (int *)(param_2 + 0x154);
  piVar2 = (int *)(param_2 + 0x174);
  *piVar2 = iVar7;
  iVar4 = *piVar1;
  piVar3 = piVar2;
  if (bVar5) {
    piVar3 = piVar1;
    piVar1 = piVar2;
  }
  FUN_10070058(param_3,(*(int *)(param_2 + 0x134) + iVar7 + iVar4 + 1U & 0x7f) << 0x18 | uVar8,
               (int *)(param_2 + 0x134),piVar3,piVar1,0);
  FUN_1004d680(param_2,extraout_x1,uVar6,3);
LAB_10051e48:
  FUN_10070058(param_3,(*(int *)(param_2 + 0x154) + 1U & 0x7f) << 0x18 | 0x4000d,
               (int *)(param_2 + 0x154),0,0,0);
  FUN_1004d810(param_2,uVar6);
switchD_10051c78_caseD_7:
  return;
}

