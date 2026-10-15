/*
 * FUN_100515a7 at 100515a7
 * undefined __fastcall FUN_100515a7(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4, int * param_5, int param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 100515a7-100516b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100515a7(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
            int param_6,uint param_7,int param_8,char param_9)

{
  char cVar1;
  uint extraout_EDX;
  
  if ((param_8 != 0) || (param_9 != '\0')) {
    FUN_100a1889(CONCAT31((int3)((uint)param_1 >> 8),0xe4),
                 CONCAT31((int3)((uint)param_2 >> 8),(char)param_5[1]));
    if (*(float *)(&DAT_100b26c0 + param_8 * 4) == 1.0) {
      if (*param_5 != param_6) {
        FUN_100a138c(param_3,param_4,param_7 | 0x36);
      }
    }
    else if (param_8 == 1) {
      FUN_100a138c(param_3,param_4,param_7);
    }
    else {
      cVar1 = FUN_100a18e8((char)param_5[1]);
      if (cVar1 == '\0') {
        FUN_100a138c(param_3,param_4,extraout_EDX);
      }
      else {
        FUN_100a138c(param_3,param_4,extraout_EDX);
      }
    }
  }
  return;
}

