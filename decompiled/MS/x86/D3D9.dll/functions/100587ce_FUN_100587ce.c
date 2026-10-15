/*
 * FUN_100587ce at 100587ce
 * undefined __stdcall FUN_100587ce(int * param_1, int * param_2, undefined4 param_3, uint param_4)
 * Address ranges: 100587ce-10058981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100587ce(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 >> 0x18 & 1) != 0) {
    FUN_100c2e34((int)param_1,4,'\x01');
    FUN_100c2e34((int)param_1,4,'\0');
    uVar1 = 0;
    do {
      FUN_100c3be1(param_1,param_2,0x11);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    FUN_100c3be1(param_1,param_2,0x31);
    FUN_100c3be1(param_1,param_2,0x31);
    FUN_100c3be1(param_1,param_2,1);
    FUN_100c3be1(param_1,param_2,1);
    FUN_100c3be1(param_1,param_2,0x3c);
    FUN_100c3be1(param_1,param_2,0x3c);
    FUN_100c3be1(param_1,param_2,0x3c);
    FUN_100c3be1(param_1,param_2,0x4000d);
  }
  return;
}

