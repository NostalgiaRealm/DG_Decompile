/*
 * FUN_10061e38 at 10061e38
 * bool __thiscall FUN_10061e38(void * this, int param_1, int param_2)
 * Address ranges: 10061e38-10061e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10061e38(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 * 0x10 + param_1;
  return (*(byte *)((int)this + ((int)(uVar1 & 0x1f) >> 3) + (uVar1 >> 5) * 4 + 0x14) >> (uVar1 & 7)
         & 1) != 0;
}

