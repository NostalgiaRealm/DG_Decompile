/*
 * FUN_10058e59 at 10058e59
 * bool __stdcall FUN_10058e59(undefined4 param_1, uint param_2)
 * Address ranges: 10058e59-10058e96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10058e59(undefined4 param_1,uint param_2)

{
  return (param_2 >> 0x1c & 1) != 0 ||
         ((param_2 >> 0x19 & 1) != 0 || ((byte)(param_2 >> 0x14) & 7) != 7);
}

