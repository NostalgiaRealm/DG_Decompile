/*
 * FUN_18006cf38 at 18006cf38
 * undefined FUN_18006cf38(void)
 * Address ranges: 18006cf38-18006d253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18006cf38(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_50 = 0x200;
  local_48 = 1;
  local_60 = thunk_FUN_180102f80(0x200);
  lStack_58 = local_60;
  uVar2 = FUN_1800f5ce8(&local_60,*(undefined4 *)(param_3 + 0x20));
  uVar4 = FUN_1800f5f08(*(undefined4 *)(param_3 + 0x20),&local_60,0);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    lVar7 = *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528);
    *(undefined1 *)(param_3 + 0x53c) = *(undefined1 *)(lVar7 + 0x10);
    *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) | 7;
  }
  FUN_1800794b0(uVar4,&local_60,param_3);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528) + 0x10) =
         *(undefined1 *)(param_3 + 0x53c);
  }
  iVar8 = 0;
  lVar7 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + lVar7);
    uVar5 = (uint)(byte)pcVar1[0x10];
    if ((uVar5 != 0) && (*pcVar1 != -1)) {
      FUN_1800f5b00(&local_60,3,0x3000065,uVar5 << 4 | 0x102002,iVar8);
      iVar8 = iVar8 + 1;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    FUN_1800f5b00(&local_60,3,0x3000065,0x102072,iVar8);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x80;
  local_68 = 1;
  local_80 = thunk_FUN_180102f80(0x80);
  uVar5 = 0;
  uVar9 = 0;
  uStack_78 = local_80;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + uVar9);
    if ((pcVar1[0x10] != '\0') && (*pcVar1 != -1)) {
      FUN_180076c30(param_1,param_3,&local_80,uVar9,0xf,uVar5 | 0x410200);
      uVar5 = uVar5 + 1;
    }
    uVar6 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar6;
  } while (uVar6 < 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528) + 0x10) =
         7;
    uVar3 = FUN_1800f42d0(param_3 + 0x20,4,1);
    uVar6 = *(uint *)(param_3 + 0x528);
    if (*(byte *)(param_3 + (ulonglong)uVar6 + 0xde) - 2 < 2) {
      uVar6 = uVar6 | 0x410100;
    }
    else {
      FUN_180076c30(param_1,param_3,&local_80,(ulonglong)uVar6,7,uVar3);
      uVar6 = uVar3;
    }
    FUN_1800f5730(param_3 + 0x20,&local_80,0x10,uVar3,8,uVar6,0xa4,uVar6,0xa4,0);
    FUN_1800f5730(param_3 + 0x20,&local_80,0x44,uVar3,8,uVar3,0xff,0);
    FUN_1800f5730(param_3 + 0x20,&local_80,0x38,uVar5 | 0x310200,7,uVar6,0xa4,uVar3,0xff,0);
    FUN_1800f4370(param_3 + 0x20,uVar3);
  }
  FUN_1800f5730(param_3 + 0x20,&local_80,0x3e,0);
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_1800f5b00(&local_60,2,0x2000068);
  }
  FUN_1800f5d48(&local_60,&local_80,uVar2);
  lVar7 = local_60;
  FUN_1800f5a90(param_2,local_60,lStack_58 - local_60);
  thunk_FUN_180102fc0(local_80);
  thunk_FUN_180102fc0(lVar7);
  return 1;
}

