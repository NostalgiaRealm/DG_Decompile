/*
 * FUN_180021558 at 180021558
 * undefined8 __fastcall FUN_180021558(longlong param_1)
 * Address ranges: 180021558-18002165f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_180021558(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_1028 [512];
  undefined8 uStack_28;
  
  uStack_28 = 0x180021567;
  lVar1 = *(longlong *)(param_1 + 0x3028);
  lVar2 = *(longlong *)(lVar1 + 0x3340);
  plVar4 = FUN_180048408(*(longlong *)(lVar1 + 0x3330) + 0x6d0,(ulonglong)*(uint *)(lVar1 + 0x3338),
                         0xf000,0,'\0');
  *(longlong **)(param_1 + 0x3038) = plVar4;
  uVar6 = 0;
  do {
    FUN_180027b9c((undefined1 *)local_1028,uVar6);
    bVar3 = FUN_18004c098(*(longlong *)(lVar2 + 0x1518),*(longlong **)(param_1 + 0x3038),
                          (longlong *)(lVar2 + 0x16d0),uVar6 * 0x1000,uVar6 * 0x1000 + 0x1000,
                          local_1028,'\0','\0');
    if (!bVar3) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xf);
  uVar5 = FUN_180049e38(*(longlong *)(lVar2 + 0x1518) + 8,'\0');
  if (uVar6 == 0xf) {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x3038);
    if (plVar4 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3330) + 0x1b500),
                    (ulonglong)plVar4,'\x01');
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}

