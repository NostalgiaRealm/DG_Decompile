/*
 * FUN_10049415 at 10049415
 * undefined __thiscall FUN_10049415(void * this, int param_1)
 * Address ranges: 10049415-1004945e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049415(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1 + -4;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  do {
    if (*(int *)((int)this + uVar1 * 4 + 0x588) == iVar2) {
      *(uint *)((int)this + 0x65c) = *(uint *)((int)this + 0x65c) | 1 << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (*(int *)((int)this + 0x5c8) == iVar2) {
    *(uint *)((int)this + 0x65c) = *(uint *)((int)this + 0x65c) | 0x80000000;
  }
  return;
}

