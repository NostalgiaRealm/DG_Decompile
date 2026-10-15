/*
 * FUN_1800968a4 at 1800968a4
 * undefined8 * __fastcall FUN_1800968a4(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined4 param_6, uint param_7, uint param_8, int param_9, uint param_10)
 * Address ranges: 1800968a4-180096971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800968a4(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
             undefined4 param_6,uint param_7,uint param_8,int param_9,uint param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x290);
  if ((puVar1 != (undefined8 *)0x0) &&
     (puVar1 = FUN_18009f038(puVar1,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6,
                             param_9,param_10,*(int *)(*(longlong *)(param_1 + 8) + 0x7c) != 2),
     puVar1 != (undefined8 *)0x0)) {
    uVar2 = FUN_18009e3e4((longlong)puVar1);
    if ((char)uVar2 != '\0') {
      return puVar1 + 0x20;
    }
    FUN_18009f238(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  return (undefined8 *)0x0;
}

