/*
 * FUN_10021490 at 10021490
 * undefined FUN_10021490(void)
 * Address ranges: 10021490-100214f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021490(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (param_3 == 0) {
    if (param_4 == (undefined8 *)0x0) {
      local_20 = 0;
      local_18 = *(undefined4 *)(param_1 + 0x4c);
      uStack_14 = *(undefined4 *)(param_1 + 0x50);
      puVar1 = &local_20;
    }
    else {
      uStack_8 = param_4[1];
      local_10 = *param_4;
      puVar1 = &local_10;
    }
    iVar2 = *(int *)(param_1 + 0x3c) + param_2 * 0x10;
    (*(code *)PTR_FUN_1016c298)(iVar2,iVar2,puVar1);
  }
  return;
}

