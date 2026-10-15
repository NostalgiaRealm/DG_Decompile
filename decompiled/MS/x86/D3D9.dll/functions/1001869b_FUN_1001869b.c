/*
 * FUN_1001869b at 1001869b
 * undefined4 __fastcall FUN_1001869b(void * param_1)
 * Address ranges: 1001869b-10018732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001869b(void *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_100cfed0((int *)((int)param_1 + 0x3d0),0,0x60);
  piVar2 = FUN_100cfed0((int *)((int)param_1 + 0x430),0,0x348);
  if (*(int *)((int)param_1 + 4) != 0) {
    uVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)((int)param_1 + 4) + 4 + uVar4 * 8);
      *(int **)((int)param_1 + uVar4 * 4 + 0x430) = piVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xd2);
  }
  uVar4 = 1;
LAB_100186eb:
  do {
    if ((&UNK_100d2e08)[uVar4] != '\0') {
      pcVar1 = *(code **)(**(int **)((int)param_1 + 0x14) + 0x48);
      if (uVar4 == 0x1a) {
        uVar3 = FUN_10017a97(param_1,*(undefined4 *)((int)param_1 + uVar4 * 4 + 0x430));
        piVar2 = (int *)(*pcVar1)(0x1a,uVar3);
        uVar4 = 0x1b;
        goto LAB_100186eb;
      }
      piVar2 = (int *)(*pcVar1)(uVar4);
    }
    uVar4 = uVar4 + 1;
    if (0xd1 < uVar4) {
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  } while( true );
}

