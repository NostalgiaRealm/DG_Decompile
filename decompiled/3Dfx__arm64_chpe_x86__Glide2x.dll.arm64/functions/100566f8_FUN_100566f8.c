/*
 * FUN_100566f8 at 100566f8
 * undefined FUN_100566f8(void)
 * Address ranges: 100566f8-1005678b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100566f8(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      FUN_10057b68(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*param_2 + uVar1 * 4));
      FUN_1007a060(**(undefined4 **)(*param_2 + uVar1 * 4));
      FUN_1007a060(*(undefined4 *)(*param_2 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  FUN_1007a060(*param_2);
  FUN_10079ff0(param_2,0xc);
  return;
}

