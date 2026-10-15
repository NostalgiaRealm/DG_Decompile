/*
 * FUN_180021a10 at 180021a10
 * undefined8 __fastcall FUN_180021a10(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180021a10-180021ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180021a10(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_38;
  longlong local_30;
  longlong local_20;
  longlong local_18;
  
  plVar1 = FUN_180044ae8(*(longlong *)(param_1 + 0x2c0) + 0x40,&local_38,param_2 + 1,0,0);
  if (local_30 != 0) {
    FUN_180044ae8(*(longlong *)(param_1 + 0x2c8) + 0x40,&local_20,param_3 + 1,0,0);
    if (local_18 != 0) {
      uVar2 = FUN_18001275c(param_1,local_30,local_18,param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    plVar1 = *(longlong **)(param_1 + 0x2c0);
    if (*(int *)((longlong)plVar1 + 0x34) != 0) {
      *(undefined4 *)((longlong)plVar1 + 0x34) = 0;
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}

