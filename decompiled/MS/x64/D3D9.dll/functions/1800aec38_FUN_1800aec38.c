/*
 * FUN_1800aec38 at 1800aec38
 * undefined8 __fastcall FUN_1800aec38(longlong param_1, uint param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 1800aec38-1800aecb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800aec38(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    if (param_2 < *(uint *)(param_1 + -0x30)) {
      FUN_180003b0c(param_1 + -0xa0,
                    *(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4),&local_18);
      uVar1 = 0;
    }
    param_3[1] = local_18;
    param_3[3] = local_10;
    param_3[2] = local_14;
    param_3[4] = local_c;
    *param_3 = 0x18;
    param_3[5] = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar1;
}

