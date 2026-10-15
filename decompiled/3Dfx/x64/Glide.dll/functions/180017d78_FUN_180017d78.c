/*
 * FUN_180017d78 at 180017d78
 * int __fastcall FUN_180017d78(uint param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 180017d78-180017e20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180017d78(uint param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((int)param_3 <= param_2) {
    do {
      if ((param_1 & 3) == 3) {
LAB_180017dd4:
        uVar2 = FUN_180017d28(param_3,param_4);
        if (param_5 < 0x11) {
          uVar3 = (uint)(byte)(&DAT_180062bb8)[(int)param_5];
        }
        else {
          uVar3 = 0;
        }
        iVar4 = iVar4 + (uVar2 >> 0x10) * (uVar2 & 0xffff) * uVar3;
      }
      else {
        bVar1 = 0xff;
        if (param_3 < 9) {
          bVar1 = (&DAT_180062c08)[(int)param_3];
        }
        if ((bool)(bVar1 & 1) == ((param_1 & 3) != 1)) goto LAB_180017dd4;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 <= param_2);
  }
  return iVar4;
}

