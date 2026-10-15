/*
 * FUN_100c6b35 at 100c6b35
 * undefined __thiscall FUN_100c6b35(void * this, int param_1)
 * Address ranges: 100c6b35-100c6c15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c6b35(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003c3c0(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca4 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b9a0c(puVar1);
    FUN_100cfd6c(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca0 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca4 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b9a0c(puVar1);
    FUN_100cfd6c(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c9c + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca0 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b9a0c(puVar1);
    FUN_100cfd6c(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c98 + (int)this);
  *(undefined4 *)(iVar2 + 0x1c9c + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b9a0c(puVar1);
    FUN_100cfd6c(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x1c98 + (int)this) = 0;
  FUN_100cb55a(this,param_1);
  FUN_100c4980(this,param_1);
  return;
}

