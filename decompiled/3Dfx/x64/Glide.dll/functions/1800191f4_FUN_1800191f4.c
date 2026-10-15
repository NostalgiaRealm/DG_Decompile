/*
 * FUN_1800191f4 at 1800191f4
 * undefined8 __fastcall FUN_1800191f4(longlong param_1)
 * Address ranges: 1800191f4-1800192fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800191f4(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  plVar2 = FUN_1800462a4(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                         (ulonglong)*(uint *)(param_1 + 0x31b8),0xd50,0,'\x01');
  *(longlong **)(param_1 + 0x31e0) = plVar2;
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    puVar3 = FUN_1800428c8(-(ulonglong)(*(longlong *)(param_1 + 0x31b0) != 0) &
                           *(longlong *)(param_1 + 0x31b0) + 0x6d0U,
                           *(undefined4 *)(param_1 + 0x31b8),0,0x590,0);
    *(undefined8 **)(param_1 + 0x31d8) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = FUN_180049f34(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                            *(longlong **)(param_1 + 0x31e0),
                            (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,0xd50,
                            (undefined8 *)&DAT_18006b500,'\x01','\0');
      if (bVar1) {
        return CONCAT71(extraout_var,1);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x31d8);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_180042800(puVar3);
        FUN_18005dbc0(puVar3);
      }
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x10))();
  }
  return uVar4 & 0xffffffffffffff00;
}

