/*
 * FUN_1007d242 at 1007d242
 * undefined4 __stdcall FUN_1007d242(int param_1, uint param_2, RECT * param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1007d242-1007d296
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1007d242(int param_1,uint param_2,RECT *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = FUN_10008065((void *)(iVar1 + -0x58e0),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

