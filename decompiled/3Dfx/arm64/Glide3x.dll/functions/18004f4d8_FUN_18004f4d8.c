/*
 * FUN_18004f4d8 at 18004f4d8
 * undefined __cdecl FUN_18004f4d8(longlong param_1, ulonglong param_2, longlong param_3)
 * Address ranges: 18004f4d8-18004f4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f4d8(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x68)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x150))
              (*(longlong **)(param_1 + 0x688),param_2 & 0xffffffff,param_3);
    *(longlong *)(lVar1 + 0x68) = param_3;
  }
  return;
}

