/*
 * FUN_100190f6 at 100190f6
 * undefined1 __thiscall FUN_100190f6(void * this, int param_1)
 * Address ranges: 100190f6-100191cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100190f6(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  if ((((param_1 != 0x17) && (param_1 != 0x1d)) && (param_1 != 0x1e)) && (param_1 != 0x21)) {
    if (param_1 != 0x29) {
      return 0;
    }
    FUN_10018264((int)this + 0x42e8);
  }
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,8);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 8;
      puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      puVar2[2] = this;
      puVar2[3] = param_1;
      *puVar3 = 0;
      *puVar2 = FUN_100191cd;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return 1;
      }
      goto LAB_100191bc;
    }
    FUN_100165f0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  FUN_100191cd(puVar2);
LAB_100191bc:
  *this_00 = 0;
  return 1;
}

