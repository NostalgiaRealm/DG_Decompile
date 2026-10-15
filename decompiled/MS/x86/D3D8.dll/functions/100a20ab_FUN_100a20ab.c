/*
 * FUN_100a20ab at 100a20ab
 * undefined __thiscall FUN_100a20ab(void * this, int param_1)
 * Address ranges: 100a20ab-100a20fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a20ab(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  pvVar1 = *(void **)(iVar2 + 0x6c8 + (int)this);
  if (pvVar1 != (void *)0x0) {
    FUN_10031990(pvVar1,1);
  }
  pvVar1 = *(void **)(iVar2 + 0x6cc + (int)this);
  *(undefined4 *)(iVar2 + 0x6c8 + (int)this) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_10031990(pvVar1,1);
  }
  *(undefined4 *)(iVar2 + 0x6cc + (int)this) = 0;
  return;
}

