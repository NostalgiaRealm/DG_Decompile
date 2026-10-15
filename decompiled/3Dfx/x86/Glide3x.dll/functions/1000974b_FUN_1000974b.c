/*
 * FUN_1000974b at 1000974b
 * undefined4 __fastcall FUN_1000974b(int param_1)
 * Address ranges: 1000974b-1000980d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000974b(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  piVar2 = FUN_1003e493((void *)(*(int *)(param_1 + 0x3300) + 0x520),*(int **)(param_1 + 0x3304),
                        0xd50,0,1);
  *(int **)(param_1 + 0x3318) = piVar2;
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    puVar3 = FUN_1003b6a6(-(uint)(*(int *)(param_1 + 0x3300) != 0) &
                          *(int *)(param_1 + 0x3300) + 0x520U,*(undefined4 *)(param_1 + 0x3304),0,
                          0x670,0);
    *(undefined4 **)(param_1 + 0x3314) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      bVar1 = FUN_10041691(*(void **)(*(int *)(param_1 + 0x3308) + 0x130c),
                           *(int **)(param_1 + 0x3318),(void *)(*(int *)(param_1 + 0x3308) + 0x1430)
                           ,0,0xd50,(undefined4 *)&DAT_1005a328,'\x01','\0');
      if (bVar1) {
        return CONCAT31(extraout_var,1);
      }
      puVar3 = *(undefined4 **)(param_1 + 0x3314);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1003b621(puVar3);
        FUN_10052276(puVar3);
      }
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x3318) + 8))(*(int **)(param_1 + 0x3318));
  }
  return uVar4 & 0xffffff00;
}

