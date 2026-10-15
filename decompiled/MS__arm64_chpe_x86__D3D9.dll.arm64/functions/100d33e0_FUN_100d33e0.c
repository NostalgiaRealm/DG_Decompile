/*
 * FUN_100d33e0 at 100d33e0
 * undefined FUN_100d33e0(void)
 * Address ranges: 100d33e0-100d344b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d33e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (1 < *(uint *)(param_1 + 0xd98)) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_2 + 8;
    }
    if (*(uint *)(param_1 + 0xd98) != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0xd94) + uVar2 * 4) == iVar1) {
          if (uVar2 == 0xffffffff) {
            return 0;
          }
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xd98));
    }
  }
  return 0;
}

