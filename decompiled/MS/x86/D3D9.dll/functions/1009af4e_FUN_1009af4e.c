/*
 * FUN_1009af4e at 1009af4e
 * undefined4 __stdcall FUN_1009af4e(int param_1, uint param_2, uint param_3)
 * Address ranges: 1009af4e-1009afad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009af4e(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_3;
  param_3 = param_2;
  piVar3 = (int *)FUN_100086e6((void *)(param_1 + -0x586c),&param_3);
  if (piVar3 == (int *)0x0) {
    iVar5 = param_1 + -0x585c;
  }
  else {
    iVar5 = *piVar3;
  }
  uVar4 = 0;
  do {
    uVar1 = *(undefined4 *)(iVar5 + uVar4 * 4);
    *(char *)(uVar2 + uVar4 * 4) = (char)((uint)uVar1 >> 0x10);
    *(char *)(uVar2 + 2 + uVar4 * 4) = (char)uVar1;
    *(char *)(uVar2 + 1 + uVar4 * 4) = (char)((uint)uVar1 >> 8);
    *(char *)(uVar2 + 3 + uVar4 * 4) = (char)((uint)uVar1 >> 0x18);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  return 0;
}

