/*
 * FUN_10090877 at 10090877
 * undefined4 * __thiscall FUN_10090877(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10090877-1009092a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10090877(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_100b4984;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x10);
  iVar2 = iVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xd0);
  iVar2 = iVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 400);
  iVar2 = iVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x3a0) = param_2;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined1 *)((int)this + 0x3a4) = 0;
  puVar1 = (undefined4 *)((int)this + 0x360);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  FUN_100ada8e((int *)((int)this + 0x260),0,0x100);
  return this;
}

