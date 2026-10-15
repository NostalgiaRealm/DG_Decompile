/*
 * FUN_10033a70 at 10033a70
 * undefined FUN_10033a70(void)
 * Address ranges: 10033a70-10033af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10033a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_1006f868(*(undefined4 *)(param_1 + 0x10),param_2);
  if (cVar2 == '\0') {
    param_4 = param_5;
  }
  uVar3 = FUN_1006f8e8(*(undefined4 *)(param_1 + 0x10),param_2,param_4,param_3);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_10032010(param_1,param_3,param_2);
  }
  return bVar1;
}

