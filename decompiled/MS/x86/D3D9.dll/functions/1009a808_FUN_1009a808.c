/*
 * FUN_1009a808 at 1009a808
 * int __stdcall FUN_1009a808(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009a808-1009a857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009a808(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = -0x7789f795;
  if (*(char *)(param_1 + -0x14) == '\0') {
    iVar1 = FUN_1009a69c((void *)(param_1 + -0x66b4),param_2,(int)local_1c,(undefined4 *)0x0);
    if (-1 < iVar1) {
      *param_3 = local_18;
      param_3[3] = local_c;
      param_3[1] = local_14;
      param_3[2] = local_10;
    }
  }
  return iVar1;
}

