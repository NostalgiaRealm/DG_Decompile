/*
 * FUN_180065288 at 180065288
 * undefined __fastcall FUN_180065288(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, ulonglong param_5)
 * Address ranges: 180065288-18006544b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065288(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,ulonglong param_5
                  )

{
  uint uVar1;
  
  if ((param_5 >> 0x3c & 1) != 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\0');
    FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x1c,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,1,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x56,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)param_4);
  }
  return;
}

