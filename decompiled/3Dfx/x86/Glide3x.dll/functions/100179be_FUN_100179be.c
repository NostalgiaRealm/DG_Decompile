/*
 * FUN_100179be at 100179be
 * undefined __thiscall FUN_100179be(void * this, int param_1)
 * Address ranges: 100179be-10017a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100179be(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_1001416a((int)this + 0x35c0);
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10017a4f:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    FUN_10017a86(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10014f4d(this_00);
      goto LAB_10017a4f;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 8;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_10017a86;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10017a6a;
    }
  }
  *this_00 = 0;
LAB_10017a6a:
  if (param_1 != 0) {
    FUN_1002b5f0(*(int *)((int)this + 0x3308) + 0x11c0);
  }
  return;
}

