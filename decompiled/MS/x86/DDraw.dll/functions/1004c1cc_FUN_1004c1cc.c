/*
 * FUN_1004c1cc at 1004c1cc
 * undefined __thiscall FUN_1004c1cc(void * this, int param_1)
 * Address ranges: 1004c1cc-1004c22f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c1cc(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x6c8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004f425(puVar1);
    FUN_10060be1(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x6cc + (int)this);
  *(undefined4 *)(iVar2 + 0x6c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004f425(puVar1);
    FUN_10060be1(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x6cc + (int)this) = 0;
  return;
}

