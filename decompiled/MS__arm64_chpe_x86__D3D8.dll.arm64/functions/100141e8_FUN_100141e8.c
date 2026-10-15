/*
 * FUN_100141e8 at 100141e8
 * undefined FUN_100141e8(void)
 * Address ranges: 100141e8-10014317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100141e8(uint *param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_50 [4];
  
  uVar2 = 0;
  do {
    uVar1 = param_1[uVar2 + 6];
    if ((uVar1 != 0xffffffff) &&
       (local_50[0] = param_1[5],
       (*(byte *)((int)local_50 + ((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1) == 0)) {
      if ((uVar1 + 0xfbd6 & 0xffff) < 0xd || param_3 == '\0') {
        FUN_10002350(param_2,0x290200100100,*param_1 | 0x80000000,uVar2,uVar1 << 4,0);
      }
      param_1[uVar2 + 6] = 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  do {
    if ((param_1[uVar2 + 0x16] != 0xffffffff) &&
       (local_50[0] = param_1[4],
       (*(byte *)((int)local_50 + ((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1) == 0)) {
      param_1[uVar2 + 0x16] = 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

