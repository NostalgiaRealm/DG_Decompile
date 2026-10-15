/*
 * FUN_1004ad45 at 1004ad45
 * undefined __thiscall FUN_1004ad45(void * this, int param_1)
 * Address ranges: 1004ad45-1004ada8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ad45(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x6c8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x6cc + (int)this);
  *(undefined4 *)(iVar2 + 0x6c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x6cc + (int)this) = 0;
  return;
}

