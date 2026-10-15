/*
 * FUN_1004cde7 at 1004cde7
 * undefined __thiscall FUN_1004cde7(void * this, uint * param_1)
 * Address ranges: 1004cde7-1004cf75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004cde7(void *this,uint *param_1)

{
  int *piVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int local_c;
  int local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  FUN_1004cdaa((int)this);
  local_c = *(int *)((int)this + 0x38);
  piVar1 = (int *)((int)this + 0x28);
  if (local_c == -1) {
LAB_1004cec2:
    local_c = *(int *)((int)this + 0x2c);
    iVar4 = *(int *)((int)this + 0x30);
    local_8 = local_c;
    if (*(int *)((int)this + 0x2c) == iVar4) {
      if (iVar4 == 0) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = iVar4 * 2;
      }
      SVar2 = (SIZE_T)((ulonglong)uVar6 * 0x30);
      if ((int)((ulonglong)uVar6 * 0x30 >> 0x20) != 0) {
        SVar2 = 0xffffffff;
      }
      puVar3 = (undefined4 *)FUN_100cfd89(SVar2);
      if (puVar3 == (undefined4 *)0x0) goto LAB_1004cf66;
      FUN_100cff00(puVar3,(undefined4 *)*piVar1,*(int *)((int)this + 0x30) * 0x30);
      thunk_FUN_100cfd6c((LPVOID)*piVar1);
      *piVar1 = (int)puVar3;
      *(uint *)((int)this + 0x30) = uVar6;
    }
    puVar7 = param_1;
    puVar8 = (uint *)(*(int *)((int)this + 0x2c) * 0x30 + *piVar1);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
    iVar4 = local_8;
    if ((char)param_1[0xb] != '\0') {
      FUN_1004d3dd((void *)((int)this + 0x50),param_1,&local_c);
      iVar4 = local_c;
    }
    if (*(int *)((int)this + 0x38) != -1) {
      *(int *)(*(int *)((int)this + 0x38) * 0x30 + 0x28 + *piVar1) = iVar4;
    }
    *(int *)((int)this + 0x38) = iVar4;
    if (*(int *)((int)this + 0x34) == -1) {
      *(int *)((int)this + 0x34) = iVar4;
    }
  }
  else {
    if (*(int *)(local_c * 0x30 + *piVar1) != 0) {
      local_c = *(int *)(local_c * 0x30 + 0x28 + *piVar1);
    }
    if (local_c == -1) goto LAB_1004cec2;
    local_8 = local_c;
    if ((char)param_1[0xb] != '\0') {
      FUN_1004d3dd((void *)((int)this + 0x50),param_1,&local_8);
    }
    iVar5 = local_8 * 0x30;
    piVar1 = (int *)((int)this + 0x28);
    *(uint *)(iVar5 + *piVar1) = *param_1;
    iVar4 = *piVar1;
    uVar6 = param_1[3];
    *(uint *)(iVar5 + 8 + iVar4) = param_1[2];
    *(uint *)(iVar5 + 0xc + iVar4) = uVar6;
    iVar4 = *piVar1;
    uVar6 = param_1[5];
    *(uint *)(iVar5 + 0x10 + iVar4) = param_1[4];
    *(uint *)(iVar5 + 0x14 + iVar4) = uVar6;
    puVar7 = (uint *)(*piVar1 + 0x18 + iVar5);
    *puVar7 = param_1[6];
    puVar7[1] = param_1[7];
    puVar7[2] = param_1[8];
    puVar7[3] = param_1[9];
    *(char *)(iVar5 + 0x2c + *(int *)((int)this + 0x28)) = (char)param_1[0xb];
    *(undefined1 *)(iVar5 + 0x2d + *(int *)((int)this + 0x28)) =
         *(undefined1 *)((int)param_1 + 0x2d);
    *(int *)((int)this + 0x38) = local_8;
    local_c = local_8;
  }
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
LAB_1004cf66:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  return;
}

