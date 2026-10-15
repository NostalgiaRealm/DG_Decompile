/*
 * FUN_1005c8a0 at 1005c8a0
 * longlong __stdcall FUN_1005c8a0(void)
 * Address ranges: 1005c8a0-1005c8e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1005c8a0(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  float in_XMM0_Da;
  
  uVar4 = (int)in_XMM0_Da >> 0x1f;
  uVar2 = (int)in_XMM0_Da * 2;
  if (uVar2 < 0x9e000000) {
    return (longlong)(int)in_XMM0_Da;
  }
  if (0xbdffffff < uVar2) {
    return -0x8000000000000000;
  }
  bVar3 = (char)(uVar2 >> 0x18) + 0x42;
  uVar2 = ((uVar2 | 0x1000000) << 7 ^ uVar4) - uVar4;
  bVar1 = bVar3 & 0x1f;
  return CONCAT44(uVar4 << bVar1 | uVar2 >> 0x20 - bVar1,uVar2 << (bVar3 & 0x1f));
}

