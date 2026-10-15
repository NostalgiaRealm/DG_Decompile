/*
 * FUN_100161c6 at 100161c6
 * undefined __fastcall FUN_100161c6(int param_1)
 * Address ranges: 100161c6-1001630f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100161c6(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x3188) + 0x1304);
  iVar1 = *(int *)(iVar3 + 0x938);
  iVar3 = *(int *)(iVar3 + 0x93c);
  local_c = *(undefined4 *)(param_1 + 0x31b0);
  local_8 = *(undefined4 *)(param_1 + 0x31b4);
  FUN_1003d52c(*(int *)(*(int *)(param_1 + 0x3188) + 0x1304),2,&local_c);
  FUN_100396bf(*(void **)(*(int *)(param_1 + 0x3180) + 0x172c0),*(undefined4 *)(param_1 + 0x31b0),
               *(int *)(*(int *)(param_1 + 0x3188) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3188) + 0x1304),iVar1,iVar3);
  FUN_100396bf(*(void **)(*(int *)(param_1 + 0x3180) + 0x172c0),*(undefined4 *)(param_1 + 0x31b4),
               *(int *)(*(int *)(param_1 + 0x3188) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3188) + 0x1304),iVar1,iVar3);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x31b0) + 0x28))
                            (*(int **)(param_1 + 0x31b0),local_14);
  FUN_1003d797(*(int *)(*(int *)(param_1 + 0x3188) + 0x1304),7,*piVar2,piVar2[1]);
  iVar3 = *(int *)(*(int *)(param_1 + 0x3188) + 0x1304);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x31a8) + 0x2c))(*(int **)(param_1 + 0x31a8));
  FUN_1003d7e9(iVar3,6,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  FUN_1003d12e(*(void **)(*(int *)(param_1 + 0x3188) + 0x1304),*(uint *)(param_1 + 0x31a8),0,1,0x80)
  ;
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x3156 + iVar3) != '\0') {
        FUN_10026b5c(*(int *)(param_1 + 0xca4c + iVar3 * 4));
        *(undefined1 *)(param_1 + 0x3156 + iVar3) = 0;
      }
      FUN_1002be41(*(undefined4 **)(param_1 + 0xca4c + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

