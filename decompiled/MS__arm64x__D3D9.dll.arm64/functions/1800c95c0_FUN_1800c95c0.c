/*
 * FUN_1800c95c0 at 1800c95c0
 * undefined FUN_1800c95c0(void)
 * Address ranges: 1800c95c0-1800c9613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c95c0(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *(int *)(param_1 + 0x28) << 2;
    if (param_2 == 0) {
      *param_3 = uVar1;
    }
    else {
      if (*param_3 < uVar1) {
        return 0x8876086c;
      }
      thunk_FUN_180001218(param_2,*(undefined8 *)(param_1 + 0x20),uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

