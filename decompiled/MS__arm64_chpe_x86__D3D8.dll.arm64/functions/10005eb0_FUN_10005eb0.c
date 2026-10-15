/*
 * FUN_10005eb0 at 10005eb0
 * undefined FUN_10005eb0(void)
 * Address ranges: 10005eb0-10005eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10005eb0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + 0x4c) && param_3 != 0) {
    FUN_100045b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x48) + param_2 * 4),param_3);
    uVar1 = 0;
  }
  return uVar1;
}

