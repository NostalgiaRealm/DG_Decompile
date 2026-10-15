/*
 * FUN_18006fbe4 at 18006fbe4
 * undefined __fastcall FUN_18006fbe4(undefined8 param_1, uint * param_2, longlong * param_3, uint * param_4, uint param_5, uint param_6, uint param_7, char param_8)
 * Address ranges: 18006fbe4-18006fdaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006fbe4(undefined8 param_1,uint *param_2,longlong *param_3,uint *param_4,uint param_5,
                  uint param_6,uint param_7,char param_8)

{
  bool bVar1;
  
  if ((param_7 != 0) || (param_8 != '\0')) {
    FUN_1800ee208(0xe4,(byte)param_4[1]);
    if (*(float *)(&DAT_180102870 + (ulonglong)param_7 * 4) == 1.0) {
      if (*param_4 != param_5) {
        FUN_1800edbe0(param_2,param_3,param_6 | 0x36,(ulonglong)*param_4);
      }
    }
    else {
      bVar1 = true;
      if (param_7 == 1) {
        FUN_1800edbe0(param_2,param_3,param_6,(ulonglong)*param_4);
      }
      else {
        if ((8 < (byte)param_4[1]) || ((0x116U >> ((byte)param_4[1] & 0x1f) & 1) == 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_1800edbe0(param_2,param_3,param_6 | 0x38,(ulonglong)*param_4);
        }
        else {
          FUN_1800edbe0(param_2,param_3,param_6 | 0x38,(ulonglong)*param_4);
        }
      }
    }
  }
  return;
}

