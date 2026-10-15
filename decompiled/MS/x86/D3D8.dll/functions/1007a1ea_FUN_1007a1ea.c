/*
 * FUN_1007a1ea at 1007a1ea
 * undefined4 __stdcall FUN_1007a1ea(int param_1, uint param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1007a1ea-1007a235
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a1ea(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100025de(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100025f2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar1 != '\0') {
        uVar2 = FUN_1000209d((void *)(param_1 + -0x70),param_3,param_4,param_5,param_6);
      }
    }
  }
  return uVar2;
}

