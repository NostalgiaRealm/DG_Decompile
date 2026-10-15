/*
 * FUN_1005316b at 1005316b
 * undefined __thiscall FUN_1005316b(void * this, int param_1)
 * Address ranges: 1005316b-100531e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005316b(void *this,int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x16c0;
  if ((*(char *)((int)this + iVar3 + 0x14a4) != '\0') &&
     (DVar1 = *(DWORD *)((int)this + iVar3 + 0x1494), DVar2 = GetCurrentThreadId(), DVar1 != DVar2))
  {
    FUN_1005c2e0((int)this + iVar3 + 0x1378);
  }
  FUN_10052215((void *)(*(int *)(iVar3 + 0x14bc + (int)this) + 4),'\0');
  iVar3 = *(int *)(iVar3 + 0x14bc + (int)this);
  FUN_10054c79(*(void **)(iVar3 + 0x8e0),*(uint *)(iVar3 + 0x940),*(uint *)(iVar3 + 0x944));
  return;
}

