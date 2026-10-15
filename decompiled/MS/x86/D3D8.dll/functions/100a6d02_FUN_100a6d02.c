/*
 * FUN_100a6d02 at 100a6d02
 * bool __fastcall FUN_100a6d02(int * param_1)
 * Address ranges: 100a6d02-100a6d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100a6d02(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  param_1[3] = 0;
  piVar1 = *(int **)(param_1[1] * 0x18 + *param_1);
  iVar2 = (**(code **)(*piVar1 + 0x6c))
                    (piVar1,&DAT_100b5830,0,&DAT_100b5848,0x400,0,&DAT_100b2d10,param_1 + 2);
  if (-1 < iVar2) {
    piVar1 = (int *)param_1[2];
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(*piVar1 + 0x20))(piVar1,0,&local_10,&local_8);
  }
  return -1 < iVar2;
}

