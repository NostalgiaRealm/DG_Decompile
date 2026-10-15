/*
 * FUN_18001c908 at 18001c908
 * undefined __cdecl FUN_18001c908(longlong param_1)
 * Address ranges: 18001c908-18001ca33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c908(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x2beb) != '\0') {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x3220 + lVar1 * 0x10) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x3228 + lVar1 * 0x10) + 0x10))();
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x20);
    (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
  }
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x31f8));
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x31f0));
  (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31d8) + 0x10))();
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x3200));
  (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x10))();
  FUN_180050888(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),
                *(longlong **)(param_1 + 0x3210));
  (**(code **)(**(longlong **)(param_1 + 0x3208) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31d0) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x31c8) + 0x10))();
  return;
}

