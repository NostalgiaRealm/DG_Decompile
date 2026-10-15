/*
 * FUN_180008380 at 180008380
 * int __cdecl FUN_180008380(uint param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 180008380-18000841f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180008380(uint param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if (param_2 <= (int)param_3) {
    do {
      if (((param_1 & 3) == 3) || ((param_3 & 1) == (uint)((param_1 & 3) != 1))) {
        uVar4 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_3 * 4);
        uVar2 = uVar4 >> (ulonglong)((byte)(&DAT_1800668d3)[param_4] & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        uVar1 = uVar4;
        if (param_4 < 0) {
          uVar1 = uVar2;
          uVar2 = uVar4;
        }
        if (param_5 < 0x11) {
          uVar4 = (uint)(byte)(&DAT_180066908)[(int)param_5];
        }
        else {
          uVar4 = 0;
        }
        iVar3 = iVar3 + ((uVar2 | uVar1 << 0x10) >> 0x10) * (uVar2 & 0xffff) * uVar4;
      }
      param_3 = param_3 - 1;
    } while (param_2 <= (int)param_3);
  }
  return iVar3;
}

