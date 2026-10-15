/*
 * FUN_18008d1bc at 18008d1bc
 * bool __fastcall FUN_18008d1bc(longlong param_1, undefined8 * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, uint param_6)
 * Address ranges: 18008d1bc-18008d224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18008d1bc(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,uint param_6)

{
  ulonglong uVar1;
  
  if (param_6 < 0xe) {
    uVar1 = (ulonglong)param_6;
    *param_2 = *(undefined8 *)
                (param_1 + 0x1d2b8 + (longlong)*(char *)(param_1 + 0x58 + uVar1 * 4) * 8);
    *param_3 = *(undefined8 *)
                (param_1 + 0x1d2b8 + (longlong)*(char *)(param_1 + 0x59 + uVar1 * 4) * 8);
    *param_4 = *(undefined8 *)
                (param_1 + 0x1d2b8 + (longlong)*(char *)(param_1 + 0x5a + uVar1 * 4) * 8);
    *param_5 = *(undefined8 *)
                (param_1 + 0x1d2b8 + (longlong)*(char *)(param_1 + 0x5b + uVar1 * 4) * 8);
  }
  return param_6 < 0xe;
}

