/*
 * FUN_10015cd0 at 10015cd0
 * undefined __thiscall FUN_10015cd0(void * this, int param_1, int param_2)
 * Address ranges: 10015cd0-10015de1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015cd0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this_00;
  undefined4 local_54 [20];
  
  FUN_1001416a((int)this + 0x35c0);
  *(int *)((int)this + 0x4278) = param_1;
  iVar3 = FUN_10015bf9((void *)((int)this + 0x3f50),param_2,local_54);
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_1002abe0(this_00,iVar3 * 4 + 0x10);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = iVar3 * 4 + 0x10;
      puVar4[3] = this;
      puVar4[4] = iVar3;
      puVar5 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
      puVar4[5] = param_1;
      puVar4[2] = puVar5;
      FUN_10052930(puVar5,local_54,iVar3 * 4);
      puVar5[iVar3] = 0;
      *puVar4 = FUN_10015de2;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar5 + iVar3);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10015dd5;
    }
    FUN_10014f4d(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)local_54;
  piVar2[1] = (int)this;
  piVar2[2] = iVar3;
  piVar2[3] = param_1;
  FUN_10015de2(piVar2);
LAB_10015dd5:
  *this_00 = 0;
  return;
}

