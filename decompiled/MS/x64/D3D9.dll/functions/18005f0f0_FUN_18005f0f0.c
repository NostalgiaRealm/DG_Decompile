/*
 * FUN_18005f0f0 at 18005f0f0
 * undefined __fastcall FUN_18005f0f0(longlong * param_1, longlong param_2)
 * Address ranges: 18005f0f0-18005f155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f0f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x48);
    param_1[0xd7c] = *(longlong *)(param_2 + 0x40);
    param_1[0xd7d] = lVar1;
    lVar1 = *(longlong *)(param_2 + 0x58);
    param_1[0xd7e] = *(longlong *)(param_2 + 0x50);
    param_1[0xd7f] = lVar1;
    lVar1 = *(longlong *)(param_2 + 0x68);
    param_1[0xd80] = *(longlong *)(param_2 + 0x60);
    param_1[0xd81] = lVar1;
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0x7fffffff;
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | -(uint)(param_2 != 0) & 0x80000000;
  return;
}

