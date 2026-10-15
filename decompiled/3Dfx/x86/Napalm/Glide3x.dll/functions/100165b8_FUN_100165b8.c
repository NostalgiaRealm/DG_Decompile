/*
 * FUN_100165b8 at 100165b8
 * undefined __fastcall FUN_100165b8(int param_1)
 * Address ranges: 100165b8-100165dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100165b8(int param_1)

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

