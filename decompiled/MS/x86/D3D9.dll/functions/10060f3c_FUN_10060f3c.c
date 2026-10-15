/*
 * FUN_10060f3c at 10060f3c
 * undefined __stdcall FUN_10060f3c(int * param_1, int * param_2, undefined8 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10060f3c-10061145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060f3c(int *param_1,int *param_2,longlong param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(param_1[0x3d] + 0x14a);
  piVar6 = param_1 + 0x82;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if ((*(char *)(param_1[0x3d] + 0x147) == '\0') || (*(char *)((int)param_1 + 0xf1) != '\0')) {
    param_1[0xaf] = -1;
  }
  else {
    param_1[0xaf] = param_1[0xc4];
    uVar5 = 2;
    param_1[param_1[0xc4] + 0xc2] = 0xb;
    param_1[0xc4] = param_1[0xc4] + 1;
    uVar4 = 0;
    do {
      FUN_100c40de(CONCAT31((int3)((uint)uVar4 >> 8),0xe4),
                   CONCAT31((int3)((uint)param_1[0x3d] >> 8),
                            *(undefined1 *)((uVar5 - 2) + param_1[0x3d])));
      FUN_100c3be1(param_1,param_2,0x36);
      uVar5 = uVar5 + 1;
      uVar4 = extraout_ECX;
    } while (uVar5 < 0xd);
  }
  if (*(char *)(param_1[0x3d] + 0x126d) != '\x03') {
    param_3 = 0;
  }
  *(longlong *)(param_1 + 0xac) = param_3;
  if (cVar1 == '\0') {
    if (*(char *)(param_1[0x3d] + 0x126d) == '\x03') {
      if (param_3 == 0) {
        uVar5 = 0;
        do {
          if (*(char *)(uVar5 + param_1[0x3d]) != '\0') {
            FUN_1006125c(param_1,param_2,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 10);
      }
    }
    else {
      uVar5 = 0;
      do {
        if (*(char *)(uVar5 + param_1[0x3d]) != '\0') {
          FUN_100611e8(param_1,param_2,uVar5);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
    }
  }
  else {
    piVar6 = param_1 + 0xa2;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  bVar2 = FUN_10058e59(param_4,param_5);
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)*(char *)((int)param_1 + 0x4a) | 0x410200;
  }
  param_1[0xb0] = uVar5;
  uVar5 = 1;
  do {
    param_1[uVar5 + 0xb0] = (int)*(char *)((int)param_1 + uVar5 + 0x4a) | 0x410200;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  param_1[0xbf] = 0;
  iVar3 = 0;
  do {
    param_1[iVar3 + 0xb5] = 0;
    param_1[iVar3 + 0xb9] = -1;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  param_1[0xbd] = 0;
  if ((cVar1 == '\0') && (*(char *)(param_1[0x3d] + 0x144) != '\0')) {
    iVar3 = FUN_100612dc(param_1,param_2);
  }
  else {
    iVar3 = 0;
  }
  param_1[0xc0] = iVar3;
  if ((cVar1 == '\0') && (*(char *)(param_1[0x3d] + 0x145) != '\0')) {
    iVar3 = FUN_100613b5(param_1,param_2);
  }
  else {
    iVar3 = 0;
  }
  param_1[0xc1] = iVar3;
  return;
}

