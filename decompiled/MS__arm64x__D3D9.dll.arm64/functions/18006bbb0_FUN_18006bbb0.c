/*
 * FUN_18006bbb0 at 18006bbb0
 * undefined FUN_18006bbb0(void)
 * Address ranges: 18006bbb0-18006be87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006bbb0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,uint param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined1 local_58;
  
  local_60 = 0x200;
  local_58 = 1;
  local_70 = thunk_FUN_180102f80(0x200);
  lStack_68 = local_70;
  uVar3 = FUN_1800f5ce8(&local_70,*(undefined4 *)(param_3 + 0x20));
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x80;
  local_78 = 1;
  local_90 = thunk_FUN_180102f80(0x80);
  uStack_88 = local_90;
  FUN_1800f5f08(*(undefined4 *)(param_3 + 0x20),&local_70,0);
  uVar7 = 0;
  if (param_6 != 0) {
    do {
      uVar5 = (uint)*(byte *)(param_4 + uVar7);
      if (uVar5 != 0x11) {
        FUN_1800f5b00(&local_70,3,0x300005f,
                      (uint)*(byte *)(param_5 + (ulonglong)uVar5) << 4 | 0x101002,
                      *(uint *)(param_3 + 0xec + (ulonglong)uVar5 * 4) & 0xff);
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_6);
    uVar7 = 0;
    do {
      FUN_1800f5b00(&local_70,3,0x3000065,
                    (uint)*(byte *)(param_5 + (ulonglong)*(byte *)(param_4 + uVar7)) << 4 | 0x102002
                    ,uVar7);
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_6);
    uVar7 = 0;
    do {
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
      bVar1 = *(byte *)(param_4 + uVar7);
      uVar5 = (uint)bVar1;
      uVar6 = (uint)uVar7;
      if (uVar5 == 0x11) {
        uVar4 = FUN_1800f42d0(param_3 + 0x20,1,1);
        uVar5 = FUN_180071428(param_1,&local_90,param_3,3,7);
        FUN_1800f5730(param_3 + 0x20,&local_90,0x10,uVar4,1,uVar5,0xa4,uVar5,CONCAT44(uVar8,0xa4),0)
        ;
        FUN_1800f5730(param_3 + 0x20,&local_90,0x44,uVar4,1,uVar4,0,0);
        in_stack_ffffffffffffff40 = 0;
        FUN_1800f5730(param_3 + 0x20,&local_90,0x38,uVar6 | 0x410200,7,uVar5,0xa4,uVar4,0,0);
        if ((uVar5 & 0x3f00) == 0) {
          FUN_1800f4370(param_3 + 0x20,uVar5);
        }
      }
      else {
        uVar4 = FUN_180071428(param_1,&local_90,param_3,bVar1,
                              *(undefined1 *)(param_5 + (ulonglong)uVar5));
        uVar7 = (ulonglong)*(byte *)(param_5 + (ulonglong)uVar5);
        FUN_1800f5730(param_3 + 0x20,&local_90,0x36,uVar6 | 0x410200,uVar7,uVar4,
                      (&DAT_1802312e0)[uVar7],0);
      }
      FUN_1800f4370(param_3 + 0x20,uVar4);
      uVar7 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < param_6);
  }
  FUN_1800f5b00(&local_90,1,0x100003e);
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_1800f5b00(&local_70,2,0x2000068);
  }
  FUN_1800f5d48(&local_70,&local_90,uVar3);
  lVar2 = local_70;
  FUN_1800f5a90(param_2,local_70,lStack_68 - local_70);
  thunk_FUN_180102fc0(local_90);
  thunk_FUN_180102fc0(lVar2);
  return 1;
}

