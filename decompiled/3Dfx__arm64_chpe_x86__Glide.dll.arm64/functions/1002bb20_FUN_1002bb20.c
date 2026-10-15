/*
 * FUN_1002bb20 at 1002bb20
 * undefined FUN_1002bb20(void)
 * Address ranges: 1002bb20-1002bb83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002bb20(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_w15;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  FUN_10055bc8(param_1,&local_10,param_2,*(undefined4 *)(iVar1 + 0xae),*(undefined4 *)(iVar1 + 0xb2)
               ,*(undefined4 *)(iVar1 + 0xb6),*(undefined4 *)(iVar1 + 0xba));
  (*(code *)PTR_FUN_1009d1e4)(extraout_w15 + 0xbc,local_10,uStack_c,local_8,uStack_4);
  return;
}

