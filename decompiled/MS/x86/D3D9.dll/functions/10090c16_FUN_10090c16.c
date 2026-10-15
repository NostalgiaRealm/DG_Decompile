/*
 * FUN_10090c16 at 10090c16
 * int __stdcall FUN_10090c16(int param_1, uint param_2, int param_3, int param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 10090c16-10090c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090c16(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                int param_7)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar2 = -0x7789f794;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100026b9(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100026d2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar1 != '\0') {
        iVar2 = FUN_100029a5((void *)(param_1 + -0x70),param_2,param_3,param_4,0,param_5,param_6,
                             param_7,(undefined *)0x1);
      }
    }
  }
  return iVar2;
}

