/*
 * FUN_1003b45c at 1003b45c
 * undefined __thiscall FUN_1003b45c(void * this, int param_1)
 * Address ranges: 1003b45c-1003b4c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003b45c(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_100366e0((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_10036680((int)this + iVar2 + 0x1378);
  }
  FUN_1003cef0((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_10037200(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

