/*
 * FUN_1801abc98 at 1801abc98
 * undefined FUN_1801abc98(void)
 * Address ranges: 1801abc98-1801abeff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801abc98(longlong *param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_60 [2];
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar9 = *param_1;
  lVar7 = param_1[1];
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar5 = (*extraout_x11)(lVar9,0);
  if (lVar5 != 0) {
    uVar8 = *(undefined8 *)(lVar5 + 0x14);
    (*(code *)puVar2)(0x180224000);
    iVar4 = (*extraout_x11_00)(uVar8,&local_50,0);
    if (-1 < iVar4) {
      if ((local_50 == 4) && (2 < *(int *)(lVar9 + 0x44) - 3U)) {
        iVar4 = *(int *)(lVar9 + 0x3c);
        uVar6 = FUN_180221e50(*(longlong *)(lVar9 + 0x58) + 0x12c0);
        if ((uVar6 & 1) != 0) {
          iVar4 = (int)lVar7 + iVar4 * iVar1;
          uVar6 = FUN_18020ea10(*(undefined8 *)(*(longlong *)(lVar9 + 0x50) + 0x1b500),uVar8,iVar4);
          if (((uVar6 & 1) != 0) &&
             (iVar4 == -0x7fffbffb || (iVar4 + 0x80000000U & 0x80000000) != 0)) {
            return;
          }
        }
      }
      if ((*(int *)(lVar9 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
        if (*(longlong *)(lVar9 + 0xd4) == 0) {
          *(undefined1 *)(lVar9 + 0xfc) = 1;
          FUN_1801a6db8(lVar9 + 0xb0,*(undefined4 *)(lVar9 + 0x30),*(undefined4 *)(lVar9 + 0x34));
          FUN_1801a93c0(lVar9);
        }
        lVar5 = *(longlong *)(lVar9 + 0xd4);
      }
      else {
        if (*(longlong *)(lVar9 + 0xc4) == 0) {
          FUN_1801bad48(&local_50);
          FUN_1801a7528(lVar9 + 0xb0,*(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28),
                        *(undefined4 *)(lVar9 + 0x30),*(undefined4 *)(lVar9 + 0x34),1,local_50,
                        uStack_4c,0,0x1688,0x1688,local_44,uStack_40,0,0,0,0);
          FUN_1801a93c0(lVar9);
        }
        lVar5 = *(longlong *)(lVar9 + 0xc4);
      }
      if (lVar5 != 0) {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_01)(lVar9,(int)lVar7,iVar1);
        local_58 = *(undefined8 *)(lVar9 + 0xc4);
        local_60[0] = 0;
        lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + 0x1b500);
        thunk_FUN_1802236f8(lVar5 + 0x28);
        bVar3 = true;
        lVar7 = FUN_18020ec30(lVar5,&local_58);
        if ((lVar7 != 0) && (lVar7 = FUN_18020ee08(lVar7 + 8,local_60), lVar7 != 0)) {
          (*(code *)puVar2)(0x180224000);
          uVar6 = (*extraout_x11_02)();
          bVar3 = *(ulonglong *)(lVar7 + 0x18) <= uVar6;
        }
        thunk_FUN_18022370c(lVar5 + 0x28);
        if (bVar3) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_180208508(*(undefined8 *)(*(longlong *)(lVar9 + 0x58) + 0x1508));
        }
        *(undefined8 *)(lVar9 + 0x138) = uVar8;
      }
    }
  }
  return;
}

