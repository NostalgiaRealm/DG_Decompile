/*
 * FUN_1800a2750 at 1800a2750
 * undefined FUN_1800a2750(void)
 * Address ranges: 1800a2750-1800a27cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a2750(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_1800e6328(*(undefined8 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    param_4 = param_5;
  }
  uVar3 = FUN_1800e63a0(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_3);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_1800a1058(param_1,param_3,param_2);
  }
  return bVar1;
}

