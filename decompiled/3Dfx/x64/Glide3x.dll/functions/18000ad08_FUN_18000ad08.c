/*
 * FUN_18000ad08 at 18000ad08
 * undefined __fastcall FUN_18000ad08(longlong param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 18000ad08-18000ad62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ad08(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *param_4 = 0;
  *param_3 = 0;
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
    *param_3 = *(undefined4 *)(param_1 + 0xa8);
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  else if (param_2 == 6) {
    *param_3 = *(undefined4 *)(param_1 + 0x166);
    uVar1 = *(undefined4 *)(param_1 + 0x16a);
  }
  else {
    if (param_2 != 7) {
      return;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x17a);
    uVar1 = *(undefined4 *)(param_1 + 0x17e);
  }
  *param_4 = uVar1;
  return;
}

