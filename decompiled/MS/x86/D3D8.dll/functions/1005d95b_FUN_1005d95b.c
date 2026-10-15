/*
 * FUN_1005d95b at 1005d95b
 * undefined __thiscall FUN_1005d95b(void * this, int param_1, char param_2)
 * Address ranges: 1005d95b-1005d9a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005d95b(void *this,int param_1,char param_2)

{
  int iVar1;
  
  *(int *)((int)this + 0xc) = param_1;
  *(undefined1 *)((int)this + 0x10) = 0;
  if (((param_2 == '\0') && (*(int *)(param_1 + 0x14) == 0x1002)) &&
     (((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0x15dd ||
       (((iVar1 == 0x15d8 || (iVar1 == 0x1636)) || (iVar1 == 0x67df)))) || (iVar1 == 0x1638)))) {
    *(undefined1 *)((int)this + 0x10) = 1;
  }
  return;
}

