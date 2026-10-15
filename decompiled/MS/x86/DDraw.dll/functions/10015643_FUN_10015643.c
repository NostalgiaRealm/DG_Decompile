/*
 * FUN_10015643 at 10015643
 * int * __stdcall FUN_10015643(int * param_1, int param_2, void * param_3, int * param_4, void * param_5, int * param_6, uint * param_7, uint param_8, undefined4 param_9, int param_10)
 * Address ranges: 10015643-100156dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10015643(int *param_1,int param_2,void *param_3,int *param_4,void *param_5,int *param_6,
                  uint *param_7,uint param_8,undefined4 param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_30 [11];
  
  FUN_1005482b(param_3,param_1,param_4,param_5,param_6,param_7,param_8,0,param_10,0);
  if (param_1[1] == 0) {
    FUN_100600a0(param_2 + 0x11c0);
    uVar1 = *(uint *)((int)param_3 + 0x938);
    uVar2 = *(uint *)((int)param_3 + 0x93c);
    FUN_10052996((void *)((int)param_3 + 4),'\0');
    FUN_1004dc27(*(void **)((int)param_3 + 0x8e0),uVar1,uVar2);
    piVar3 = FUN_1005482b(param_3,local_30,param_4,param_5,param_6,param_7,param_8,0,param_10,0);
    piVar5 = param_1;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
  }
  return param_1;
}

