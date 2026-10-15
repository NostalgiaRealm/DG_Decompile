/*
 * FUN_1006e016 at 1006e016
 * undefined __thiscall FUN_1006e016(void * this, undefined4 * param_1)
 * Address ranges: 1006e016-1006e05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006e016(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_100ada8e(*(int **)((int)this + 8),0,0x400);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 8);
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined1 *)((int)this + 0x12d) = 1;
  FUN_1006e05c(this,'\0','\0');
  return;
}

