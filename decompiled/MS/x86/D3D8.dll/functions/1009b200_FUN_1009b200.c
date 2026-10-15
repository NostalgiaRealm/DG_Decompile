/*
 * FUN_1009b200 at 1009b200
 * undefined4 __stdcall FUN_1009b200(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 1009b200-1009b261
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b200(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  undefined1 local_40 [32];
  undefined4 local_20;
  
  (**(code **)(*param_3 + 0x28))(param_3,local_40);
  iVar1 = FUN_10097c8b(local_20);
  FUN_10097d34(local_20);
  uVar2 = FUN_10097d79(local_20);
  if (extraout_EDX != 0) {
    iVar1 = extraout_EDX;
  }
  return (int)(0x1000000 /
              (ulonglong)((uint)((param_2[3] - *param_2) * iVar1) / uVar2 + 0xff & 0xffffff00));
}

