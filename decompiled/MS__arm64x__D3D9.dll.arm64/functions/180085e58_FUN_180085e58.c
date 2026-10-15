/*
 * FUN_180085e58 at 180085e58
 * undefined FUN_180085e58(void)
 * Address ranges: 180085e58-180085eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085e58(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + -0xa8) != 0) && (*(char *)(param_1 + -0x94) != param_2)) {
    *(char *)(param_1 + -0x94) = param_2;
    uVar1 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        local_20 = 0;
        local_18 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),0);
        local_14 = FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8));
        (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x18))
                  (param_1 + -0xe0,*(int *)(param_1 + -0xa4) * uVar1,&local_20);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + -0xac));
    }
  }
  return;
}

