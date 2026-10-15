/*
 * FUN_100059fe at 100059fe
 * undefined8 __fastcall FUN_100059fe(int param_1)
 * Address ranges: 100059fe-10005a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall FUN_100059fe(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 1;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar1 = (ulonglong)uVar3;
    uVar3 = (uint)(uVar1 * 10);
    iVar2 = iVar2 * 10 + (int)(uVar1 * 10 >> 0x20);
  }
  return CONCAT44(iVar2,uVar3);
}

