/*
 * FUN_100683fe at 100683fe
 * uint __fastcall FUN_100683fe(int param_1, uint param_2)
 * Address ranges: 100683fe-10068423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100683fe(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EDX;
  uint uVar2;
  
  uVar1 = in_EAX & 0xffffff00;
  uVar2 = 0;
  do {
    if (0xb < uVar2) {
      return uVar1;
    }
    uVar1 = FUN_100683ba('\x04',param_2 & 0xffffff00,*(uint *)(param_1 + 0x4850 + uVar2 * 4));
    uVar2 = uVar2 + 1;
    param_2 = extraout_EDX;
  } while ((char)uVar1 == '\0');
  return uVar1;
}

