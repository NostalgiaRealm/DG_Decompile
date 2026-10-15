/*
 * FUN_1001451e at 1001451e
 * undefined4 __fastcall FUN_1001451e(void * param_1)
 * Address ranges: 1001451e-100145f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001451e(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_XMM0_Da;
  
  FUN_100ada8e((int *)((int)param_1 + 0x22c),0,0x60);
  piVar1 = FUN_100ada8e((int *)((int)param_1 + 0x28c),0,0x2b8);
  if (*(int *)((int)param_1 + 4) != 0) {
    uVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 4 + uVar3 * 8);
      *(int **)((int)param_1 + uVar3 * 4 + 0x28c) = piVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xae);
  }
  uVar3 = 1;
  do {
    while ((&UNK_100b09a8)[uVar3] == '\0') {
LAB_10014591:
      uVar3 = uVar3 + 1;
      if (0xad < uVar3) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
    }
    if (uVar3 == 0x1a) {
      piVar1 = *(int **)((int)param_1 + 0x14);
      uVar2 = FUN_10013a14(param_1,*(undefined4 *)((int)param_1 + 0x2f4));
      piVar1 = (int *)(**(code **)(*piVar1 + 0x48))(0x1a,uVar2);
    }
    else {
      if (uVar3 != 0xa4) {
        piVar1 = (int *)(**(code **)(**(int **)((int)param_1 + 0x14) + 0x48))
                                  (uVar3,*(undefined4 *)((int)param_1 + uVar3 * 4 + 0x28c));
        goto LAB_10014591;
      }
      FUN_10013a3b();
      piVar1 = (int *)(**(code **)(**(int **)((int)param_1 + 0x14) + 0x9c))
                                (in_XMM0_Da,*(int *)(*(int *)((int)param_1 + 0xc) + 0x94f) != 0);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

