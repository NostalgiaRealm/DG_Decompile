/*
 * FUN_180011adc at 180011adc
 * undefined __fastcall FUN_180011adc(uint * param_1, longlong * param_2, char param_3)
 * Address ranges: 180011adc-180011b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011adc(uint *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint local_res20 [2];
  
  uVar2 = 0;
  do {
    uVar1 = param_1[uVar2 + 6];
    uVar3 = (uint)uVar2;
    if ((uVar1 != 0xffffffff) &&
       (local_res20[0] = param_1[5],
       (*(byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3)) >> (uVar3 & 7) & 1) == 0)) {
      if (((ushort)((short)uVar1 - 0x44dU) < 0xd) || (param_3 == '\0')) {
        FUN_1800019cc(param_2,0x290200100100,*param_1 | 0x80000000,uVar3,uVar1 << 4,0);
      }
      param_1[uVar2 + 6] = 0xffffffff;
    }
    uVar2 = (ulonglong)(uVar3 + 1);
  } while (uVar3 + 1 < 0x10);
  uVar2 = 0;
  do {
    uVar1 = (uint)uVar2;
    if ((param_1[uVar2 + 0x16] != 0xffffffff) &&
       (local_res20[0] = param_1[4],
       (*(byte *)((longlong)local_res20 + ((longlong)(int)uVar1 >> 3)) >> (uVar1 & 7) & 1) == 0)) {
      param_1[uVar2 + 0x16] = 0xffffffff;
    }
    uVar2 = (ulonglong)(uVar1 + 1);
  } while (uVar1 + 1 < 0x10);
  return;
}

