/*
 * FUN_1003ac47 at 1003ac47
 * undefined __thiscall FUN_1003ac47(void * this, int param_1)
 * Address ranges: 1003ac47-1003ad32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ac47(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003be2c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca4 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003c17c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca0 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca4 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003c17c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c9c + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca0 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003c17c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c98 + (int)this);
  *(undefined4 *)(iVar2 + 0x1c9c + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003c17c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x1c98 + (int)this) = 0;
  FUN_1004c0c1(this,param_1);
  FUN_100451e4(this,param_1);
  return;
}

