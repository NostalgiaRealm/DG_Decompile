/*
 * FUN_1800b31b0 at 1800b31b0
 * undefined FUN_1800b31b0(void)
 * Address ranges: 1800b31b0-1800b3203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b31b0(float param_1,longlong param_2)

{
  uint uVar1;
  
  *(float *)(param_2 + 0xc4e0) = param_1;
  if ((*(uint *)(*(longlong *)(&DAT_00006898 + param_2) + 0x1c) >> 0x18 & 1) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x9eb);
    if (uVar1 < 9) {
      if (uVar1 != 0) {
        param_1 = (float)uVar1;
      }
    }
    else {
      param_1 = 8.0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001800b31fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x138))
              (param_1,*(longlong **)(param_2 + 0x28),uVar1 != 0);
    return;
  }
  return;
}

