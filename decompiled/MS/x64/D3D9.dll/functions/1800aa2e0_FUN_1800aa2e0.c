/*
 * FUN_1800aa2e0 at 1800aa2e0
 * undefined __fastcall FUN_1800aa2e0(longlong param_1, uint param_2, uint param_3, uint param_4, byte param_5, byte param_6, char param_7, char param_8, byte param_9)
 * Address ranges: 1800aa2e0-1800aa439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa2e0(longlong param_1,uint param_2,uint param_3,uint param_4,byte param_5,byte param_6
                  ,char param_7,char param_8,byte param_9)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 0x3f800000;
  uVar8 = 0;
  if (param_7 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x1ce48) = uVar7;
  if (param_8 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3f800000;
  }
  *(uint *)(param_1 + 0x1ce84) = (uint)param_5;
  *(uint *)(param_1 + 0x1cec8) = (uint)param_6;
  lVar6 = (longlong)(int)param_2;
  *(uint *)(param_1 + 0x1ceb8) = param_3 & param_4;
  *(undefined4 *)(param_1 + 0x1ce4c) = uVar7;
  *(uint *)(param_1 + 0x1cec0) = param_4;
  lVar5 = lVar6 * 0x2c;
  uVar3 = FUN_1800a9828(param_1,param_2,0,param_4);
  bVar1 = (&DAT_18010ff39)[lVar5];
  uVar3 = uVar3 & CONCAT31(CONCAT21(CONCAT11((&DAT_18010ff38)[lVar5],bVar1),(&DAT_18010ff3a)[lVar5])
                           ,(&DAT_18010ff3b)[lVar5]);
  uVar4 = uVar3 & 0xff;
  if ((&DAT_1800fec50)[lVar6] != '\0') {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 & 0xffffff00;
  if ((&DAT_1800ff0a8)[lVar6] != '\0') {
    uVar3 = uVar4;
  }
  *(uint *)(param_1 + 0x1cec4) = uVar3;
  uVar4 = FUN_1800a9828((ulonglong)bVar1,param_2,0,param_3);
  *(undefined8 *)(param_1 + 0x1ce94) = 0;
  cVar2 = (&DAT_1800ff0a8)[param_2];
  *(uint *)(param_1 + 0x1cebc) = uVar4 & uVar3;
  *(uint *)(param_1 + 0x1ce88) = (uint)param_9;
  *(undefined4 *)(param_1 + 0x1ce90) = 0;
  if (cVar2 == '\0') {
    uVar8 = uVar9;
  }
  *(undefined4 *)(param_1 + 0x1ce9c) = uVar8;
  return;
}

