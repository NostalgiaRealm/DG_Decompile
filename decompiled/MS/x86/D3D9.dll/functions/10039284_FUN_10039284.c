/*
 * FUN_10039284 at 10039284
 * undefined __fastcall FUN_10039284(int param_1)
 * Address ranges: 10039284-100392fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039284(int param_1)

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
  if (*(int *)(param_1 + 0xd8) != 0) {
    do {
      FUN_10039797(*(int *)(*(int *)(param_1 + 0xd4) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xd8));
  }
  return;
}

