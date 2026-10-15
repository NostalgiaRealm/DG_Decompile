/*
 * FUN_1009accc at 1009accc
 * undefined4 __stdcall FUN_1009accc(int param_1, uint param_2, uint * param_3)
 * Address ranges: 1009accc-1009ad3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009accc(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  puVar2 = param_3;
  uVar5 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    iVar3 = FUN_10009dee((void *)(iVar1 + -0x63c8),&param_2);
    if (iVar3 != 0) {
      uVar4 = FUN_100086bd((void *)(iVar1 + -0x639c),(int *)&param_2);
      uVar5 = 0;
      *puVar2 = (uint)(uVar4 != 0xffffffff);
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar5;
}

