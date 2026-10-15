/*
 * FUN_1004134a at 1004134a
 * undefined __thiscall FUN_1004134a(void * this, int param_1)
 * Address ranges: 1004134a-100413b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004134a(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_1002ea60((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_1002ea00((int)this + iVar2 + 0x1378);
  }
  FUN_10042dde((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_1003d0f3(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

