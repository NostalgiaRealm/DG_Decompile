/*
 * FUN_1002ed87 at 1002ed87
 * undefined __fastcall FUN_1002ed87(int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1002ed87-1002fa44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ed87(int param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  
  for (iVar2 = 0; (2U >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
  }
  FUN_10048a6f(param_3,param_4,0x29);
  uVar5 = param_3[0x18];
  uVar1 = FUN_10047ec0((int)param_3,2,'\x01');
  iVar2 = param_2 * 0x180;
  FUN_10048a6f(param_3,param_4,0x32);
  FUN_10048a6f(param_3,param_4,0x1a);
  FUN_10048a6f(param_3,param_4,0x41);
  FUN_10048a6f(param_3,param_4,0);
  bVar10 = (*(int *)(iVar2 + 0x138 + param_1) != 1) - 1U & 10 |
           (*(int *)(iVar2 + 0x134 + param_1) != 1) - 1U & 5;
  uVar3 = FUN_10047ec0((int)param_3,4,'\x01');
  if (bVar10 != 0) {
    FUN_10048a6f(param_3,param_4,0x34);
    FUN_10048a6f(param_3,param_4,0);
    FUN_10048a6f(param_3,param_4,0x33);
    if (bVar10 == 0xf) goto LAB_1002f13d;
  }
  uVar4 = FUN_10047ec0((int)param_3,4,'\x01');
  FUN_10048a6f(param_3,param_4,0xe);
  FUN_10048a6f(param_3,param_4,0x43);
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x38);
  FUN_10048a6f(param_3,param_4,1);
  FUN_10048a6f(param_3,param_4,0x39);
  FUN_10048a6f(param_3,param_4,1);
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x37);
  FUN_10047f5e((int)param_3,uVar4);
LAB_1002f13d:
  FUN_10047f5e((int)param_3,uVar3);
  uVar3 = FUN_10047ec0((int)param_3,4,'\x01');
  FUN_10048a6f(param_3,param_4,0x32);
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x1b);
  FUN_10048a6f(param_3,param_4,0x36);
  FUN_10048a6f(param_3,param_4,0x1e);
  if (7 < *(uint *)(iVar2 + 0x130 + param_1)) {
    FUN_10048a6f(param_3,param_4,0x29);
  }
  FUN_10048a6f(param_3,param_4,0x1e);
  FUN_10047f5e((int)param_3,uVar3);
  FUN_10047f5e((int)param_3,param_3[0x1a]);
  param_3[0x1a] = 0;
  bVar10 = (&DAT_1005354c)[*(int *)(iVar2 + 0x130 + param_1)];
  uVar3 = FUN_10047ec0((int)param_3,4,'\x01');
  uVar4 = FUN_10047ec0((int)param_3,4,'\x01');
  if (bVar10 < 4) {
    FUN_10048a6f(param_3,param_4,1);
    FUN_10048a6f(param_3,param_4,0x29);
    FUN_10048a6f(param_3,param_4,0x2a);
  }
  FUN_10048a6f(param_3,param_4,0xa7);
  FUN_10048a6f(param_3,param_4,0xa7);
  FUN_10048a6f(param_3,param_4,0xa7);
  FUN_10048a6f(param_3,param_4,0xa7);
  if (bVar10 < 4) {
    if (*param_3 == 0x51) {
      FUN_10048a6f(param_3,param_4,0x55);
    }
    else {
      FUN_10048a6f(param_3,param_4,0x55);
      FUN_10048a6f(param_3,param_4,0x55);
      FUN_10048a6f(param_3,param_4,0x55);
      FUN_10048a6f(param_3,param_4,0x55);
    }
  }
  FUN_10047f5e((int)param_3,uVar4);
  FUN_10047f5e((int)param_3,uVar5);
  uVar5 = FUN_10047ec0((int)param_3,4,'\x01');
  uVar4 = FUN_10047ec0((int)param_3,4,'\x01');
  uVar6 = FUN_10047ec0((int)param_3,4,'\x01');
  if (bVar10 == 1) {
    FUN_10048a6f(param_3,param_4,1);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
  }
  else if (bVar10 == 2) {
    uVar7 = FUN_10047ec0((int)param_3,1,'\x01');
    uVar8 = FUN_10047ec0((int)param_3,4,'\x01');
    uVar9 = FUN_10047ec0((int)param_3,4,'\x01');
    FUN_10048a6f(param_3,param_4,0x36);
    FUN_10048a6f(param_3,param_4,0x55);
    FUN_10048a6f(param_3,param_4,1);
    FUN_10048a6f(param_3,param_4,1);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0x32);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0x32);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0x32);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0xa7);
    FUN_10048a6f(param_3,param_4,0x32);
    FUN_10047f5e((int)param_3,uVar8);
    FUN_10047f5e((int)param_3,uVar9);
    FUN_10047f5e((int)param_3,uVar7);
  }
  if (param_3[0x17] == 0) {
    if (*(int *)(iVar2 + 0x140 + param_1) != 1) {
      FUN_10048a6f(param_3,param_4,0x40);
    }
  }
  else {
    FUN_10047ec0((int)param_3,2,'\0');
    FUN_10048a6f(param_3,param_4,0x40);
    FUN_10048a6f(param_3,param_4,0x20);
    FUN_10048a6f(param_3,param_4,0x37);
    FUN_10047f5e((int)param_3,param_3[0x17]);
    param_3[0x17] = 0;
  }
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x32);
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x32);
  FUN_10048a6f(param_3,param_4,0);
  FUN_10048a6f(param_3,param_4,0x32);
  FUN_10047f5e((int)param_3,uVar5);
  FUN_10047f5e((int)param_3,uVar4);
  FUN_10047f5e((int)param_3,uVar6);
  FUN_10047f5e((int)param_3,uVar1);
  param_3[param_2 + 0x21] = uVar3;
  return;
}

