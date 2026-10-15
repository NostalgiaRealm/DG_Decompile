/*
 * FUN_100bd7d8 at 100bd7d8
 * undefined4 __stdcall FUN_100bd7d8(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 100bd7d8-100bd839
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bd7d8(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  undefined1 local_40 [32];
  undefined4 local_20;
  
  (**(code **)(*param_3 + 0x28))(param_3,local_40);
  iVar1 = FUN_100ba24a(local_20);
  FUN_100ba2f3(local_20);
  uVar2 = FUN_100ba338(local_20);
  if (extraout_EDX != 0) {
    iVar1 = extraout_EDX;
  }
  return (int)(0x1000000 /
              (ulonglong)((uint)((param_2[3] - *param_2) * iVar1) / uVar2 + 0xff & 0xffffff00));
}

