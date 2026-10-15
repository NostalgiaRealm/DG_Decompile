/*
 * FUN_180025738 at 180025738
 * undefined __cdecl FUN_180025738(longlong param_1)
 * Address ranges: 180025738-180025793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025738(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = FUN_180048418((longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 0x19d8),
                          *(longlong *)(param_1 + 0x2a0 + lVar2 * 8));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2);
  FUN_18004cac0(uVar1,2,param_1 + 0x2a0);
  return;
}

