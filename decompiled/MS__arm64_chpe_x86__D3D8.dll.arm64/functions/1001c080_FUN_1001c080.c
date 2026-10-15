/*
 * FUN_1001c080 at 1001c080
 * undefined FUN_1001c080(void)
 * Address ranges: 1001c080-1001c13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c080(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = (int *)(param_1 + 0x48);
  if (*piVar1 != 0) {
    uVar2 = *(ushort *)(param_1 + 0x30);
    uVar4 = 0;
    if (*(uint *)(param_1 + 100) != 0) {
      do {
        uVar5 = 0;
        if (uVar2 != 0) {
          do {
            iVar3 = uVar5 * 4;
            uVar5 = uVar5 + 1;
            iVar3 = *(int *)(*(int *)(iVar3 + uVar4 * 0x40 + *(int *)(param_1 + 0x38)) + 4);
            *(undefined4 *)(iVar3 + 0xb4) = 0;
            *(undefined4 *)(iVar3 + 0x20) = 0;
            *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 0x28;
          } while (uVar5 < uVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 100));
    }
    if (*piVar1 != 0) {
      FUN_100fed20(*(undefined4 *)(*piVar1 + -4));
    }
    *piVar1 = 0;
  }
  return;
}

