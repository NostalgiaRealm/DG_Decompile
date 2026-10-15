/*
 * FUN_1800bef30 at 1800bef30
 * undefined FUN_1800bef30(void)
 * Address ranges: 1800bef30-1800befbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bef30(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = 0x8876086b;
  if (((*(char *)(param_1 + -0x1c) == '\0') &&
      (uVar1 = 0x8876086c, param_2 < *(uint *)(param_1 + -0x5a00))) &&
     (uVar1 = FUN_18000e138(*(undefined8 *)
                             (*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8),&local_28),
     -1 < (int)uVar1)) {
    *(undefined4 *)(param_1 + -0x59b0) = uStack_1c;
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = local_20;
    param_3[3] = uStack_1c;
  }
  return uVar1;
}

