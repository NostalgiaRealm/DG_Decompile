/*
 * FUN_100d6500 at 100d6500
 * undefined FUN_100d6500(void)
 * Address ranges: 100d6500-100d6657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d6500(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_100d7a20(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_1012e6e0,param_4,0xffffffff);
  FUN_100d7d88(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_1012e880,0);
  FUN_100d8060(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_1012e858);
  iVar2 = *(int *)(param_2 + 4);
  FUN_100d88d0(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8),0);
  FUN_100d8568(param_1,*(undefined4 *)(*piVar1 + 8),1,1,*(int *)(param_2 + 4) + 0x47c);
  FUN_100d8708(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_100d8830(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

