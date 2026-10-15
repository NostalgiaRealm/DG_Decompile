/*
 * FUN_1007f904 at 1007f904
 * undefined4 __stdcall FUN_1007f904(int param_1, int param_2, int * param_3)
 * Address ranges: 1007f904-1007f981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f904(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  *param_3 = 0;
  iVar1 = *(int *)(iVar1 + -0x494c + param_2 * 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    if (iVar2 == 3) {
      *param_3 = iVar1 + 0x78;
      FUN_1007aa58(iVar1 + 0x78);
    }
    else if (iVar2 == 4) {
      *param_3 = iVar1 + 200;
      FUN_100823d8(iVar1 + 200);
    }
    else if (iVar2 == 5) {
      *param_3 = iVar1 + 0x78;
      FUN_1007aa58(iVar1 + 0x78);
    }
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return 0;
}

