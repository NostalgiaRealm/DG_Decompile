/*
 * FUN_10024f79 at 10024f79
 * undefined __fastcall FUN_10024f79(int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10024f79-10026076
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024f79(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar15;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_c;
  
  piVar2 = param_3;
  for (iVar9 = 0; (2U >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
  }
  FUN_1004e5d0(param_3,param_4,0x29);
  uVar10 = param_3[0x18];
  uVar5 = FUN_1004da21((int)param_3,2,'\x01');
  iVar6 = param_2 * 0x250;
  FUN_1004e5d0(param_3,param_4,0x32);
  FUN_1004e5d0(param_3,param_4,0x1a);
  FUN_1004e5d0(param_3,param_4,0x41);
  FUN_1004e5d0(param_3,param_4,0);
  iVar9 = *(int *)(iVar6 + 0x1ac + param_1);
  iVar1 = *(int *)(iVar6 + 0x1a8 + param_1);
  uVar4 = CONCAT11((iVar9 != 1) + -1,(iVar1 != 1) + -1) & 0xa05;
  bVar15 = (byte)(uVar4 >> 8) | (byte)uVar4;
  bVar3 = (iVar9 != 2) - 1U & 2;
  uVar7 = FUN_1004da21((int)param_3,4,'\x01');
  if (bVar15 != 0) {
    FUN_1004e5d0(param_3,param_4,0x34);
    FUN_1004e5d0(param_3,param_4,0);
    FUN_1004e5d0(param_3,param_4,0x33);
    if (bVar15 == 0xf) goto LAB_1002554c;
  }
  uVar8 = FUN_1004da21((int)param_3,4,'\x01');
  FUN_1004e5d0(param_3,param_4,0xe);
  FUN_1004e5d0(param_3,param_4,0x43);
  if (iVar1 == 2 || bVar3 != 0) {
    local_c = FUN_1004da21((int)param_3,4,'\x01');
    FUN_1004e5d0(param_3,param_4,0x1b);
    FUN_1004e5d0(param_3,param_4,0x31);
    FUN_1004e5d0(param_3,param_4,0x1e);
    FUN_1004e5d0(param_3,param_4,1);
  }
  else {
    local_c = 0;
  }
  FUN_1004e5d0(param_3,param_4,0);
  FUN_1004e5d0(param_3,param_4,0x38);
  FUN_1004e5d0(param_3,param_4,1);
  FUN_1004e5d0(param_3,param_4,0x39);
  FUN_1004e5d0(param_3,param_4,1);
  FUN_1004e5d0(param_3,param_4,0);
  FUN_1004e5d0(param_3,param_4,0x37);
  if (iVar1 == 2 || bVar3 != 0) {
    FUN_1004e5d0(param_3,param_4,0);
    FUN_1004e5d0(param_3,param_4,0);
    FUN_1004e5d0(param_3,param_4,0x37);
    FUN_1004e5d0(param_3,param_4,0x31);
    FUN_1004e5d0(param_3,param_4,1);
    FUN_1004e5d0(param_3,param_4,0);
  }
  FUN_1004dabf((int)param_3,local_c);
  FUN_1004dabf((int)param_3,uVar8);
LAB_1002554c:
  FUN_1004dabf((int)param_3,uVar7);
  uVar8 = FUN_1004da21((int)param_3,4,'\x01');
  FUN_1004e5d0(param_3,param_4,0x32);
  FUN_1004e5d0(param_3,param_4,0);
  FUN_1004e5d0(param_3,param_4,0x1b);
  FUN_1004e5d0(param_3,param_4,0x36);
  FUN_1004e5d0(param_3,param_4,0x1e);
  uVar7 = *(uint *)(param_2 * 0x250 + 0x1a4 + param_1);
  if (((uVar7 == 0x12) || (uVar7 == 0x1b)) || (7 < uVar7)) {
    FUN_1004e5d0(param_3,param_4,0x29);
  }
  FUN_1004e5d0(param_3,param_4,0x1e);
  FUN_1004dabf((int)param_3,uVar8);
  FUN_1004dabf((int)param_3,param_3[0x1a]);
  param_3[0x1a] = 0;
  iVar9 = *(int *)(param_2 * 0x250 + 0x1a4 + param_1);
  if (iVar9 == 0xff) {
    iVar9 = 0x1b;
  }
  bVar3 = (&DAT_100588f8)[iVar9];
  uVar7 = FUN_1004da21((int)param_3,4,'\x01');
  uVar8 = FUN_1004da21((int)param_3,4,'\x01');
  if (bVar3 < 4) {
    FUN_1004e5d0(param_3,param_4,1);
    FUN_1004e5d0(param_3,param_4,0x29);
    FUN_1004e5d0(param_3,param_4,0x2a);
  }
  FUN_1004e5d0(param_3,param_4,0xa7);
  FUN_1004e5d0(param_3,param_4,0xa7);
  FUN_1004e5d0(param_3,param_4,0xa7);
  FUN_1004e5d0(param_3,param_4,0xa7);
  if (bVar3 < 4) {
    if (*param_3 == 0x51) {
      FUN_1004e5d0(param_3,param_4,0x55);
    }
    else {
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
    }
  }
  FUN_1004dabf((int)param_3,uVar8);
  FUN_1004dabf((int)param_3,uVar10);
  uVar10 = FUN_1004da21((int)param_3,4,'\x01');
  uVar8 = FUN_1004da21((int)param_3,4,'\x01');
  uVar11 = FUN_1004da21((int)param_3,4,'\x01');
  if (bVar3 == 1) {
    FUN_1004e5d0(param_3,param_4,1);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
  }
  else if (bVar3 == 2) {
    uVar12 = FUN_1004da21((int)param_3,1,'\x01');
    uVar13 = FUN_1004da21((int)param_3,4,'\x01');
    uVar14 = FUN_1004da21((int)param_3,4,'\x01');
    FUN_1004e5d0(param_3,param_4,0x36);
    FUN_1004e5d0(param_3,param_4,0x55);
    FUN_1004e5d0(param_3,param_4,1);
    FUN_1004e5d0(param_3,param_4,1);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0x32);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0x32);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0x32);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0xa7);
    FUN_1004e5d0(param_3,param_4,0x32);
    FUN_1004dabf((int)param_3,uVar13);
    FUN_1004dabf((int)param_3,uVar14);
    FUN_1004dabf((int)param_3,uVar12);
  }
  else if (bVar3 == 4) {
    if (*param_3 == 0x51) {
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
      FUN_1004e5d0(param_3,param_4,0x55);
    }
    else {
      param_3 = (int *)&DAT_00000004;
      do {
        FUN_1004e5d0(piVar2,param_4,0x55);
        FUN_1004e5d0(piVar2,param_4,0x55);
        FUN_1004e5d0(piVar2,param_4,0x55);
        FUN_1004e5d0(piVar2,param_4,0x55);
        param_3 = (int *)((int)param_3 + -1);
      } while (param_3 != (int *)0x0);
    }
    FUN_1004e5d0(piVar2,param_4,1);
    FUN_1004e5d0(piVar2,param_4,1);
    FUN_1004e5d0(piVar2,param_4,1);
    FUN_1004e5d0(piVar2,param_4,1);
  }
  if (piVar2[0x17] == 0) {
    if (*(int *)(iVar6 + 0x1b4 + param_1) != 1) {
      FUN_1004e5d0(piVar2,param_4,0x40);
    }
  }
  else {
    FUN_1004da21((int)piVar2,2,'\0');
    FUN_1004e5d0(piVar2,param_4,0x40);
    FUN_1004e5d0(piVar2,param_4,0x20);
    FUN_1004e5d0(piVar2,param_4,0x37);
    FUN_1004dabf((int)piVar2,piVar2[0x17]);
    piVar2[0x17] = 0;
  }
  FUN_1004e5d0(piVar2,param_4,0);
  FUN_1004e5d0(piVar2,param_4,0x32);
  FUN_1004e5d0(piVar2,param_4,0);
  FUN_1004e5d0(piVar2,param_4,0x32);
  FUN_1004e5d0(piVar2,param_4,0);
  FUN_1004e5d0(piVar2,param_4,0x32);
  FUN_1004dabf((int)piVar2,uVar10);
  FUN_1004dabf((int)piVar2,uVar8);
  FUN_1004dabf((int)piVar2,uVar11);
  FUN_1004dabf((int)piVar2,uVar5);
  piVar2[param_2 + 0x21] = uVar7;
  return;
}

