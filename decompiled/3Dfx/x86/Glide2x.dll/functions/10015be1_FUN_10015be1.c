/*
 * FUN_10015be1 at 10015be1
 * undefined4 __fastcall FUN_10015be1(int param_1)
 * Address ranges: 10015be1-10015ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10015be1(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  piVar2 = FUN_1003b9ae((void *)(*(int *)(param_1 + 0x3180) + 0x520),*(int **)(param_1 + 0x3184),
                        0xd50,0,1);
  *(int **)(param_1 + 0x3198) = piVar2;
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    puVar3 = FUN_10038bc1(-(uint)(*(int *)(param_1 + 0x3180) != 0) &
                          *(int *)(param_1 + 0x3180) + 0x520U,*(undefined4 *)(param_1 + 0x3184),0,
                          0x590,0);
    *(undefined4 **)(param_1 + 0x3194) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      bVar1 = FUN_1003eba9(*(void **)(*(int *)(param_1 + 0x3188) + 0x130c),
                           *(int **)(param_1 + 0x3198),(void *)(*(int *)(param_1 + 0x3188) + 0x1430)
                           ,0,0xd50,(undefined4 *)&DAT_100584c8,'\x01','\0');
      if (bVar1) {
        return CONCAT31(extraout_var,1);
      }
      puVar3 = *(undefined4 **)(param_1 + 0x3194);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_10038b3c(puVar3);
        FUN_1004f626(puVar3);
      }
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x3198) + 8))(*(int **)(param_1 + 0x3198));
  }
  return uVar4 & 0xffffff00;
}

