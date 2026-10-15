/*
 * FUN_18000ca0c at 18000ca0c
 * ulonglong __fastcall FUN_18000ca0c(uint * param_1, longlong * param_2, ushort param_3)
 * Address ranges: 18000ca0c-18000cabd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000ca0c(uint *param_1,longlong *param_2,ushort param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res18 [4];
  
  uVar4 = 0;
  do {
    if (param_1[uVar4 + 6] == (uint)param_3) {
      return uVar4;
    }
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
  } while (uVar6 < 0x10);
  uVar6 = 0xffffffff;
  uVar4 = 0;
  do {
    local_res18[0] = param_1[5];
    uVar3 = (uint)uVar4;
    uVar2 = uVar6;
    if (((*(byte *)((longlong)local_res18 + ((longlong)(int)uVar3 >> 3)) >> (uVar3 & 7) & 1) == 0)
       && (uVar2 = uVar3, param_1[uVar4 + 6] == 0xffffffff)) goto LAB_18000ca97;
    uVar6 = uVar2;
    uVar4 = (ulonglong)(uVar3 + 1);
  } while (uVar3 + 1 < 0x10);
  if (uVar6 != 0xffffffff) {
    FUN_1800019cc(param_2,0x290200100100,*param_1 | 0x80000000,uVar6,
                  param_1[(ulonglong)uVar6 + 6] << 4,0);
  }
  uVar4 = 0xffffffff;
LAB_18000ca97:
  uVar5 = (ulonglong)uVar6;
  if ((int)uVar4 != -1) {
    uVar5 = uVar4;
  }
  param_1[uVar5 + 6] = 0xffffffff;
  pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)(uint)uVar5 >> 3) + 0x9c);
  *pbVar1 = *pbVar1 | '\x01' << ((uint)uVar5 & 7);
  return uVar5;
}

