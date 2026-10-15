/*
 * FUN_1007a146 at 1007a146
 * int __stdcall FUN_1007a146(int param_1, uint param_2, int param_3, int param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 1007a146-1007a199
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007a146(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                int param_7)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;
  
  iVar2 = -0x7789f794;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100025de(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100025f2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar1 != '\0') {
        iVar2 = FUN_10002833((void *)(param_1 + -0x70),extraout_ECX_00,param_3,param_4,0,param_5,
                             param_6,param_7,1);
      }
    }
  }
  return iVar2;
}

