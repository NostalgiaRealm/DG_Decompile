/*
 * FUN_180019fd8 at 180019fd8
 * undefined __cdecl FUN_180019fd8(longlong param_1, ulonglong param_2)
 * Address ranges: 180019fd8-18001a0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019fd8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong extraout_x9;
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  
  if ((*(char *)(param_1 + 0x3171) != '\0') || ((param_2 & 1) != 0)) {
    uVar7 = FUN_180022ca0(param_1,*(int *)(param_1 + 0x2984));
    if ((int)uVar7 != -1) {
      lVar8 = extraout_x9 + (longlong)(int)uVar7 * 0x170;
      if (*(char *)(param_1 + 0x32d9) == '\0') {
        local_18 = *(uint *)(lVar8 + 0x3658);
        local_20 = 0;
        uStack_14 = *(uint *)(lVar8 + 0x365c);
      }
      else {
        iVar9 = *(int *)(extraout_x9 + 0x29b0);
        iVar3 = *(int *)(extraout_x9 + 0x29a8);
        if (*(int *)(extraout_x9 + 0x2bf8) == 1) {
          iVar3 = *(int *)(lVar8 + 0x3654) - iVar9;
          iVar9 = *(int *)(lVar8 + 0x3654) - *(int *)(extraout_x9 + 0x29a8);
        }
        uVar1 = *(uint *)(lVar8 + 0x3650);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18001a058);
          (*pcVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)(*(int *)(extraout_x9 + 0x29a4) * *(int *)(lVar8 + 0x3658)) / uVar1;
        }
        local_20 = CONCAT44(local_20._4_4_,uVar4);
        uVar2 = *(uint *)(lVar8 + 0x3654);
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18001a074);
          (*pcVar6)();
        }
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uint)(*(int *)(lVar8 + 0x365c) * iVar3) / uVar2;
        }
        local_20 = CONCAT44(uVar5,uVar4);
        local_18 = 0;
        if (uVar1 != 0) {
          local_18 = (uint)(*(int *)(extraout_x9 + 0x29ac) * *(int *)(lVar8 + 0x3658)) / uVar1;
        }
        uStack_14 = 0;
        if (uVar2 != 0) {
          uStack_14 = (uint)(*(int *)(lVar8 + 0x365c) * iVar9) / uVar2;
        }
      }
      FUN_18004bfa0(*(longlong *)(*(longlong *)(extraout_x9 + 0x31c0) + 0x1508),1,
                    (longlong)&local_20);
    }
    *(undefined1 *)(param_1 + 0x3171) = 0;
  }
  return;
}

