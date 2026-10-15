/*
 * FUN_1007a2e7 at 1007a2e7
 * int __stdcall FUN_1007a2e7(int param_1, uint * param_2, int param_3, HWND param_4, uint param_5, int * param_6, undefined4 * param_7)
 * Address ranges: 1007a2e7-1007a598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007a2e7(int param_1,uint *param_2,int param_3,HWND param_4,uint param_5,int *param_6,
                undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  int *piVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  uint *this;
  void *this_00;
  int iVar7;
  void *this_01;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  ushort in_FPUControlWord;
  undefined4 local_1d8 [77];
  int local_a4 [13];
  uint local_70;
  int local_6c [13];
  undefined4 local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = param_5;
  local_10 = (void *)(param_1 + -0x70);
  uVar9 = param_5 & 0xe0;
  iVar8 = -0x7789f794;
  if ((((param_7 != (undefined4 *)0x0) && (param_2 < *(uint **)(param_1 + -0x24))) &&
      (uVar2 = FUN_100025f2(local_10,param_3), (char)uVar2 != '\0')) && ((uVar1 & 0xfffffe09) == 0))
  {
    if (uVar9 == 0x20) {
LAB_1007a354:
      if ((uVar9 != 0x40) && ((uVar1 & 0x10) != 0)) goto LAB_1007a37a;
    }
    else if (uVar9 != 0x40) {
      if (uVar9 != 0x80) goto LAB_1007a37a;
      goto LAB_1007a354;
    }
    if (param_6 != (int *)0x0) {
      iVar8 = 0;
      *param_7 = 0;
    }
  }
LAB_1007a37a:
  piVar4 = param_6;
  if (iVar8 < 0) {
    return iVar8;
  }
  iVar8 = -0x7789f794;
  local_70 = *(uint *)(*(int *)(param_1 + -0x28) + (int)param_2 * 4);
  local_38 = 0;
  pHVar3 = GetDesktopWindow();
  if (((piVar4[6] != 0) && ((HWND)piVar4[6] != pHVar3)) ||
     ((param_4 != (HWND)0x0 && (param_4 != pHVar3)))) {
    piVar4 = FUN_10002fe2(local_a4,piVar4,param_4);
    piVar11 = local_6c;
    for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar11 = piVar11 + 1;
    }
    iVar8 = 0;
  }
  if (iVar8 < 0) {
    return iVar8;
  }
  BVar5 = TryEnterCriticalSection(DAT_100ba2e4);
  if (BVar5 == 0) {
    FUN_100037f8((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  puVar6 = (undefined4 *)FUN_100031b7(local_10,param_3);
  local_24 = uVar1;
  puVar10 = local_1d8;
  for (iVar8 = 0x4d; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  uStack_30 = FUN_10002769(this_01,param_3);
  local_1c = CONCAT13(1,(int3)((uint)local_1d8[0x3f] >> 8));
  local_18 = CONCAT31(local_18._1_3_,*(int *)(param_1 + -0x50) == 0x78);
  local_c = (uint *)local_6c[0];
  local_34 = local_24;
  uStack_2c = local_1c;
  uStack_28 = local_18;
  local_20 = uStack_30;
  iVar8 = FUN_100ad475(0x5964);
  this_00 = (void *)(iVar8 + 0x13U & 0xfffffff0);
  *(int *)((int)this_00 + -4) = iVar8;
  this = FUN_1007ac99(this_00,local_10,param_2,param_3,param_4,local_c,local_6c[1],
                      (char)local_1d8[0x3f],&local_34);
  iVar8 = -0x7ff8fff2;
  if (this == (uint *)0x0) goto LAB_1007a54b;
  param_2 = this;
  iVar8 = FUN_1007af8b(this,&local_70);
  if (-1 < iVar8) {
    iVar8 = FUN_1007b3ec((int)(this + 0x1638),0x100af310,param_7);
    if (-1 < iVar8) {
      uVar2 = FUN_10003787((void *)(param_1 + 0x10),&param_2);
      if ((char)uVar2 == '\0') {
        iVar8 = -0x7ff8fff2;
      }
      else {
        piVar4 = local_6c;
        piVar11 = param_6;
        for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar11 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar11 = piVar11 + 1;
        }
      }
      this = param_2;
      if (-1 < iVar8) goto LAB_1007a53e;
    }
    FUN_1007b060((int *)this);
  }
LAB_1007a53e:
  if (iVar8 < 0) {
    FUN_1007af78(this);
  }
LAB_1007a54b:
  param_2 = &local_14;
  LeaveCriticalSection(DAT_100ba2e4);
  return iVar8;
}

