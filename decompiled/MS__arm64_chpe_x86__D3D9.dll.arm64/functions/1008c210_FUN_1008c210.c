/*
 * FUN_1008c210 at 1008c210
 * undefined FUN_1008c210(void)
 * Address ranges: 1008c210-1008c36f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008c210(undefined8 param_1,ulonglong param_2,uint *param_3,int param_4,ulonglong param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  int extraout_w14;
  uint uVar7;
  ulonglong extraout_x15;
  undefined1 uVar8;
  
  param_5 = param_5 & 0xffffffff;
  uVar7 = *param_3 >> 0x10 & 7;
  uVar8 = (undefined1)uVar7;
  uVar5 = FUN_10123210(0xe4,uVar7,param_5);
  uVar7 = (uint)extraout_x15;
  iVar1 = extraout_w14 + 4;
  if ((extraout_x15 & 0x2000) == 0) {
    uVar4 = 0;
    iVar1 = extraout_w14;
  }
  else {
    uVar4 = *(undefined4 *)(extraout_w14 + 4);
  }
  uVar2 = (uVar7 & 0x1800 | uVar7 >> 0x14 & 0x7ff) >> 8;
  if (uVar2 < 9) {
    uVar7 = uVar7 & 0x7ff;
    switch(uVar2) {
    case 0:
      uVar4 = FUN_100883a0(uVar5,param_4,uVar7);
      *(undefined4 *)(param_4 + 0x3e0) = uVar4;
      *(char *)(param_4 + 0x3e4) = (char)uVar5;
      *(undefined8 *)(param_4 + 0x3f0) = 0xffffffffffffffff;
      break;
    case 1:
      FUN_1008ba68(uVar5,param_4,param_5 & 0xffffffff,uVar7,uVar5 & 0xff,uVar4,param_4 + 0x3e0);
      goto LAB_1008c324;
    default:
      goto switchD_1008c298_caseD_2;
    case 3:
      *(uint *)(param_4 + 0x3e0) = uVar7 + 5 | 0x410100;
      *(char *)(param_4 + 0x3e4) = (char)uVar5;
      *(undefined8 *)(param_4 + 0x3f0) = 0xffffffffffffffff;
    }
    *(undefined8 *)(param_4 + 0x3f8) = 0xffffffffffffffff;
  }
  else {
switchD_1008c298_caseD_2:
    uVar8 = 0;
  }
LAB_1008c324:
  bVar3 = (param_2 & 0x10000000) == 0;
  if (bVar3) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 8);
  }
  iVar6 = 4;
  if (!bVar3) {
    iVar6 = 8;
  }
  *(undefined4 *)(param_4 + 0x4e0) = uVar4;
  *(undefined1 *)(param_4 + 0x334) = uVar8;
  return iVar6 + iVar1;
}

