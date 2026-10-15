/*
 * FUN_1004b109 at 1004b109
 * undefined __thiscall FUN_1004b109(void * this, int param_1)
 * Address ranges: 1004b109-1004b170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b109(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  uVar1 = FUN_10060100((int)this + iVar2 + 0x1378);
  if ((char)uVar1 == '\0') {
    FUN_100600a0((int)this + iVar2 + 0x1378);
  }
  FUN_10052996((void *)(*(int *)(iVar2 + 0x14bc + (int)this) + 4),'\0');
  iVar2 = *(int *)(iVar2 + 0x14bc + (int)this);
  FUN_1004dc27(*(void **)(iVar2 + 0x8e0),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944));
  return;
}

