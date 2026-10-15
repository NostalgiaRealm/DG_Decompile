/*
 * FUN_10010d75 at 10010d75
 * undefined __stdcall FUN_10010d75(int param_1, int param_2, int param_3, int param_4, int * param_5, int * param_6, int * param_7, int * param_8, int * param_9)
 * Address ranges: 10010d75-100110a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010d75(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 local_6c [5];
  RECT local_58;
  RECT local_48;
  tagRECT local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  int local_c;
  
  local_c = param_7[0xd];
  local_38.left = param_7[9];
  iVar1 = param_7[0xe];
  local_38.top = param_7[10];
  local_38.right = param_7[0xb];
  local_38.bottom = param_7[0xc];
  local_18 = (local_38.right - local_38.left) + local_c;
  local_14 = (local_38.bottom - local_38.top) + iVar1;
  cVar3 = (**(code **)(*param_6 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_6 + 4))(param_3,param_4,*(char *)((int)param_7 + 0x49) == '\0');
  }
  cVar3 = (**(code **)(*param_5 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_5 + 4))(param_1,param_2,0);
  }
  bVar2 = true;
  local_1c = param_6[0xb] * param_4 + param_3;
  local_24 = param_5[0xb] * param_2 + param_1;
  local_20 = (param_6[9] + param_4) * param_6[0xb] + param_3;
  local_28 = (param_5[9] + param_2) * param_5[0xb] + param_1;
  if (((param_7[2] == param_7[3]) && (param_3 == param_1)) && (param_4 == param_2)) {
    local_48.left = local_c;
    local_48.right = local_18;
    local_48.bottom = local_14;
    local_48.top = iVar1;
    iVar4 = FUN_100101a6((int)param_6,(int)(param_6 + 0x12),param_3,param_4,&local_48);
    if (iVar4 == 0) {
      return;
    }
    *param_7 = iVar4;
    iVar7 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar4 + 0xc);
    }
    param_7[2] = iVar7;
    FUN_10010bed((int)param_7,(byte)param_1,iVar7,0,iVar7,param_8,param_9);
    param_4 = 0;
    param_3 = 0;
    local_1c = 0;
    local_20 = 1;
  }
  bVar9 = 0;
  uVar5 = (**(code **)(*param_6 + 0x20))(0,param_3);
  local_18 = FUN_10022186(param_6,uVar5,bVar9);
  bVar9 = 0;
  uVar5 = (**(code **)(*param_6 + 0x24))(0,param_3);
  local_14 = FUN_100221bb(param_6,uVar5,bVar9);
  bVar9 = 0;
  uVar5 = (**(code **)(*param_5 + 0x20))(0,param_1);
  uVar5 = FUN_10022186(param_5,uVar5,bVar9);
  bVar9 = 0;
  uVar6 = (**(code **)(*param_5 + 0x24))(0,param_1);
  uVar6 = FUN_100221bb(param_5,uVar6,bVar9);
  (**(code **)(*param_6 + 4))(param_3,param_4,0);
  (**(code **)(*param_5 + 4))(param_1,param_2,0);
  local_58.right = local_18;
  local_48.left = 0;
  local_48.top = 0;
  local_58.left = 0;
  local_58.top = 0;
  local_58.bottom = local_14;
  local_48.right = uVar5;
  local_48.bottom = uVar6;
  if ((*(char *)((int)param_7 + 0x45) == '\0') && ((char)param_7[0x11] == '\0')) {
    bVar2 = false;
  }
  else {
    IntersectRect(&local_38,&local_38,&local_48);
  }
  OffsetRect(&local_38,local_c - param_7[9],iVar1 - param_7[10]);
  if (bVar2) {
    IntersectRect(&local_38,&local_38,&local_58);
  }
  OffsetRect(&local_38,param_7[9] - local_c,param_7[10] - iVar1);
  if ((uint)param_5[7] < 0xe) {
    uVar8 = *(undefined4 *)((int)local_10 + 0x28);
  }
  else {
    iVar4 = FUN_100221f0(param_5,local_6c);
    uVar8 = *(undefined4 *)(iVar4 + 4);
  }
  FUN_1001283a(local_10,*param_7,param_7[1],param_7[2],param_7[3],local_18,local_14,local_1c,uVar5,
               uVar6,local_24,param_7[5],param_7[6],uVar8,local_c,iVar1,&local_38.left,param_7[7],
               param_7[8],*(char *)((int)param_7 + 0x49),*(char *)((int)param_7 + 0x4a));
  if ((((*(char *)((int)param_7 + 0x49) == '\0') && ((&DAT_10062a58)[param_6[7]] != '\0')) &&
      (((&DAT_10062a58)[param_5[7]] != '\0' && ((param_7[5] == 0x2c || (param_7[5] == 0x2d)))))) &&
     ((param_7[6] == 0x2c || (param_7[6] == 0x2d)))) {
    FUN_1001283a(local_10,*param_7,param_7[1],param_7[2],param_7[3],local_18,local_14,local_20,uVar5
                 ,uVar6,local_28,param_7[5],param_7[6],uVar8,local_c,iVar1,&local_38.left,param_7[7]
                 ,param_7[8],'\0','\0');
  }
  (**(code **)(*param_5 + 0xc))(local_24,param_8);
  return;
}

