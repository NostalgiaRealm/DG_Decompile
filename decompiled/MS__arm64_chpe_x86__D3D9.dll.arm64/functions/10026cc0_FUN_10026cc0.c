/*
 * FUN_10026cc0 at 10026cc0
 * undefined FUN_10026cc0(void)
 * Address ranges: 10026cc0-10026dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026cc0(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 0x3b4);
  FUN_10132260(*(undefined4 *)(*(int *)(*piVar1 + param_2 * 4) + 4),0);
  iVar4 = *(int *)(*piVar1 + param_2 * 4);
  if (iVar4 != 0) {
    FUN_101322d0(*(undefined4 *)(iVar4 + 0x4aac));
    *(undefined8 *)(iVar4 + 0x4aac) = 0;
    *(undefined8 *)(iVar4 + 0x4ab4) = 0;
    FUN_10132260(iVar4,0xac54);
  }
  if (param_2 == *(int *)(param_1 + 0x3b8) - 1U) {
    puVar2 = (uint *)(param_1 + 0x3b8);
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

