/*
 * FUN_18000c2c4 at 18000c2c4
 * longlong __fastcall FUN_18000c2c4(longlong param_1, longlong param_2, undefined8 * param_3, uint param_4, byte param_5)
 * Address ranges: 18000c2c4-18000c345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000c2c4(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,
                      byte param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = FUN_18000c228(param_1,param_2,param_3,param_4,param_5);
  if (lVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
    uVar2 = *(ulonglong *)(lVar1 + 0xb80);
    if (uVar2 < *(ulonglong *)(lVar1 + 0xb78)) {
      FUN_180042f68(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500),uVar2);
      lVar3 = FUN_18000c228(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return lVar3;
}

