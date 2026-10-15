/*
 * FUN_1801bcd18 at 1801bcd18
 * undefined FUN_1801bcd18(void)
 * Address ranges: 1801bcd18-1801bcd53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801bcd18(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 != 0)) {
    FUN_1801083e8(param_1 + -0xa0,
                  *(undefined4 *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4));
    uVar1 = 0;
  }
  return uVar1;
}

