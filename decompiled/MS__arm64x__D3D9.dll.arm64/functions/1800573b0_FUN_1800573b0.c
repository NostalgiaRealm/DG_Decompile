/*
 * FUN_1800573b0 at 1800573b0
 * undefined FUN_1800573b0(void)
 * Address ranges: 1800573b0-1800574ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800573b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if ((*(float *)(param_1 + 0x6930) != (float)*(uint *)((longlong)param_2 + 0x24)) ||
     (*(float *)(param_1 + 0x6934) != (float)*(uint *)(param_2 + 5))) {
    *(float *)(param_1 + 0x6930) = (float)*(uint *)((longlong)param_2 + 0x24);
    *(float *)(param_1 + 0x6934) = (float)*(uint *)(param_2 + 5);
    *(float *)(param_1 + 0xed0) = (float)*(uint *)((longlong)param_2 + 0x24);
    *(float *)(param_1 + 0xed4) = (float)*(uint *)(param_2 + 5);
    uVar1 = (**(code **)(*param_2 + 0x40))(param_2,0);
    *(float *)(param_1 + 0xf00) = (float)uVar1;
    uVar1 = (**(code **)(*param_2 + 0x48))(param_2,0);
    *(float *)(param_1 + 0xf04) = (float)uVar1;
    FUN_180054430(param_1);
    *(undefined1 *)(param_1 + 0xf68e) = 1;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  iVar2 = (**(code **)(*param_2 + 0x40))(param_2,0);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2,0);
  if ((iVar2 != *(int *)(param_1 + 0x7598)) || (bVar4 = 0, iVar2 != *(int *)(param_1 + 0x759c))) {
    bVar4 = 1;
  }
  *(int *)(param_1 + 0x7598) = iVar2;
  *(undefined4 *)(param_1 + 0x759c) = uVar3;
  *(byte *)(param_1 + 0x7665) = *(byte *)(param_1 + 0x7665) | bVar4;
  *(byte *)(param_1 + 0xf6c1) = *(byte *)(param_1 + 0xf6c1) | bVar4;
  return;
}

