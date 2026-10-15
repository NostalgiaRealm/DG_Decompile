/*
 * FUN_180084320 at 180084320
 * undefined FUN_180084320(void)
 * Address ranges: 180084320-18008443b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180084320(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_40 [8];
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    func_0x0001801bad48(local_40,*(undefined4 *)(param_1 + 0x2c));
    FUN_180082d80(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,local_40[0],0,0,
                  0,3,0,0x30000,0,0,0,0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            FUN_1800a2b98(param_1,*(undefined4 *)(param_1 + 0x28),uVar2);
            uVar1 = FUN_1800a2b50(param_1,*(undefined4 *)(param_1 + 0x24));
            (*__imp_USER32_dll_SetRect)
                      (*(longlong *)(param_1 + 0x90) +
                       (ulonglong)(uVar2 + *(int *)(param_1 + 0x3c) * uVar3) * 0x28 + 0x18,0,0,uVar1
                      );
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + 0x30));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x34));
    }
  }
  return *(longlong *)(param_1 + 0xb8) != 0;
}

