/*
 * FUN_180079f08 at 180079f08
 * ulonglong __fastcall FUN_180079f08(longlong param_1)
 * Address ranges: 180079f08-180079f52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180079f08(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = in_RAX & 0xffffffffffffff00;
  uVar4 = 0;
  do {
    if (0xb < (uint)uVar4) {
      return uVar3;
    }
    uVar1 = *(uint *)(param_1 + 0x4850 + uVar4 * 4);
    uVar3 = 0;
    if (((char)(uVar1 >> 0x18) == '@') ||
       (uVar3 = (ulonglong)(uVar1 & 0xff0000), (uVar1 & 0xff0000) == 0x400000)) {
LAB_180079f4a:
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    else {
      uVar2 = uVar1 & 0xff00;
      uVar3 = (ulonglong)uVar2;
      if ((uVar2 == 0x4000) || ((char)uVar1 == '@')) goto LAB_180079f4a;
      uVar3 = (ulonglong)(uint3)(uVar2 >> 8) << 8;
    }
    uVar4 = (ulonglong)((uint)uVar4 + 1);
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
  } while( true );
}

