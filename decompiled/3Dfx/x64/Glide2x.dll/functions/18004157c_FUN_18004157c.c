/*
 * FUN_18004157c at 18004157c
 * longlong __fastcall FUN_18004157c(longlong param_1, byte * param_2)
 * Address ranges: 18004157c-1800417a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18004157c(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong local_res8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = 0;
  uVar4 = 0;
  local_res8 = ((longlong)*(int *)(param_2 + 0x9c) + (ulonglong)*(uint *)(param_2 + 0x94) +
                (longlong)*(int *)(param_2 + 0x8c) + (longlong)*(int *)(param_2 + 0x88) +
                (longlong)*(int *)(param_2 + 0x80) + (longlong)*(int *)(param_2 + 0x78) +
                (longlong)*(int *)(param_2 + 0x70) + (longlong)*(int *)(param_2 + 100) +
                *(longlong *)(param_2 + 0x58) + *(longlong *)(param_2 + 0x48) +
                *(longlong *)(param_2 + 0x38) + *(longlong *)(param_2 + 0x28) +
                *(longlong *)(param_2 + 0x18) + *(longlong *)(param_2 + 8) << 0x20 |
               (ulonglong)*(uint *)(param_2 + 0x98)) + (ulonglong)*(uint *)(param_2 + 0x90) +
               (longlong)*(int *)(param_2 + 0x84) + (longlong)*(int *)(param_2 + 0x7c) +
               (longlong)*(int *)(param_2 + 0x74) + (longlong)*(int *)(param_2 + 0x6c) +
               (ulonglong)*(uint *)(param_2 + 0x68) + (longlong)*(int *)(param_2 + 0x60) +
               (ulonglong)*(uint *)(param_2 + 0x40) + *(longlong *)(param_2 + 0x50) +
               *(longlong *)(param_2 + 0x30) + *(longlong *)(param_2 + 0x20) +
               *(longlong *)(param_2 + 0x10) + *(longlong *)param_2;
  uVar10 = *(uint *)(param_1 + 0x24);
  if (uVar10 != 0) {
    uVar7 = 0;
    uVar8 = uVar10;
    do {
      uVar4 = uVar8 + uVar7 >> 1;
      uVar9 = *(ulonglong *)(*plVar1 + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar9 <= local_res8) {
        if (local_res8 <= uVar9) break;
        uVar7 = uVar4 + 1;
        uVar3 = uVar8;
        uVar4 = uVar7;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar7);
    if ((uVar4 != uVar10) &&
       (uVar9 = (ulonglong)uVar4, *(ulonglong *)(*plVar1 + uVar9 * 0x18) == local_res8))
    goto LAB_1800416b2;
  }
  FUN_180041eb8(plVar1,uVar4,local_res8,&local_res8);
  uVar9 = (ulonglong)uVar4;
LAB_1800416b2:
  puVar2 = (undefined8 *)(*plVar1 + 0x10 + uVar9 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = (longlong *)*puVar2;
    if ((int)plVar1[1] != 0) {
      lVar6 = *plVar1;
      uVar10 = 0;
      do {
        iVar5 = FUN_18005f350((byte *)((ulonglong)uVar10 * 0xa8 + lVar6),param_2,0xa0);
        if (iVar5 == 0) {
          lVar6 = *(longlong *)((ulonglong)uVar10 * 0xa8 + 0xa0 + lVar6);
          if (lVar6 != 0) {
            return lVar6;
          }
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(plVar1 + 1));
    }
    lVar6 = FUN_18004128c(param_1,(undefined8 *)param_2);
    if (lVar6 != 0) {
      local_d8 = *(undefined8 *)param_2;
      uStack_d0 = *(undefined8 *)(param_2 + 8);
      local_c8 = *(undefined8 *)(param_2 + 0x10);
      uStack_c0 = *(undefined8 *)(param_2 + 0x18);
      local_b8 = *(undefined8 *)(param_2 + 0x20);
      uStack_b0 = *(undefined8 *)(param_2 + 0x28);
      local_a8 = *(undefined8 *)(param_2 + 0x30);
      uStack_a0 = *(undefined8 *)(param_2 + 0x38);
      local_98 = *(undefined8 *)(param_2 + 0x40);
      uStack_90 = *(undefined8 *)(param_2 + 0x48);
      local_88 = *(undefined8 *)(param_2 + 0x50);
      uStack_80 = *(undefined8 *)(param_2 + 0x58);
      local_78 = *(undefined8 *)(param_2 + 0x60);
      uStack_70 = *(undefined8 *)(param_2 + 0x68);
      local_68 = *(undefined8 *)(param_2 + 0x70);
      uStack_60 = *(undefined8 *)(param_2 + 0x78);
      local_58 = *(undefined8 *)(param_2 + 0x80);
      uStack_50 = *(undefined8 *)(param_2 + 0x88);
      local_48 = *(undefined8 *)(param_2 + 0x90);
      uStack_40 = *(undefined8 *)(param_2 + 0x98);
      local_38 = lVar6;
      FUN_180041db8(plVar1,&local_d8);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  return lVar6;
}

