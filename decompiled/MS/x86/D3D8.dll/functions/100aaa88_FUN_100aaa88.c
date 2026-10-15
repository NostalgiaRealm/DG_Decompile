/*
 * FUN_100aaa88 at 100aaa88
 * undefined4 __thiscall FUN_100aaa88(void * this, int param_1)
 * Address ranges: 100aaa88-100aaabe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100aaa88(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0xe0) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xdc) + uVar1 * 0x10) == param_1) {
        return *(undefined4 *)(*(int *)((int)this + 0xdc) + 8 + uVar1 * 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0xe0));
  }
  return 0xffffffff;
}

