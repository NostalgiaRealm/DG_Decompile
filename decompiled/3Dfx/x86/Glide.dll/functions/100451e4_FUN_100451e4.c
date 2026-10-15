/*
 * FUN_100451e4 at 100451e4
 * undefined __thiscall FUN_100451e4(void * this, int param_1)
 * Address ranges: 100451e4-10045247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100451e4(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x6c8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x6cc + (int)this);
  *(undefined4 *)(iVar2 + 0x6c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x6cc + (int)this) = 0;
  return;
}

