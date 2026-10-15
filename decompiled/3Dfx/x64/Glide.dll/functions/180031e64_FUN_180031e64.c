/*
 * FUN_180031e64 at 180031e64
 * undefined8 __fastcall FUN_180031e64(longlong param_1)
 * Address ranges: 180031e64-180031f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180031e64(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint7 extraout_var;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 uVar3;
  longlong lVar4;
  
  cVar2 = FUN_18004ca6c(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),DAT_18006c870,
                        0x17,0x18006c318,(LPCWSTR)(param_1 + 0x5c8));
  uVar3 = extraout_var;
  if (cVar2 != '\0') {
    cVar2 = FUN_18004cbdc(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                          DAT_18006c870,3,0x18006c398,0x18006c368,(LPCWSTR)(param_1 + 0x680),
                          param_1 + 0x698);
    if (cVar2 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    lVar4 = 0;
    uVar3 = extraout_var_00;
    do {
      plVar1 = *(longlong **)(param_1 + 0x5c8 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_1 + 0x5c8 + lVar4 * 8) = 0;
        uVar3 = extraout_var_01;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x17);
  }
  return (ulonglong)uVar3 << 8;
}

