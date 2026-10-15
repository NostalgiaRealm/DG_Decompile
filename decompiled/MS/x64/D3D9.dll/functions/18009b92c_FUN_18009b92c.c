/*
 * FUN_18009b92c at 18009b92c
 * ulonglong __fastcall FUN_18009b92c(longlong param_1, uint * param_2, longlong param_3, undefined8 param_4, undefined8 param_5, int param_6, int param_7, RECT * param_8)
 * Address ranges: 18009b92c-18009bb69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18009b92c(longlong param_1,uint *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,int param_6,int param_7,RECT *param_8)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  RECT local_e0;
  int local_d0 [6];
  undefined1 local_b8 [28];
  short local_9c;
  short local_9a;
  byte local_88;
  undefined1 local_80 [48];
  byte local_50;
  
  BVar3 = IsRectEmpty(param_8);
  if (BVar3 != 0) {
    return CONCAT44(extraout_var,BVar3) & 0xffffffffffffff00;
  }
  (**(code **)(**(longlong **)(param_3 + 0x14) + 0x50))(*(longlong **)(param_3 + 0x14),local_b8);
  local_e0.right = *(LONG *)(param_1 + 0x24);
  local_e0.bottom = *(LONG *)(param_1 + 0x28);
  local_e0.left = 0;
  local_e0.top = 0;
  BVar3 = EqualRect(&local_e0,param_8);
  cVar10 = '\x01';
  if (((BVar3 == 0) || (local_9a != 1)) || (local_9c != 1)) {
    cVar11 = '\0';
    cVar1 = '\0';
    if ((*(int *)(param_1 + 0x44) - 3U < 3) &&
       (((**(code **)(**(longlong **)(param_2 + 5) + 0x50))(*(longlong **)(param_2 + 5),local_80),
        (local_88 & 2) != 0 || ((local_50 & 2) != 0)))) goto LAB_18009b9e3;
  }
  else {
    cVar1 = '\x01';
  }
  cVar11 = cVar1;
  cVar10 = '\0';
LAB_18009b9e3:
  cVar1 = (&DAT_1800fe9f8)[*(uint *)(param_1 + 0x2c)];
  local_f8._0_4_ = param_8->left;
  local_f8._4_4_ = param_8->top;
  uStack_f0._0_4_ = param_8->right;
  uStack_f0._4_4_ = param_8->bottom;
  uVar5 = param_7 * *(int *)(param_1 + 0x3c) + param_6;
  bVar2 = (byte)param_6 & 0x1f;
  iVar8 = (-(uint)(cVar1 != '\0') & 3) + 1;
  uVar9 = (-(uint)(cVar1 != '\0') & 0xfffffffd) - 1;
  uVar6 = *(uint *)(param_1 + 0x24) >> bVar2;
  if (*(uint *)(param_1 + 0x24) >> bVar2 == 0) {
    uVar6 = 1;
  }
  local_e8 = (uVar6 - 1) + iVar8 & uVar9;
  bVar2 = (byte)param_6 & 0x1f;
  uVar6 = *(uint *)(param_1 + 0x28) >> bVar2;
  if (*(uint *)(param_1 + 0x28) >> bVar2 == 0) {
    uVar6 = 1;
  }
  uVar4 = (uVar6 - 1) + iVar8 & uVar9;
  uVar6 = local_f8._4_4_;
  uVar7 = (undefined4)local_f8;
  if (cVar1 != '\0') {
    uVar7 = (undefined4)local_f8 & 0xfffffffc;
    uVar6 = local_f8._4_4_ & 0xfffffffc;
    local_f8 = local_f8 & 0xfffffffcfffffffc;
    uStack_f0 = CONCAT44(uStack_f0._4_4_ + -1 + iVar8 & uVar9,
                         (undefined4)uStack_f0 + -1 + iVar8 & uVar9);
  }
  FUN_1800ac794(param_1,(undefined8 *)local_d0);
  if ((local_d0[0] == 0x2c) || (local_d0[0] == 0x2d)) {
    local_d0[0] = 0x27;
  }
  FUN_180097cd8(*(longlong *)(param_1 + 0x130),param_3,param_2,*(ulonglong *)(param_3 + 0x14),
                *(ulonglong *)(param_2 + 5),local_e8,uVar4,uVar5,local_e8,uVar4,uVar5,local_d0[0],
                local_d0[0],0,uVar7,uVar6,(int *)&local_f8,1,1,cVar11,cVar10);
  BVar3 = SetRectEmpty(param_8);
  return CONCAT71((int7)(CONCAT44(extraout_var_00,BVar3) >> 8),1);
}

