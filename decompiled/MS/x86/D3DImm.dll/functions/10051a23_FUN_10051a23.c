/*
 * FUN_10051a23 at 10051a23
 * undefined __thiscall FUN_10051a23(void * this, uint param_1, int param_2, int * param_3, uint param_4, undefined4 param_5)
 * Address ranges: 10051a23-10051c17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10051a63) */

void __thiscall
FUN_10051a23(void *this,uint param_1,int param_2,int *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  SIZE_T SVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  void *this_00;
  uint *puVar10;
  ulonglong uVar11;
  uint local_30 [4];
  undefined4 local_20;
  LPCRITICAL_SECTION local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  
  if (param_1 == 0xffffffff) {
    return;
  }
  local_18 = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_18);
  piVar3 = param_3;
  if ((param_3 == (int *)0x0) ||
     (uVar11 = (**(code **)(*param_3 + 0x20))(param_3), CONCAT44(param_5,param_4) <= uVar11)) {
    FUN_100517ba(this,param_1,param_2);
    goto LAB_10051c08;
  }
  this_00 = (void *)((int)this + 0x40);
  uVar5 = (int)piVar3 >> 0x1f;
  local_c = piVar3;
  uVar1 = FUN_10027520(this_00,(uint)piVar3,uVar5);
  if (uVar1 == *(uint *)((int)this + 0x48)) {
LAB_10051aa3:
    piVar3 = (int *)FUN_1005c755(0x14);
    if (piVar3 == (int *)0x0) goto LAB_10051c08;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = -1;
    piVar3[4] = -1;
    local_10 = piVar3;
    local_14 = FUN_10027520(this_00,(uint)local_c,uVar5);
    if (((local_14 == *(uint *)((int)this + 0x48)) ||
        (iVar8 = *(int *)((int)this + 0x44), *(int **)(iVar8 + local_14 * 0x10) != local_c)) ||
       (*(uint *)(iVar8 + 4 + local_14 * 0x10) != uVar5)) {
      FUN_10042aaa(this_00,local_14,local_c,uVar5,&param_3,&local_10);
      piVar3 = local_10;
    }
    else {
      *(int **)(iVar8 + 0xc + local_14 * 0x10) = piVar3;
    }
  }
  else {
    iVar8 = *(int *)((int)this + 0x44);
    iVar2 = uVar1 * 0x10;
    if (((*(int **)(iVar2 + iVar8) != piVar3) || (*(uint *)(iVar2 + 4 + iVar8) != uVar5)) ||
       (puVar7 = (undefined4 *)(iVar8 + 0xc + iVar2), puVar7 == (undefined4 *)0x0))
    goto LAB_10051aa3;
    piVar3 = (int *)*puVar7;
  }
  if (piVar3 != (int *)0x0) {
    iVar8 = piVar3[4];
    if (iVar8 != -1) {
      iVar2 = *piVar3;
      if (*(int *)(iVar8 * 0x18 + iVar2) != -1) {
        iVar8 = *(int *)(iVar8 * 0x18 + 0x10 + iVar2);
      }
      if (iVar8 != -1) {
        iVar6 = iVar8 * 0x18;
        *(uint *)(iVar6 + iVar2) = param_1;
        *(int *)(iVar6 + 4 + *piVar3) = param_2;
        iVar2 = *piVar3;
        *(uint *)(iVar6 + 8 + iVar2) = param_4;
        *(undefined4 *)(iVar6 + 0xc + iVar2) = param_5;
        piVar3[4] = iVar8;
        goto LAB_10051c08;
      }
    }
    iVar8 = piVar3[1];
    iVar2 = piVar3[2];
    local_30[1] = param_2;
    local_30[2] = param_4;
    local_30[0] = param_1;
    local_30[3] = param_5;
    local_20 = 0xffffffff;
    if (iVar8 == iVar2) {
      if (iVar2 == 0) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = iVar2 * 2;
      }
      SVar4 = (SIZE_T)((ulonglong)uVar1 * 0x18);
      if ((int)((ulonglong)uVar1 * 0x18 >> 0x20) != 0) {
        SVar4 = 0xffffffff;
      }
      puVar7 = (undefined4 *)FUN_1005c789(SVar4);
      if (puVar7 == (undefined4 *)0x0) goto LAB_10051c08;
      FUN_1005ca00(puVar7,(undefined4 *)*piVar3,piVar3[2] * 0x18);
      thunk_FUN_1005c76c((LPVOID)*piVar3);
      *piVar3 = (int)puVar7;
      piVar3[2] = uVar1;
    }
    puVar9 = local_30;
    puVar10 = (uint *)(piVar3[1] * 0x18 + *piVar3);
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    piVar3[1] = piVar3[1] + 1;
    if (piVar3[4] != -1) {
      *(int *)(piVar3[4] * 0x18 + 0x10 + *piVar3) = iVar8;
    }
    piVar3[4] = iVar8;
    if (piVar3[3] == -1) {
      piVar3[3] = iVar8;
    }
  }
LAB_10051c08:
  LeaveCriticalSection(local_18);
  return;
}

