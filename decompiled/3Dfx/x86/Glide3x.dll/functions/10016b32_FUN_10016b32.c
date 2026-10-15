/*
 * FUN_10016b32 at 10016b32
 * undefined1 __thiscall FUN_10016b32(void * this, int param_1)
 * Address ranges: 10016b32-10016c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10016b32(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  if ((((param_1 != 0x17) && (param_1 != 0x1d)) && (param_1 != 0x1e)) && (param_1 != 0x21)) {
    if (param_1 != 0x29) {
      return 0;
    }
    FUN_10015ca0((int)this + 0x3f50);
  }
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,8);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 8;
      puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      puVar2[2] = this;
      puVar2[3] = param_1;
      *puVar3 = 0;
      *puVar2 = FUN_10016c09;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return 1;
      }
      goto LAB_10016bf8;
    }
    FUN_10014f4d(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  FUN_10016c09(puVar2);
LAB_10016bf8:
  *this_00 = 0;
  return 1;
}

