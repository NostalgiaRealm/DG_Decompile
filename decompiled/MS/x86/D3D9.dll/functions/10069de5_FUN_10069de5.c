/*
 * FUN_10069de5 at 10069de5
 * undefined __stdcall FUN_10069de5(uint param_1, int * param_2)
 * Address ranges: 10069de5-10069eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069de5(uint param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint extraout_EDX;
  undefined4 uVar6;
  undefined4 local_2c [8];
  uint *local_c;
  
  uVar3 = param_1;
  piVar5 = (int *)0x0;
  uVar4 = 0;
  do {
    piVar5 = (int *)((uint)piVar5 & ~(1 << (uVar4 & 0x1f)) |
                    (uint)(*(char *)(*(int *)(param_1 + 0x10) + 0x4880 + uVar4) != '\0') <<
                    ((byte)uVar4 & 0x1f));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  local_c = (uint *)(param_1 + 0x18);
  FUN_100c3719(local_c,param_2,piVar5,&DAT_100d5ef8,0);
  param_1 = 0;
  uVar4 = 0;
  do {
    cVar2 = *(char *)(uVar4 + 0x4880 + *(int *)(uVar3 + 0x10)) * '\b';
    if (cVar2 == '\x10') {
      uVar6 = 0;
LAB_10069e69:
      pbVar1 = (byte *)((int)&param_1 + ((int)uVar4 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
      FUN_100c44e9(uVar3 + 0x20,uVar4,'\x01' << (sbyte)uVar6);
      local_2c[extraout_EDX * 2] = uVar6;
      local_2c[extraout_EDX * 2 + 1] = 5;
      uVar4 = extraout_EDX;
    }
    else {
      if (cVar2 == '\x18') {
        uVar6 = 1;
        goto LAB_10069e69;
      }
      if (cVar2 == ' ') {
        uVar6 = 2;
        goto LAB_10069e69;
      }
    }
    uVar4 = uVar4 + 1;
    if (3 < uVar4) {
      FUN_100c3618(local_c,param_2,param_1,&DAT_100d5eb0,(int)local_2c);
      return;
    }
  } while( true );
}

