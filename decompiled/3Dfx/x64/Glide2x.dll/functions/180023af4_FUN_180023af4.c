/*
 * FUN_180023af4 at 180023af4
 * undefined __fastcall FUN_180023af4(longlong param_1)
 * Address ranges: 180023af4-180023b7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023af4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    FUN_180041904((longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8),
                  *(longlong *)(param_1 + 0x650 + lVar2 * 8));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8);
    FUN_180041904(plVar1,*(longlong *)(param_1 + 0x598 + lVar3 * 8));
    lVar2 = lVar3 + 1;
  } while (lVar3 + 1 != 0x17);
  FUN_180045af8(plVar1,(int)lVar3 - 0x13,param_1 + 0x650);
  FUN_180045af8(plVar1,0x17,param_1 + 0x598);
  return;
}

