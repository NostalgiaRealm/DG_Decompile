/*
 * FUN_1003c57d at 1003c57d
 * undefined __thiscall FUN_1003c57d(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1003c57d-1003c63e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c57d(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0xd9b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_100abc70(this_00,0x10);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x10;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar3 = (undefined4 *)((int)puVar2 + 0x1bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_1003c63f;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1003c633;
    }
    FUN_1002f90d(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  FUN_1003c63f(puVar2);
LAB_1003c633:
  *this_00 = 0;
  return;
}

