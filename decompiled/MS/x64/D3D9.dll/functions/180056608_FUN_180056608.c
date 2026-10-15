/*
 * FUN_180056608 at 180056608
 * longlong * __fastcall FUN_180056608(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180056608-180056697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180056608(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_30 = 1;
  local_38 = 0x100;
  plVar3 = (longlong *)0x0;
  local_48 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
  local_40 = local_48;
  uVar2 = FUN_18006b96c((uint *)(param_1 + 0x3c),(uint *)(param_1 + 0x50),param_2,
                        *(undefined1 *)(param_1 + 0x88),0x51,(longlong *)&local_48,param_4);
  puVar1 = local_48;
  if ((char)uVar2 != '\0') {
    plVar3 = FUN_1800f08f4((longlong)local_40 - (longlong)local_48,local_48);
  }
  FUN_1800fbcf0(puVar1);
  return plVar3;
}

