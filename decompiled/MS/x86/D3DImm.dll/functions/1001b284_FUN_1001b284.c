/*
 * FUN_1001b284 at 1001b284
 * bool __stdcall FUN_1001b284(int param_1, uint param_2, undefined4 * param_3, int * param_4)
 * Address ranges: 1001b284-1001b378
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001b284(int param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_2c [10];
  
  piVar3 = FUN_100529f2(*(void **)(param_1 + 0x1304),local_2c,(void *)(param_1 + 0x1430),param_2,
                        param_3);
  piVar5 = param_4;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  if (param_4[1] == 0) {
    FUN_1005c2e0(param_1 + 0x11c0);
    FUN_10054c79(*(void **)(param_1 + 0x1300),*(uint *)(*(int *)(param_1 + 0x1304) + 0x940),
                 *(uint *)(*(int *)(param_1 + 0x1304) + 0x944));
    piVar3 = FUN_100529f2(*(void **)(param_1 + 0x1304),local_2c,(void *)(param_1 + 0x1430),param_2,
                          param_3);
    piVar5 = param_4;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    if (param_4[1] == 0) {
      iVar4 = *(int *)(param_1 + 0x1304);
      uVar1 = *(uint *)(iVar4 + 0x938);
      uVar2 = *(uint *)(iVar4 + 0x93c);
      FUN_10052215((void *)(iVar4 + 4),'\0');
      FUN_10054c79(*(void **)(param_1 + 0x1300),uVar1,uVar2);
      piVar3 = FUN_100529f2(*(void **)(param_1 + 0x1304),local_2c,(void *)(param_1 + 0x1430),param_2
                            ,param_3);
      piVar5 = param_4;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      }
    }
  }
  return *param_4 != 0;
}

