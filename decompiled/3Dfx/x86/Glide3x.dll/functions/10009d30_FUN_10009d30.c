/*
 * FUN_10009d30 at 10009d30
 * undefined __fastcall FUN_10009d30(int param_1)
 * Address ranges: 10009d30-10009e79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10009d30(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x3308) + 0x1304);
  iVar1 = *(int *)(iVar3 + 0x938);
  iVar3 = *(int *)(iVar3 + 0x93c);
  local_c = *(undefined4 *)(param_1 + 0x3330);
  local_8 = *(undefined4 *)(param_1 + 0x3334);
  FUN_10040011(*(int *)(*(int *)(param_1 + 0x3308) + 0x1304),2,&local_c);
  FUN_1003c1a4(*(void **)(*(int *)(param_1 + 0x3300) + 0x172c0),*(undefined4 *)(param_1 + 0x3330),
               *(int *)(*(int *)(param_1 + 0x3308) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3308) + 0x1304),iVar1,iVar3);
  FUN_1003c1a4(*(void **)(*(int *)(param_1 + 0x3300) + 0x172c0),*(undefined4 *)(param_1 + 0x3334),
               *(int *)(*(int *)(param_1 + 0x3308) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3308) + 0x1304),iVar1,iVar3);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x3330) + 0x28))
                            (*(int **)(param_1 + 0x3330),local_14);
  FUN_1004027c(*(int *)(*(int *)(param_1 + 0x3308) + 0x1304),7,*piVar2,piVar2[1]);
  iVar3 = *(int *)(*(int *)(param_1 + 0x3308) + 0x1304);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x3328) + 0x2c))(*(int **)(param_1 + 0x3328));
  FUN_100402ce(iVar3,6,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  FUN_1003fc13(*(void **)(*(int *)(param_1 + 0x3308) + 0x1304),*(uint *)(param_1 + 0x3328),0,1,0x80)
  ;
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x32d6 + iVar3) != '\0') {
        FUN_1001a186(*(int *)(param_1 + 0xd33c + iVar3 * 4));
        *(undefined1 *)(param_1 + 0x32d6 + iVar3) = 0;
      }
      FUN_1001fac0(*(undefined4 **)(param_1 + 0xd33c + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

