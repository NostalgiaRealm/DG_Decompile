/*
 * FUN_10041ac0 at 10041ac0
 * undefined FUN_10041ac0(void)
 * Address ranges: 10041ac0-10041afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10041ac0(uint param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if ((param_1 & 0xf0) == 0xf0) {
    bVar2 = 7;
    if ((param_1 & 0x1000) != 0) {
      bVar2 = 8;
    }
    bVar1 = (bVar2 & param_2) != 0;
  }
  return bVar1;
}

