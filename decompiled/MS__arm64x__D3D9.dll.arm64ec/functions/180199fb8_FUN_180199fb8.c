/*
 * FUN_180199fb8 at 180199fb8
 * undefined FUN_180199fb8(void)
 * Address ranges: 180199fb8-18019a0cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180199fb8(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_40 [8];
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    FUN_1801bad48(local_40,*(undefined4 *)(param_1 + 0x2c));
    FUN_180198608(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_40[0],0,0,
                  0,3,0,0x30000,0,0,0,0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar2);
            uVar1 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
            thunk_FUN_180223c20(*(longlong *)(param_1 + 0x90) +
                                (ulonglong)(uVar2 + *(int *)(param_1 + 0x3c) * uVar3) * 0x28 + 0x18,
                                0,0,uVar1);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + 0x30));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x34));
    }
  }
  return *(longlong *)(param_1 + 0xb8) != 0;
}

