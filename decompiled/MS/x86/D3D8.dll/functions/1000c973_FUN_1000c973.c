/*
 * FUN_1000c973 at 1000c973
 * undefined __fastcall FUN_1000c973(uint * param_1, int * param_2, char param_3)
 * Address ranges: 1000c973-1000ca09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c973(uint *param_1,int *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int *local_c;
  uint *local_8;
  
  local_8 = param_1;
  local_c = param_2;
  uVar2 = 0;
  do {
    uVar1 = param_1[uVar2 + 6];
    if ((uVar1 != 0xffffffff) &&
       (local_8 = (uint *)param_1[5],
       (*(byte *)((int)&local_8 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0)) {
      if (((ushort)((short)uVar1 - 0x42aU) < 0xd) || (param_3 == '\0')) {
        FUN_1000199d(local_c,*param_1 | 0x80000000,0x100100,0x2902,uVar2,uVar1 << 4,0);
      }
      param_1[uVar2 + 6] = 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  do {
    if ((param_1[uVar2 + 0x16] != 0xffffffff) &&
       (local_c = (int *)param_1[4],
       (*(byte *)((int)&local_c + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0)) {
      param_1[uVar2 + 0x16] = 0xffffffff;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}

