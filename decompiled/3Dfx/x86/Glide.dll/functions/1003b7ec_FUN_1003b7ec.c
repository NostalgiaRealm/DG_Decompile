/*
 * FUN_1003b7ec at 1003b7ec
 * undefined __thiscall FUN_1003b7ec(void * this, int param_1)
 * Address ranges: 1003b7ec-1003b853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003b7ec(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_10036a70((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_10036a10((int)this + iVar2 + 0x1378);
  }
  FUN_1003d280((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_10037590(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

