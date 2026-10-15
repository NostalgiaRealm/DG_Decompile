/*
 * FUN_1800f5ba0 at 1800f5ba0
 * undefined FUN_1800f5ba0(void)
 * Address ranges: 1800f5ba0-1800f5cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5ba0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint local_d0 [4];
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint local_2c;
  
  local_80 = 0;
  uStack_70 = 0x1032547698badcfe;
  local_78 = 0xefcdab8967452301;
  *(int *)(*param_1 + 0x18) = (int)param_1[1] - (int)*param_1;
  lVar1 = *param_1;
  iVar4 = (int)param_1[1] - (int)lVar1;
  uVar2 = iVar4 - 0x14;
  uVar5 = (ulonglong)(uVar2 & 0xffffffc0);
  uVar3 = iVar4 * 8 - 0xa0;
  local_d0[0] = uVar3;
  FUN_1800feb50(&local_80,lVar1 + 0x14,uVar5);
  uVar2 = uVar2 & 0x3f;
  uVar5 = uVar5 | 0x14;
  if (uVar2 < 0x38) {
    FUN_1800feb50(&local_80,local_d0,4);
    if (uVar2 != 0) {
      FUN_1800feb50(&local_80,uVar5 + lVar1,uVar2);
    }
    thunk_FUN_180001218((longlong)&local_68 + (ulonglong)(uVar2 + 4),&DAT_18024c3e0,0x3c - uVar2);
    local_2c = (uVar3 | 4) >> 2;
    uStack_b8 = uStack_60;
    local_c0 = local_68;
    uStack_a8 = uStack_50;
    uStack_b0 = uStack_58;
    lStack_88 = CONCAT44(local_2c,uStack_30);
    uStack_98 = uStack_40;
    local_a0 = local_48;
    uStack_90 = uStack_38;
  }
  else {
    FUN_1800feb50(&local_80,uVar5 + lVar1,uVar2);
    FUN_1800feb50(&local_80,&DAT_18024c3e0,0x40 - uVar2);
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_90 = 0;
    local_c0 = (ulonglong)uVar3;
    lStack_88 = (ulonglong)((uVar3 | 4) >> 2) << 0x20;
  }
  FUN_1800fe160(&local_78,&local_c0);
  *(undefined8 *)(lVar1 + 0xc) = uStack_70;
  *(undefined8 *)(lVar1 + 4) = local_78;
  return;
}

