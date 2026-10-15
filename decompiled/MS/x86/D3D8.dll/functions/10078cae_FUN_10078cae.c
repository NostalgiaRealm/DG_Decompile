/*
 * FUN_10078cae at 10078cae
 * undefined1 __thiscall FUN_10078cae(void * this, int param_1)
 * Address ranges: 10078cae-10078d22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10078cae(void *this,int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  puVar2 = FUN_10077f60(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    pvVar3 = (void *)FUN_10096746(*(void **)((int)this + 0x10),*(int *)*puVar2);
    if ((pvVar3 == (void *)0x0) || (pvVar3 == this)) {
      uVar1 = FUN_100967e0(*(void **)((int)this + 0x10),(int *)*puVar2,0,(HMONITOR)0x0);
      FUN_10078023(this,puVar2[5],0);
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

