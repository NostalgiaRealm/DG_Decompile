/*
 * FUN_1002b6a0 at 1002b6a0
 * undefined FUN_1002b6a0(void)
 * Address ranges: 1002b6a0-1002b703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b6a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_w15;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  FUN_10055748(param_1,&local_10,param_2,*(undefined4 *)(iVar1 + 0xae),*(undefined4 *)(iVar1 + 0xb2)
               ,*(undefined4 *)(iVar1 + 0xb6),*(undefined4 *)(iVar1 + 0xba));
  (*(code *)PTR_FUN_1009d1e4)(extraout_w15 + 0xbc,local_10,uStack_c,local_8,uStack_4);
  return;
}

