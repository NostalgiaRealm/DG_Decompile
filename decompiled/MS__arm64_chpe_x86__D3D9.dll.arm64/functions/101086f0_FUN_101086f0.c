/*
 * FUN_101086f0 at 101086f0
 * undefined FUN_101086f0(void)
 * Address ranges: 101086f0-1010884f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_101086f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + 8);
  *(uint *)(param_2 + 0x14) = (uint)(*(int *)(param_2 + 0x10) == *(int *)(*piVar1 + 0xd80));
  FUN_10109c20(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_10165520,0,0xffffffff,0);
  FUN_1010a4c8(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_101656c0,0);
  FUN_1010a7a0(param_1,*(undefined4 *)(*piVar1 + 8),&DAT_10165698);
  iVar2 = *(int *)(param_2 + 4);
  FUN_1010b010(param_1,*(undefined4 *)(*piVar1 + 8),5,*(undefined4 *)(iVar2 + 0x478),
               *(undefined4 *)(iVar2 + 0x470),*(undefined4 *)(iVar2 + 0x3c8),0);
  FUN_1010aca8(param_1,*(undefined4 *)(*piVar1 + 8),1,1,*(int *)(param_2 + 4) + 0x47c);
  FUN_1010ae48(param_1,*(undefined4 *)(*piVar1 + 8));
  FUN_1010af70(param_1,*(undefined4 *)(*piVar1 + 8),0,0);
  return 1;
}

