/*
 * FUN_1001bea5 at 1001bea5
 * undefined4 __fastcall FUN_1001bea5(int * param_1)
 * Address ranges: 1001bea5-1001c01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001bea5(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint3 extraout_var;
  PVOID pvVar5;
  uint uVar6;
  undefined4 extraout_EAX;
  uint3 extraout_var_00;
  uint3 uVar7;
  void *this;
  int *piVar8;
  int *piVar9;
  int local_60 [7];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int *local_8;
  
  iVar4 = *(int *)(*(int *)(param_1[1] + 4) + 0x3f);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  param_1[10] = iVar4;
  bVar1 = FUN_1001b644(param_1,param_1);
  uVar7 = extraout_var;
  if (bVar1) {
    iVar4 = param_1[1];
    local_34[0] = *(int *)(iVar4 + 0xa0);
    local_34[1] = *(undefined4 *)(iVar4 + 0xa4);
    local_34[2] = param_1[10];
    local_34[3] = *(undefined4 *)(iVar4 + 0x98);
    local_24 = *(undefined4 *)(iVar4 + 0x9c);
    if ((*(char *)(iVar4 + 0xdc) == '\0') || (local_20 = 0x400, 0x3ff < *(uint *)(iVar4 + 0x98))) {
      local_20 = *(undefined4 *)(iVar4 + 0x98);
    }
    local_14 = 6;
    local_1c = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = *(undefined1 *)(*(int *)(iVar4 + 4) + 0x54);
    piVar8 = local_34;
    piVar9 = local_60;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    local_44 = 7;
    local_3c = 7;
    local_40 = 9;
    cVar2 = (**(code **)(*param_1 + 0xc))(local_34,local_60);
    if (cVar2 != '\0') {
      FUN_1001c4ac(param_1,(int *)(param_1[1] + 0x1158),'\x01');
      uVar3 = FUN_1001c092((int)param_1);
      *(undefined1 *)((int)param_1 + 0x126) = uVar3;
      param_1[0x48] = 0;
      param_1[0x4a] = -1;
      param_1[0x4b] = -1;
      *(undefined2 *)(param_1 + 0x49) = 0;
      DAT_10059758 = param_1;
      pvVar5 = AddVectoredExceptionHandler(1,FUN_1001bca8);
      param_1[0x4c] = (int)pvVar5;
      iVar4 = *(int *)(param_1[1] + 0x295c);
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar4 + 0x4a0);
      local_8 = param_1;
      EnterCriticalSection(lpCriticalSection);
      uVar6 = FUN_10044faa((void *)(iVar4 + 0x4c4),(int *)&local_8);
      if (uVar6 == 0xffffffff) {
        FUN_100059ce(this,&local_8);
      }
      LeaveCriticalSection(lpCriticalSection);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    FUN_1001b74b(param_1,(int)param_1);
    param_1[2] = 0;
    uVar7 = extraout_var_00;
  }
  return (uint)uVar7 << 8;
}

