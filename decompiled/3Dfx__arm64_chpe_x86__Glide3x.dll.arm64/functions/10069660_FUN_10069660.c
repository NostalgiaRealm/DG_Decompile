/*
 * FUN_10069660 at 10069660
 * undefined FUN_10069660(void)
 * Address ranges: 10069660-100697af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10069660(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_1006a960(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_1009b4b0,param_4,0xffffffff);
  FUN_1006acc8(param_1,*(undefined4 *)(*piVar1 + 8),0x1009b850,0);
  FUN_1006afa0(param_1,*(undefined4 *)(*piVar1 + 8),0x1009b828);
  iVar2 = *(int *)(param_2 + 4);
  FUN_1006b6e8(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8));
  FUN_1006b410(param_1,*(undefined4 *)(*piVar1 + 8),1);
  FUN_1006b568(param_1,*(undefined4 *)(*piVar1 + 8),0);
  FUN_1006b648(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

