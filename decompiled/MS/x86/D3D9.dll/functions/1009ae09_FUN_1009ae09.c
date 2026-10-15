/*
 * FUN_1009ae09 at 1009ae09
 * undefined4 __stdcall FUN_1009ae09(int param_1, int param_2, int * param_3)
 * Address ranges: 1009ae09-1009ae86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ae09(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  *param_3 = 0;
  iVar1 = *(int *)(iVar1 + -0x545c + param_2 * 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    if (iVar2 == 3) {
      *param_3 = iVar1 + 0x78;
      FUN_10091592(iVar1 + 0x78);
    }
    else if (iVar2 == 4) {
      *param_3 = iVar1 + 200;
      FUN_1009eec8(iVar1 + 200);
    }
    else if (iVar2 == 5) {
      *param_3 = iVar1 + 0x78;
      FUN_10091592(iVar1 + 0x78);
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

