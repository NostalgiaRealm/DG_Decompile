/*
 * FUN_180064f30 at 180064f30
 * undefined __fastcall FUN_180064f30(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, ulonglong param_5)
 * Address ranges: 180064f30-180065286
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180064f30(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,ulonglong param_5
                  )

{
  uint uVar1;
  uint uVar2;
  
  if ((param_5 >> 0x39 & 1) != 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\0');
    uVar2 = (uint)(param_5 >> 0x3a) & 3;
    if (uVar2 == 0) {
      FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)uVar1);
    }
    else {
      FUN_1800edbe0(param_2,param_3,0x37,(ulonglong)uVar1);
      if ((uVar2 == 1) || (uVar2 == 2)) {
        FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)uVar1);
        if (uVar2 == 2) {
          FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)uVar1);
        }
        FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)uVar1);
        FUN_1800edbe0(param_2,param_3,0x19,(ulonglong)uVar1);
        FUN_1800edbe0(param_2,param_3,0x200e,(ulonglong)uVar1);
      }
      else if (uVar2 == 3) {
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar1);
        FUN_1800edbe0(param_2,param_3,0x200e,(ulonglong)uVar1);
      }
    }
    FUN_1800edbe0(param_2,param_3,0,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)param_4);
  }
  return;
}

