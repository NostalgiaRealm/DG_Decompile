/*
 * FUN_18009f770 at 18009f770
 * undefined FUN_18009f770(void)
 * Address ranges: 18009f770-18009faf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009f770(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_70 = 0x200;
  local_68 = 1;
  local_80 = thunk_FUN_180102f80(0x200);
  lStack_78 = local_80;
  uVar2 = FUN_1800f5ce8(&local_80,*(undefined4 *)(param_2 + 0x10));
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x80;
  local_48 = 1;
  local_60 = thunk_FUN_180102f80(0x80);
  uStack_58 = local_60;
  FUN_18009f248(&local_60,param_2);
  FUN_1800f5730(param_2 + 0x10,&local_60,0x3e,0);
  uVar4 = 0x4000;
  if ((*(uint *)(param_2 + 0x1c) &
      (1 << (ulonglong)(*(byte *)(param_2 + 0x6b) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x6a) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x69) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x68) & 0x1f))) == 0) {
    uVar4 = 0;
  }
  FUN_1800f5f08(*(undefined4 *)(param_2 + 0x10),&local_80,uVar4);
  if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
    FUN_1800f5fb8(*(undefined4 *)(param_2 + 0x10),&local_80,0,0,0xc0,*(uint *)(param_2 + 0x14) & 1);
  }
  uVar6 = 0;
LAB_18009f870:
  do {
    uVar5 = (uint)*(byte *)(param_2 + 0x7f + uVar6);
    if (uVar5 != 0) {
      uVar5 = uVar5 << 4 | 0x101002;
      if ((int)uVar6 == 0) {
        FUN_1800f5b00(&local_80,4,0x4001064,uVar5,0,1);
        uVar6 = 1;
        goto LAB_18009f870;
      }
      FUN_1800f5b00(&local_80,3,0x3001062,uVar5,uVar6);
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (1 < uVar5) {
      lVar7 = 0;
      do {
        uVar5 = (uint)*(byte *)(param_2 + 0x81 + lVar7);
        if (uVar5 != 0) {
          FUN_1800f5b00(&local_80,3,0x3000065,uVar5 << 4 | 0x102002,(&DAT_180231426)[lVar7 * 8]);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
      uVar5 = 0;
      do {
        if (((*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20)) &
            1 << (ulonglong)(uVar5 & 0x1f)) != 0) {
          iVar3 = func_0x000180213038(*(undefined4 *)(param_2 + 0x10));
          if ((iVar3 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar3 - 0x40U & 0x1f) & 1) != 0))
          {
            FUN_1800f5b00(&local_80,3,0x300005a,0x106000,uVar5);
          }
          else if (iVar3 == 0x51) {
            FUN_1800f5b00(&local_80,6,0x600005a,0x306000,uVar5,uVar5,uVar5,0);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      bVar1 = *(byte *)(param_2 + 0x6d);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4470(param_2 + 0x10,&local_80,bVar1,bVar1,bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6e);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4470(param_2 + 0x10,&local_80,bVar1,bVar1,bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x68);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4530(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x69);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4530(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6a);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4530(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6b);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_1800f4530(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      if (*(char *)(param_2 + 0x49) != '\0') {
        FUN_1800f5b00(&local_80,2,0x2000068);
      }
      FUN_1800f5d48(&local_80,&local_60,uVar2);
      lVar7 = local_80;
      FUN_1800f5a90(param_1,local_80,lStack_78 - local_80);
      thunk_FUN_180102fc0(local_60);
      thunk_FUN_180102fc0(lVar7);
      return 1;
    }
  } while( true );
}

