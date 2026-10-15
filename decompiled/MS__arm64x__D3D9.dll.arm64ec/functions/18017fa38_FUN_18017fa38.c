/*
 * FUN_18017fa38 at 18017fa38
 * undefined FUN_18017fa38(void)
 * Address ranges: 18017fa38-18017fd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18017fa38(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 local_c0 [2];
  uint local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
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
  local_60 = FUN_1802229a8(0x200);
  lStack_58 = local_60;
  uVar2 = FUN_1802130a8(&local_60,*(undefined4 *)(param_3 + 0x20));
  uVar4 = FUN_1802132f0(*(undefined4 *)(param_3 + 0x20),&local_60,0);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    lVar6 = *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528);
    *(undefined1 *)(param_3 + 0x53c) = *(undefined1 *)(lVar6 + 0x10);
    *(byte *)(lVar6 + 0x10) = *(byte *)(lVar6 + 0x10) | 7;
  }
  FUN_18018db00(uVar4,&local_60,param_3);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528) + 0x10) =
         *(undefined1 *)(param_3 + 0x53c);
  }
  iVar7 = 0;
  lVar6 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + lVar6);
    if ((pcVar1[0x10] != '\0') && (*pcVar1 != -1)) {
      FUN_1802135e0(&local_60,iVar7);
      iVar7 = iVar7 + 1;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    FUN_1802135e0(&local_60,iVar7,7);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x80;
  local_68 = 1;
  local_80 = FUN_1802229a8(0x80);
  uVar5 = 0;
  uVar9 = 0;
  uStack_78 = local_80;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + uVar9);
    if ((pcVar1[0x10] != '\0') && (*pcVar1 != -1)) {
      FUN_18018acd8(param_1,param_3,&local_80,uVar9,0xf,uVar5 | 0x410200);
      uVar5 = uVar5 + 1;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while (uVar8 < 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x528) + 0x10) =
         7;
    uVar3 = FUN_180213760(param_3 + 0x20,4,1);
    uVar8 = *(uint *)(param_3 + 0x528);
    if (*(byte *)(param_3 + (ulonglong)uVar8 + 0xde) - 2 < 2) {
      uVar8 = uVar8 | 0x410100;
    }
    else {
      FUN_18018acd8(param_1,param_3,&local_80,(ulonglong)uVar8,7,uVar3);
      uVar8 = uVar3;
    }
    local_98 = 0;
    local_a0 = 0xa4;
    local_b0 = 0xa4;
    local_c0[0] = 8;
    local_a8 = CONCAT44(local_a8._4_4_,uVar8);
    local_b8 = uVar8;
    FUN_180214c88(param_3 + 0x20,&local_80,0x10,uVar3,local_c0,0x30);
    local_a8 = 0;
    local_b0 = 0xff;
    local_c0[0] = 8;
    local_b8 = uVar3;
    FUN_180214c88(param_3 + 0x20,&local_80,0x44,uVar3,local_c0,0x20);
    local_98 = 0;
    local_a0 = 0xff;
    local_c0[0] = 7;
    local_a8 = CONCAT44(local_a8._4_4_,uVar3);
    local_b0 = 0xa4;
    local_b8 = uVar8;
    FUN_180214c88(param_3 + 0x20,&local_80,0x38,uVar5 | 0x310200,local_c0,0x30);
    FUN_180213800(param_3 + 0x20,uVar3);
  }
  FUN_180214c88(param_3 + 0x20,&local_80,0x3e,0,local_c0,0);
  if (*(char *)(param_3 + 0x59) != '\0') {
    FUN_180215058(&local_60,2,0x2000068,*(char *)(param_3 + 0x59),local_c0,0);
  }
  FUN_180213108(&local_60,&local_80,uVar2);
  lVar6 = local_60;
  FUN_180214fe8(param_2,local_60,lStack_58 - local_60);
  FUN_1802229d8(local_80);
  FUN_1802229d8(lVar6);
  return 1;
}

