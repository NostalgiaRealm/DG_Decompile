/*
 * FUN_100a4341 at 100a4341
 * undefined __thiscall FUN_100a4341(void * this, int param_1)
 * Address ranges: 100a4341-100a4403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a4341(void *this,int param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar3 + 0x19cc + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1009850e(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c8 + (int)this);
  *(undefined4 *)(iVar3 + 0x19cc + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1009ceab((int)pvVar2);
    FUN_100ad48c(pvVar2);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0x19c4 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1009850e(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c0 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c4 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1009ceab((int)pvVar2);
    FUN_100ad48c(pvVar2);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x1cac + (int)this);
  *(undefined4 *)(iVar3 + 0x19c0 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_100a6ce6((int)pvVar2);
    FUN_100ad48c(pvVar2);
    *(undefined4 *)(iVar3 + 0x1cac + (int)this) = 0;
  }
  return;
}

