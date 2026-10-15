/*
 * FUN_1800702f8 at 1800702f8
 * undefined __fastcall FUN_1800702f8(undefined8 param_1, uint * param_2, longlong * param_3, undefined8 param_4, longlong param_5)
 * Address ranges: 1800702f8-180070578
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800702f8(undefined8 param_1,uint *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x40) + 0x14a);
  FUN_1800fbea0((undefined1 *)(param_2 + 0x86),0,0x80);
  if ((*(char *)(*(longlong *)(param_2 + 0x40) + 0x147) == '\0') ||
     (*(char *)((longlong)param_2 + 0xf9) != '\0')) {
    param_2[0xb3] = 0xffffffff;
  }
  else {
    uVar7 = 2;
    param_2[0xb3] = param_2[200];
    param_2[(ulonglong)param_2[200] + 0xc6] = 0xb;
    param_2[200] = param_2[200] + 1;
    do {
      uVar2 = param_2[0xb3];
      FUN_1800ee208(0xe4,*(byte *)(*(longlong *)(param_2 + 0x40) + (ulonglong)(uVar7 - 2)));
      FUN_1800edbe0(param_2,param_3,0x36,(ulonglong)(uVar2 << 0xe | uVar7 - 2 | 0x420300));
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xd);
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar3 = 0;
  if (*(char *)(lVar4 + 0x126d) == '\x03') {
    lVar3 = param_5;
  }
  *(longlong *)(param_2 + 0xb0) = lVar3;
  if (cVar1 == '\0') {
    if (*(char *)(lVar4 + 0x126d) == '\x03') {
      if (lVar3 == 0) {
        uVar6 = 0;
        do {
          if (*(char *)(uVar6 + *(longlong *)(param_2 + 0x40)) != '\0') {
            FUN_1800706e8(lVar4,param_2,param_3,(uint)uVar6);
          }
          uVar7 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
        } while (uVar7 < 10);
      }
    }
    else {
      uVar6 = 0;
      do {
        if (*(char *)(uVar6 + *(longlong *)(param_2 + 0x40)) != '\0') {
          FUN_180070650(lVar4,param_2,param_3,(uint)uVar6);
        }
        uVar7 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < 2);
    }
  }
  else {
    param_2[0xa6] = 0;
    param_2[0xa7] = 0;
    param_2[0xa8] = 0;
    param_2[0xa9] = 0;
    param_2[0xaa] = 0;
    param_2[0xab] = 0;
    param_2[0xac] = 0;
    param_2[0xad] = 0;
    param_2[0xae] = 0;
    param_2[0xaf] = 0;
  }
  bVar5 = (byte)((ulonglong)param_4 >> 0x38);
  bVar5 = (bVar5 >> 4 | bVar5 >> 1) & 1;
  if (((byte)(uint)((ulonglong)param_4 >> 0x34) & 7) != 7) {
    bVar5 = 1;
  }
  if (bVar5 == 0) {
    uVar7 = (int)*(char *)((longlong)param_2 + 0x52) | 0x410200;
  }
  else {
    uVar7 = 0;
  }
  param_2[0xb4] = uVar7;
  lVar4 = 1;
  do {
    param_2[lVar4 + 0xb4] = (int)*(char *)((longlong)param_2 + lVar4 + 0x52) | 0x410200;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  param_2[0xc3] = 0;
  lVar3 = 0;
  do {
    param_2[lVar3 + 0xb9] = 0;
    param_2[lVar3 + 0xbd] = 0xffffffff;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  param_2[0xc1] = 0;
  if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_2 + 0x40) + 0x144) != '\0')) {
    uVar7 = FUN_180070764(4,param_2,param_3);
  }
  else {
    uVar7 = 0;
  }
  param_2[0xc4] = uVar7;
  if ((cVar1 == '\0') && (*(char *)(*(longlong *)(param_2 + 0x40) + 0x145) != '\0')) {
    uVar7 = FUN_180070890(lVar4,param_2,param_3);
  }
  else {
    uVar7 = 0;
  }
  param_2[0xc5] = uVar7;
  return;
}

