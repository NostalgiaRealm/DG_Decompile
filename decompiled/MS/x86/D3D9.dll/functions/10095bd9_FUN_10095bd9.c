/*
 * FUN_10095bd9 at 10095bd9
 * undefined __fastcall FUN_10095bd9(void * param_1)
 * Address ranges: 10095bd9-10095c79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10095bd9(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (*(int *)(iVar1 + 0x7dc) != *(int *)(iVar1 + 0x5c4)) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 0x38;
      FUN_10092632(param_1,uVar2,5,*(uint *)((int)param_1 + iVar3 + 0x68fc));
      FUN_10092632(param_1,uVar2,5,*(uint *)((int)param_1 + iVar3 + 0x6900));
      FUN_10092632(param_1,uVar2,5,*(uint *)((int)param_1 + iVar3 + 0x6904));
      FUN_10092632(param_1,uVar2,5,*(uint *)((int)param_1 + iVar3 + 0x6910));
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
  }
  FUN_10019d5f((int)param_1);
  if (*(int *)(*(int *)((int)param_1 + 0xc) + 0x94f) != *(int *)(iVar1 + 0x737)) {
    *(int *)(*(int *)((int)param_1 + 0xc) + 0x94f) = *(int *)(iVar1 + 0x737);
    FUN_10095e1a((int)param_1);
  }
  return;
}

