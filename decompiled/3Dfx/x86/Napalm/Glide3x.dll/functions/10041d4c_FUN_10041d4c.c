/*
 * FUN_10041d4c at 10041d4c
 * int __fastcall FUN_10041d4c(int param_1)
 * Address ranges: 10041d4c-10041df1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10041d4c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = 0;
  local_8 = (int *)0x0;
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_1c = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x14);
  piVar2 = *(int **)(*(int *)(param_1 + 8) * 0x18 + *(int *)(param_1 + 4));
  iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2,&local_20,&DAT_1005aae0,&local_8);
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_100556a3(*(uint *)(param_1 + 0x10) >> 3);
    if (piVar2 != (int *)0x0) {
      local_10 = local_8;
      local_c = piVar2;
      uVar3 = FUN_1004258a((void *)(param_1 + 0x34),&local_10);
      if ((char)uVar3 != '\0') {
        FUN_100561f1(piVar2,0,*(uint *)(param_1 + 0x10) >> 3);
        return *(int *)(param_1 + 0x38) + -1;
      }
      thunk_FUN_10055686(piVar2);
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  return -1;
}

