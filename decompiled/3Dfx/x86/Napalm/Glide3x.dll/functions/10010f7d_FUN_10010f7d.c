/*
 * FUN_10010f7d at 10010f7d
 * undefined4 __fastcall FUN_10010f7d(int * param_1)
 * Address ranges: 10010f7d-10011161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10010f7d(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint3 extraout_var;
  int iVar6;
  PVOID pvVar7;
  uint uVar8;
  undefined4 extraout_EAX;
  uint3 extraout_var_00;
  uint3 uVar9;
  void *this;
  int *piVar10;
  int *piVar11;
  int local_60 [7];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int *local_8;
  
  iVar5 = *(int *)(*(int *)(param_1[1] + 4) + 0x3f);
  if (iVar5 == 0) {
    iVar5 = FUN_10016280(param_1[1] + 0xc);
  }
  param_1[10] = iVar5;
  bVar2 = FUN_10010707(param_1,param_1);
  uVar9 = extraout_var;
  if (!bVar2) goto LAB_1001115b;
  iVar5 = param_1[1];
  local_34[0] = *(int *)(iVar5 + 0xa0);
  local_34[1] = *(undefined4 *)(iVar5 + 0xa4);
  local_34[2] = param_1[10];
  local_34[3] = *(undefined4 *)(iVar5 + 0x98);
  local_24 = *(undefined4 *)(iVar5 + 0x9c);
  if ((*(char *)(iVar5 + 0xe0) == '\0') || (local_20 = 0x400, 0x3ff < *(uint *)(iVar5 + 0x98))) {
    local_20 = *(undefined4 *)(iVar5 + 0x98);
  }
  local_1c = 0;
  uVar8 = *(uint *)(iVar5 + 0xd4);
  uVar1 = 2;
  local_18 = uVar1;
  if (uVar8 < 0xb) {
    if ((uVar8 != 10) && (uVar8 != 4)) {
      iVar6 = uVar8 - 5;
      goto LAB_10011023;
    }
  }
  else {
    iVar6 = uVar8 - 0xb;
LAB_10011023:
    local_18 = 6;
    if (((iVar6 != 0) && (local_18 = uVar1, iVar6 != 2)) && (local_18 = 6, iVar6 != 3)) {
      local_18 = 0;
    }
  }
  local_14 = 6;
  local_10 = *(undefined4 *)(&DAT_10057b1c + *(int *)(iVar5 + 0xd4) * 4);
  local_c = *(undefined1 *)(*(int *)(iVar5 + 4) + 0x54);
  piVar10 = local_34;
  piVar11 = local_60;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  local_44 = 7;
  local_40 = 8;
  iVar5 = *(int *)(iVar5 + 0xd4);
  if (((iVar5 == 5) || (iVar5 == 8)) || ((iVar5 == 0xb || (iVar5 == 0xe)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_3c = (!bVar2 - 1 & 0xfffffff9) + 0xf;
  cVar3 = (**(code **)(*param_1 + 0xc))(local_34,local_60);
  if (cVar3 != '\0') {
    FUN_100115fe(param_1,(int *)(param_1[1] + 0x1310),'\x01');
    uVar4 = FUN_100111e4((int)param_1);
    *(undefined1 *)((int)param_1 + 0x126) = uVar4;
    param_1[0x48] = 0;
    param_1[0x4a] = -1;
    param_1[0x4b] = -1;
    *(undefined2 *)(param_1 + 0x49) = 0;
    DAT_1005fa0c = param_1;
    pvVar7 = AddVectoredExceptionHandler(1,FUN_10010d81);
    param_1[0x4c] = (int)pvVar7;
    iVar5 = *(int *)(param_1[1] + 0x2b14);
    lpCriticalSection = (LPCRITICAL_SECTION)(iVar5 + 0x4a0);
    local_8 = param_1;
    EnterCriticalSection(lpCriticalSection);
    uVar8 = FUN_1004ab0b((void *)(iVar5 + 0x4c4),(int *)&local_8);
    if (uVar8 == 0xffffffff) {
      FUN_1002f50e(this,&local_8);
    }
    LeaveCriticalSection(lpCriticalSection);
    return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  FUN_1001080e(param_1,(int)param_1);
  param_1[2] = 0;
  uVar9 = extraout_var_00;
LAB_1001115b:
  return (uint)uVar9 << 8;
}

