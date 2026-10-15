/*
 * FUN_18017e5e0 at 18017e5e0
 * undefined FUN_18017e5e0(void)
 * Address ranges: 18017e5e0-18017e8d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18017e5e0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,uint param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_e0 [2];
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_68 = 0x200;
  local_60 = 1;
  local_48 = param_2;
  local_78 = FUN_1802229a8(0x200);
  lStack_70 = local_78;
  uVar3 = FUN_1802130a8(&local_78,*(undefined4 *)(param_3 + 0x20));
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x80;
  local_80 = 1;
  local_98 = FUN_1802229a8(0x80);
  uStack_90 = local_98;
  FUN_1802132f0(*(undefined4 *)(param_3 + 0x20),&local_78,0);
  uVar7 = 0;
  if (param_6 != 0) {
    do {
      uVar5 = (uint)*(byte *)(param_4 + uVar7);
      if (uVar5 != 0x11) {
        FUN_1802134a0(&local_78,*(uint *)(param_3 + 0xec + (ulonglong)uVar5 * 4) & 0xff,
                      *(undefined1 *)(param_5 + (ulonglong)uVar5));
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_6);
    uVar7 = 0;
    do {
      FUN_1802135e0(&local_78,uVar7,*(undefined1 *)(param_5 + (ulonglong)*(byte *)(param_4 + uVar7))
                   );
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_6);
    uVar7 = 0;
    local_58 = param_4;
    local_50 = param_5;
    do {
      lVar2 = local_50;
      bVar1 = *(byte *)(local_58 + uVar7);
      uVar5 = (uint)bVar1;
      uVar6 = (uint)uVar7;
      if (uVar5 == 0x11) {
        uVar4 = FUN_180213760(param_3 + 0x20,1,1);
        uVar5 = FUN_1801845d8(param_1,&local_98,param_3,3,7);
        local_b8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,0xa4);
        local_c8 = CONCAT44(local_c8._4_4_,uVar5);
        local_d0 = CONCAT44(local_d0._4_4_,0xa4);
        local_e0[0] = 1;
        local_d8 = uVar5;
        FUN_180214c88(param_3 + 0x20,&local_98,0x10,uVar4,local_e0,0x30);
        local_d0 = 0;
        local_c8 = 0;
        local_e0[0] = 1;
        local_d8 = uVar4;
        FUN_180214c88(param_3 + 0x20,&local_98,0x44,uVar4,local_e0,0x20);
        local_c0 = 0;
        local_b8 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,uVar4);
        local_d0 = CONCAT44(local_d0._4_4_,0xa4);
        local_e0[0] = 7;
        local_d8 = uVar5;
        FUN_180214c88(param_3 + 0x20,&local_98,0x38,uVar6 | 0x410200,local_e0,0x30);
        if ((uVar5 & 0x3f00) == 0) {
          FUN_180213800(param_3 + 0x20,uVar5);
        }
      }
      else {
        uVar4 = FUN_1801845d8(param_1,&local_98,param_3,bVar1,
                              *(undefined1 *)(local_50 + (ulonglong)uVar5));
        bVar1 = *(byte *)(lVar2 + (ulonglong)uVar5);
        local_c8 = 0;
        local_e0[0] = (uint)bVar1;
        local_d0 = CONCAT44(local_d0._4_4_,(uint)(byte)(&DAT_18022c4a0)[bVar1]);
        local_d8 = uVar4;
        FUN_180214c88(param_3 + 0x20,&local_98,0x36,uVar6 | 0x410200,local_e0,0x20);
      }
      FUN_180213800(param_3 + 0x20,uVar4);
      uVar7 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < param_6);
  }
  FUN_180215058(&local_98,1,0x100003e);
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_180215058(&local_78,2,0x2000068,*(char *)(param_3 + 0x59),local_e0,0);
  }
  FUN_180213108(&local_78,&local_98,uVar3);
  lVar2 = local_78;
  FUN_180214fe8(local_48,local_78,lStack_70 - local_78);
  FUN_1802229d8(local_98);
  FUN_1802229d8(lVar2);
  return 1;
}

