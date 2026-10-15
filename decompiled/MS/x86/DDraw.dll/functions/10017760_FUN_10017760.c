/*
 * FUN_10017760 at 10017760
 * undefined __thiscall FUN_10017760(void * this, undefined4 * param_1)
 * Address ranges: 10017760-100177a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10017760(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_10060d45(*(int **)((int)this + 8),0,0x400);
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
  FUN_100177a6(this,'\0','\0');
  return;
}

