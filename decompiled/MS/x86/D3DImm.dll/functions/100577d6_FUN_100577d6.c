/*
 * FUN_100577d6 at 100577d6
 * undefined __fastcall FUN_100577d6(uint * param_1, int * param_2, uint * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100577d6-10057870
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_100577d6(uint *param_1,int *param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  uint *local_8;
  
  local_8 = param_1;
  iVar3 = FUN_10057dfe(*param_1);
  if (((iVar3 == 0x40) || (iVar3 == 0x41)) || (iVar3 == 0x50)) {
    local_8 = param_3;
    uVar1 = 0;
    bVar4 = param_3 != (uint *)0x0;
    if (bVar4) {
      for (; ((uint)param_3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    while (bVar4) {
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
      FUN_10058120(param_2);
      uVar1 = 0;
      bVar4 = local_8 != (uint *)0x0;
      if (bVar4) {
        for (; ((uint)local_8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
    }
  }
  else if (iVar3 == 0x51) {
    if (((uint)param_3 & ~param_5) != 0) {
      FUN_10058182(param_2);
    }
    if ((param_5 & (uint)param_3) != 0) {
      FUN_10058182(param_2);
    }
  }
  return;
}

