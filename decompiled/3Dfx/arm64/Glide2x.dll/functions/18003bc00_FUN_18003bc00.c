/*
 * FUN_18003bc00 at 18003bc00
 * undefined __cdecl FUN_18003bc00(ulonglong param_1, int * param_2, longlong * param_3)
 * Address ranges: 18003bc00-18003bd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bc00(ulonglong param_1,int *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffffffff;
  FUN_18003bb00(uVar1,param_2,param_3);
  uVar2 = FUN_180055d40((longlong)param_2,1,1);
  param_2[uVar1 + 0x20] = uVar2;
  if (*param_2 == 0x40) {
    FUN_180056c60(param_2,param_3,0x38,(ulonglong)uVar2,1,(ulonglong)(uint)param_2[0x12],0xe4,
                  uVar1 * 0x180 + 0x14c);
  }
  FUN_180056c60(param_2,param_3,0,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[0x12],0xe4,uVar1 * 0x180 + 0x14c);
  FUN_180056c60(param_2,param_3,0x38,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0,(ulonglong)(uint)param_2[0x12]);
  FUN_180056c60(param_2,param_3,0x34,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0xe4,(ulonglong)(uint)param_2[0x16]);
  FUN_180056c60(param_2,param_3,0x33,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0xe4,(ulonglong)(uint)param_2[0x12]);
  return;
}

