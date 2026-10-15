/*
 * FUN_10030f37 at 10030f37
 * undefined __stdcall FUN_10030f37(int * param_1, int * param_2, undefined4 param_3, uint param_4)
 * Address ranges: 10030f37-100310ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030f37(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 >> 0x17 & 1) != 0) {
    FUN_10056ee5((int)param_1,4,'\x01');
    FUN_10056ee5((int)param_1,4,'\0');
    uVar1 = 0;
    do {
      FUN_10057c8a(param_1,param_2,0x11);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    FUN_10057c8a(param_1,param_2,0x31);
    FUN_10057c8a(param_1,param_2,0x31);
    FUN_10057c8a(param_1,param_2,1);
    FUN_10057c8a(param_1,param_2,1);
    FUN_10057c8a(param_1,param_2,0x3c);
    FUN_10057c8a(param_1,param_2,0x3c);
    FUN_10057c8a(param_1,param_2,0x3c);
    FUN_10057c8a(param_1,param_2,0x4000d);
  }
  return;
}

