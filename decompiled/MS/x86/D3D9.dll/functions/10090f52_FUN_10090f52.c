/*
 * FUN_10090f52 at 10090f52
 * undefined4 __stdcall FUN_10090f52(int param_1, uint param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 10090f52-10090fbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090f52(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    if (param_2 < *(uint *)(param_1 + -0x24)) {
      FUN_10003582((void *)(param_1 + -0x70),*(int *)(*(int *)(param_1 + -0x28) + param_2 * 4),
                   &local_14);
      uVar1 = 0;
    }
    param_3[1] = local_14;
    param_3[2] = local_10;
    param_3[3] = local_c;
    param_3[4] = local_8;
    *param_3 = 0x18;
    param_3[5] = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar1;
}

