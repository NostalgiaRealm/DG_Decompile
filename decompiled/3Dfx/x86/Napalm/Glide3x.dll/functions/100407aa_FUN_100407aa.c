/*
 * FUN_100407aa at 100407aa
 * undefined __thiscall FUN_100407aa(void * this, int param_1)
 * Address ranges: 100407aa-10040895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100407aa(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004198a(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca4 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10041cda(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca0 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca4 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10041cda(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c9c + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca0 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10041cda(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c98 + (int)this);
  *(undefined4 *)(iVar2 + 0x1c9c + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10041cda(puVar1);
    FUN_10055686(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x1c98 + (int)this) = 0;
  FUN_10051c22(this,param_1);
  FUN_1004ad45(this,param_1);
  return;
}

