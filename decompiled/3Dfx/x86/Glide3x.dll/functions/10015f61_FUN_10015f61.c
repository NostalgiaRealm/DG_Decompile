/*
 * FUN_10015f61 at 10015f61
 * undefined __thiscall FUN_10015f61(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10015f61-100160a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015f61(void *this,int param_1,int param_2,int param_3,int param_4)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *this_01;
  undefined4 local_f8 [60];
  void *local_8;
  
  local_8 = this;
  FUN_1001416a((int)this + 0x35c0);
  this_00 = (void *)((int)this + 0x3f50);
  *(int *)((int)this + 0x4278) = param_1;
  iVar3 = FUN_10015bf9(this_00,param_2,local_f8);
  FUN_10015bf9(this_00,param_3,local_f8 + iVar3);
  FUN_10015bf9(this_00,param_4,local_f8 + iVar3 * 2);
  iVar1 = *(int *)((int)this + 0x3308);
  this_01 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_01);
  uVar4 = iVar3 * 0xc;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar5 = (undefined4 *)FUN_1002abe0(this_01,uVar4 + 0x10);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = uVar4 + 0x10;
      puVar5[3] = local_8;
      puVar5[4] = iVar3;
      puVar6 = (undefined4 *)((int)puVar5 + 0x1bU & 0xfffffffc);
      puVar5[5] = param_1;
      puVar5[2] = puVar6;
      FUN_10052930(puVar6,local_f8,uVar4);
      puVar6[iVar3 * 3] = 0;
      *puVar5 = FUN_100160a9;
      this_01[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + iVar3 * 3);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_01 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001609c;
    }
    FUN_10014f4d(this_01);
    this = local_8;
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)local_f8;
  piVar2[1] = (int)this;
  piVar2[2] = iVar3;
  piVar2[3] = param_1;
  FUN_100160a9(piVar2);
LAB_1001609c:
  *this_01 = 0;
  return;
}

