/*
 * FUN_18006ebe8 at 18006ebe8
 * undefined FUN_18006ebe8(void)
 * Address ranges: 18006ebe8-18006ee2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006ebe8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulonglong extraout_x10;
  ulonglong uVar5;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  uVar2 = FUN_1800791b0();
  bVar4 = 0xe;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x443) != '\0') {
    bVar4 = 0;
  }
  bVar4 = bVar4 | *(char *)(*(longlong *)(param_2 + 0x10) + 0x442) == '\0';
  if (bVar4 != 0) {
    func_0x00018018b228(uVar2,param_2,*(undefined4 *)(param_2 + 0x1d0),bVar4,auStack_60);
    local_80 = *(undefined4 *)(param_2 + 0xbc);
    local_7c = 0xe4;
    local_70 = 0x3f800000;
    uStack_68 = 0;
    uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_60,&local_80,0);
  }
  bVar4 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x444);
  if ((bVar4 & 0xf) != 0) {
    func_0x00018018b228(uVar2,param_2,*(undefined4 *)(param_2 + 0x1c8),bVar4 & 0xf,auStack_60);
    local_80 = *(undefined4 *)(param_2 + 0xbc);
    local_7c = 0xe4;
    uStack_68 = 0x3f8000003f800000;
    local_70 = 0x3f8000003f800000;
    uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_60,&local_80,0);
  }
  bVar4 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x445);
  if ((bVar4 & 0xf) != 0) {
    func_0x00018018b228(uVar2,param_2,*(undefined4 *)(param_2 + 0x1cc),bVar4 & 0xf,auStack_60);
    local_80 = *(undefined4 *)(param_2 + 0xbc);
    local_7c = 0xe4;
    local_70 = 0;
    uStack_68 = 0x3f80000000000000;
    uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_60,&local_80,0);
  }
  uVar5 = 0;
  do {
    bVar4 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + uVar5 + 0x446);
    if ((bVar4 & 0xf) != 0) {
      uVar2 = func_0x00018018b228(uVar2,param_2,
                                  *(undefined4 *)(param_2 + 0x1c0 + (ulonglong)((int)uVar5 + 5) * 4)
                                  ,bVar4 & 0xf,auStack_60);
      puVar3 = (undefined8 *)FUN_18006e680(uVar2,extraout_x10 & 0xffffffff);
      local_80 = *(undefined4 *)(param_2 + 0xbc);
      uStack_68 = puVar3[1];
      local_70 = *puVar3;
      local_7c = 0xe4;
      uVar2 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_60,&local_80,0);
    }
    if ((*(uint *)(param_2 + 0x210 + uVar5 * 4) & 0x3f00) == 0) {
      uVar2 = FUN_1800f4370(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x210 + uVar5 * 4) = 0;
    }
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
  } while (uVar1 < 8);
  if ((*(uint *)(param_2 + 0x200) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x200) = 0;
  }
  if ((*(uint *)(param_2 + 0x204) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x204) = 0;
  }
  if ((*(uint *)(param_2 + 0x208) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x208) = 0;
  }
  if ((*(uint *)(param_2 + 0x20c) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20c) = 0;
  }
  return;
}

