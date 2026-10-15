/*
 * FUN_18008ec70 at 18008ec70
 * ulonglong __fastcall FUN_18008ec70(longlong param_1, int param_2, int param_3)
 * Address ranges: 18008ec70-18008ed10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008ec70(longlong param_1,int param_2,int param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  LPRECT lprcDst;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2);
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lprcDst = (LPRECT)(*(longlong *)(param_1 + 0x148) + uVar1 * 0x28 + 0x18);
      UnionRect(lprcDst,lprcDst,(RECT *)(*(longlong *)(param_1 + 0xd0) + 0x18 + uVar1 * 0x28));
    }
    uVar1 = FUN_18008e9f0(param_1,*(longlong **)(param_1 + 0x78),*(longlong **)(param_1 + 0xb8),
                          param_2,param_3,
                          (RECT *)(*(longlong *)(param_1 + 0xd0) + uVar1 * 0x28 + 0x18));
  }
  return uVar1;
}

