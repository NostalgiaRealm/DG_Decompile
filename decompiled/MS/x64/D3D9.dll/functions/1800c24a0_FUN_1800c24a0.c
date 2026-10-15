/*
 * FUN_1800c24a0 at 1800c24a0
 * undefined __fastcall FUN_1800c24a0(longlong param_1, longlong param_2, undefined4 * param_3)
 * Address ranges: 1800c24a0-1800c24f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c24a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_180016d2c(param_1 + 8,&local_18);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 4) = local_18;
    *(undefined4 *)(param_2 + 8) = local_14;
    *(undefined4 *)(param_2 + 0x10) = local_c;
    *(undefined4 *)(param_2 + 0xc) = local_10;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  return;
}

