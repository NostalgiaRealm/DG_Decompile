/*
 * FUN_10058b4a at 10058b4a
 * undefined __thiscall FUN_10058b4a(void * this, int param_1, int param_2)
 * Address ranges: 10058b4a-10058b90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10058b4a(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28);
  uVar1 = (param_2 + -1 + uVar1 & -uVar1) / uVar1;
  uVar2 = FUN_10058633(*(int *)(param_1 + 0x10),*(byte **)(param_1 + 0x14),*(int *)(param_1 + 0x1c),
                       uVar1);
  if (uVar2 != 0xffffffff) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + *(int *)((int)this + 0x28) * uVar1;
  }
  return;
}

