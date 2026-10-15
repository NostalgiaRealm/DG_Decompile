/*
 * FUN_1801baaf8 at 1801baaf8
 * undefined FUN_1801baaf8(void)
 * Address ranges: 1801baaf8-1801bab73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801baaf8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_180203718(*(undefined8 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    param_4 = param_5;
  }
  uVar3 = FUN_180203780(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_3);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_1801b91f0(param_1,param_3,param_2);
  }
  return bVar1;
}

