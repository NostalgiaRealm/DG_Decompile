/*
 * FUN_18000bcbc at 18000bcbc
 * undefined8 __fastcall FUN_18000bcbc(longlong param_1)
 * Address ranges: 18000bcbc-18000bdc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000bcbc(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  plVar2 = FUN_180048408(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                         (ulonglong)*(uint *)(param_1 + 0x3338),0xd50,0,'\x01');
  *(longlong **)(param_1 + 0x3360) = plVar2;
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    puVar3 = FUN_180044a2c(-(ulonglong)(*(longlong *)(param_1 + 0x3330) != 0) &
                           *(longlong *)(param_1 + 0x3330) + 0x6d0U,
                           *(undefined4 *)(param_1 + 0x3338),0,0x670,0);
    *(undefined8 **)(param_1 + 0x3358) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = FUN_18004c098(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                            *(longlong **)(param_1 + 0x3360),
                            (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,0xd50,
                            (undefined8 *)&DAT_18006c3b0,'\x01','\0');
      if (bVar1) {
        return CONCAT71(extraout_var,1);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x3358);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_180044964(puVar3);
        FUN_180060ac0(puVar3);
      }
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x10))();
  }
  return uVar4 & 0xffffffffffffff00;
}

