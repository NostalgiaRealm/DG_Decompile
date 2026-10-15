/*
 * FUN_100e4960 at 100e4960
 * undefined FUN_100e4960(void)
 * Address ranges: 100e4960-100e49c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4960(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (((param_2 < 0x10 && param_3 != 0) && param_3 < 0xe) && param_4 != (undefined4 *)0x0) {
    if ((&DAT_10170a20)[param_3 * 8] == '\0') {
      *param_4 = 0;
    }
    else {
      uVar1 = 0;
      *param_4 = *(undefined4 *)(param_3 * 4 + param_2 * 0x38 + param_1 + 0x234);
    }
  }
  return uVar1;
}

