/*
 * FUN_10022382 at 10022382
 * undefined __fastcall FUN_10022382(int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10022382-1002324b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022382(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar14;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_14;
  
  for (iVar2 = 0; (2U >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
  }
  FUN_1004b1c7(param_3,param_4,0x29);
  uVar9 = param_3[0x18];
  uVar5 = FUN_1004a618((int)param_3,2,'\x01');
  iVar6 = param_2 * 0x1a0;
  FUN_1004b1c7(param_3,param_4,0x32);
  FUN_1004b1c7(param_3,param_4,0x1a);
  FUN_1004b1c7(param_3,param_4,0x41);
  FUN_1004b1c7(param_3,param_4,0);
  iVar2 = *(int *)(iVar6 + 0x138 + param_1);
  iVar1 = *(int *)(iVar6 + 0x134 + param_1);
  uVar4 = CONCAT11((iVar2 != 1) + -1,(iVar1 != 1) + -1) & 0xa05;
  bVar14 = (byte)(uVar4 >> 8) | (byte)uVar4;
  bVar3 = (iVar2 != 2) - 1U & 2;
  uVar7 = FUN_1004a618((int)param_3,4,'\x01');
  if (bVar14 != 0) {
    FUN_1004b1c7(param_3,param_4,0x34);
    FUN_1004b1c7(param_3,param_4,0);
    FUN_1004b1c7(param_3,param_4,0x33);
    if (bVar14 == 0xf) goto LAB_10022940;
  }
  uVar8 = FUN_1004a618((int)param_3,4,'\x01');
  FUN_1004b1c7(param_3,param_4,0xe);
  FUN_1004b1c7(param_3,param_4,0x43);
  if (iVar1 == 2 || bVar3 != 0) {
    local_14 = FUN_1004a618((int)param_3,4,'\x01');
    FUN_1004b1c7(param_3,param_4,0x1b);
    FUN_1004b1c7(param_3,param_4,0x31);
    FUN_1004b1c7(param_3,param_4,0x1e);
    FUN_1004b1c7(param_3,param_4,1);
  }
  else {
    local_14 = 0;
  }
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x38);
  FUN_1004b1c7(param_3,param_4,1);
  FUN_1004b1c7(param_3,param_4,0x39);
  FUN_1004b1c7(param_3,param_4,1);
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x37);
  if (iVar1 == 2 || bVar3 != 0) {
    FUN_1004b1c7(param_3,param_4,0);
    FUN_1004b1c7(param_3,param_4,0);
    FUN_1004b1c7(param_3,param_4,0x37);
    FUN_1004b1c7(param_3,param_4,0x31);
    FUN_1004b1c7(param_3,param_4,1);
    FUN_1004b1c7(param_3,param_4,0);
  }
  FUN_1004a6b6((int)param_3,local_14);
  FUN_1004a6b6((int)param_3,uVar8);
LAB_10022940:
  FUN_1004a6b6((int)param_3,uVar7);
  uVar7 = FUN_1004a618((int)param_3,4,'\x01');
  FUN_1004b1c7(param_3,param_4,0x32);
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x1b);
  FUN_1004b1c7(param_3,param_4,0x36);
  FUN_1004b1c7(param_3,param_4,0x1e);
  if (7 < *(uint *)(param_2 * 0x1a0 + 0x130 + param_1)) {
    FUN_1004b1c7(param_3,param_4,0x29);
  }
  FUN_1004b1c7(param_3,param_4,0x1e);
  FUN_1004a6b6((int)param_3,uVar7);
  FUN_1004a6b6((int)param_3,param_3[0x1a]);
  param_3[0x1a] = 0;
  bVar3 = (&DAT_100555d8)[*(int *)(param_2 * 0x1a0 + 0x130 + param_1)];
  uVar7 = FUN_1004a618((int)param_3,4,'\x01');
  uVar8 = FUN_1004a618((int)param_3,4,'\x01');
  if (bVar3 < 4) {
    FUN_1004b1c7(param_3,param_4,1);
    FUN_1004b1c7(param_3,param_4,0x29);
    FUN_1004b1c7(param_3,param_4,0x2a);
  }
  FUN_1004b1c7(param_3,param_4,0xa7);
  FUN_1004b1c7(param_3,param_4,0xa7);
  FUN_1004b1c7(param_3,param_4,0xa7);
  FUN_1004b1c7(param_3,param_4,0xa7);
  if (bVar3 < 4) {
    if (*param_3 == 0x51) {
      FUN_1004b1c7(param_3,param_4,0x55);
    }
    else {
      FUN_1004b1c7(param_3,param_4,0x55);
      FUN_1004b1c7(param_3,param_4,0x55);
      FUN_1004b1c7(param_3,param_4,0x55);
      FUN_1004b1c7(param_3,param_4,0x55);
    }
  }
  FUN_1004a6b6((int)param_3,uVar8);
  FUN_1004a6b6((int)param_3,uVar9);
  uVar9 = FUN_1004a618((int)param_3,4,'\x01');
  uVar8 = FUN_1004a618((int)param_3,4,'\x01');
  uVar10 = FUN_1004a618((int)param_3,4,'\x01');
  if (bVar3 == 1) {
    FUN_1004b1c7(param_3,param_4,1);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
  }
  else if (bVar3 == 2) {
    uVar11 = FUN_1004a618((int)param_3,1,'\x01');
    uVar12 = FUN_1004a618((int)param_3,4,'\x01');
    uVar13 = FUN_1004a618((int)param_3,4,'\x01');
    FUN_1004b1c7(param_3,param_4,0x36);
    FUN_1004b1c7(param_3,param_4,0x55);
    FUN_1004b1c7(param_3,param_4,1);
    FUN_1004b1c7(param_3,param_4,1);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0x32);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0x32);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0x32);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0xa7);
    FUN_1004b1c7(param_3,param_4,0x32);
    FUN_1004a6b6((int)param_3,uVar12);
    FUN_1004a6b6((int)param_3,uVar13);
    FUN_1004a6b6((int)param_3,uVar11);
  }
  if (param_3[0x17] == 0) {
    if (*(int *)(iVar6 + 0x140 + param_1) != 1) {
      FUN_1004b1c7(param_3,param_4,0x40);
    }
  }
  else {
    FUN_1004a618((int)param_3,2,'\0');
    FUN_1004b1c7(param_3,param_4,0x40);
    FUN_1004b1c7(param_3,param_4,0x20);
    FUN_1004b1c7(param_3,param_4,0x37);
    FUN_1004a6b6((int)param_3,param_3[0x17]);
    param_3[0x17] = 0;
  }
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x32);
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x32);
  FUN_1004b1c7(param_3,param_4,0);
  FUN_1004b1c7(param_3,param_4,0x32);
  FUN_1004a6b6((int)param_3,uVar9);
  FUN_1004a6b6((int)param_3,uVar8);
  FUN_1004a6b6((int)param_3,uVar10);
  FUN_1004a6b6((int)param_3,uVar5);
  param_3[param_2 + 0x21] = uVar7;
  return;
}

