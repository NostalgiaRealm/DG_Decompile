/*
 * FUN_18002f074 at 18002f074
 * undefined8 __fastcall FUN_18002f074(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18002f074-18002f126
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002f074(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_38;
  longlong local_30;
  longlong local_20;
  longlong local_18;
  
  plVar1 = FUN_1800424dc(*(longlong *)(param_1 + 0x90) + 0x40,&local_38,param_2 + 1,0,0);
  if (local_30 != 0) {
    FUN_1800424dc(*(longlong *)(param_1 + 0x98) + 0x40,&local_20,param_3 + 1,0,0);
    if (local_18 != 0) {
      uVar2 = FUN_180035e54(param_1,local_30,local_18,param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (*(int *)((longlong)plVar1 + 0x34) != 0) {
      *(undefined4 *)((longlong)plVar1 + 0x34) = 0;
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}

