/*
 * FUN_100d13f0 at 100d13f0
 * undefined FUN_100d13f0(void)
 * Address ranges: 100d13f0-100d1443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d13f0(int param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24) && param_3 != (undefined8 *)0x0) {
    uVar1 = 0;
    *param_3 = *(undefined8 *)
                (&DAT_101714dc + *(int *)(*(int *)(param_1 + -0x28) + param_2 * 4) * 0x228);
  }
  return uVar1;
}

