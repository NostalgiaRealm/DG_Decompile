/*
 * FUN_10014f27 at 10014f27
 * undefined __fastcall FUN_10014f27(int param_1)
 * Address ranges: 10014f27-10014f4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014f27(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  SetRect((LPRECT)(param_1 + 0x34),0,0,0,0);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  puVar2 = (undefined4 *)(param_1 + 0x84);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

