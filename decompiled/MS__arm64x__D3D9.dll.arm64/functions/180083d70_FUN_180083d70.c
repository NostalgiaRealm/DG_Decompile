/*
 * FUN_180083d70 at 180083d70
 * undefined FUN_180083d70(void)
 * Address ranges: 180083d70-180083da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083d70(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_180083b10(param_1,*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x78),param_2,
                  param_3,*(longlong *)(param_1 + 0x90) +
                          (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 +
                          0x18);
    return;
  }
  return;
}

