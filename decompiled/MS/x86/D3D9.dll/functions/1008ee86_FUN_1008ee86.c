/*
 * FUN_1008ee86 at 1008ee86
 * undefined1 __thiscall FUN_1008ee86(void * this, int param_1)
 * Address ranges: 1008ee86-1008eefa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1008ee86(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  puVar2 = FUN_1008e138(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    pvVar3 = (void *)FUN_100b8d99(*(void **)((int)this + 0x10),*(int *)*puVar2);
    if ((pvVar3 == (void *)0x0) || (pvVar3 == this)) {
      uVar1 = FUN_100b8e33(*(void **)((int)this + 0x10),(int *)*puVar2,0,(HMONITOR)0x0);
      FUN_1008e1fb(this,puVar2[5],0);
      puVar5 = (undefined4 *)((int)this + 0x1c228);
      puVar2 = (undefined4 *)(puVar2[5] * 0xc18 + 0x100a8 + (int)this);
      for (iVar4 = 0x300; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return uVar1;
}

