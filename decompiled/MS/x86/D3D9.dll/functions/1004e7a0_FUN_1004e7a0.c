/*
 * FUN_1004e7a0 at 1004e7a0
 * uint __thiscall FUN_1004e7a0(void * this, int * param_1)
 * Address ranges: 1004e7a0-1004e84e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004e7a0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_100cfd89(0x20000);
  *(int *)((int)this + 0x18) = iVar1;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100cfd89(0x2000);
    *(int *)((int)this + 0x1c) = iVar1;
    if (iVar1 != 0) {
      *(char *)((int)this + 0x82) = (char)param_1[1];
      *(undefined1 *)((int)this + 0x83) = *(undefined1 *)((int)param_1 + 5);
      *(undefined1 *)((int)this + 0x84) = *(undefined1 *)((int)param_1 + 6);
      *(undefined1 *)((int)this + 0x85) = *(undefined1 *)((int)param_1 + 7);
      iVar1 = *param_1;
      *(int *)((int)this + 0x78) = iVar1;
      *(int *)((int)this + 0x7c) = iVar1 * 0x10 + 0x140;
      *(char *)((int)this + 0x86) = (char)param_1[2];
      *(undefined1 *)((int)this + 0x87) = *(undefined1 *)((int)param_1 + 9);
      puVar3 = (undefined4 *)((int)this + 0x20);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      return 1;
    }
    uVar2 = thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar2 & 0xffffff00;
}

