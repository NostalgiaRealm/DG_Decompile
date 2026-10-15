/*
 * FUN_100041c6 at 100041c6
 * int __fastcall FUN_100041c6(uint param_1, int param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 100041c6-10004229
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100041c6(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 <= param_3) {
    if (param_5 < 0x11) {
      do {
        bVar1 = FUN_10004183((byte)param_3,param_1 & 3);
        if (bVar1) {
          uVar2 = FUN_1000415b(param_3,param_4);
          iVar3 = iVar3 + (uint)(byte)(&DAT_100555d8)[param_5] * (uVar2 >> 0x10) * (uVar2 & 0xffff);
        }
        param_3 = param_3 + -1;
      } while (param_2 <= param_3);
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

