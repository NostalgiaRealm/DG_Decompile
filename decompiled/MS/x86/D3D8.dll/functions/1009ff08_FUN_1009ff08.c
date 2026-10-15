/*
 * FUN_1009ff08 at 1009ff08
 * uint __thiscall FUN_1009ff08(void * this, int param_1, int param_2)
 * Address ranges: 1009ff08-1009ff49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009ff08(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x18);
  uVar1 = (param_2 + -1 + uVar1 & -uVar1) / uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100a6aea(*(int *)(param_1 + 0x10),*(byte **)(param_1 + 0x14),
                         *(int *)(param_1 + 0x1c),uVar1);
    if (uVar2 != 0xffffffff) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    }
  }
  return uVar2;
}

