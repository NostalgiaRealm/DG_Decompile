/*
 * FUN_10084163 at 10084163
 * undefined __thiscall FUN_10084163(void * this, undefined4 * param_1)
 * Address ranges: 10084163-100841a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10084163(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_100cfed0(*(int **)((int)this + 8),0,0x400);
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
  FUN_100841a9(this,'\0','\0');
  return;
}

