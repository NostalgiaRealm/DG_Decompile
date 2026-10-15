/*
 * FUN_10005f10 at 10005f10
 * undefined FUN_10005f10(void)
 * Address ranges: 10005f10-10006043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005f10(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int extraout_w11;
  
  if (*(uint *)(param_1 + 0x4c) <= param_2) {
    return 0x8876086c;
  }
  if (2 < param_3 - 1U) {
    return 0x8876086c;
  }
  uVar5 = FUN_100033f0(param_1,param_3);
  if ((uVar5 & 1) == 0) {
    return 0x8876086c;
  }
  puVar1 = (&PTR_DAT_101353a8)[*(int *)(extraout_w11 + 8) * 0x4d];
  uVar4 = FUN_10002f00(param_4);
  uVar5 = FUN_100034c0(puVar1,uVar4);
  if ((uVar5 & 1) == 0) {
    return 0x8876086a;
  }
  uVar4 = FUN_10002f00(param_5);
  uVar5 = FUN_100034c0(puVar1,uVar4);
  if ((uVar5 & 1) == 0) {
    return 0x8876086a;
  }
  if (param_6 != 0) {
    return 0;
  }
  bVar2 = param_4 == param_5;
  switch(param_4) {
  case 0x15:
    bVar3 = param_5 == 0x16;
    break;
  case 0x16:
    bVar3 = param_5 == 0x15;
    break;
  default:
    goto switchD_10005fe8_caseD_17;
  case 0x18:
    bVar3 = param_5 == 0x19;
    break;
  case 0x19:
    bVar3 = param_5 == 0x18;
    break;
  case 0x1a:
    bVar3 = param_5 == 0x1e;
    break;
  case 0x1e:
    bVar3 = param_5 == 0x1a;
  }
  bVar2 = (bool)(bVar3 | bVar2);
switchD_10005fe8_caseD_17:
  uVar4 = 0;
  if (!bVar2) {
    uVar4 = 0x8876086a;
  }
  return uVar4;
}

