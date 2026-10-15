/*
 * FUN_1000a5a1 at 1000a5a1
 * undefined __fastcall FUN_1000a5a1(int param_1)
 * Address ranges: 1000a5a1-1000a6ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000a5a1(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x3688) + 0x1304);
  iVar1 = *(int *)(iVar3 + 0x938);
  iVar3 = *(int *)(iVar3 + 0x93c);
  local_c = *(undefined4 *)(param_1 + 14000);
  local_8 = *(undefined4 *)(param_1 + 0x36b4);
  FUN_1004341a(*(int *)(*(int *)(param_1 + 0x3688) + 0x1304),2,&local_c);
  FUN_1003f5b2(*(void **)(*(int *)(param_1 + 0x3680) + 0x172c0),*(undefined4 *)(param_1 + 14000),
               *(int *)(*(int *)(param_1 + 0x3688) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3688) + 0x1304),iVar1,iVar3);
  FUN_1003f5b2(*(void **)(*(int *)(param_1 + 0x3680) + 0x172c0),*(undefined4 *)(param_1 + 0x36b4),
               *(int *)(*(int *)(param_1 + 0x3688) + 0x1300),
               *(int *)(*(int *)(param_1 + 0x3688) + 0x1304),iVar1,iVar3);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 14000) + 0x28))
                            (*(int **)(param_1 + 14000),local_14);
  FUN_10043685(*(int *)(*(int *)(param_1 + 0x3688) + 0x1304),7,*piVar2,piVar2[1]);
  iVar3 = *(int *)(*(int *)(param_1 + 0x3688) + 0x1304);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x36a8) + 0x2c))(*(int **)(param_1 + 0x36a8));
  FUN_100436d7(iVar3,6,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  FUN_1004301c(*(void **)(*(int *)(param_1 + 0x3688) + 0x1304),*(uint *)(param_1 + 0x36a8),0,1,0x80)
  ;
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      if (*(char *)(param_1 + 0x3656 + iVar3) != '\0') {
        FUN_1001c32f(*(int *)(param_1 + 0xd6d4 + iVar3 * 4));
        *(undefined1 *)(param_1 + 0x3656 + iVar3) = 0;
      }
      FUN_1001f6db(*(undefined4 **)(param_1 + 0xd6d4 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  return;
}

