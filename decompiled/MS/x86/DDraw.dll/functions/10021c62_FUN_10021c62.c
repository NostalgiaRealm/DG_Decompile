/*
 * FUN_10021c62 at 10021c62
 * undefined1 __thiscall FUN_10021c62(void * this, int param_1)
 * Address ranges: 10021c62-10021cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10021c62(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  puVar2 = FUN_10020f74(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    pvVar3 = (void *)FUN_100494b4(*(void **)((int)this + 0x10),*(int *)*puVar2);
    if ((pvVar3 == (void *)0x0) || (pvVar3 == this)) {
      uVar1 = FUN_1004954e(*(void **)((int)this + 0x10),(int *)*puVar2,0,(HMONITOR)0x0);
      FUN_10021037(this,puVar2[5],0);
      puVar5 = (undefined4 *)((int)this + 0xc228);
      puVar2 = (undefined4 *)(puVar2[5] * 0xc18 + 0xa8 + (int)this);
      for (iVar4 = 0x300; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return uVar1;
}

