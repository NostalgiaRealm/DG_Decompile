/*
 * FUN_1801978a8 at 1801978a8
 * undefined FUN_1801978a8(void)
 * Address ranges: 1801978a8-180197913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801978a8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,uint param_6)

{
  longlong lVar1;
  
  if (param_6 < 0xe) {
    lVar1 = param_1 + (ulonglong)param_6 * 4;
    *param_2 = *(undefined8 *)(param_1 + (longlong)(int)*(char *)(lVar1 + 0x58) * 8 + 0x1d2b8);
    *param_3 = *(undefined8 *)(param_1 + (longlong)(int)*(char *)(lVar1 + 0x59) * 8 + 0x1d2b8);
    *param_4 = *(undefined8 *)(param_1 + (longlong)(int)*(char *)(lVar1 + 0x5a) * 8 + 0x1d2b8);
    *param_5 = *(undefined8 *)(param_1 + (longlong)(int)*(char *)(lVar1 + 0x5b) * 8 + 0x1d2b8);
  }
  return param_6 < 0xe;
}

