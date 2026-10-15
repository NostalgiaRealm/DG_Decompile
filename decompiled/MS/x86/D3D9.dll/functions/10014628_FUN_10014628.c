/*
 * FUN_10014628 at 10014628
 * undefined __thiscall FUN_10014628(void * this, int param_1)
 * Address ranges: 10014628-1001466f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014628(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 100) != 0) {
    do {
      uVar3 = 0;
      if (*(short *)((int)this + 0x30) != 0) {
        do {
          iVar1 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + uVar2 * 0x40 + iVar1) + 4) + 0xb0) = 0;
        } while (uVar3 < *(ushort *)((int)this + 0x30));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 100));
  }
  return;
}

