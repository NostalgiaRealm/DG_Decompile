/*
 * FUN_180016318 at 180016318
 * undefined __fastcall FUN_180016318(longlong param_1)
 * Address ranges: 180016318-1800163a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016318(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    FUN_180043f10((longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x19d8),
                  *(longlong *)(param_1 + 0xc10 + lVar2 * 8));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x19d8);
    FUN_180043f10(plVar1,*(longlong *)(param_1 + 0xb58 + lVar3 * 8));
    lVar2 = lVar3 + 1;
  } while (lVar3 + 1 != 0x17);
  FUN_180048104(plVar1,(int)lVar3 - 0x13,param_1 + 0xc10);
  FUN_180048104(plVar1,0x17,param_1 + 0xb58);
  return;
}

