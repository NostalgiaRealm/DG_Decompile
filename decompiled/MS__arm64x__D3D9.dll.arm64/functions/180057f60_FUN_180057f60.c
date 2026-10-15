/*
 * FUN_180057f60 at 180057f60
 * undefined FUN_180057f60(void)
 * Address ranges: 180057f60-180057fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057f60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x40);
    param_1[0xd7d] = *(longlong *)(param_2 + 0x48);
    param_1[0xd7c] = lVar1;
    lVar1 = *(longlong *)(param_2 + 0x50);
    param_1[0xd7f] = *(longlong *)(param_2 + 0x58);
    param_1[0xd7e] = lVar1;
    lVar1 = *(longlong *)(param_2 + 0x60);
    param_1[0xd81] = *(longlong *)(param_2 + 0x68);
    param_1[0xd80] = lVar1;
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0x7fffffff | (uint)(param_2 != 0) << 0x1f;
  return;
}

