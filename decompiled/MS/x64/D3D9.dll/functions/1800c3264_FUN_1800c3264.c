/*
 * FUN_1800c3264 at 1800c3264
 * undefined8 __fastcall FUN_1800c3264(longlong param_1, undefined8 * param_2, uint * param_3)
 * Address ranges: 1800c3264-1800c32a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c3264(longlong param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *(int *)(param_1 + 0x28) << 2;
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = uVar1;
    }
    else {
      if (*param_3 < uVar1) {
        return 0x8876086c;
      }
      FUN_1800fbec0(param_2,*(undefined8 **)(param_1 + 0x20),(ulonglong)uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

