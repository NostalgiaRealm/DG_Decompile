/*
 * FUN_1003d86a at 1003d86a
 * undefined __thiscall FUN_1003d86a(void * this, int param_1)
 * Address ranges: 1003d86a-1003d8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d86a(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1 + -4;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  do {
    if (*(int *)((int)this + uVar1 * 4 + 0x348) == iVar2) {
      *(uint *)((int)this + 0x41c) = *(uint *)((int)this + 0x41c) | 1 << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (*(int *)((int)this + 0x388) == iVar2) {
    *(uint *)((int)this + 0x41c) = *(uint *)((int)this + 0x41c) | 0x80000000;
  }
  return;
}

