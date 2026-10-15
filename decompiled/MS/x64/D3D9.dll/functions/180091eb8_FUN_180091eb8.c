/*
 * FUN_180091eb8 at 180091eb8
 * undefined __fastcall FUN_180091eb8(longlong * param_1, int param_2, int param_3)
 * Address ranges: 180091eb8-1800920b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180091eb8(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar4 = (ulonglong)(uint)(param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2);
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    FUN_18008d228(param_1[0x22],2,param_1[2]);
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  uVar2 = 0x16;
  if (uVar1 != 0) {
    uVar2 = 6;
    if ((char)param_1[0x49] == '\0') {
      uVar2 = *(uint *)(&DAT_1800ff0e0 + (ulonglong)uVar1 * 4);
    }
    uVar2 = (*(uint *)(&DAT_1800feb70 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4 | uVar2 & 0xf;
  }
  uVar3 = param_1[0x28];
  if (uVar3 == 0) {
    uVar3 = FUN_180091758(param_1,0);
  }
  fVar7 = (float)(uint)(1 << ((byte)param_2 & 0x1f));
  if (param_1[0x3b] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1[0x3e] + uVar4 * 0x28);
  }
  lVar5 = param_1[0x10];
  if (lVar5 == 0) {
    lVar5 = param_1[0xf];
  }
  FUN_18008d560(param_1[0x22],(ulonglong)*(uint *)((longlong)param_1 + 0x2c),
                *(uint *)((longlong)param_1 + 0x2c),param_2,param_3,param_2,param_3,0.0,0,
                (float)*(uint *)((longlong)param_1 + 0x24) / fVar7,
                (float)*(uint *)(param_1 + 5) / fVar7,0,0,(float)*(uint *)(param_1 + 0x2e) / fVar7,
                (float)*(uint *)((longlong)param_1 + 0x174) / fVar7,param_1[0x33],
                *(undefined8 *)(param_1[0x36] + uVar4 * 0x28),uVar6,lVar5,uVar3,0,0,0,'\0',uVar2,1);
  return;
}

