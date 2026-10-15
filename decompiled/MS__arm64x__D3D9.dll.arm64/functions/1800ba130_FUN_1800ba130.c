/*
 * FUN_1800ba130 at 1800ba130
 * undefined FUN_1800ba130(void)
 * Address ranges: 1800ba130-1800ba273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ba130(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  int local_90;
  int iStack_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
  if (iVar4 == 0) {
    FUN_180003398();
  }
  iVar4 = -0x7789f794;
  if ((*(uint *)(param_1 + -0x59c0) >> 9 & 1) == 0) {
    lVar5 = *(longlong *)(param_2 + 8);
    local_88[0] = *(undefined4 *)(param_1 + -0x5990);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + -0x59c8);
    }
    (*__imp_USER32_dll_GetClientRect)(lVar5,auStack_98);
    local_a0 = 0;
    uVar8 = *(undefined8 *)(param_2 + 6);
    uVar6 = *(undefined8 *)(param_2 + 4);
    iVar4 = *param_2;
    if (*param_2 == 0) {
      iVar4 = local_90;
    }
    iVar1 = param_2[1];
    if (param_2[1] == 0) {
      iVar1 = iStack_8c;
    }
    local_e0 = CONCAT44(iVar1,iVar4);
    uVar11 = *(undefined8 *)(param_2 + 10);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    uStack_d8._0_4_ = (undefined4)*(undefined8 *)(param_2 + 2);
    uStack_d8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    uVar2 = 0x15;
    if (param_2[2] != 0) {
      uVar2 = (undefined4)uStack_d8;
    }
    uVar3 = 3;
    if ((uint)param_2[3] < 4) {
      uVar3 = uStack_d8._4_4_;
    }
    uStack_d8 = CONCAT44(uVar3,uVar2);
    uStack_78 = uStack_d8;
    local_80 = local_e0;
    local_40 = 0;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    local_60 = uVar10;
    uStack_58 = uVar11;
    uStack_50 = uVar7;
    uStack_48 = uVar9;
    iVar4 = FUN_1800038b0(param_1 + -0x6838,1,local_88,&local_a0,param_3,0);
    if (-1 < iVar4) {
      *(undefined8 *)(param_2 + 2) = uStack_d8;
      *(undefined8 *)param_2 = local_e0;
      *(undefined8 *)(param_2 + 6) = uVar8;
      *(undefined8 *)(param_2 + 4) = uVar6;
      *(undefined8 *)(param_2 + 10) = uVar11;
      *(undefined8 *)(param_2 + 8) = uVar10;
      *(undefined8 *)(param_2 + 0xe) = uVar9;
      *(undefined8 *)(param_2 + 0xc) = uVar7;
    }
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  return iVar4;
}

