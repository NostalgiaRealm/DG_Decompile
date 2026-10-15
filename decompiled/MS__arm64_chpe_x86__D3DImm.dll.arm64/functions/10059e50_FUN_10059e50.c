/*
 * FUN_10059e50 at 10059e50
 * undefined FUN_10059e50(void)
 * Address ranges: 10059e50-10059ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059e50(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      uVar2 = (uint)*(byte *)(param_2 + 0x9c + uVar5);
      uVar4 = (uint)*(byte *)(uVar2 + 0x1009e6f0);
      piVar1 = (int *)(param_3 + uVar4 * 8);
      if (uVar2 == 1) {
        iVar3 = *piVar1 + (uint)*(byte *)(param_2 + 0x15) * 4;
      }
      else {
        iVar3 = *piVar1;
      }
      *(int *)(param_4 + uVar5 * 8) = iVar3;
      iVar3 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(param_4 + 4 + iVar3) = *(undefined4 *)(param_3 + 4 + uVar4 * 8);
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}

