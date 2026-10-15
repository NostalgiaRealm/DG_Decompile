/*
 * FUN_1003d488 at 1003d488
 * undefined __thiscall FUN_1003d488(void * this, int param_1)
 * Address ranges: 1003d488-1003d54a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d488(void *this,int param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar3 + 0x19cc + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003d381(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c8 + (int)this);
  *(undefined4 *)(iVar3 + 0x19cc + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_10039b70((int)pvVar2);
    FUN_10052276(pvVar2);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0x19c4 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003d381(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c0 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c4 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_10039b70((int)pvVar2);
    FUN_10052276(pvVar2);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x1cac + (int)this);
  *(undefined4 *)(iVar3 + 0x19c0 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1004e1f8((int)pvVar2);
    FUN_10052276(pvVar2);
    *(undefined4 *)(iVar3 + 0x1cac + (int)this) = 0;
  }
  return;
}

