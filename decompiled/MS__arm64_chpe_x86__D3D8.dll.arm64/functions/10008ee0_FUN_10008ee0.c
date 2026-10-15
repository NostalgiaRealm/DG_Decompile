/*
 * FUN_10008ee0 at 10008ee0
 * undefined FUN_10008ee0(void)
 * Address ranges: 10008ee0-10008f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10008ee0(int param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760868;
  if (*(char *)(param_1 + 0x58bd) == '\0') {
    if ((param_3 & 1) == 0) {
      *param_2 = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10022a90(param_1,8,param_2,0x8876081d);
    }
  }
  return uVar1;
}

