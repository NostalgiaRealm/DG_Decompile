/*
 * FUN_1004c85c at 1004c85c
 * uint __thiscall FUN_1004c85c(void * this, int param_1, int param_2)
 * Address ranges: 1004c85c-1004c89d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004c85c(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x18);
  uVar1 = (param_2 + -1 + uVar1 & -uVar1) / uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10053254(*(int *)(param_1 + 0x10),*(byte **)(param_1 + 0x14),
                         *(int *)(param_1 + 0x1c),uVar1);
    if (uVar2 != 0xffffffff) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    }
  }
  return uVar2;
}

