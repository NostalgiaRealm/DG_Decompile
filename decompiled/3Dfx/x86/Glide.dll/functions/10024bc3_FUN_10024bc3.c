/*
 * FUN_10024bc3 at 10024bc3
 * undefined __thiscall FUN_10024bc3(void * this, int param_1)
 * Address ranges: 10024bc3-10024c7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024bc3(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10024c4c:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    FUN_10024c7e(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_10036000(this_00,8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10021ec0(this_00);
      goto LAB_10024c4c;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 8;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_10024c7e;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10024c67;
    }
  }
  *this_00 = 0;
LAB_10024c67:
  FUN_10036a10(*(int *)((int)this + 0x3188) + 0x11c0);
  return;
}

