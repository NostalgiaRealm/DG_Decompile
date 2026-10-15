/*
 * FUN_180025530 at 180025530
 * bool __cdecl FUN_180025530(void)
 * Address ranges: 180025530-180025607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180025530(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong extraout_x15;
  uint uVar5;
  longlong lVar6;
  
  lVar2 = FUN_180001380();
  lVar4 = *(longlong *)(lVar2 + 0x3028);
  lVar6 = *(longlong *)(lVar4 + 0x3340);
  plVar3 = FUN_18004cc18(*(longlong *)(lVar4 + 0x3330) + 0x6d0,(ulonglong)*(uint *)(lVar4 + 0x3338),
                         0xf000,0,0);
  uVar5 = 0;
  *(longlong **)(lVar2 + 0x3038) = plVar3;
  do {
    FUN_18002da98(&stack0xffffffffffffffd0 + extraout_x15 * -0x10,uVar5);
    uVar1 = FUN_180050fe0(*(ulonglong *)(lVar6 + 0x1518),*(longlong **)(lVar2 + 0x3038),
                          (longlong *)(lVar6 + 0x16d0),uVar5 * 0x1000,uVar5 * 0x1000 + 0x1000,
                          (undefined8 *)(&stack0xffffffffffffffd0 + extraout_x15 * -0x10),0,'\0');
    if ((uVar1 & 1) == 0) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  FUN_18004e830(*(longlong *)(lVar6 + 0x1518) + 8,0);
  if (uVar5 != 0xf) {
    FUN_18004c928(*(longlong *)(*(longlong *)(lVar2 + 0x3028) + 0x3330),
                  *(longlong **)(lVar2 + 0x3038));
  }
  return uVar5 == 0xf;
}

