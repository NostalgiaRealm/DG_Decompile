/*
 * FUN_10067a5c at 10067a5c
 * undefined __stdcall FUN_10067a5c(int param_1, int param_2, int param_3, int param_4, int * param_5, int * param_6, int * param_7, undefined4 param_8)
 * Address ranges: 10067a5c-10067cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067a5c(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7,undefined4 param_8)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 local_6c [5];
  RECT local_58;
  RECT local_48;
  tagRECT local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_c = param_7[0xd];
  local_38.left = param_7[9];
  iVar1 = param_7[0xe];
  local_38.top = param_7[10];
  local_38.right = param_7[0xb];
  local_38.bottom = param_7[0xc];
  cVar3 = (**(code **)(*param_6 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_6 + 4))(param_3,param_4,*(char *)((int)param_7 + 0x49) == '\0');
  }
  cVar3 = (**(code **)(*param_5 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
  }
  bVar8 = 0;
  local_20 = param_6[0xb] * param_4 + param_3;
  local_1c = param_5[0xb] * param_2 + param_1;
  local_28 = (param_6[9] + param_4) * param_6[0xb] + param_3;
  local_24 = (param_5[9] + param_2) * param_5[0xb] + param_1;
  uVar4 = (**(code **)(*param_6 + 0x20))(0,param_3);
  local_14 = FUN_100791d2(param_6,uVar4,bVar8);
  bVar8 = 0;
  uVar4 = (**(code **)(*param_6 + 0x24))(0,param_3);
  local_10 = FUN_10079207(param_6,uVar4,bVar8);
  bVar8 = 0;
  uVar4 = (**(code **)(*param_5 + 0x20))(0,param_1);
  uVar4 = FUN_100791d2(param_5,uVar4,bVar8);
  bVar8 = 0;
  uVar5 = (**(code **)(*param_5 + 0x24))(0,param_1);
  uVar5 = FUN_10079207(param_5,uVar5,bVar8);
  (**(code **)(*param_6 + 4))(param_3,param_4,0);
  (**(code **)(*param_5 + 4))(param_1,param_2,0);
  local_58.right = local_14;
  local_48.left = 0;
  local_48.top = 0;
  local_58.left = 0;
  local_58.top = 0;
  local_58.bottom = local_10;
  local_48.right = uVar4;
  local_48.bottom = uVar5;
  if ((*(char *)((int)param_7 + 0x45) == '\0') && ((char)param_7[0x11] == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    IntersectRect(&local_38,&local_38,&local_48);
  }
  OffsetRect(&local_38,local_c - param_7[9],iVar1 - param_7[10]);
  if (bVar2) {
    IntersectRect(&local_38,&local_38,&local_58);
  }
  OffsetRect(&local_38,param_7[9] - local_c,param_7[10] - iVar1);
  if ((uint)param_5[7] < 0xe) {
    uVar7 = *(undefined4 *)((int)local_18 + 0x28);
  }
  else {
    iVar6 = FUN_1007923c(param_5,local_6c);
    uVar7 = *(undefined4 *)(iVar6 + 4);
  }
  FUN_1006952f(local_18,*param_7,param_7[1],param_7[2],param_7[3],local_14,local_10,local_20,uVar4,
               uVar5,local_1c,param_7[5],param_7[6],uVar7,local_c,iVar1,&local_38.left,param_7[7],
               param_7[8],*(char *)((int)param_7 + 0x49),*(char *)((int)param_7 + 0x4a));
  if ((((*(char *)((int)param_7 + 0x49) == '\0') && ((&DAT_100b0728)[param_6[7]] != '\0')) &&
      ((&DAT_100b0728)[param_5[7]] != '\0')) &&
     (((param_7[5] == 0x2c || (param_7[5] == 0x2d)) &&
      ((param_7[6] == 0x2c || (param_7[6] == 0x2d)))))) {
    FUN_1006952f(local_18,*param_7,param_7[1],param_7[2],param_7[3],local_14,local_10,local_28,uVar4
                 ,uVar5,local_24,param_7[5],param_7[6],uVar7,local_c,iVar1,&local_38.left,param_7[7]
                 ,param_7[8],'\0','\0');
  }
  (**(code **)(*param_5 + 0xc))(local_1c,param_8);
  return;
}

