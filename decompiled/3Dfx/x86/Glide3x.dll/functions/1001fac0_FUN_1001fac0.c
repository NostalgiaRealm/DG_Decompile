/*
 * FUN_1001fac0 at 1001fac0
 * undefined __fastcall FUN_1001fac0(undefined4 * param_1)
 * Address ranges: 1001fac0-1001faf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001fac0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = *(uint *)(param_1[2] + 0x30);
  if (uVar1 < 0x10) {
    cVar2 = (&DAT_10055f10)[uVar1 * 2];
    uVar3 = (&DAT_10055f11)[uVar1 * 2];
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

