/*
 * FUN_180030980 at 180030980
 * undefined __cdecl FUN_180030980(ulonglong param_1, int * param_2, longlong * param_3)
 * Address ranges: 180030980-180030aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030980(ulonglong param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 & 0xffffffff;
  FUN_180030880(param_1,param_2,param_3);
  uVar1 = FUN_180059610((longlong)param_2,1,1);
  param_2[uVar2 + 0x20] = uVar1;
  if (*param_2 == 0x40) {
    FUN_18005a530(param_2,param_3,0x38,(ulonglong)uVar1,1,(ulonglong)(uint)param_2[0x12],0xe4,
                  uVar2 * 0x1a0 + 0x14c);
  }
  FUN_18005a530(param_2,param_3,0,(ulonglong)(uint)param_2[uVar2 + 0x20],1,
                (ulonglong)(uint)param_2[0x12],0xe4,uVar2 * 0x1a0 + 0x14c);
  FUN_18005a530(param_2,param_3,0x38,(ulonglong)(uint)param_2[uVar2 + 0x20],1,
                (ulonglong)(uint)param_2[uVar2 + 0x20],0,(ulonglong)(uint)param_2[0x12]);
  FUN_18005a530(param_2,param_3,0x34,(ulonglong)(uint)param_2[uVar2 + 0x20],1,
                (ulonglong)(uint)param_2[uVar2 + 0x20],0xe4,(ulonglong)(uint)param_2[0x16]);
  FUN_18005a530(param_2,param_3,0x33,(ulonglong)(uint)param_2[uVar2 + 0x20],1,
                (ulonglong)(uint)param_2[uVar2 + 0x20],0xe4,(ulonglong)(uint)param_2[0x12]);
  return;
}

