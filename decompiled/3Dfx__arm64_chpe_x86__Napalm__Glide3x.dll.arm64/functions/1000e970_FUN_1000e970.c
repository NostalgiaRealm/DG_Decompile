/*
 * FUN_1000e970 at 1000e970
 * undefined FUN_1000e970(void)
 * Address ranges: 1000e970-1000e9fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e970(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)(param_1 + param_3 * 0x10);
  *puVar1 = param_4;
  puVar1[3] = param_2 + (uint)(byte)(&DAT_1009fe70)[param_3] * 4;
  uVar4 = *(uint *)(param_1 + 0xe0);
  uVar3 = *(ushort *)(&DAT_1009fe40 + param_3 * 2);
  uVar2 = uVar3 & uVar4;
  if ((param_5 & 1) == 0) {
    if (uVar2 == 0) {
      return;
    }
    uVar4 = uVar4 & (uVar3 ^ 0xffffffff);
    iVar5 = *(int *)(param_1 + 0xe8) + puVar1[2] * -4;
  }
  else {
    if (uVar2 != 0) {
      return;
    }
    uVar4 = uVar3 | uVar4;
    iVar5 = *(int *)(param_1 + 0xe8) + puVar1[2] * 4;
  }
  *(uint *)(param_1 + 0xe0) = uVar4;
  *(int *)(param_1 + 0xe8) = iVar5;
  return;
}

