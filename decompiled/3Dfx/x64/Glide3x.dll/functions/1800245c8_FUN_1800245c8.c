/*
 * FUN_1800245c8 at 1800245c8
 * undefined8 __fastcall FUN_1800245c8(longlong param_1)
 * Address ranges: 1800245c8-1800246af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800245c8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint7 extraout_var;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 uVar3;
  longlong lVar4;
  
  cVar2 = FUN_18004ebd0(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),DAT_18006d9d0,
                        0x17,0x18006d1f0,(LPCWSTR)(param_1 + 0xbc8));
  uVar3 = extraout_var;
  if (cVar2 != '\0') {
    cVar2 = FUN_18004ed40(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                          DAT_18006d9d0,3,0x18006d270,0x18006d240,(LPCWSTR)(param_1 + 0xc80),
                          param_1 + 0xc98);
    if (cVar2 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    lVar4 = 0;
    uVar3 = extraout_var_00;
    do {
      plVar1 = *(longlong **)(param_1 + 0xbc8 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0xbc8 + lVar4 * 8) = 0;
        uVar3 = extraout_var_01;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x17);
  }
  return (ulonglong)uVar3 << 8;
}

