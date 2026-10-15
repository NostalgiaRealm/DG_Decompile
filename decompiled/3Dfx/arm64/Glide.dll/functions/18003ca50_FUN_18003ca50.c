/*
 * FUN_18003ca50 at 18003ca50
 * undefined __cdecl FUN_18003ca50(ulonglong param_1, int * param_2, longlong * param_3)
 * Address ranges: 18003ca50-18003cbc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ca50(ulonglong param_1,int *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffffffff;
  FUN_18003c950(uVar1,param_2,param_3);
  uVar2 = FUN_180056b90((longlong)param_2,1,1);
  param_2[uVar1 + 0x20] = uVar2;
  if (*param_2 == 0x40) {
    FUN_180057ab0(param_2,param_3,0x38,(ulonglong)uVar2,1,(ulonglong)(uint)param_2[0x12],0xe4,
                  uVar1 * 0x180 + 0x14c);
  }
  FUN_180057ab0(param_2,param_3,0,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[0x12],0xe4,uVar1 * 0x180 + 0x14c);
  FUN_180057ab0(param_2,param_3,0x38,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0,(ulonglong)(uint)param_2[0x12]);
  FUN_180057ab0(param_2,param_3,0x34,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0xe4,(ulonglong)(uint)param_2[0x16]);
  FUN_180057ab0(param_2,param_3,0x33,(ulonglong)(uint)param_2[uVar1 + 0x20],1,
                (ulonglong)(uint)param_2[uVar1 + 0x20],0xe4,(ulonglong)(uint)param_2[0x12]);
  return;
}

