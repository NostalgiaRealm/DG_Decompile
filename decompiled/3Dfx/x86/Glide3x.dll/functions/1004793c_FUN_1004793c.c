/*
 * FUN_1004793c at 1004793c
 * undefined __thiscall FUN_1004793c(void * this, int param_1)
 * Address ranges: 1004793c-1004799f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004793c(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x6c8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x6cc + (int)this);
  *(undefined4 *)(iVar2 + 0x6c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x6cc + (int)this) = 0;
  return;
}

