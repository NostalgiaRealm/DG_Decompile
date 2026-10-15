/*
 * FUN_10024839 at 10024839
 * undefined __thiscall FUN_10024839(void * this, int param_1)
 * Address ranges: 10024839-100248f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024839(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100248c2:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    FUN_100248f4(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_10035c70(this_00,8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10021b34(this_00);
      goto LAB_100248c2;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 8;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_100248f4;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100248dd;
    }
  }
  *this_00 = 0;
LAB_100248dd:
  FUN_10036680(*(int *)((int)this + 0x3188) + 0x11c0);
  return;
}

