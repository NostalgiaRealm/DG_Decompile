/*
 * FUN_100bdab5 at 100bdab5
 * undefined __thiscall FUN_100bdab5(void * this, int param_1)
 * Address ranges: 100bdab5-100bdb1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100bdab5(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_100cefb0((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_100cef50((int)this + iVar2 + 0x1378);
  }
  FUN_100bad40((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_100bf5f8(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

