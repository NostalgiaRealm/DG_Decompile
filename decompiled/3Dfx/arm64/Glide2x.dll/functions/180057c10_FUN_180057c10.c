/*
 * FUN_180057c10 at 180057c10
 * ulonglong __cdecl FUN_180057c10(longlong param_1, int param_2, uint param_3)
 * Address ranges: 180057c10-180057c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180057c10(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong extraout_x12;
  ulonglong uVar3;
  longlong extraout_x13;
  
  uVar2 = FUN_180057130(param_1,param_2);
  uVar3 = extraout_x12;
  if ((int)uVar2 != -1) {
    uVar1 = *(uint *)(extraout_x13 + (uVar2 & 0xffffffff) * 4 + 0x434);
    if (uVar1 == 0xffffffff || uVar1 <= param_3) {
      return 0;
    }
    uVar3 = (ulonglong)
            *(byte *)((uVar2 & 0xffffffff) + (ulonglong)param_3 * 0x10 + extraout_x13 + 0x334);
  }
  return uVar3 & 0xffffffff;
}

