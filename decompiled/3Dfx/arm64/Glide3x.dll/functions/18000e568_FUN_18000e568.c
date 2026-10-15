/*
 * FUN_18000e568 at 18000e568
 * undefined __cdecl FUN_18000e568(longlong param_1, ulonglong param_2)
 * Address ranges: 18000e568-18000e65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e568(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  
  if ((*(char *)(param_1 + 0x32f1) != '\0') || ((param_2 & 1) != 0)) {
    uVar6 = FUN_180016f80((longlong *)(param_1 + 0x3668),*(int *)(param_1 + 0x29fc));
    if (uVar6 != 0xffffffff) {
      lVar7 = param_1 + (longlong)(int)uVar6 * 0x170;
      if (*(char *)(param_1 + 0x3459) == '\0') {
        local_18 = *(uint *)(lVar7 + 0x37d8);
        local_20 = 0;
        uStack_14 = *(uint *)(lVar7 + 0x37dc);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x2a28);
        iVar2 = *(int *)(param_1 + 0x2a20);
        if (*(int *)(param_1 + 0x2c98) == 1) {
          iVar2 = *(int *)(lVar7 + 0x37d4) - iVar8;
          iVar8 = *(int *)(lVar7 + 0x37d4) - *(int *)(param_1 + 0x2a20);
        }
        uVar6 = *(uint *)(lVar7 + 0x37d0);
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18000e5f0);
          (*pcVar5)();
        }
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = (uint)(*(int *)(param_1 + 0x2a1c) * *(int *)(lVar7 + 0x37d8)) / uVar6;
        }
        local_20 = CONCAT44(local_20._4_4_,uVar3);
        uVar1 = *(uint *)(lVar7 + 0x37d4);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x18000e60c);
          (*pcVar5)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)(*(int *)(lVar7 + 0x37dc) * iVar2) / uVar1;
        }
        local_20 = CONCAT44(uVar4,uVar3);
        local_18 = 0;
        if (uVar6 != 0) {
          local_18 = (uint)(*(int *)(param_1 + 0x2a24) * *(int *)(lVar7 + 0x37d8)) / uVar6;
        }
        uStack_14 = 0;
        if (uVar1 != 0) {
          uStack_14 = (uint)(*(int *)(lVar7 + 0x37dc) * iVar8) / uVar1;
        }
      }
      FUN_18004fb30(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,(longlong)&local_20);
    }
    *(undefined1 *)(param_1 + 0x32f1) = 0;
  }
  return;
}

