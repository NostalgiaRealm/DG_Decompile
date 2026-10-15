/*
 * FUN_10009fbc at 10009fbc
 * undefined4 __fastcall FUN_10009fbc(int param_1)
 * Address ranges: 10009fbc-1000a07e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10009fbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  piVar2 = FUN_1004189c((void *)(*(int *)(param_1 + 0x3680) + 0x520),*(int **)(param_1 + 0x3684),
                        0xe10,0,1);
  *(int **)(param_1 + 0x3698) = piVar2;
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    puVar3 = FUN_1003eab4(-(uint)(*(int *)(param_1 + 0x3680) != 0) &
                          *(int *)(param_1 + 0x3680) + 0x520U,*(undefined4 *)(param_1 + 0x3684),0,
                          0x8a0,0);
    *(undefined4 **)(param_1 + 0x3694) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      bVar1 = FUN_10044a9a(*(void **)(*(int *)(param_1 + 0x3688) + 0x130c),
                           *(int **)(param_1 + 0x3698),(void *)(*(int *)(param_1 + 0x3688) + 0x1430)
                           ,0,0xe10,(undefined4 *)&DAT_1005e438,'\x01','\0');
      if (bVar1) {
        return CONCAT31(extraout_var,1);
      }
      puVar3 = *(undefined4 **)(param_1 + 0x3694);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_1003ea2f(puVar3);
        FUN_10055686(puVar3);
      }
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x3698) + 8))(*(int **)(param_1 + 0x3698));
  }
  return uVar4 & 0xffffff00;
}

