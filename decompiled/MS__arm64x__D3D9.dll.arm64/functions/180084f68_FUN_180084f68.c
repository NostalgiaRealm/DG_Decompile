/*
 * FUN_180084f68 at 180084f68
 * undefined FUN_180084f68(void)
 * Address ranges: 180084f68-1800850bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180084f68(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_50 [8];
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 200))(param_1 + -0xe0);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      func_0x0001801bad48(local_50,*(undefined4 *)(param_1 + -0xb4));
      FUN_180082d80(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,local_50[0],0,0,0,3,0,0x30000,0,0,0,0);
      uVar4 = 0;
      if (*(int *)(param_1 + -0xac) != 0) {
        do {
          uVar3 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar3);
              uVar1 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              (*__imp_USER32_dll_SetRect)
                        (*(longlong *)(param_1 + -0x50) +
                         (ulonglong)(uVar3 + *(int *)(param_1 + -0xa4) * uVar4) * 0x28 + 0x18,0,0,
                         uVar1);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)(param_1 + -0xb0));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + -0xac));
      }
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)**(undefined8 **)(param_1 + -0xe0))(param_1 + -0xe0,param_2,param_3);
    }
  }
  return;
}

