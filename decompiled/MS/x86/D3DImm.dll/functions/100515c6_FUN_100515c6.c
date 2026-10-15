/*
 * FUN_100515c6 at 100515c6
 * int __fastcall FUN_100515c6(int param_1)
 * Address ranges: 100515c6-100516cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100515c6(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  SIZE_T SVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_14 = 0;
  local_8 = (int *)0x0;
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_1c = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x14);
  piVar3 = *(int **)(*(int *)(param_1 + 8) * 0x18 + *(int *)(param_1 + 4));
  iVar2 = (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,&DAT_1005fc0c,&local_8);
  if (-1 < iVar2) {
    piVar3 = (int *)FUN_1005c789(*(uint *)(param_1 + 0x10) >> 3);
    if (piVar3 != (int *)0x0) {
      local_10 = local_8;
      iVar2 = *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x38) != iVar2) {
LAB_10051689:
        iVar2 = *(int *)(param_1 + 0x38);
        iVar1 = *(int *)(param_1 + 0x34);
        *(int **)(iVar1 + iVar2 * 8) = local_10;
        *(int **)(iVar1 + 4 + iVar2 * 8) = piVar3;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        FUN_1005c9cc(piVar3,0,*(uint *)(param_1 + 0x10) >> 3);
        return *(int *)(param_1 + 0x38) + -1;
      }
      if (iVar2 == 0) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = iVar2 * 2;
      }
      SVar4 = (SIZE_T)((ulonglong)uVar5 * 8);
      if ((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) {
        SVar4 = 0xffffffff;
      }
      local_c = (undefined4 *)FUN_1005c789(SVar4);
      if (local_c != (undefined4 *)0x0) {
        FUN_1005ca00(local_c,*(undefined4 **)(param_1 + 0x34),*(int *)(param_1 + 0x3c) << 3);
        thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x34));
        *(undefined4 **)(param_1 + 0x34) = local_c;
        *(uint *)(param_1 + 0x3c) = uVar5;
        goto LAB_10051689;
      }
      thunk_FUN_1005c76c(piVar3);
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  return -1;
}

