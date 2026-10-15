/*
 * FUN_18006eec0 at 18006eec0
 * undefined FUN_18006eec0(void)
 * Address ranges: 18006eec0-18006f0c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006eec0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 extraout_x1;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = FUN_1800f42d0(param_2 + 0x20,4,1);
  *(undefined4 *)(param_2 + 0x1fc) = uVar1;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x444) < '\0') {
    uVar1 = FUN_1800f42d0(param_2 + 0x20,extraout_x1,1);
    FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar1,0xf,*(undefined4 *)(param_2 + 0xbc),0xe4,
                  0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  }
  *(undefined4 *)(param_2 + 0x208) = uVar1;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x445) < '\0') {
    uVar1 = FUN_1800f42d0(param_2 + 0x20,4,1);
    FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar1,0xf,*(undefined4 *)(param_2 + 0xbc),0xe4,0,0,0,
                  0x3f800000,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  }
  *(undefined4 *)(param_2 + 0x20c) = uVar1;
  if ((char)(*(byte *)(*(longlong *)(param_2 + 0x10) + 0x443) |
            *(byte *)(*(longlong *)(param_2 + 0x10) + 0x442)) < '\0') {
    uVar1 = FUN_1800f42d0(param_2 + 0x20,4,1);
    FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar1,0xf,*(undefined4 *)(param_2 + 0xbc),0xe4,
                  0x3f800000,0,0,0,0);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1d0);
  }
  *(undefined4 *)(param_2 + 0x200) = uVar1;
  *(undefined4 *)(param_2 + 0x204) = uVar1;
  uVar5 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 + 5);
    if (*(char *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar5 + 0x446) < '\0') {
      uVar2 = FUN_1800f42d0(param_2 + 0x20,4,1);
      uVar1 = (undefined4)uVar2;
      puVar3 = (undefined4 *)FUN_18006e680(uVar2,uVar4 & 0xffffffff);
      FUN_1800f5730(param_2 + 0x20,param_3,0x36,uVar2 & 0xffffffff,0xf,
                    *(undefined4 *)(param_2 + 0xbc),0xe4,*puVar3,puVar3[1],puVar3[2],puVar3[3],0);
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x1c0 + uVar4 * 4);
    }
    *(undefined4 *)(param_2 + 0x210 + (ulonglong)uVar5 * 4) = uVar1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  return;
}

