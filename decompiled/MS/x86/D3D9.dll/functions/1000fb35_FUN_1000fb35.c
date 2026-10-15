/*
 * FUN_1000fb35 at 1000fb35
 * undefined __fastcall FUN_1000fb35(int param_1)
 * Address ranges: 1000fb35-1000fb61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fb35(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 4;
  iVar3 = param_1 + 0x124;
  do {
    puVar1 = (undefined4 *)(iVar3 + -0xc);
    iVar3 = iVar3 + -0x18;
    thunk_FUN_100cfd6c((LPVOID)*puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_1000fbc4((undefined4 *)(param_1 + 0xb4));
  return;
}

