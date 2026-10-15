/*
 * FUN_18008c150 at 18008c150
 * undefined8 * __fastcall FUN_18008c150(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined4 param_6, uint param_7, uint param_8, int param_9, uint param_10)
 * Address ranges: 18008c150-18008c21d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008c150(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
             undefined4 param_6,uint param_7,uint param_8,int param_9,uint param_10)

{
  bool bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800fbccc(0x290);
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar2 = FUN_1800909e4(puVar2,param_1,param_4,param_5,param_7,param_8,param_2,param_3,param_6,
                             param_9,param_10,*(int *)(*(longlong *)(param_1 + 8) + 0x7c) != 2),
     puVar2 != (undefined8 *)0x0)) {
    bVar1 = FUN_18008f6d0((longlong)puVar2);
    if (bVar1) {
      return puVar2 + 0x1c;
    }
    FUN_180090bcc(puVar2);
    FUN_1800fbcf0(puVar2);
  }
  return (undefined8 *)0x0;
}

