/*
 * FUN_18003bb00 at 18003bb00
 * undefined __cdecl FUN_18003bb00(undefined8 param_1, int * param_2, longlong * param_3)
 * Address ranges: 18003bb00-18003bbef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bb00(undefined8 param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2[0x1b] == 0) && (*param_2 != 0x40)) {
    uVar1 = FUN_180055d40((longlong)param_2,2,0);
    uVar2 = FUN_180055d40((longlong)param_2,1,1);
    param_2[0x1b] = uVar2;
    FUN_180056c60(param_2,param_3,0x38,(ulonglong)uVar1,3,(ulonglong)(uint)param_2[0x1a],0x154,
                  (ulonglong)(uint)param_2[0x17]);
    FUN_180056c60(param_2,param_3,0x6c,(ulonglong)(uint)param_2[0x1b],1,(ulonglong)uVar1,0x54,
                  0x410710);
  }
  return;
}

