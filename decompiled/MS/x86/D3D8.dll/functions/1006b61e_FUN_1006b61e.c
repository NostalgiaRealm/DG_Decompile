/*
 * FUN_1006b61e at 1006b61e
 * undefined __thiscall FUN_1006b61e(void * this, void * param_1, int * param_2, int param_3)
 * Address ranges: 1006b61e-1006b723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006b61e(void *this,void *param_1,int *param_2,int param_3)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 == (int *)0xffffffff) {
    return;
  }
  uVar3 = FUN_100ac6e0(*(int *)((int)this + 8) + 0x11c0);
  iVar1 = *(int *)((int)this + 8);
  if ((char)uVar3 != '\0') {
    FUN_10097999(param_1,param_2,param_3,*(int **)(*(int *)(iVar1 + 0x1300) + 0xc),
                 *(uint *)(*(int *)(iVar1 + 0x1304) + 0x938),
                 *(undefined4 *)(*(int *)(iVar1 + 0x1304) + 0x93c));
    return;
  }
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_100abc70(this_00,0x10);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = iVar1;
      puVar4[3] = param_1;
      puVar4[4] = param_2;
      puVar4[5] = param_3;
      puVar5 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_1006b724;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1006b6ee;
    }
    FUN_1002f90d(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = iVar1;
  piVar2[1] = (int)param_1;
  piVar2[2] = (int)param_2;
  piVar2[3] = param_3;
  FUN_1006b724(piVar2);
LAB_1006b6ee:
  *this_00 = 0;
  return;
}

