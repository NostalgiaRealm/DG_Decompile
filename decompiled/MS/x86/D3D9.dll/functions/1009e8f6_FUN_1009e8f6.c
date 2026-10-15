/*
 * FUN_1009e8f6 at 1009e8f6
 * undefined4 __stdcall FUN_1009e8f6(int param_1, undefined4 * param_2, uint * param_3)
 * Address ranges: 1009e8f6-1009e934
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e8f6(int param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *(int *)(param_1 + 0x18) << 2;
    if (param_2 == (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
    else {
      if (*param_3 < uVar1) {
        return 0x8876086c;
      }
      FUN_100cff00(param_2,*(undefined4 **)(param_1 + 0x14),uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

