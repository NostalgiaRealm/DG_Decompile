/*
 * FUN_18002adcc at 18002adcc
 * undefined __fastcall FUN_18002adcc(longlong param_1, uint param_2, uint * param_3, longlong * param_4)
 * Address ranges: 18002adcc-18002c8e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002adcc(longlong param_1,uint param_2,uint *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  byte local_res18;
  uint local_98;
  
  for (iVar2 = 0; (2U >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
  }
  FUN_180057838(param_3,param_4,0x29,(ulonglong)param_3[0x1c]);
  uVar7 = param_3[0x1a];
  uVar4 = FUN_180056854((longlong)param_3,2,'\x01');
  lVar13 = (ulonglong)param_2 * 0x1a0;
  FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x1a,(ulonglong)uVar4);
  FUN_180057838(param_3,param_4,0x41,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar7);
  iVar2 = *(int *)(lVar13 + 0x134 + param_1);
  iVar1 = *(int *)(lVar13 + 0x138 + param_1);
  bVar12 = (iVar1 != 1) - 1U & 10 | (iVar2 != 1) - 1U & 5;
  bVar3 = (iVar2 != 2) - 1U & 5;
  local_res18 = (iVar1 != 2) - 1U & 10;
  uVar5 = FUN_180056854((longlong)param_3,4,'\x01');
  if (bVar12 != 0) {
    FUN_180057838(param_3,param_4,0x34,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0,(ulonglong)uVar5);
    FUN_180057838(param_3,param_4,0x33,(ulonglong)uVar7);
    if (bVar12 == 0xf) goto LAB_18002b80a;
  }
  uVar6 = FUN_180056854((longlong)param_3,4,'\x01');
  FUN_180057838(param_3,param_4,0xe,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x43,(ulonglong)uVar5);
  if (local_res18 == 0 && bVar3 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_180056854((longlong)param_3,4,'\x01');
    FUN_180057838(param_3,param_4,0x1b,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0x31,(ulonglong)local_98);
    FUN_180057838(param_3,param_4,0x1e,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,1,(ulonglong)local_98);
  }
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x38,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,1,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0x39,(ulonglong)uVar6);
  FUN_180057838(param_3,param_4,1,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar6);
  FUN_180057838(param_3,param_4,0x37,(ulonglong)uVar7);
  if (local_res18 != 0 || bVar3 != 0) {
    FUN_180057838(param_3,param_4,0,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0x37,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0x31,(ulonglong)local_98);
    FUN_180057838(param_3,param_4,1,(ulonglong)local_98);
    FUN_180057838(param_3,param_4,0,(ulonglong)uVar7);
  }
  FUN_1800568f4((longlong)param_3,local_98);
  FUN_1800568f4((longlong)param_3,uVar6);
LAB_18002b80a:
  FUN_1800568f4((longlong)param_3,uVar5);
  uVar5 = FUN_180056854((longlong)param_3,4,'\x01');
  FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x1b,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0x36,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x1e,(ulonglong)uVar7);
  if (7 < *(uint *)((ulonglong)param_2 * 0x1a0 + 0x130 + param_1)) {
    FUN_180057838(param_3,param_4,0x29,(ulonglong)uVar7);
  }
  FUN_180057838(param_3,param_4,0x1e,(ulonglong)uVar7);
  FUN_1800568f4((longlong)param_3,uVar5);
  FUN_1800568f4((longlong)param_3,param_3[0x1c]);
  param_3[0x1c] = 0;
  bVar3 = (&DAT_180063998)[*(uint *)((ulonglong)param_2 * 0x1a0 + 0x130 + param_1)];
  uVar5 = FUN_180056854((longlong)param_3,4,'\x01');
  uVar6 = FUN_180056854((longlong)param_3,4,'\x01');
  if (bVar3 < 4) {
    FUN_180057838(param_3,param_4,1,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0x29,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0x2a,(ulonglong)uVar7);
  }
  FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
  if (bVar3 < 4) {
    if (*param_3 != 0x51) {
      FUN_180057838(param_3,param_4,0x55,(ulonglong)uVar5);
      FUN_180057838(param_3,param_4,0x55,(ulonglong)uVar5);
      FUN_180057838(param_3,param_4,0x55,(ulonglong)uVar5);
    }
    FUN_180057838(param_3,param_4,0x55,(ulonglong)uVar5);
  }
  FUN_1800568f4((longlong)param_3,uVar6);
  FUN_1800568f4((longlong)param_3,uVar7);
  uVar7 = FUN_180056854((longlong)param_3,4,'\x01');
  uVar6 = FUN_180056854((longlong)param_3,4,'\x01');
  uVar8 = FUN_180056854((longlong)param_3,4,'\x01');
  if (bVar3 == 1) {
    FUN_180057838(param_3,param_4,1,(ulonglong)uVar5);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar8);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
  }
  else if (bVar3 == 2) {
    uVar9 = FUN_180056854((longlong)param_3,1,'\x01');
    uVar10 = FUN_180056854((longlong)param_3,4,'\x01');
    uVar11 = FUN_180056854((longlong)param_3,4,'\x01');
    FUN_180057838(param_3,param_4,0x36,(ulonglong)uVar9);
    FUN_180057838(param_3,param_4,0x55,(ulonglong)uVar11);
    FUN_180057838(param_3,param_4,1,(ulonglong)uVar10);
    FUN_180057838(param_3,param_4,1,(ulonglong)uVar11);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar8);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar8);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar6);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
    FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar7);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar5);
    FUN_180057838(param_3,param_4,0xa7,(ulonglong)uVar11);
    FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar5);
    FUN_1800568f4((longlong)param_3,uVar10);
    FUN_1800568f4((longlong)param_3,uVar11);
    FUN_1800568f4((longlong)param_3,uVar9);
  }
  if (param_3[0x19] == 0) {
    if (*(int *)(lVar13 + 0x140 + param_1) != 1) {
      FUN_180057838(param_3,param_4,0x40,(ulonglong)uVar4);
    }
  }
  else {
    uVar9 = FUN_180056854((longlong)param_3,2,'\0');
    FUN_180057838(param_3,param_4,0x40,(ulonglong)uVar9);
    FUN_180057838(param_3,param_4,0x20,(ulonglong)param_3[0x19]);
    FUN_180057838(param_3,param_4,0x37,(ulonglong)uVar4);
    FUN_1800568f4((longlong)param_3,param_3[0x19]);
    param_3[0x19] = 0;
  }
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar7);
  FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar5);
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar8);
  FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar6);
  FUN_180057838(param_3,param_4,0,(ulonglong)uVar6);
  FUN_180057838(param_3,param_4,0x32,(ulonglong)uVar5);
  FUN_1800568f4((longlong)param_3,uVar7);
  FUN_1800568f4((longlong)param_3,uVar6);
  FUN_1800568f4((longlong)param_3,uVar8);
  FUN_1800568f4((longlong)param_3,uVar4);
  param_3[(ulonglong)param_2 + 0x23] = uVar5;
  return;
}

