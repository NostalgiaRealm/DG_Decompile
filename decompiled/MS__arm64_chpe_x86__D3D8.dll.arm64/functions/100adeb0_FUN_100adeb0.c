/*
 * FUN_100adeb0 at 100adeb0
 * undefined FUN_100adeb0(void)
 * Address ranges: 100adeb0-100adf33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100adeb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_100ddf18(*(undefined4 *)(param_1 + 0x10),param_2);
  if (cVar2 == '\0') {
    param_4 = param_5;
  }
  uVar3 = FUN_100ddf98(*(undefined4 *)(param_1 + 0x10),param_2,param_4,param_3);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_100ac418(param_1,param_3,param_2);
  }
  return bVar1;
}

