/*
 * FUN_1800e9d08 at 1800e9d08
 * undefined FUN_1800e9d08(void)
 * Address ranges: 1800e9d08-1800e9d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9d08(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x168)) {
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x148))
              (*(longlong **)(param_1 + 0x688),param_2 & 0xffffffff,param_3);
    *(longlong *)(lVar1 + 0x168) = param_3;
  }
  return;
}

