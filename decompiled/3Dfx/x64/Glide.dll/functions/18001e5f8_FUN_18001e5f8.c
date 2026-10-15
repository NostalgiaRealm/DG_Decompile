/*
 * FUN_18001e5f8 at 18001e5f8
 * ulonglong __fastcall FUN_18001e5f8(undefined8 param_1, longlong param_2)
 * Address ranges: 18001e5f8-18001e679
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001e5f8(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint7 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  if (*(byte *)(param_2 + 4) < 0xb) {
    in_RAX = (ulonglong)*(byte *)(param_2 + 4);
    bVar3 = (&DAT_180060e38)[in_RAX];
  }
  else {
    bVar3 = 0;
  }
  if (*(byte *)(param_2 + 6) < 0xb) {
    in_RAX = (ulonglong)*(byte *)(param_2 + 6);
    bVar5 = (&DAT_180060e38)[in_RAX];
  }
  else {
    bVar5 = 0;
  }
  bVar4 = bVar5 | bVar3;
  if ((bVar3 & 2) != 0) {
    if (*(byte *)(param_2 + 5) < 0xd) {
      in_RAX = (ulonglong)*(byte *)(param_2 + 5);
      bVar3 = (&DAT_180060e28)[in_RAX];
    }
    else {
      bVar3 = 0;
    }
    bVar4 = bVar3 | bVar4;
  }
  uVar2 = (uint7)(in_RAX >> 8);
  if ((bVar5 & 2) != 0) {
    if (*(byte *)(param_2 + 7) < 0xd) {
      uVar1 = (ulonglong)(byte)(&DAT_180060e28)[*(byte *)(param_2 + 7)];
    }
    else {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    uVar2 = (uint7)(uVar1 >> 8);
    bVar4 = (byte)uVar1 | bVar4;
  }
  return CONCAT71(uVar2,bVar4) & 0xffffffffffffff01;
}

