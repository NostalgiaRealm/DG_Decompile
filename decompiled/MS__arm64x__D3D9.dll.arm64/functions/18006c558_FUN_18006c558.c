/*
 * FUN_18006c558 at 18006c558
 * undefined FUN_18006c558(void)
 * Address ranges: 18006c558-18006c6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18006c558(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  
  local_80 = 0x200;
  local_78 = 1;
  uVar6 = 0;
  local_90 = thunk_FUN_180102f80(0x200);
  lStack_88 = local_90;
  uVar2 = FUN_180069260(local_90,&local_90,param_3);
  lVar5 = local_90;
  if ((int)uVar2 != 0) {
    uVar3 = uVar2;
    if (*(int *)(param_3 + 0x158) != 0) {
      do {
        uVar3 = FUN_1800f5b00(&local_90,4,0x400005f,
                              (uint)*(byte *)(param_3 + 0x134 +
                                             (ulonglong)*(byte *)(param_3 + 0x146 + uVar6)) << 4 |
                              0x201002,3,uVar6);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_3 + 0x158));
    }
    FUN_180069398(uVar3,&local_90,param_3);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0x80;
    local_58 = 1;
    local_70 = thunk_FUN_180102f80(0x80);
    uStack_68 = local_70;
    FUN_180069560(param_1,&local_70,0,param_3);
    uVar4 = FUN_1800f5b00(&local_70,1,0x100003e);
    uVar4 = FUN_1800714c0(uVar4,&local_90,param_3);
    if ((*(uint *)(param_3 + 0x28) >> 3 & 1) != 0) {
      uVar4 = FUN_1800f5fb8(*(undefined4 *)(param_3 + 0x20),&local_90,3,2,0x2f0,
                            *(uint *)(param_3 + 0x24) >> 3 & 1);
    }
    FUN_180069470(uVar4,&local_90,param_3);
    FUN_1800f5d48(&local_90,&local_70,uVar2 & 0xffffffff);
    lVar5 = local_90;
    FUN_1800f5a90(param_2,local_90,lStack_88 - local_90);
    uVar6 = 1;
    thunk_FUN_180102fc0(local_70);
  }
  thunk_FUN_180102fc0(lVar5);
  return uVar6;
}

