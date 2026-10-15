/*
 * FUN_1007264b at 1007264b
 * undefined __thiscall FUN_1007264b(void * this, void * param_1, int * param_2)
 * Address ranges: 1007264b-1007275c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007264b(void *this,void *param_1,int *param_2)

{
  int *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)((int)this + 0x30) + 0x1cf00) +
          *(int *)(*(int *)((int)this + 0x30) + 0x14) * 0x16c0 + 0x6c0;
  this_00 = (int *)(iVar5 + 0x11c0);
  uVar2 = FUN_100ac6e0((int)this_00);
  if ((char)uVar2 != '\0') {
    FUN_10097999(param_1,param_2,2,*(int **)(*(int *)(iVar5 + 0x1300) + 0xc),
                 *(uint *)(*(int *)(iVar5 + 0x1304) + 0x938),
                 *(undefined4 *)(*(int *)(iVar5 + 0x1304) + 0x93c));
    return;
  }
  FUN_100abd50(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100abc70(this_00,0x10);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar5 + 0x12e8) = *(int *)(iVar5 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0x10;
      puVar3[2] = iVar5;
      puVar3[3] = param_1;
      puVar3[4] = param_2;
      puVar3[5] = 2;
      puVar4 = (undefined4 *)((int)puVar3 + 0x1bU & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_1006b724;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_10072725;
    }
    FUN_1002f90d(this_00);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = iVar5;
  piVar1[1] = (int)param_1;
  piVar1[2] = (int)param_2;
  piVar1[3] = 2;
  FUN_1006b724(piVar1);
LAB_10072725:
  *this_00 = 0;
  return;
}

