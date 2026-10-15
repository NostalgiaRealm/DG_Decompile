/*
 * FUN_100407f0 at 100407f0
 * int __fastcall FUN_100407f0(int param_1)
 * Address ranges: 100407f0-100408a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100407f0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    (&DAT_100ba2e8)[uVar1] = (&DAT_100b2548)[uVar1 >> 4] << 0xc | (&DAT_100b2548)[uVar1 & 0xf];
    (&DAT_100ba2ec)[uVar1] =
         (&DAT_100b2548)[uVar1 + 1 >> 4] << 0xc | (&DAT_100b2548)[uVar1 + 1 & 0xf];
    (&DAT_100ba2f0)[uVar1] =
         (&DAT_100b2548)[uVar1 + 2 >> 4] << 0xc | (&DAT_100b2548)[uVar1 + 2 & 0xf];
    (&DAT_100ba2f4)[uVar1] =
         (&DAT_100b2548)[uVar1 + 3 >> 4] << 0xc | (&DAT_100b2548)[uVar1 + 3 & 0xf];
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x100);
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0;
  return param_1;
}

