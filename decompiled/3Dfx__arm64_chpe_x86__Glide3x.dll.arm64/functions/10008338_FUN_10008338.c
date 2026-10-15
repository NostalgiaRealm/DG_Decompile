/*
 * FUN_10008338 at 10008338
 * undefined FUN_10008338(void)
 * Address ranges: 10008338-100083eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008338(uint param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if (param_2 <= (int)param_3) {
    do {
      if (((param_1 & 3) == 3) || ((param_3 & 1) == (uint)((param_1 & 3) != 1))) {
        uVar2 = *(uint *)(&DAT_100997a8 + param_3 * 4);
        uVar4 = uVar2 >> (ulonglong)(*(byte *)(param_4 + 0x100997a3) & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        uVar1 = uVar4;
        if (param_4 < 0) {
          uVar1 = uVar2;
          uVar2 = uVar4;
        }
        if (param_5 < 0x11) {
          uVar4 = (uint)*(byte *)(param_5 + 0x100997d8);
        }
        else {
          uVar4 = 0;
        }
        iVar3 = iVar3 + ((uVar1 | uVar2 << 0x10) >> 0x10) * (uVar1 & 0xffff) * uVar4;
      }
      param_3 = param_3 - 1;
    } while (param_2 <= (int)param_3);
  }
  return iVar3;
}

