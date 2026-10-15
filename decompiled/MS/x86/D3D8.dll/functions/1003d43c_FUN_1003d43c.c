/*
 * FUN_1003d43c at 1003d43c
 * undefined __thiscall FUN_1003d43c(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1003d43c-1003d51e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d43c(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xd9b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(this_00);
  uVar4 = (param_2 - param_1) * 0x10;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100abc70(this_00,uVar4 + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = uVar4 + 0x10;
      puVar3[3] = this;
      puVar3[4] = param_1;
      puVar5 = (undefined4 *)((int)puVar3 + 0x1bU & 0xfffffffc);
      puVar3[5] = param_2;
      puVar3[2] = puVar5;
      FUN_100adac0(puVar5,param_3,uVar4);
      puVar5[(param_2 - param_1) * 4] = 0;
      *puVar3 = FUN_1003d51f;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar5 + (param_2 - param_1) * 4);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1003d512;
    }
    FUN_1002f90d(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)param_3;
  piVar2[1] = (int)this;
  piVar2[2] = param_1;
  piVar2[3] = param_2;
  FUN_1003d51f(piVar2);
LAB_1003d512:
  *this_00 = 0;
  return;
}

