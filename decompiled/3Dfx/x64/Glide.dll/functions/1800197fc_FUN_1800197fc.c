/*
 * FUN_1800197fc at 1800197fc
 * longlong __fastcall FUN_1800197fc(longlong param_1, longlong param_2, undefined8 * param_3, uint param_4, byte param_5)
 * Address ranges: 1800197fc-18001987d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800197fc(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4,
                      byte param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180019760(param_1,param_2,param_3,param_4,param_5);
  if (lVar3 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
    uVar2 = *(ulonglong *)(lVar1 + 0xb80);
    if (uVar2 < *(ulonglong *)(lVar1 + 0xb78)) {
      FUN_180040e04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500),uVar2);
      lVar3 = FUN_180019760(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return lVar3;
}

