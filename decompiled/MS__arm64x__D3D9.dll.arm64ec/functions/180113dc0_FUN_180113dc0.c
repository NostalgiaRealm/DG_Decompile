/*
 * FUN_180113dc0 at 180113dc0
 * undefined FUN_180113dc0(void)
 * Address ranges: 180113dc0-180113ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180113dc0(uint *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint local_50 [4];
  
  uVar3 = 0;
  do {
    uVar1 = param_1[uVar3 + 6];
    uVar2 = (uint)uVar3;
    if ((uVar1 != 0xffffffff) &&
       (local_50[0] = param_1[5],
       (*(byte *)((longlong)local_50 + (longlong)((int)uVar2 >> 3)) >> (ulonglong)(uVar2 & 7) & 1)
       == 0)) {
      if ((uVar1 - 0x44d & 0xffff) < 0xd || param_3 == '\0') {
        FUN_1801060c0(param_2,0x290200100100,*param_1 | 0x80000000,uVar3,uVar1 << 4,0);
      }
      param_1[uVar3 + 6] = 0xffffffff;
    }
    uVar3 = (ulonglong)(uVar2 + 1);
  } while (uVar2 + 1 < 0x10);
  uVar3 = 0;
  do {
    uVar1 = (uint)uVar3;
    if ((param_1[uVar3 + 0x16] != 0xffffffff) &&
       (local_50[0] = param_1[4],
       (*(byte *)((longlong)local_50 + (longlong)((int)uVar1 >> 3)) >> (ulonglong)(uVar1 & 7) & 1)
       == 0)) {
      param_1[uVar3 + 0x16] = 0xffffffff;
    }
    uVar3 = (ulonglong)(uVar1 + 1);
  } while (uVar1 + 1 < 0x10);
  return;
}

