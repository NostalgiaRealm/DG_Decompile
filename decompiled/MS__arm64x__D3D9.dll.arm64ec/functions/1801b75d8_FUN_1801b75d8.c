/*
 * FUN_1801b75d8 at 1801b75d8
 * undefined FUN_1801b75d8(void)
 * Address ranges: 1801b75d8-1801b795b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801b75d8(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint local_b0 [2];
  uint local_a8;
  uint local_a0;
  undefined4 local_98;
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
  local_80 = FUN_1802229a8(0x200);
  lStack_78 = local_80;
  uVar3 = FUN_1802130a8(&local_80,*(undefined4 *)(param_2 + 0x10));
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x80;
  local_48 = 1;
  local_60 = FUN_1802229a8(0x80);
  uStack_58 = local_60;
  FUN_1801b6fb0(&local_60,param_2);
  FUN_180214c88(param_2 + 0x10,&local_60,0x3e,0,local_b0,0);
  uVar5 = 0x4000;
  if ((*(uint *)(param_2 + 0x1c) &
      (1 << (ulonglong)(*(byte *)(param_2 + 0x6b) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x6a) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x69) & 0x1f) |
      1 << (ulonglong)(*(byte *)(param_2 + 0x68) & 0x1f))) == 0) {
    uVar5 = 0;
  }
  FUN_1802132f0(*(undefined4 *)(param_2 + 0x10),&local_80,uVar5);
  if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
    FUN_1802133a8(*(undefined4 *)(param_2 + 0x10),&local_80,0,0,0xc0,*(uint *)(param_2 + 0x14) & 1);
  }
  uVar7 = 0;
LAB_1801b76e0:
  do {
    cVar2 = *(char *)(param_2 + 0x7f + uVar7);
    if (cVar2 != '\0') {
      if ((int)uVar7 == 0) {
        FUN_180213588(&local_80,0);
        uVar7 = 1;
        goto LAB_1801b76e0;
      }
      FUN_180213538(&local_80,uVar7,cVar2,2);
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    if (1 < uVar6) {
      lVar8 = 0;
      do {
        if (*(char *)(param_2 + 0x81 + lVar8) != '\0') {
          FUN_1802135e0(&local_80,(&DAT_18022d706)[lVar8 * 8]);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 6);
      uVar6 = 0;
      do {
        if (((*(uint *)(param_2 + 0x24) | *(uint *)(param_2 + 0x20)) &
            1 << (ulonglong)(uVar6 & 0x1f)) != 0) {
          iVar4 = FUN_180213038(*(undefined4 *)(param_2 + 0x10));
          if ((iVar4 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar4 - 0x40U & 0x1f) & 1) != 0))
          {
            local_b0[0] = uVar6;
            FUN_180215058(&local_80,3,0x300005a,0x106000,local_b0,8);
          }
          else if (iVar4 == 0x51) {
            local_98 = 0;
            local_b0[0] = uVar6;
            local_a8 = uVar6;
            local_a0 = uVar6;
            FUN_180215058(&local_80,6,0x600005a,0x306000,local_b0,0x20);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 2);
      bVar1 = *(byte *)(param_2 + 0x6d);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213940(param_2 + 0x10,&local_80,bVar1,bVar1,bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6e);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213940(param_2 + 0x10,&local_80,bVar1,bVar1,bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x68);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213a18(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x69);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213a18(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6a);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213a18(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      bVar1 = *(byte *)(param_2 + 0x6b);
      if ((*(uint *)(param_2 + 0x1c) & 1 << (ulonglong)(bVar1 & 0x1f)) != 0) {
        FUN_180213a18(param_2 + 0x10,&local_80,bVar1,bVar1,(uint)bVar1);
      }
      if (*(char *)(param_2 + 0x49) != '\0') {
        FUN_180215058(&local_80,2,0x2000068,*(char *)(param_2 + 0x49),local_b0,0);
      }
      FUN_180213108(&local_80,&local_60,uVar3);
      lVar8 = local_80;
      FUN_180214fe8(param_1,local_80,lStack_78 - local_80);
      FUN_1802229d8(local_60);
      FUN_1802229d8(lVar8);
      return 1;
    }
  } while( true );
}

