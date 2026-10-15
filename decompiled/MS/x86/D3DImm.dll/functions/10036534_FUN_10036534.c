/*
 * FUN_10036534 at 10036534
 * undefined __stdcall FUN_10036534(uint * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5, int param_6, int * param_7, undefined4 param_8, uint param_9)
 * Address ranges: 10036534-10036778
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036534(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,int param_6,int *param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint local_c;
  char local_5;
  
  FUN_10058073(param_5,0);
  uVar2 = param_9 >> 8 & 1;
  local_5 = '\x0f';
  if (uVar2 == 0) {
    local_5 = '\a';
  }
  uVar1 = FUN_10057dfe(*param_1);
  if (uVar1 < 0x50) {
    local_c = 0;
    if (local_5 == '\x0f') {
      do {
        if (param_5 != local_c) {
          FUN_10057c8a((int *)param_1,param_7,0x55);
        }
        local_c = local_c + 1;
      } while (local_c < 4);
    }
    else {
      do {
        if ((local_c != 3) && (param_5 != local_c)) {
          FUN_10057c8a((int *)param_1,param_7,0x55);
        }
        local_c = local_c + 1;
      } while (local_c < 4);
    }
    if ((param_5 != 3) || (local_5 == '\x0f')) {
      FUN_10057c8a((int *)param_1,param_7,0x55);
    }
    FUN_10057c8a((int *)param_1,param_7,1);
  }
  else {
    FUN_10057c8a((int *)param_1,param_7,0x8a);
  }
  FUN_10057c8a((int *)param_1,param_7,0x56);
  if ((uVar2 == 0) && ((param_9 >> 0x10 & 1) != 0)) {
    FUN_10057c8a((int *)param_1,param_7,0x36);
  }
  FUN_100361fb((int *)param_1,param_2,param_3,param_6,param_5,param_7);
  return;
}

