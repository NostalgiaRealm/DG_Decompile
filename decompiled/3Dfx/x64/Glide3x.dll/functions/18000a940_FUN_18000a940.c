/*
 * FUN_18000a940 at 18000a940
 * undefined __fastcall FUN_18000a940(longlong * param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 18000a940-18000a9d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a940(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  if (*(int *)((longlong)param_1 + lVar1 * 4 + 0x2a5c) != 0) {
    (**(code **)(*param_1 + 0x2e0))();
  }
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5be) = param_3 >> 0x18;
  *(uint *)(lVar1 * 0x1a0 + 0x2df4 + (longlong)param_1) = param_3 >> 0x10 & 0xff;
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5bf) = param_3 >> 8 & 0xff;
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5c0) = param_4 >> 0x18;
  *(uint *)(lVar1 * 0x1a0 + 0x2e04 + (longlong)param_1) = param_4 >> 0x10 & 0xff;
  *(uint *)(param_1 + lVar1 * 0x34 + 0x5c1) = param_4 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

