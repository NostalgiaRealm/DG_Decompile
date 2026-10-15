/*
 * FUN_10019f82 at 10019f82
 * undefined __thiscall FUN_10019f82(void * this, int param_1)
 * Address ranges: 10019f82-1001a049
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019f82(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_10015782((int)this + 0x3940);
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1001a013:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    FUN_1001a04a(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_100165f0(this_00);
      goto LAB_1001a013;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 8;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_1001a04a;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1001a02e;
    }
  }
  *this_00 = 0;
LAB_1001a02e:
  if (param_1 != 0) {
    FUN_1002ea00(*(int *)((int)this + 0x3688) + 0x11c0);
  }
  return;
}

