/*
 * FUN_10056b78 at 10056b78
 * undefined FUN_10056b78(void)
 * Address ranges: 10056b78-10056c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056b78(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_10057fe8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_1007a4e0(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_1007a4e0(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_1007a4e0(*param_2);
  FUN_1007a470(param_2,0xc);
  return;
}

