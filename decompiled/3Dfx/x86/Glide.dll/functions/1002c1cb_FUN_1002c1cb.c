/*
 * FUN_1002c1cb at 1002c1cb
 * undefined __fastcall FUN_1002c1cb(undefined4 * param_1)
 * Address ranges: 1002c1cb-1002c200
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c1cb(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = *(uint *)(param_1[2] + 0x30);
  if (uVar1 < 0x10) {
    cVar2 = (&DAT_10053dfc)[uVar1 * 2];
    uVar3 = (&DAT_10053dfd)[uVar1 * 2];
    if ((cVar2 == '\x02') && (param_1[4] != 0)) {
      cVar2 = '\x03';
    }
  }
  else {
    cVar2 = '\0';
    uVar3 = 0;
  }
  (**(code **)*param_1)(cVar2,uVar3);
  return;
}

