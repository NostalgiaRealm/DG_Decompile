/*
 * FUN_10068dc0 at 10068dc0
 * undefined FUN_10068dc0(void)
 * Address ranges: 10068dc0-10068eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10068dc0(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_2 + 0x24);
  bVar5 = *piVar1 != 0;
  if (bVar5) {
    *param_5 = 0;
    *(int *)(param_5 + 1) = param_3;
    *(int *)((int)param_5 + 0xc) = *piVar1;
  }
  uVar6 = (uint)bVar5;
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar3 = param_5 + (uint)bVar5 * 2;
    uVar6 = bVar5 + 1;
    *(undefined4 *)puVar3 = 0;
    *(int *)((int)puVar3 + 4) = *piVar1;
    *(int *)(puVar3 + 1) = *(int *)(param_2 + 0x20);
    *(undefined4 *)((int)puVar3 + 0xc) = *(undefined4 *)(param_2 + 0x2c);
  }
  piVar2 = (int *)(param_2 + 0x2c);
  if (*(int *)(param_2 + 0x28) != param_3) {
    piVar4 = (int *)(param_5 + uVar6 * 2);
    uVar6 = uVar6 + 1;
    *piVar4 = *(int *)(param_2 + 0x28);
    piVar4[1] = *piVar1;
    piVar4[2] = param_3;
    piVar4[3] = *piVar2;
  }
  if (*piVar2 != param_4) {
    param_5 = param_5 + uVar6 * 2;
    uVar6 = uVar6 + 1;
    *(undefined4 *)param_5 = 0;
    *(int *)((int)param_5 + 4) = *piVar2;
    *(int *)(param_5 + 1) = param_3;
    *(int *)((int)param_5 + 0xc) = param_4;
  }
  return uVar6;
}

