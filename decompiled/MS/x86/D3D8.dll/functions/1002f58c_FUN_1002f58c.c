/*
 * FUN_1002f58c at 1002f58c
 * undefined __fastcall FUN_1002f58c(int param_1)
 * Address ranges: 1002f58c-1002f602
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002f58c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar4 = *(int *)(param_1 + 200) * 0x16c0;
  FUN_100ac680(iVar1 + 0x1880 + iVar4);
  FUN_10098768((void *)(*(int *)(iVar4 + 0x19c4 + iVar1) + 4),'\0');
  iVar2 = *(int *)(iVar4 + 0x19c4 + iVar1);
  FUN_1009d020(*(void **)(iVar4 + 0x19c0 + iVar1),*(uint *)(iVar2 + 0x940),*(uint *)(iVar2 + 0x944))
  ;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    do {
      FUN_1002f986(*(int *)(*(int *)(param_1 + 0xe0) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xe4));
  }
  return;
}

