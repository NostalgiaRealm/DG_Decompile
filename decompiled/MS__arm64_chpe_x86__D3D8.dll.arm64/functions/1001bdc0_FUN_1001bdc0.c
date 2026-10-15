/*
 * FUN_1001bdc0 at 1001bdc0
 * undefined FUN_1001bdc0(void)
 * Address ranges: 1001bdc0-1001be53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001bdc0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x6d);
  *puVar1 = 0;
  if (*(int *)(*param_2 + 0x34) == 1) {
    *puVar1 = 1;
    uVar3 = 0;
    if (*(uint *)(param_1 + 100) != 0) {
      do {
        uVar2 = 0;
        if (*(ushort *)(param_1 + 0x30) != 0) {
          do {
            if (*(int *)(*(int *)(param_2[uVar3 * 0x10 + uVar2] + 4) + 0xb0) != 1) {
              *puVar1 = 0;
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(ushort *)(param_1 + 0x30));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 100));
    }
  }
  return;
}

