/*
 * FUN_1009ddc6 at 1009ddc6
 * int __stdcall FUN_1009ddc6(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 1009ddc6-1009de10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ddc6(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_10013af7((void *)(param_1 + 8),&local_14);
  if (-1 < iVar1) {
    *(undefined4 *)(param_2 + 4) = local_14;
    *(undefined4 *)(param_2 + 0xc) = local_c;
    *(undefined4 *)(param_2 + 8) = local_10;
    *(undefined4 *)(param_2 + 0x10) = local_8;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  return iVar1;
}

