/*
 * FUN_100392fb at 100392fb
 * undefined __fastcall FUN_100392fb(int param_1)
 * Address ranges: 100392fb-10039371
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100392fb(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar4 = *(int *)(param_1 + 200) * 0x16c0;
  FUN_100cef50(iVar1 + 0x1880 + iVar4);
  FUN_100bad40((void *)(*(int *)(iVar4 + 0x19c4 + iVar1) + 4),'\0');
  iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
  FUN_100bf5f8(*(void **)(iVar4 + 0x19c0 + iVar1),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944))
  ;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    do {
      FUN_10039797(*(int *)(*(int *)(param_1 + 0xe0) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe4));
  }
  return;
}

