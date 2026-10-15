/*
 * FUN_1800b7850 at 1800b7850
 * undefined FUN_1800b7850(void)
 * Address ranges: 1800b7850-1800b78cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b7850(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x5a00)) &&
     (uVar1 = FUN_18000e138(*(undefined8 *)
                             (*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8),&local_30),
     -1 < (int)uVar1)) {
    *(undefined4 *)(param_3 + 4) = local_30;
    *(undefined4 *)(param_3 + 8) = uStack_2c;
    *(undefined4 *)(param_3 + 0xc) = local_28;
    *(undefined4 *)(param_3 + 0x10) = uStack_24;
    *(undefined4 *)(param_1 + -0x59b0) = uStack_24;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return uVar1;
}

