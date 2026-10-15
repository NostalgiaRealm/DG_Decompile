/*
 * FUN_1007f7c7 at 1007f7c7
 * undefined4 __stdcall FUN_1007f7c7(int param_1, uint param_2, uint * param_3)
 * Address ranges: 1007f7c7-1007f837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f7c7(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  puVar2 = param_3;
  uVar5 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    iVar3 = FUN_1000924d((void *)(iVar1 + -0x5798),&param_2);
    if (iVar3 != 0) {
      uVar4 = FUN_10007b6a((void *)(iVar1 + -0x576c),(int *)&param_2);
      uVar5 = 0;
      *puVar2 = (uint)(uVar4 != 0xffffffff);
    }
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar5;
}

