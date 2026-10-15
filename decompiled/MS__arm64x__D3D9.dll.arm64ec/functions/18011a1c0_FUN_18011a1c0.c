/*
 * FUN_18011a1c0 at 18011a1c0
 * undefined FUN_18011a1c0(void)
 * Address ranges: 18011a1c0-18011a3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011a1c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar9;
  uint uVar10;
  longlong local_640;
  undefined8 local_638 [191];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar10 = *(uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        uVar10 = 0;
        while( true ) {
          uVar7 = (uint)*(ushort *)(param_1 + 0x3c);
          if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
            uVar7 = 1;
          }
          if (uVar7 <= uVar10) break;
          lVar4 = *(longlong *)(*(longlong *)(param_2 + (ulonglong)(uVar10 + uVar6 * 0x10) * 8) + 8)
          ;
          FUN_180131158(lVar4);
          uVar8 = (ulonglong)*(uint *)(lVar4 + 0x88);
          if (*(uint *)(lVar4 + 0x88) != 0xffffffff) {
            lVar5 = *(longlong *)(lVar4 + 0x78);
            uVar3 = (*(code *)puVar2)(0x180224000);
            (*extraout_x11_00)(uVar3,*(undefined8 *)(lVar4 + 0x70),
                               *(undefined8 *)(lVar5 + (uVar8 & 0xffffffff) * 8));
            *(undefined4 *)(lVar4 + 0x88) = 0xffffffff;
          }
          uVar10 = uVar10 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x80));
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar6 = 1;
    }
    FUN_180222c50(&local_640,0,0x600);
    uVar7 = 0;
    if (uVar10 != 0) {
      do {
        if (uVar6 != 0) {
          uVar9 = 0;
          do {
            lVar4 = *(longlong *)
                     (*(longlong *)(param_2 + (ulonglong)(uVar9 + uVar7 * 0x10) * 8) + 8);
            uVar8 = (ulonglong)(uVar9 + uVar7 * uVar6);
            uVar9 = uVar9 + 1;
            local_638[uVar8 * 2 + -1] = *(undefined8 *)(lVar4 + 0x28);
            *(undefined4 *)(local_638 + uVar8 * 2) = *(undefined4 *)(lVar4 + 0x18);
          } while (uVar9 < uVar6);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10);
      uVar10 = 0;
      do {
        uVar6 = 0;
        while( true ) {
          uVar7 = (uint)*(ushort *)(param_1 + 0x3c);
          if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
            uVar7 = 1;
          }
          if (uVar7 <= uVar6) break;
          lVar4 = *(longlong *)(*(longlong *)(param_2 + (ulonglong)(uVar6 + uVar10 * 0x10) * 8) + 8)
          ;
          FUN_180131158(lVar4);
          FUN_1801309a0(lVar4 + 0x68);
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x80));
    }
    plVar1 = &local_640;
    if (local_640 == 0) {
      plVar1 = (longlong *)0x0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,*(undefined8 *)(param_1 + 0x58),plVar1)
    ;
    (*extraout_x11)();
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

