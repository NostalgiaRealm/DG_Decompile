/*
 * FUN_1003a8b7 at 1003a8b7
 * undefined __thiscall FUN_1003a8b7(void * this, int param_1)
 * Address ranges: 1003a8b7-1003a9a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003a8b7(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ba9c(puVar1);
    FUN_1004f626(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca4 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003bdec(puVar1);
    FUN_1004f626(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca0 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca4 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003bdec(puVar1);
    FUN_1004f626(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c9c + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca0 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003bdec(puVar1);
    FUN_1004f626(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c98 + (int)this);
  *(undefined4 *)(iVar2 + 0x1c9c + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003bdec(puVar1);
    FUN_1004f626(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x1c98 + (int)this) = 0;
  FUN_1004bd31(this,param_1);
  FUN_10044e54(this,param_1);
  return;
}

