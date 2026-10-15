/*
 * FUN_180219208 at 180219208
 * undefined FUN_180219208(void)
 * Address ranges: 180219208-18021944b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180219208(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  lVar10 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar7,&DAT_1802398e8,param_2 + 0xd80);
  }
  (*(code *)puVar4)(0x180224000);
  uVar5 = (*extraout_x11_00)();
  *(undefined4 *)(param_2 + 0xd78) = uVar5;
  iVar6 = FUN_18020c7c8(*(undefined8 *)(lVar10 + 0x2238),2);
  *(int *)(param_2 + 0xd98) = iVar6;
  if (iVar6 != -1) {
    local_58 = 0;
    uVar9 = 0;
    local_50 = 0;
    local_60 = *(undefined4 *)(&DAT_180238818 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_5c = 4;
    do {
      lVar8 = param_2 + uVar9 * 8;
      uVar7 = (*(code *)puVar4)(0x180224000);
      iVar6 = (*extraout_x11_01)(uVar7,uVar9,&DAT_18022cfe8,lVar8 + 0xd88);
      if (iVar6 < 0) {
        if ((int)uVar9 == 0) {
          uVar1 = *(uint *)(param_2 + 0xd98);
          if (uVar1 != 0xffffffff) {
            lVar10 = *(longlong *)(lVar10 + 0x2238);
            thunk_FUN_1802236f8(lVar10 + 0x28);
            uVar3 = uVar1 & 0xffff;
            uVar2 = uVar3 + 2;
            if (uVar3 < uVar2) {
              lVar8 = *(longlong *)
                       (*(longlong *)(lVar10 + 0x50) + (ulonglong)(uVar1 >> 0x10) * 0x10 + 8);
              do {
                uVar9 = -1L << ((ulonglong)uVar3 & 0x3f);
                uVar1 = (uVar3 & 0xffffffc0) + 0x40;
                if (uVar2 < uVar1) {
                  uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar2 & 0x3f) & uVar9;
                }
                *(ulonglong *)(lVar8 + (ulonglong)(uVar3 >> 6) * 8) =
                     *(ulonglong *)(lVar8 + (ulonglong)(uVar3 >> 6) * 8) &
                     (uVar9 ^ 0xffffffffffffffff);
                uVar3 = uVar1;
              } while (uVar1 < uVar2);
            }
            thunk_FUN_18022370c(lVar10 + 0x28);
          }
          *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
          return 0;
        }
        do {
          (*(code *)puVar4)();
          (*extraout_x11_03)();
        } while( true );
      }
      FUN_18020d168(*(undefined8 *)(lVar10 + 0x2238),&local_68,*(undefined4 *)(param_2 + 0xd98),
                    uVar9);
      lVar8 = param_2 + 0xd88;
      uVar7 = (*(code *)puVar4)(0x180224000);
      (*extraout_x11_02)(uVar7,*(undefined8 *)(lVar8 + uVar9 * 8),&local_60,local_68);
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < 2);
    FUN_180218c38(param_1,param_2,param_3);
  }
  return 1;
}

