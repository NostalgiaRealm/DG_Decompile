/*
 * FUN_10017b6d at 10017b6d
 * undefined __thiscall FUN_10017b6d(void * this, int param_1)
 * Address ranges: 10017b6d-10017c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10017b6d(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10017bf6:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    FUN_10017c28(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10014f4d(this_00);
      goto LAB_10017bf6;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 8;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_10017c28;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10017c11;
    }
  }
  *this_00 = 0;
LAB_10017c11:
  FUN_1002b5f0(*(int *)((int)this + 0x3308) + 0x11c0);
  return;
}

