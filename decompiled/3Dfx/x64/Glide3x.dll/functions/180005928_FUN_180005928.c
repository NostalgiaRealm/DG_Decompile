/*
 * FUN_180005928 at 180005928
 * int __fastcall FUN_180005928(uint param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 180005928-1800059e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180005928(uint param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 <= (int)param_3) {
    do {
      if (((param_1 & 3) == 3) || ((param_3 & 1) == (uint)((param_1 & 3) != 1))) {
        uVar1 = *(uint *)(&DAT_180063968 + (longlong)(int)param_3 * 4);
        uVar2 = uVar1 >> ((&DAT_180063963)[param_4] & 0x1f);
        if (uVar1 >> ((&DAT_180063963)[param_4] & 0x1f) == 0) {
          uVar2 = 1;
        }
        uVar3 = uVar2;
        if (-1 < param_4) {
          uVar3 = uVar1;
          uVar1 = uVar2;
        }
        if (param_5 < 0x11) {
          uVar2 = (uint)(byte)(&DAT_180063998)[(int)param_5];
        }
        else {
          uVar2 = 0;
        }
        iVar4 = iVar4 + ((uVar3 << 0x10 | uVar1) >> 0x10) * (uVar1 & 0xffff) * uVar2;
      }
      param_3 = param_3 - 1;
    } while (param_2 <= (int)param_3);
  }
  return iVar4;
}

