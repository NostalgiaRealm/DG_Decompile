/*
 * FUN_10050ec2 at 10050ec2
 * int __stdcall FUN_10050ec2(int param_1)
 * Address ranges: 10050ec2-10050ed4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10050ec2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

