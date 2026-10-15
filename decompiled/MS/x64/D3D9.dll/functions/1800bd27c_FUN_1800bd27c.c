/*
 * FUN_1800bd27c at 1800bd27c
 * int __fastcall FUN_1800bd27c(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1800bd27c-1800bd2c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bd27c(longlong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = -0x7789f795;
  if (*(char *)(param_1 + -0x1c) == '\0') {
    iVar1 = FUN_1800bd054(param_1 + -0x6838,param_2,(longlong)local_28,(undefined4 *)0x0);
    if (-1 < iVar1) {
      *param_3 = local_24;
      param_3[1] = local_20;
      param_3[3] = local_18;
      param_3[2] = local_1c;
    }
  }
  return iVar1;
}

