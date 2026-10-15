/*
 * FUN_1005bc51 at 1005bc51
 * bool __fastcall FUN_1005bc51(int * param_1)
 * Address ranges: 1005bc51-1005bcae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1005bc51(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  param_1[3] = 0;
  piVar1 = *(int **)(param_1[1] * 0x18 + *param_1);
  iVar2 = (**(code **)(*piVar1 + 0x6c))
                    (piVar1,&DAT_10066ce4,0,&DAT_10066cf8,0x400,0,&DAT_10063c78,param_1 + 2);
  if (-1 < iVar2) {
    piVar1 = (int *)param_1[2];
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(*piVar1 + 0x20))(piVar1,0,&local_10,&local_8);
  }
  return -1 < iVar2;
}

