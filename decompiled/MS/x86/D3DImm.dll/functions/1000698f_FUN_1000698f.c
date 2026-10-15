/*
 * FUN_1000698f at 1000698f
 * undefined4 __fastcall FUN_1000698f(void * param_1)
 * Address ranges: 1000698f-10006a26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000698f(void *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_1005c9cc((int *)((int)param_1 + 0x230),0,0x60);
  piVar2 = FUN_1005c9cc((int *)((int)param_1 + 0x290),0,0x264);
  if (*(int *)((int)param_1 + 4) != 0) {
    uVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)((int)param_1 + 4) + 4 + uVar4 * 8);
      *(int **)((int)param_1 + uVar4 * 4 + 0x290) = piVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x99);
  }
  uVar4 = 1;
LAB_100069df:
  do {
    if ((&UNK_1005dd28)[uVar4] != '\0') {
      pcVar1 = *(code **)(**(int **)((int)param_1 + 0x14) + 0x50);
      if (uVar4 == 0x1a) {
        uVar3 = FUN_10005ef9(param_1,*(undefined4 *)((int)param_1 + uVar4 * 4 + 0x290));
        piVar2 = (int *)(*pcVar1)(0x1a,uVar3);
        uVar4 = 0x1b;
        goto LAB_100069df;
      }
      piVar2 = (int *)(*pcVar1)(uVar4);
    }
    uVar4 = uVar4 + 1;
    if (0x98 < uVar4) {
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  } while( true );
}

