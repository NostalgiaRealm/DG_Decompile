/*
 * FUN_1002c543 at 1002c543
 * uint __thiscall FUN_1002c543(void * this, uint param_1, int param_2)
 * Address ranges: 1002c543-1002c58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002c543(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 0x20000) == 0) {
    uVar2 = *(uint *)(param_2 + 0x50);
  }
  else {
    uVar2 = (*(int *)(param_2 + 8) != 0xff0062) - 1;
  }
  if (*(int *)((int)this + 0x1a4) == 8) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(int *)((int)this + 0x1a4) == 0x10) {
      uVar1 = 0xffff;
    }
  }
  return uVar1 & uVar2;
}

