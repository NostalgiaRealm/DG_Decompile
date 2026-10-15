/*
 * FUN_1801801f8 at 1801801f8
 * undefined FUN_1801801f8(void)
 * Address ranges: 1801801f8-180180607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801801f8(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 local_a0 [2];
  undefined4 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  *(undefined8 *)(param_4 + 0x2d4) = 0x11080300210803;
  *(undefined8 *)(param_4 + 0x2cc) = 0x31080300410803;
  *(undefined8 *)(param_4 + 0x2e4) = 0x11080400210804;
  *(undefined8 *)(param_4 + 0x2dc) = 0x31080400410804;
  *(undefined8 *)(param_4 + 0xb8) = 0x41040000110400;
  *(undefined4 *)(param_4 + 0xc0) = 0x20000d00;
  if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x4884) == '\0') {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(uint *)(param_4 + 0x70);
    *(uint *)(param_4 + 0x70) = uVar11 + 1;
    *(undefined4 *)(param_4 + (ulonglong)uVar11 * 4 + 0x60) = 0x10;
  }
  uVar8 = param_1;
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar12 = 0;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar12) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar12) == '\0')) {
        uVar6 = FUN_18017dcd8(param_1,param_2,param_4,0);
        uVar8 = uVar6;
        if ((*(byte *)(*(longlong *)(param_4 + 0x10) + uVar12 + 0x10) & 3) != 0) {
          local_98 = *(undefined4 *)(param_4 + 0x498);
          local_80 = 0;
          local_88 = CONCAT44(local_88._4_4_,0x3f800000);
          local_90 = 0xe4;
          local_a0[0] = 8;
          uVar8 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar6 & 0xffffffff,local_a0,0x28);
        }
        lVar10 = param_4 + uVar12 * 4;
        *(int *)(lVar10 + 0x100) = (int)uVar6;
        if (uVar11 != 0xffffffff) {
          local_88 = 0;
          uVar2 = (uint)uVar12 | uVar11 << 0xe | 0x420300;
          local_90 = 0xe4;
          *(uint *)(lVar10 + 0x23c) = uVar2;
          local_a0[0] = 0xf;
          local_98 = (int)uVar6;
          uVar8 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar2,local_a0,0x20);
        }
        break;
      }
      uVar2 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar2;
    } while (uVar2 < 0x10);
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    uVar12 = 0;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar12) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar12) == '0')) {
        uVar6 = FUN_18017e1e8(uVar8,param_2,param_4,0);
        uVar8 = uVar6;
        if ((*(byte *)(*(longlong *)(param_4 + 0x10) + uVar12 + 0x10) & 3) != 0) {
          local_98 = *(undefined4 *)(param_4 + 0x498);
          local_80 = 0;
          local_88 = CONCAT44(local_88._4_4_,0x3f800000);
          local_90 = 0xe4;
          local_a0[0] = 8;
          uVar8 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar6 & 0xffffffff,local_a0,0x28);
        }
        lVar10 = param_4 + uVar12 * 4;
        *(int *)(lVar10 + 0x100) = (int)uVar6;
        if (uVar11 != 0xffffffff) {
          local_88 = 0;
          uVar2 = (uint)uVar12 | uVar11 << 0xe | 0x420300;
          local_90 = 0xe4;
          *(uint *)(lVar10 + 0x23c) = uVar2;
          local_a0[0] = 0xf;
          local_98 = (int)uVar6;
          uVar8 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar2,local_a0,0x20);
        }
        break;
      }
      uVar2 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar2;
    } while (uVar2 < 0x10);
  }
  uVar12 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_4 + 0x10) + uVar12);
    cVar3 = pcVar1[0x10];
    if ((cVar3 != '\0') && (cVar4 = *pcVar1, cVar4 != -1)) {
      if (cVar4 == '\0') {
        cVar4 = *(char *)(param_4 + 0x53e);
LAB_180180494:
        if (cVar4 != '\0') goto LAB_180180514;
      }
      else if (cVar4 == '0') {
        cVar4 = *(char *)(param_4 + 0x53f);
        goto LAB_180180494;
      }
      uVar7 = FUN_180213268(0xe4,cVar3);
      uVar8 = FUN_18017e470(uVar7,param_2,param_4,0);
      *(int *)(param_4 + 0x100 + uVar12 * 4) = (int)uVar8;
      if (uVar11 != 0xffffffff) {
        local_88 = 0;
        uVar2 = (uint)uVar12 | uVar11 << 0xe | 0x420300;
        *(uint *)(param_4 + 0x23c + uVar12 * 4) = uVar2;
        local_90 = (uint)uVar7 & 0xff;
        local_a0[0] = 0xf;
        local_98 = (int)uVar8;
        uVar8 = FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar2,local_a0,0x20);
      }
    }
LAB_180180514:
    uVar2 = (uint)uVar12 + 1;
    uVar12 = (ulonglong)uVar2;
    if (0xf < uVar2) {
      lVar9 = 0;
      lVar10 = param_4 + 0x140;
      do {
        if (*(char *)(*(longlong *)(param_4 + 0x10) + lVar9 + 0x20) != '\0') {
          uVar8 = FUN_180213760(param_4 + 0x20,4,1);
          *(int *)(lVar10 + lVar9 * 4) = (int)uVar8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      uVar7 = FUN_18018ad80(uVar8,param_4,param_2,param_5);
      if (*(byte *)(*(longlong *)(param_4 + 0x10) + 0x4a6c) - 2 < 2) {
        FUN_180181cb8(uVar7,param_4);
      }
      if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x40) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_180213760(param_4 + 0x20,4,1);
      }
      *(undefined4 *)(param_4 + 0x238) = uVar5;
      FUN_18018b7c8(param_1,*(undefined8 *)(param_4 + 0xd0),param_4,param_2);
      uVar7 = FUN_180184548(param_1,*(undefined8 *)(param_4 + 0xd0),param_4,param_3);
      FUN_18018d8b0(uVar7,param_4,param_2);
      return;
    }
  } while( true );
}

