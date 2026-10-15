/*
 * FUN_1000202b at 1000202b
 * int __stdcall FUN_1000202b(int param_1)
 * Address ranges: 1000202b-10002060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000202b(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if ((&DAT_1006c2b0)[uVar1 * 0x8a] == (&DAT_1006c2b0)[param_1 * 0x8a]) {
      iVar2 = iVar2 + (&DAT_1006c2b4)[uVar1 * 0x8a];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x20);
  return iVar2;
}

