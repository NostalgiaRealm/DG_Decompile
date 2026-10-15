/*
 * FUN_10068bd5 at 10068bd5
 * undefined4 __thiscall FUN_10068bd5(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * Address ranges: 10068bd5-10068cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10068bd5(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x1cf04);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100abd50(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10068c9e:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    puVar2[5] = param_5;
    puVar2[6] = param_6;
    puVar2[7] = param_7;
    puVar2[8] = param_8;
    iVar3 = FUN_10068cfb(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_100abc70(this_00,0x24);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_1002f90d(this_00);
      goto LAB_10068c9e;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar4 = (undefined4 *)((int)puVar2 + 0x2fU & 0xfffffffc);
    puVar2[1] = 0x24;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    puVar2[6] = param_4;
    puVar2[7] = param_5;
    puVar2[8] = param_6;
    puVar2[9] = param_7;
    puVar2[10] = param_8;
    *puVar4 = 0;
    *puVar2 = FUN_10068cfb;
    iVar3 = *(int *)(iVar1 + 0x12e4) * 0x14;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      iVar3 = SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10068cf3;
    }
  }
  *this_00 = 0;
LAB_10068cf3:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

