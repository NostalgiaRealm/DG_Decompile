/*
 * FUN_18004d2e0 at 18004d2e0
 * undefined __fastcall FUN_18004d2e0(longlong * param_1, int param_2, longlong param_3, longlong param_4, undefined8 * param_5, uint param_6, uint param_7, char param_8)
 * Address ranges: 18004d2e0-18004d380
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d2e0(longlong *param_1,int param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,uint param_6,uint param_7,char param_8)

{
  ulonglong local_38;
  undefined4 local_30;
  
  FUN_180048cf0((longlong)param_1);
  local_30 = *(undefined4 *)(param_3 + 0x10);
  local_38 = -(ulonglong)(param_4 != 0) & param_4 - 0x30U;
  FUN_18005fc10(param_1,param_2,param_3,'\0',&local_38,param_5,param_6,param_7,param_8,0);
  return;
}

