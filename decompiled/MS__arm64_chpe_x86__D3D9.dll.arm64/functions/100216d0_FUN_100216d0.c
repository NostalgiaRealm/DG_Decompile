/*
 * FUN_100216d0 at 100216d0
 * undefined FUN_100216d0(void)
 * Address ranges: 100216d0-1002179b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100216d0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = (int *)(param_1 + 0x48);
  if (*piVar2 != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar3 = 1;
    }
    uVar4 = 0;
    if (*(uint *)(param_1 + 100) != 0) {
      do {
        uVar5 = 0;
        if (uVar3 != 0) {
          do {
            iVar1 = uVar5 * 4;
            uVar5 = uVar5 + 1;
            iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar1 + uVar4 * 0x40) + 4);
            *(undefined4 *)(iVar1 + 0xb4) = 0;
            *(undefined4 *)(iVar1 + 0x20) = 0;
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x28;
          } while (uVar5 < uVar3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 100));
    }
    if (*piVar2 != 0) {
      FUN_10132440(*(undefined4 *)(*piVar2 + -4));
    }
    *piVar2 = 0;
  }
  return;
}

