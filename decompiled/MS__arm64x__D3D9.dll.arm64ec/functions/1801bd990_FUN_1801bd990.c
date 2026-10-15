/*
 * FUN_1801bd990 at 1801bd990
 * undefined FUN_1801bd990(void)
 * Address ranges: 1801bd990-1801bda03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801bd990(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    if (param_2 < *(uint *)(param_1 + -0x30)) {
      FUN_1801083e8(param_1 + -0xa0,
                    *(undefined4 *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4),
                    &local_20);
      uVar1 = 0;
    }
    *param_3 = 0x18;
    param_3[1] = local_20;
    param_3[2] = uStack_1c;
    param_3[3] = local_18;
    param_3[4] = uStack_14;
    param_3[5] = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar1;
}

