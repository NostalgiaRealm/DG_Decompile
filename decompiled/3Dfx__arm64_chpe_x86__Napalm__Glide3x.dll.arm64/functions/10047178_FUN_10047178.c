/*
 * FUN_10047178 at 10047178
 * undefined FUN_10047178(void)
 * Address ranges: 10047178-100473d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047178(int param_1,int param_2,undefined4 param_3,ushort param_4)

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
    goto switchD_100471b8_caseD_0;
  case 1:
    bVar5 = (param_4 & 0xff0) == 0x100;
    break;
  default:
    goto switchD_100471b8_caseD_2;
  case 4:
    bVar5 = (param_4 & 0xdf0) == 0;
    break;
  case 7:
    goto switchD_100471b8_caseD_7;
  }
  if (bVar5) {
switchD_100471b8_caseD_0:
    *(undefined8 *)(param_2 + 0x154) = 0x400100000002;
    *(undefined8 *)(param_2 + 0x164) = 0x100000001;
    *(undefined8 *)(param_2 + 0x15c) = 0x100000001;
    uVar6 = 0;
    goto LAB_10047388;
  }
switchD_100471b8_caseD_2:
  uVar6 = FUN_10041930(param_2,param_4,0,0,0,8,0);
  if ((param_4 & 0xf0) != 0) {
    FUN_10044fb0(0x3c23d70a,param_2,param_3,param_4,0xff,uVar6,uVar6,8,0);
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
    goto LAB_100472c8;
  case 4:
    uVar8 = 0x1d;
    goto LAB_100472c8;
  case 5:
    uVar8 = 0x18;
    break;
  case 6:
    uVar8 = 0x31;
    break;
  default:
    uVar8 = 0;
LAB_100472c8:
    bVar5 = false;
    goto LAB_100472cc;
  }
  bVar5 = true;
LAB_100472cc:
  FUN_10041340(param_2,uVar6,8);
  FUN_100414d0(param_2,0,extraout_x14 & 0xffffffff,0xff,0,0);
  iVar7 = FUN_10077c30(param_2,param_2 + 0x178,*(undefined4 *)(param_2 + 0x40),0xb4,0xff,0,0);
  piVar1 = (int *)(param_2 + 0x154);
  piVar2 = (int *)(param_2 + 0x174);
  *piVar2 = iVar7;
  iVar4 = *piVar1;
  piVar3 = piVar2;
  if (bVar5) {
    piVar3 = piVar1;
    piVar1 = piVar2;
  }
  FUN_10078f18(param_3,(*(int *)(param_2 + 0x134) + iVar7 + iVar4 + 1U & 0x7f) << 0x18 | uVar8,
               (int *)(param_2 + 0x134),piVar3,piVar1,0);
  FUN_100418a8(param_2,extraout_x1,uVar6,3);
LAB_10047388:
  FUN_10078f18(param_3,(*(int *)(param_2 + 0x154) + 1U & 0x7f) << 0x18 | 0x4000d,
               (int *)(param_2 + 0x154),0,0,0);
  FUN_10041a38(param_2,uVar6);
switchD_100471b8_caseD_7:
  return;
}

