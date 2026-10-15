/*
 * FUN_10061dfc at 10061dfc
 * bool __thiscall FUN_10061dfc(void * this, int param_1, int param_2)
 * Address ranges: 10061dfc-10061e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10061dfc(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 * 0x10 + param_1;
  return (*(byte *)((int)this + ((int)(uVar1 & 0x1f) >> 3) + (uVar1 >> 5) * 4 + 8) >> (uVar1 & 7) &
         1) != 0;
}

