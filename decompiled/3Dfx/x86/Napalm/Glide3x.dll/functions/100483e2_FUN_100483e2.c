/*
 * FUN_100483e2 at 100483e2
 * uint __stdcall FUN_100483e2(int param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 100483e2-10048485
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100483e2(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x24) != 0;
  if (bVar5) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = param_2;
    param_4[3] = *(undefined4 *)(param_1 + 0x24);
  }
  uVar4 = (uint)bVar5;
  piVar1 = (int *)(param_1 + 0x2c);
  uVar3 = uVar4;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = uVar4 + 1;
    param_4[uVar4 * 4] = 0;
    param_4[uVar4 * 4 + 1] = *(undefined4 *)(param_1 + 0x24);
    param_4[uVar4 * 4 + 2] = *(undefined4 *)(param_1 + 0x20);
    param_4[uVar4 * 4 + 3] = *piVar1;
  }
  uVar4 = uVar3;
  if (*(int *)(param_1 + 0x28) != param_2) {
    uVar4 = uVar3 + 1;
    param_4[uVar3 * 4] = *(undefined4 *)(param_1 + 0x28);
    param_4[uVar3 * 4 + 1] = *(undefined4 *)(param_1 + 0x24);
    param_4[uVar3 * 4 + 2] = param_2;
    param_4[uVar3 * 4 + 3] = *piVar1;
  }
  uVar3 = uVar4;
  if (*piVar1 != param_3) {
    uVar3 = uVar4 + 1;
    param_4[uVar4 * 4] = 0;
    iVar2 = *piVar1;
    param_4[uVar4 * 4 + 2] = param_2;
    param_4[uVar4 * 4 + 1] = iVar2;
    param_4[uVar4 * 4 + 3] = param_3;
  }
  return uVar3;
}

