/*
 * FUN_10021380 at 10021380
 * undefined FUN_10021380(void)
 * Address ranges: 10021380-10021423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021380(int param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined1 *)(param_1 + 0x6d);
  *puVar1 = 0;
  if (*(int *)(*param_2 + 0x34) == 1) {
    *puVar1 = 1;
    uVar4 = 0;
    uVar3 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar3 = 1;
    }
    if (*(uint *)(param_1 + 100) != 0) {
      do {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            if (*(int *)(*(int *)(param_2[uVar4 * 0x10 + uVar2] + 4) + 0xb0) != 1) {
              *puVar1 = 0;
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 100));
    }
  }
  return;
}

