/*
 * FUN_18019a378 at 18019a378
 * undefined FUN_18019a378(void)
 * Address ranges: 18019a378-18019a623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18019a378(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  int local_98 [12];
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  
  *(undefined1 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    FUN_1801bad48(&local_b0);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar4 = local_b0._4_4_;
    if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 +
                0x6cc) == 0xa000) {
      uVar8 = FUN_180198608(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                            *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),iVar2,1,
                            local_b0 & 0xffffffff,local_b0._4_4_,0,0,0,8,0,0,0,0,0);
      if ((uVar8 & 1) != 0) {
LAB_18019a5b0:
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
    else {
      uVar7 = 4;
      if (iVar2 == 1) {
        uVar7 = 0;
      }
      uVar8 = FUN_180198608(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                            *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),iVar2,1,
                            local_b0 & 0xffffffff,local_b0._4_4_,0,local_a4._4_4_,0,0x48,0,uVar7,0,0
                            ,0);
      puVar3 = __hybrid_os_arm64x_dispatch_icall;
      if ((uVar8 & 1) != 0) {
        if (iVar2 == 1) goto LAB_18019a5b0;
        lVar11 = *(longlong *)(param_1 + 0x78);
        cVar6 = '\0';
        if (lVar11 != 0) {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11)(lVar11,auStack_68);
          local_98[0] = iVar4;
          local_98[1] = 9;
          local_a8 = 0;
          local_98[4] = 0;
          local_98[5] = 0;
          local_98[2] = 0;
          local_98[3] = -1;
          local_b0 = 0x500000000;
          local_98[6] = 0;
          local_98[7] = 4;
          local_98[8] = 0;
          local_98[9] = 0;
          piVar1 = local_98;
          if (iVar4 == 0) {
            piVar1 = (int *)0x0;
          }
          local_a4 = 0;
          local_98[10] = 0;
          local_98[0xb] = 0;
          *(longlong *)(param_1 + 0x130) = lVar11;
          cVar6 = FUN_180198350(param_1 + 0x118,piVar1,0,0,local_60,uStack_5c,0);
          if (cVar6 == '\0') {
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          else {
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_00)();
          }
        }
        *(char *)(param_1 + 0x168) = cVar6;
        uVar9 = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          do {
            uVar10 = 0;
            if (*(int *)(param_1 + 0x30) != 0) {
              do {
                FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar10);
                uVar7 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
                thunk_FUN_180223c20(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)(uVar10 + *(int *)(param_1 + 0x3c) * uVar9) * 0x28 +
                                    0x18,0,0,uVar7);
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(uint *)(param_1 + 0x30));
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x34));
        }
      }
    }
    if (*(char *)(param_1 + 0x168) != '\0') {
      return true;
    }
    FUN_180198b40(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
LAB_18019a5ec:
    bVar5 = false;
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar11 = FUN_1802229a8(0x400);
      *(longlong *)(param_1 + 0x10) = lVar11;
      if (lVar11 == 0) goto LAB_18019a5ec;
    }
    cVar6 = FUN_180199c00(param_1,1);
    bVar5 = cVar6 != '\0';
    *(char *)(param_1 + 0x168) = cVar6;
  }
  return bVar5;
}

