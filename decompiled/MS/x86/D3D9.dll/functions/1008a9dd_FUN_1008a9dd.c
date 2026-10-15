/*
 * FUN_1008a9dd at 1008a9dd
 * undefined __fastcall FUN_1008a9dd(int * param_1, uint * param_2, undefined4 param_3, byte param_4, int param_5, undefined4 param_6, byte param_7)
 * Address ranges: 1008a9dd-1008ac3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1008a9dd(int *param_1,uint *param_2,undefined4 param_3,byte param_4,int param_5,uint param_6,
            byte param_7)

{
  byte bVar1;
  byte bVar2;
  uint local_1c;
  
  bVar1 = (param_7 ^ 1) << 3;
  param_7 = bVar1 | 7;
  if (param_2[3] < 0x50) {
    bVar2 = param_4 & 3;
    local_1c = 0;
    do {
      if (((bVar2 != local_1c) && ((param_7 & (byte)(1 << ((byte)local_1c & 0x1f))) != 0)) &&
         (((*param_2 & 0x40000000) == 0 || (local_1c != 3)))) {
        FUN_100c3be1((int *)(param_2 + 3),param_1,0x55);
      }
      local_1c = local_1c + 1;
    } while (local_1c < 4);
    if ((((bVar1 | 7) & 1 << bVar2) != 0) && (((*param_2 & 0x40000000) == 0 || (bVar2 != 3)))) {
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x55);
    }
    FUN_100c3be1((int *)(param_2 + 3),param_1,1);
  }
  else {
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x8a);
  }
  if (((*param_2 & 0x40000000) != 0) && ((*param_2 & 0x4000) == 0)) {
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
  }
  if (param_5 != 2) {
    FUN_10089407(param_1,(int)param_2);
  }
  return;
}

