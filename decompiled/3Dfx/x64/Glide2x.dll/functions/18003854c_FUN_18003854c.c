/*
 * FUN_18003854c at 18003854c
 * undefined __fastcall FUN_18003854c(longlong param_1, uint param_2, uint * param_3, longlong * param_4)
 * Address ranges: 18003854c-180039c5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003854c(longlong param_1,uint param_2,uint *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  
  puVar1 = param_3 + 0x1c;
  for (iVar2 = 0; (2U >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
  }
  FUN_18005522c(param_3,param_4,0x29,(ulonglong)*puVar1);
  uVar6 = param_3[0x1a];
  uVar3 = FUN_180054248((longlong)param_3,2,'\x01');
  lVar12 = (ulonglong)param_2 * 0x180;
  FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x1a,(ulonglong)uVar3);
  FUN_18005522c(param_3,param_4,0x41,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar6);
  bVar11 = (*(int *)(lVar12 + 0x138 + param_1) != 1) - 1U & 10 |
           (*(int *)(lVar12 + 0x134 + param_1) != 1) - 1U & 5;
  uVar4 = FUN_180054248((longlong)param_3,4,'\x01');
  if (bVar11 != 0) {
    FUN_18005522c(param_3,param_4,0x34,(ulonglong)uVar6);
    FUN_18005522c(param_3,param_4,0,(ulonglong)uVar4);
    FUN_18005522c(param_3,param_4,0x33,(ulonglong)uVar6);
    if (bVar11 == 0xf) goto LAB_180038b9b;
  }
  uVar5 = FUN_180054248((longlong)param_3,4,'\x01');
  FUN_18005522c(param_3,param_4,0xe,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x43,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x38,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,1,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0x39,(ulonglong)uVar5);
  FUN_18005522c(param_3,param_4,1,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar5);
  FUN_18005522c(param_3,param_4,0x37,(ulonglong)uVar6);
  FUN_1800542e8((longlong)param_3,uVar5);
LAB_180038b9b:
  FUN_1800542e8((longlong)param_3,uVar4);
  uVar4 = FUN_180054248((longlong)param_3,4,'\x01');
  FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x1b,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0x36,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x1e,(ulonglong)uVar6);
  if (7 < *(uint *)(lVar12 + 0x130 + param_1)) {
    FUN_18005522c(param_3,param_4,0x29,(ulonglong)uVar6);
  }
  FUN_18005522c(param_3,param_4,0x1e,(ulonglong)uVar6);
  FUN_1800542e8((longlong)param_3,uVar4);
  FUN_1800542e8((longlong)param_3,*puVar1);
  *puVar1 = 0;
  bVar11 = (&DAT_180062bb8)[*(uint *)(lVar12 + 0x130 + param_1)];
  uVar4 = FUN_180054248((longlong)param_3,4,'\x01');
  uVar5 = FUN_180054248((longlong)param_3,4,'\x01');
  if (bVar11 < 4) {
    FUN_18005522c(param_3,param_4,1,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0x29,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0x2a,(ulonglong)uVar6);
  }
  FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
  if (bVar11 < 4) {
    if (*param_3 != 0x51) {
      FUN_18005522c(param_3,param_4,0x55,(ulonglong)uVar4);
      FUN_18005522c(param_3,param_4,0x55,(ulonglong)uVar4);
      FUN_18005522c(param_3,param_4,0x55,(ulonglong)uVar4);
    }
    FUN_18005522c(param_3,param_4,0x55,(ulonglong)uVar4);
  }
  FUN_1800542e8((longlong)param_3,uVar5);
  FUN_1800542e8((longlong)param_3,uVar6);
  uVar6 = FUN_180054248((longlong)param_3,4,'\x01');
  uVar5 = FUN_180054248((longlong)param_3,4,'\x01');
  uVar7 = FUN_180054248((longlong)param_3,4,'\x01');
  if (bVar11 == 1) {
    FUN_18005522c(param_3,param_4,1,(ulonglong)uVar4);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar7);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
  }
  else if (bVar11 == 2) {
    uVar8 = FUN_180054248((longlong)param_3,1,'\x01');
    uVar9 = FUN_180054248((longlong)param_3,4,'\x01');
    uVar10 = FUN_180054248((longlong)param_3,4,'\x01');
    FUN_18005522c(param_3,param_4,0x36,(ulonglong)uVar8);
    FUN_18005522c(param_3,param_4,0x55,(ulonglong)uVar10);
    FUN_18005522c(param_3,param_4,1,(ulonglong)uVar9);
    FUN_18005522c(param_3,param_4,1,(ulonglong)uVar10);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar7);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar7);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar5);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar6);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
    FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar6);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar4);
    FUN_18005522c(param_3,param_4,0xa7,(ulonglong)uVar10);
    FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar4);
    FUN_1800542e8((longlong)param_3,uVar9);
    FUN_1800542e8((longlong)param_3,uVar10);
    FUN_1800542e8((longlong)param_3,uVar8);
  }
  if (param_3[0x19] == 0) {
    if (*(int *)(lVar12 + 0x140 + param_1) != 1) {
      FUN_18005522c(param_3,param_4,0x40,(ulonglong)uVar3);
    }
  }
  else {
    uVar8 = FUN_180054248((longlong)param_3,2,'\0');
    FUN_18005522c(param_3,param_4,0x40,(ulonglong)uVar8);
    FUN_18005522c(param_3,param_4,0x20,(ulonglong)param_3[0x19]);
    FUN_18005522c(param_3,param_4,0x37,(ulonglong)uVar3);
    FUN_1800542e8((longlong)param_3,param_3[0x19]);
    param_3[0x19] = 0;
  }
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar6);
  FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar4);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar7);
  FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar5);
  FUN_18005522c(param_3,param_4,0,(ulonglong)uVar5);
  FUN_18005522c(param_3,param_4,0x32,(ulonglong)uVar4);
  FUN_1800542e8((longlong)param_3,uVar6);
  FUN_1800542e8((longlong)param_3,uVar5);
  FUN_1800542e8((longlong)param_3,uVar7);
  FUN_1800542e8((longlong)param_3,uVar3);
  param_3[(ulonglong)param_2 + 0x23] = uVar4;
  return;
}

