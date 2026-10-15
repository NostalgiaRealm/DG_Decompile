/*
 * FUN_100ef888 at 100ef888
 * undefined FUN_100ef888(void)
 * Address ranges: 100ef888-100ef9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ef888(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_e0 [4];
  ulonglong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  uint local_3c;
  
  local_90 = 0;
  uStack_80 = 0x1032547698badcfe;
  local_88 = 0xefcdab8967452301;
  *(int *)(*param_1 + 0x18) = param_1[1] - *param_1;
  iVar3 = *param_1;
  uVar5 = (param_1[1] - iVar3) - 0x14;
  uVar2 = uVar5 & 0xffffffc0;
  uVar4 = uVar5 * 8;
  local_e0[0] = uVar4;
  FUN_100f9878(&local_90,iVar3 + 0x14,uVar2);
  uVar5 = uVar5 - uVar2;
  iVar1 = iVar3 + 0x14 + uVar2;
  if (uVar5 < 0x38) {
    FUN_100f9878(&local_90,local_e0,4);
    if (uVar5 != 0) {
      FUN_100f9878(&local_90,iVar1,uVar5);
    }
    FUN_100ff660((int)&local_88 + uVar5 + 0x14,&DAT_10137590,-uVar5 + 0x3c);
    local_3c = (uVar4 | 4) >> 2;
    uStack_c8 = uStack_70;
    local_d0 = uStack_78;
    uStack_b8 = uStack_60;
    uStack_c0 = uStack_68;
    lStack_98 = CONCAT44(local_3c,uStack_40);
    uStack_a8 = uStack_50;
    local_b0 = uStack_58;
    uStack_a0 = uStack_48;
  }
  else {
    FUN_100f9878(&local_90,iVar1,uVar5);
    FUN_100f9878(&local_90,&DAT_10137590,-uVar5 + 0x40);
    uStack_c8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_a0 = 0;
    local_d0 = (ulonglong)uVar4;
    lStack_98 = (ulonglong)((uVar4 | 4) >> 2) << 0x20;
  }
  FUN_100f8df8(&local_88,&local_d0);
  *(undefined8 *)(iVar3 + 0xc) = uStack_80;
  *(undefined8 *)(iVar3 + 4) = local_88;
  return;
}

