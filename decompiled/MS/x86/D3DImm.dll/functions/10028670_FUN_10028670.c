/*
 * FUN_10028670 at 10028670
 * int __fastcall FUN_10028670(int param_1)
 * Address ranges: 10028670-10028725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10028670(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    (&DAT_1006b7d0)[uVar1] = (&DAT_1005ee90)[uVar1 >> 4] << 0xc | (&DAT_1005ee90)[uVar1 & 0xf];
    (&DAT_1006b7d4)[uVar1] =
         (&DAT_1005ee90)[uVar1 + 1 >> 4] << 0xc | (&DAT_1005ee90)[uVar1 + 1 & 0xf];
    (&DAT_1006b7d8)[uVar1] =
         (&DAT_1005ee90)[uVar1 + 2 >> 4] << 0xc | (&DAT_1005ee90)[uVar1 + 2 & 0xf];
    (&DAT_1006b7dc)[uVar1] =
         (&DAT_1005ee90)[uVar1 + 3 >> 4] << 0xc | (&DAT_1005ee90)[uVar1 + 3 & 0xf];
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x100);
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  return param_1;
}

