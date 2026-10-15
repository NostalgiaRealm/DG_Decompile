/*
 * FUN_1004c61c at 1004c61c
 * undefined __thiscall FUN_1004c61c(void * this, int param_1, int param_2)
 * Address ranges: 1004c61c-1004c662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c61c(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28);
  uVar1 = (param_2 + -1 + uVar1 & -uVar1) / uVar1;
  uVar2 = FUN_1004fe4b(*(int *)(param_1 + 0x10),*(byte **)(param_1 + 0x14),*(int *)(param_1 + 0x1c),
                       uVar1);
  if (uVar2 != 0xffffffff) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + *(int *)((int)this + 0x28) * uVar1;
  }
  return;
}

