/*
 * FUN_1004bab1 at 1004bab1
 * undefined __thiscall FUN_1004bab1(void * this, int param_1)
 * Address ranges: 1004bab1-1004bae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004bab1(void *this,int param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar1 = *(int *)((int)this + 0x130) + *(int *)((int)this + 0x88) * param_1;
    *(uint *)((int)this + 0x130) = uVar1;
    if (*(uint *)((int)this + 0x10) < uVar1) {
      *(uint *)((int)this + 0x130) = *(uint *)((int)this + 0x10);
    }
  }
  return;
}

