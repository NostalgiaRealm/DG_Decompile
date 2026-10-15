/*
 * FUN_10020d70 at 10020d70
 * undefined FUN_10020d70(void)
 * Address ranges: 10020d70-10020e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020d70(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 0x210);
  FUN_100fec90(*(undefined4 *)(*(int *)(*piVar1 + param_2 * 4) + 4),0);
  iVar4 = *(int *)(*piVar1 + param_2 * 4);
  if (iVar4 != 0) {
    FUN_100fed00(*(undefined4 *)(iVar4 + 0x499c));
    *(undefined8 *)(iVar4 + 0x499c) = 0;
    *(undefined8 *)(iVar4 + 0x49a4) = 0;
    FUN_100fec90(iVar4,0x93a4);
  }
  if (param_2 == *(int *)(param_1 + 0x214) - 1U) {
    puVar2 = (uint *)(param_1 + 0x214);
    uVar5 = *puVar2;
    if (param_2 < uVar5) {
      param_2 = param_2 + 1;
      if (param_2 < uVar5) {
        do {
          puVar3 = (undefined4 *)(*piVar1 + param_2 * 4);
          param_2 = param_2 + 1;
          puVar3[-1] = *puVar3;
          uVar5 = *puVar2;
        } while (param_2 < uVar5);
      }
      *puVar2 = uVar5 - 1;
    }
  }
  else {
    *(undefined4 *)(*piVar1 + param_2 * 4) = 0;
  }
  return;
}

