/*
 * FUN_180025aec at 180025aec
 * undefined __fastcall FUN_180025aec(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, longlong param_9, int param_10, byte param_11)
 * Address ranges: 180025aec-180025bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025aec(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                  ,uint param_7,uint param_8,longlong param_9,int param_10,byte param_11)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((*(char *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8) * 0x20 + 0x6e8 +
                *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0)) != '\0') &&
     (cVar1 = '\0', param_9 != 0)) {
    cVar1 = '\x01';
  }
  FUN_180024390(param_1,param_1 + 0x148 + (ulonglong)param_2 * 0x170,param_3,param_4,param_5,param_6
                ,cVar1);
  FUN_180024e9c(param_1,param_1 + 0x148 + (ulonglong)param_2 * 0x170,param_7,param_8,param_9,
                param_10,param_11);
  return;
}

