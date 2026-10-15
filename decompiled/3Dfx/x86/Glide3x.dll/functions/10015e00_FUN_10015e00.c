/*
 * FUN_10015e00 at 10015e00
 * undefined __thiscall FUN_10015e00(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10015e00-10015f39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015e00(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *this_00;
  undefined4 local_a8 [40];
  void *local_8;
  
  local_8 = this;
  FUN_1001416a((int)this + 0x35c0);
  *(int *)((int)this + 0x4278) = param_1;
  iVar4 = FUN_10015bf9((void *)((int)this + 0x3f50),param_2,local_a8);
  FUN_10015bf9((void *)((int)this + 0x3f50),param_3,local_a8 + iVar4);
  iVar2 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar2 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    iVar1 = iVar4 * 8 + 0x10;
    puVar5 = (undefined4 *)FUN_1002abe0(this_00,iVar1);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = iVar1;
      puVar5[3] = local_8;
      puVar6 = (undefined4 *)((int)puVar5 + 0x1bU & 0xfffffffc);
      puVar5[4] = iVar4;
      puVar5[5] = param_1;
      puVar5[2] = puVar6;
      FUN_10052930(puVar6,local_a8,iVar4 << 3);
      puVar6[iVar4 * 2] = 0;
      *puVar5 = FUN_10015f3a;
      this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + iVar4 * 2);
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_10015f2d;
    }
    FUN_10014f4d(this_00);
    this = local_8;
  }
  piVar3 = *(int **)(iVar2 + 0x12d0);
  *piVar3 = (int)local_a8;
  piVar3[1] = (int)this;
  piVar3[2] = iVar4;
  piVar3[3] = param_1;
  FUN_10015f3a(piVar3);
LAB_10015f2d:
  *this_00 = 0;
  return;
}

