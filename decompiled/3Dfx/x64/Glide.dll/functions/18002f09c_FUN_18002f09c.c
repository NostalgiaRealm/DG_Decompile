/*
 * FUN_18002f09c at 18002f09c
 * undefined8 __fastcall FUN_18002f09c(longlong param_1)
 * Address ranges: 18002f09c-18002f1a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_18002f09c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_1028 [512];
  undefined8 uStack_28;
  
  uStack_28 = 0x18002f0ab;
  lVar1 = *(longlong *)(param_1 + 0x3028);
  lVar2 = *(longlong *)(lVar1 + 0x31c0);
  plVar4 = FUN_1800462a4(*(longlong *)(lVar1 + 0x31b0) + 0x6d0,(ulonglong)*(uint *)(lVar1 + 0x31b8),
                         0xf000,0,'\0');
  *(longlong **)(param_1 + 0x3038) = plVar4;
  uVar6 = 0;
  do {
    FUN_1800353f8((undefined1 *)local_1028,uVar6);
    bVar3 = FUN_180049f34(*(longlong *)(lVar2 + 0x1518),*(longlong **)(param_1 + 0x3038),
                          (longlong *)(lVar2 + 0x16d0),uVar6 * 0x1000,uVar6 * 0x1000 + 0x1000,
                          local_1028,'\0','\0');
    if (!bVar3) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xf);
  uVar5 = FUN_180047cd4(*(longlong *)(lVar2 + 0x1518) + 8,'\0');
  if (uVar6 == 0xf) {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x3038);
    if (plVar4 != (longlong *)0x0) {
      FUN_180043530(*(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0) + 0x1b500),
                    (ulonglong)plVar4,'\x01');
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}

