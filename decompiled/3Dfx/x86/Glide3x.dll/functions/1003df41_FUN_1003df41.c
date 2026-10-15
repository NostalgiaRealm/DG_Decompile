/*
 * FUN_1003df41 at 1003df41
 * undefined __thiscall FUN_1003df41(void * this, int param_1)
 * Address ranges: 1003df41-1003dfa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003df41(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_1002b650((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_1002b5f0((int)this + iVar2 + 0x1378);
  }
  FUN_1003f9d5((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_10039ce5(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

