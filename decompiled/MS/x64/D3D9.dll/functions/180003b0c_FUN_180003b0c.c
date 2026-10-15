/*
 * FUN_180003b0c at 180003b0c
 * undefined __fastcall FUN_180003b0c(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 180003b0c-180003b71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003b0c(longlong param_1,uint param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((&DAT_180112aee)[uVar1 * 600] == '\0') {
    FUN_1800029a4(param_1,param_2);
  }
  *param_3 = *(undefined4 *)(&DAT_180112a70 + uVar1 * 0x4b);
  param_3[1] = *(undefined4 *)((longlong)&DAT_180112a70 + uVar1 * 600 + 4);
  param_3[2] = *(undefined4 *)(&DAT_180112a80 + uVar1 * 0x4b);
  param_3[3] = *(undefined4 *)(&DAT_1801123d0 + uVar1 * 0x28);
  return;
}

