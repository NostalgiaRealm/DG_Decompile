/*
 * FUN_18015d6b8 at 18015d6b8
 * undefined FUN_18015d6b8(void)
 * Address ranges: 18015d6b8-18015da43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015d6b8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = param_1[4];
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  lVar10 = param_1[3];
  FUN_18014e9a0(lVar1,0,0,0);
  local_88 = lVar2;
  if ((uVar3 >> 1 & 1) != 0) {
    if (*(int *)(lVar2 + 0x10) == 9) {
      local_80 = lVar10;
      uVar6 = FUN_180212808(*(undefined8 *)(lVar1 + 0xf820),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78),
                            &local_78);
      if ((uVar6 & 1) == 0) goto LAB_18015d9e4;
      FUN_180209f40(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_78,0,
                    local_68 & 0xffffffff);
    }
    else {
      if (*(int *)(lVar2 + 0x10) != 0xb) goto LAB_18015d9e4;
      local_70 = 0;
      local_68 = 0;
      lStack_60 = 0;
      local_78 = 0;
      local_80 = lVar10;
    }
    FUN_180161680(lVar1 + 0xf830,&local_88,&local_80);
    thunk_FUN_1802236f8(lVar1 + 0xf888);
    FUN_180160cc0(lVar1 + 0xf808,lVar2);
    thunk_FUN_18022370c(lVar1 + 0xf888);
    goto LAB_18015d9e4;
  }
  lVar9 = *(longlong *)(lVar1 + 0xf810);
  uVar8 = *(undefined8 *)(*(longlong *)(lVar9 + 0x1508) + 0xb78);
  local_48 = 0xffffffff;
  local_44 = 1;
  iVar4 = *(int *)(lVar2 + 0x10);
  local_80 = lVar2;
  local_78 = lVar10;
  local_70 = uVar8;
  if (iVar4 == 8) {
    lVar10 = *(longlong *)(lVar9 + 0x1500);
LAB_18015d99c:
    uVar6 = FUN_180212808(*(undefined8 *)(lVar1 + 0xf820),*(undefined8 *)(lVar10 + 0x18),uVar8,
                          &local_68);
    uVar8 = local_70;
    if ((uVar6 & 1) != 0) {
      uVar6 = local_58 & 0xffffffff;
      lVar10 = lStack_60;
LAB_18015d9b4:
      FUN_180161010(lVar1 + 0xf808,lVar2,*(undefined8 *)(lVar1 + 0xf820),lVar10,uVar6);
      uVar8 = local_70;
    }
  }
  else {
    if (iVar4 != 9) {
      if (iVar4 != 10) {
        if (iVar4 != 0xb) goto LAB_18015d9e4;
        FUN_1801615b0(lVar1 + 0xf830,&local_88);
        lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500);
        uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78);
        goto LAB_18015d99c;
      }
      uVar6 = FUN_180212808(*(undefined8 *)(lVar1 + 0xf828),
                            *(undefined8 *)(*(longlong *)(lVar9 + 0x1500) + 0x18),uVar8,&local_68);
      uVar7 = local_68;
      if ((uVar6 & 1) == 0) {
        FUN_18015ddc8(lVar2,0,lVar10,1);
        goto LAB_18015d9e4;
      }
      uVar6 = local_58 & 0xffffffff;
      FUN_180209fa8(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_68,2,uVar6);
      lVar10 = lStack_60;
      FUN_18020a010(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar7,2,uVar6,1,
                    lStack_60,uVar6 << 3);
      goto LAB_18015d9b4;
    }
    lVar9 = 0xf830;
    lVar10 = FUN_180161530(lVar1 + 0xf830,&local_88);
    if (*(longlong *)(lVar10 + 8) == 0) {
      FUN_1801615b0(lVar1 + lVar9,&local_88);
      uVar7 = FUN_180212808(*(undefined8 *)(lVar1 + 0xf820),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1508) + 0xb78),
                            &local_68);
      uVar6 = local_68;
      uVar11 = local_58 & 0xffffffff;
      uVar8 = local_70;
      if ((uVar7 & 1) != 0) {
        FUN_180209f40(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),local_68,0,uVar11);
        uVar8 = local_70;
      }
    }
    else {
      lStack_60 = *(longlong *)(lVar10 + 0x10);
      uVar6 = *(ulonglong *)(lVar10 + 8);
      uStack_50 = *(undefined8 *)(lVar10 + 0x20);
      uVar11 = *(ulonglong *)(lVar10 + 0x18);
      local_68 = uVar6;
      local_58 = uVar11;
      FUN_1801615b0(lVar1 + lVar9,&local_88);
      uVar11 = uVar11 & 0xffffffff;
    }
    FUN_180209fa8(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar6,0,uVar11);
    local_88 = lStack_60;
    FUN_18020a010(*(undefined8 *)(*(longlong *)(lVar1 + 0xf810) + 0x1508),uVar6,0,uVar11,1,lStack_60
                  ,uVar11 << 3);
    FUN_180161010(lVar1 + 0xf808,lVar2,*(undefined8 *)(lVar1 + 0xf820),local_88,uVar11);
  }
  *(undefined8 *)(lVar2 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xf810) + 0x1500) + 0x18);
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  FUN_180160e18(lVar1 + 0xf808,&local_80);
LAB_18015d9e4:
  if (((char)lVar5 != '\0') &&
     (*(ulonglong *)(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 0xb78) <=
      *(ulonglong *)(lVar2 + 0x20))) {
    FUN_18014e9a0(lVar1,0,0,0);
    FUN_180207560(*(longlong *)(*(longlong *)(lVar1 + 0xf6e0) + 0x1508) + 8,0);
  }
  return;
}

