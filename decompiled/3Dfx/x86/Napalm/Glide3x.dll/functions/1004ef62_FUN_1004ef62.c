/*
 * FUN_1004ef62 at 1004ef62
 * undefined4 __thiscall FUN_1004ef62(void * this, int param_1, int param_2, undefined4 param_3)
 * Address ranges: 1004ef62-1004f16c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004ef62(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  SIZE_T SVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_1c;
  int *local_10;
  uint local_c;
  int local_8;
  
  uVar2 = FUN_1004eb7e(this,param_1);
  if (uVar2 == 0xffffffff) {
    uVar6 = 0xffffff00;
  }
  else {
    iVar8 = uVar2 * 0xc;
    local_8 = iVar8;
    thunk_FUN_10055686(*(LPVOID *)(*(int *)(iVar8 + 0x10 + (int)this) + param_2 * 4));
    *(undefined4 *)(*(int *)(iVar8 + 0x10 + (int)this) + param_2 * 4) = 0;
    *(undefined4 *)(*(int *)(iVar8 + 0xd0 + (int)this) + param_2 * 8) = 0;
    local_c = 0;
    local_10 = (int *)0x0;
    piVar1 = *(int **)(param_1 * 0x28 + 0x18 + *(int *)((int)this + 8));
    iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,&local_10);
    if (-1 < iVar3) {
      (**(code **)(*local_10 + 0x20))(local_10,0x1c,param_3,&local_c,0);
      SVar4 = (SIZE_T)((ulonglong)local_c * 0x1c);
      if ((int)((ulonglong)local_c * 0x1c >> 0x20) != 0) {
        SVar4 = 0xffffffff;
      }
      pvVar5 = (LPVOID)FUN_100556a3(SVar4);
      if (pvVar5 != (LPVOID)0x0) {
        *(LPVOID *)(*(int *)(local_8 + 0x10 + (int)this) + param_2 * 4) = pvVar5;
        iVar8 = (**(code **)(*local_10 + 0x20))(local_10,0x1c,2,&local_c,pvVar5);
        if (iVar8 < 0) {
          thunk_FUN_10055686(pvVar5);
          *(undefined4 *)(*(int *)(local_8 + 0x10 + (int)this) + param_2 * 4) = 0;
        }
        else {
          *(uint *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8) = local_c;
          *(undefined4 *)(*(int *)(local_8 + 0xd0 + (int)this) + 4 + param_2 * 8) = param_3;
          local_1c = 1;
          if (1 < *(uint *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8)) {
            do {
              if (local_1c != 0) {
                iVar8 = local_1c * 0x1c;
                uVar2 = local_1c;
LAB_1004f070:
                iVar3 = uVar2 * 0x1c;
                if ((((*(int *)((int)pvVar5 + iVar3 + -0x1c) != *(int *)((int)pvVar5 + iVar8)) ||
                     (*(int *)((int)pvVar5 + iVar3 + -0x18) != *(int *)((int)pvVar5 + iVar8 + 4)))
                    || (*(int *)((int)pvVar5 + iVar3 + -0x14) != *(int *)((int)pvVar5 + iVar8 + 8)))
                   || (*(int *)((int)pvVar5 + iVar3 + -0x10) != *(int *)((int)pvVar5 + iVar8 + 0xc))
                   ) goto LAB_1004f0c1;
                piVar1 = (int *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8);
                *piVar1 = *piVar1 + -1;
                uVar2 = local_1c;
                if (local_1c < *(uint *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8)) {
                  do {
                    puVar9 = (undefined4 *)((int)pvVar5 + uVar2 * 0x1c);
                    puVar7 = puVar9 + 7;
                    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar9 = *puVar7;
                      puVar7 = puVar7 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    uVar2 = uVar2 + 1;
                  } while (uVar2 < *(uint *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8));
                }
                local_1c = local_1c - 1;
              }
LAB_1004f119:
              local_1c = local_1c + 1;
            } while (local_1c < *(uint *)(*(int *)(local_8 + 0xd0 + (int)this) + param_2 * 8));
          }
        }
      }
      iVar8 = local_8;
      (**(code **)(*local_10 + 8))(local_10);
    }
    iVar8 = *(int *)(iVar8 + 0xd0 + (int)this);
    uVar6 = CONCAT31((int3)((uint)iVar8 >> 8),*(int *)(iVar8 + param_2 * 8) != 0);
  }
  return uVar6;
LAB_1004f0c1:
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) goto LAB_1004f119;
  goto LAB_1004f070;
}

