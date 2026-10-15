/*
 * FUN_180097cd8 at 180097cd8
 * undefined __fastcall FUN_180097cd8(longlong param_1, longlong param_2, uint * param_3, ulonglong param_4, ulonglong param_5, undefined4 param_6, undefined4 param_7, uint param_8, undefined4 param_9, undefined4 param_10, uint param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, int param_15, int param_16, int * param_17, uint param_18, int param_19, char param_20, char param_21)
 * Address ranges: 180097cd8-180098100
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180097cd8(longlong param_1,longlong param_2,uint *param_3,ulonglong param_4,
                  ulonglong param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                  undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,int param_15,int param_16,int *param_17,
                  uint param_18,int param_19,char param_20,char param_21)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  undefined4 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  local_90 = (ulonglong)param_8;
  piVar6 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
  *piVar6 = *piVar6 + 1;
  local_78 = 0;
  local_60 = (ulonglong)param_11;
  local_48 = 0;
  local_ac = (param_17[2] - *param_17) + param_15;
  local_a8 = (param_17[3] - param_17[1]) + param_16;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = param_5;
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_b8 = param_15;
  local_b4 = param_16;
  local_b0 = 0;
  local_a4 = 1;
  if ((param_18 < 2) || (bVar5 = true, param_19 != 1)) {
    bVar5 = false;
  }
  pcVar1 = (char *)(param_2 + 0x4d);
  uVar8 = (-(uint)bVar5 & 0x1800) + 0x800;
  cVar2 = *(char *)((longlong)param_3 + 0x4d);
  uVar7 = (-(uint)bVar5 & 0xc00) + 0x400;
  local_a0 = param_4;
  if ((cVar2 == '\0') || (*pcVar1 == '\0')) {
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,
                  (ulonglong)(-(uint)(cVar2 != '\0') & param_11),(uint)(cVar2 == '\0'),uVar7);
    FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,
                  (ulonglong)(-(uint)(*pcVar1 != '\0') & param_8),(uint)(*pcVar1 == '\0'),uVar8);
    iVar9 = 0;
    piVar6 = (int *)0x0;
    if (*pcVar1 == '\0') {
      local_98 = 1;
      local_90 = (ulonglong)*(uint *)((ulonglong)param_8 * 0x20 + *(longlong *)(param_2 + 0x24));
      local_88 = CONCAT44(param_6,param_12);
      uStack_80 = CONCAT44(1,param_7);
      local_78 = CONCAT44(local_78._4_4_,
                          *(undefined4 *)
                           ((ulonglong)param_8 * 0x20 + 8 + *(longlong *)(param_2 + 0x24)));
    }
    if (*(char *)((longlong)param_3 + 0x4d) == '\0') {
      local_68 = 1;
      local_60 = (ulonglong)*(uint *)((ulonglong)param_11 * 0x20 + *(longlong *)(param_3 + 9));
      local_58 = CONCAT44(param_9,param_13);
      uStack_50 = CONCAT44(1,param_10);
      local_48 = CONCAT44(local_48._4_4_,
                          *(undefined4 *)
                           ((ulonglong)param_11 * 0x20 + 8 + *(longlong *)(param_3 + 9)));
    }
    iVar4 = iVar9;
    if (param_21 == '\0') {
      piVar6 = &local_b8;
      iVar9 = param_17[1];
      iVar4 = *param_17;
    }
    FUN_1800e3ee8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_70,iVar4,iVar9,0,
                  &local_a0,piVar6);
    if (*pcVar1 == '\0') {
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,0,1,0);
    }
    if (*(char *)((longlong)param_3 + 0x4d) == '\0') {
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,0,1,0);
    }
  }
  else {
    if ((param_20 == '\0') || (bVar5)) {
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,
                    (ulonglong)param_11,0,uVar7);
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,
                    (ulonglong)param_8,0,uVar8);
      if (param_20 == '\0') {
        FUN_1800e3ee8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),&local_70,*param_17,
                      param_17[1],0,&local_a0,&local_b8);
        goto LAB_1800980b6;
      }
    }
    else {
      FUN_1800e2dc4(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_5,param_3,0x400,
                    (longlong *)0x0);
      FUN_1800e2dc4(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),param_4,param_3,0x800,
                    (longlong *)0x0);
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
    if (bVar5) {
      FUN_1800e3dcc(lVar3,param_5,param_11,param_4,param_8,param_14);
    }
    else {
      FUN_1800e3e30(lVar3,param_5,param_4);
    }
  }
LAB_1800980b6:
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  piVar6 = (int *)(lVar3 + 0x684);
  *piVar6 = *piVar6 + -1;
  if ((*piVar6 == 0) && (*(int *)(lVar3 + 0x680) <= *(int *)(lVar3 + 0x678))) {
    FUN_1800e2ae8(lVar3 + 8,'\0');
  }
  return;
}

