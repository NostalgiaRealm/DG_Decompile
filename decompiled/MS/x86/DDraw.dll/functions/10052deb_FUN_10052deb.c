/*
 * FUN_10052deb at 10052deb
 * bool __thiscall FUN_10052deb(void * this, int param_1)
 * Address ranges: 10052deb-10052e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10052deb(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}

