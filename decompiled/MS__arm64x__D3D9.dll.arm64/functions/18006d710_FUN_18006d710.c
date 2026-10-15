/*
 * FUN_18006d710 at 18006d710
 * undefined FUN_18006d710(void)
 * Address ranges: 18006d710-18006dacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006d710(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  *(undefined8 *)(param_4 + 0x2d4) = 0x11080300210803;
  *(undefined8 *)(param_4 + 0x2cc) = 0x31080300410803;
  *(undefined8 *)(param_4 + 0x2e4) = 0x11080400210804;
  *(undefined8 *)(param_4 + 0x2dc) = 0x31080400410804;
  *(undefined8 *)(param_4 + 0xb8) = 0x41040000110400;
  *(undefined4 *)(param_4 + 0xc0) = 0x20000d00;
  if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x4884) == '\0') {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(uint *)(param_4 + 0x70);
    *(uint *)(param_4 + 0x70) = uVar12 + 1;
    *(undefined4 *)(param_4 + (ulonglong)uVar12 * 4 + 0x60) = 0x10;
  }
  uVar7 = param_1;
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar11 = 0;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar11) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar11) == '\0')) {
        uVar6 = FUN_18006b450(param_1,param_2,param_4,0);
        uVar7 = uVar6;
        if ((*(byte *)(*(longlong *)(param_4 + 0x10) + uVar11 + 0x10) & 3) != 0) {
          uVar7 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar6 & 0xffffffff,8,
                                *(undefined4 *)(param_4 + 0x498),0xe4,0x3f800000,0);
        }
        lVar10 = param_4 + uVar11 * 4;
        *(int *)(lVar10 + 0x100) = (int)uVar6;
        if (uVar12 != 0xffffffff) {
          uVar2 = (uint)uVar11 | uVar12 << 0xe | 0x420300;
          *(uint *)(lVar10 + 0x23c) = uVar2;
          uVar7 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar2,0xf,uVar6 & 0xffffffff,0xe4,0);
        }
        break;
      }
      uVar2 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar2;
    } while (uVar2 < 0x10);
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    uVar11 = 0;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar11) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar11) == '0')) {
        uVar6 = FUN_18006b858(uVar7,param_2,param_4,0);
        uVar7 = uVar6;
        if ((*(byte *)(*(longlong *)(param_4 + 0x10) + uVar11 + 0x10) & 3) != 0) {
          uVar7 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar6 & 0xffffffff,8,
                                *(undefined4 *)(param_4 + 0x498),0xe4,0x3f800000,0);
        }
        lVar10 = param_4 + uVar11 * 4;
        *(int *)(lVar10 + 0x100) = (int)uVar6;
        if (uVar12 != 0xffffffff) {
          uVar2 = (uint)uVar11 | uVar12 << 0xe | 0x420300;
          *(uint *)(lVar10 + 0x23c) = uVar2;
          uVar7 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar2,0xf,uVar6 & 0xffffffff,0xe4,0);
        }
        break;
      }
      uVar2 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar2;
    } while (uVar2 < 0x10);
  }
  uVar11 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_4 + 0x10) + uVar11);
    cVar3 = pcVar1[0x10];
    if ((cVar3 != '\0') && (cVar4 = *pcVar1, cVar4 != -1)) {
      if (cVar4 == '\0') {
        cVar4 = *(char *)(param_4 + 0x53e);
LAB_18006d968:
        if (cVar4 != '\0') goto LAB_18006d9d8;
      }
      else if (cVar4 == '0') {
        cVar4 = *(char *)(param_4 + 0x53f);
        goto LAB_18006d968;
      }
      uVar6 = FUN_1800f5ea8(0xe4,cVar3);
      uVar7 = FUN_18006ba70(uVar6,param_2,param_4,0);
      *(int *)(param_4 + 0x100 + uVar11 * 4) = (int)uVar7;
      if (uVar12 != 0xffffffff) {
        uVar2 = (uint)uVar11 | uVar12 << 0xe | 0x420300;
        *(uint *)(param_4 + 0x23c + uVar11 * 4) = uVar2;
        uVar7 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar2,0xf,uVar7 & 0xffffffff,uVar6 & 0xff,
                              0);
      }
    }
LAB_18006d9d8:
    uVar2 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar2;
    if (0xf < uVar2) {
      lVar9 = 0;
      lVar10 = param_4 + 0x140;
      do {
        if (*(char *)(*(longlong *)(param_4 + 0x10) + lVar9 + 0x20) != '\0') {
          uVar7 = FUN_1800f42d0(param_4 + 0x20,4,1);
          *(int *)(lVar10 + lVar9 * 4) = (int)uVar7;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      uVar8 = FUN_180076cd8(uVar7,param_4,param_2,param_5);
      if (*(byte *)(*(longlong *)(param_4 + 0x10) + 0x4a6c) - 2 < 2) {
        FUN_18006ee30(uVar8,param_4);
      }
      if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x40) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1800f42d0(param_4 + 0x20,4,1);
      }
      *(undefined4 *)(param_4 + 0x238) = uVar5;
      FUN_180077660(param_1,*(undefined8 *)(param_4 + 0xd0),param_4,param_2);
      uVar8 = FUN_1800713a0(param_1,*(undefined8 *)(param_4 + 0xd0),param_4,param_3);
      FUN_180079260(uVar8,param_4,param_2);
      return;
    }
  } while( true );
}

