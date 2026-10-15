/*
 * FUN_1800bd054 at 1800bd054
 * int __fastcall FUN_1800bd054(longlong param_1, uint param_2, longlong param_3, undefined4 * param_4)
 * Address ranges: 1800bd054-1800bd0d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bd054(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = -0x7789f794;
  if (param_2 < *(uint *)(param_1 + 0xe38)) {
    iVar1 = FUN_180016d2c(*(longlong *)(*(longlong *)(param_1 + 0xe30) + (ulonglong)param_2 * 8),
                          &local_18);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 4) = local_18;
      *(undefined4 *)(param_3 + 8) = local_14;
      *(undefined4 *)(param_3 + 0xc) = local_10;
      *(undefined4 *)(param_3 + 0x10) = local_c;
      *(undefined4 *)(param_1 + 0xe88) = local_c;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
    }
  }
  return iVar1;
}

