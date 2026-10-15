/*
 * FUN_100659c0 at 100659c0
 * undefined FUN_100659c0(void)
 * Address ranges: 100659c0-10065b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100659c0(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_10066cc0(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_100973e0,param_4,0xffffffff);
  FUN_10067028(param_1,*(undefined4 *)(*piVar1 + 8),0x10097780,0);
  FUN_10067300(param_1,*(undefined4 *)(*piVar1 + 8),0x10097758);
  iVar2 = *(int *)(param_2 + 4);
  FUN_10067a48(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8));
  FUN_10067770(param_1,*(undefined4 *)(*piVar1 + 8),1);
  FUN_100678c8(param_1,*(undefined4 *)(*piVar1 + 8),0);
  FUN_100679a8(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

