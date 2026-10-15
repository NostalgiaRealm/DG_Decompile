/*
 * FUN_140014c38 at 140014c38
 * undefined8 __cdecl FUN_140014c38(longlong param_1, ulonglong param_2, int param_3)
 * Address ranges: 140014c38-140014f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140014c38(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  int local_1d4;
  undefined1 auStack_1d0 [4];
  int local_1cc;
  undefined1 auStack_1c8 [4];
  int local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined4 local_1a8;
  undefined1 auStack_198 [20];
  int local_184;
  undefined1 auStack_158 [296];
  int local_30;
  int local_2c;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x28;
  iVar3 = *(int *)(lVar1 + 0x18);
  *(int *)(lVar1 + 0x18) = iVar3 + 1;
  if (iVar3 == 0) {
    lVar2 = param_1 + (param_2 & 0xffffffff) * 0x20;
    iVar3 = (**(code **)(param_1 + 0x2d0))
                      (*(undefined8 *)(lVar1 + 8),param_3,&DAT_140029000,lVar2 + 0x330);
    if (iVar3 < 0) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
      return 0;
    }
    (**(code **)**(undefined8 **)(lVar1 + 8))
              (*(undefined8 **)(lVar1 + 8),&DAT_140026370,lVar2 + 0x338);
    *(undefined1 *)(lVar2 + 0x34d) = 0;
    local_1e8 = (longlong *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x2d8))
              (*(undefined8 **)(param_1 + 0x2d8),&DAT_140026360,&local_1e8);
    local_1f0 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_1e8 + 0xd8))(local_1e8,&DAT_140029010,&local_1f0);
    if (-1 < iVar3) {
      (**(code **)(*local_1f0 + 0x40))(local_1f0,auStack_158);
      (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x158))
                (*(longlong **)(lVar2 + 0x330),&local_1d8);
      if ((local_1d8 != local_30) || (uVar5 = 1, local_1d4 != local_2c)) {
        uVar5 = 0;
      }
      *(undefined1 *)(lVar2 + 0x34d) = uVar5;
      (**(code **)(*local_1f0 + 0x10))();
    }
    (**(code **)(*local_1e8 + 0x10))();
    (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x38))();
    uStack_1b8 = 0;
    local_1c0 = 0;
    (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
              (*(longlong **)(lVar2 + 0x330),1,&local_1c0,0x10);
    FUN_140025250(auStack_198,0,0x3c);
    (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
              (*(longlong **)(lVar2 + 0x330),0,auStack_198,0x3c);
    FUN_140025250(auStack_1c8,0,8);
    (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
              (*(longlong **)(lVar2 + 0x330),0x12,auStack_1c8,8);
    FUN_140025250(auStack_1b0,0,0x14);
    (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
              (*(longlong **)(lVar2 + 0x330),0x15,auStack_1b0,0x14);
    FUN_140025250((undefined1 *)&local_1e0,0,8);
    iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
                      (*(longlong **)(lVar2 + 0x330),0x2c,&local_1e0,8);
    if (iVar3 < 0) {
      local_1e0 = 0;
    }
    FUN_140025250(auStack_1d0,0,8);
    iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x330) + 0x68))
                      (*(longlong **)(lVar2 + 0x330),0x2d,auStack_1d0,8);
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = local_1cc;
    }
    if (((int)uStack_1b8 == 0) || (uStack_1b8._4_4_ == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(lVar2 + 0x348) = uVar5;
    *(bool *)(lVar2 + 0x349) = local_184 != 0;
    *(bool *)(lVar2 + 0x34a) = 0 < local_1c4;
    *(bool *)(lVar2 + 0x34b) = 0xbfff < param_3 && (int)local_1e0 != 0;
    *(undefined4 *)(lVar2 + 0x344) = local_1a8;
    *(bool *)(lVar2 + 0x34c) = iVar3 != 0;
  }
  return 1;
}

