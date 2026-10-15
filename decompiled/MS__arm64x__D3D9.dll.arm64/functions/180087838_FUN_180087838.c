/*
 * FUN_180087838 at 180087838
 * undefined FUN_180087838(void)
 * Address ranges: 180087838-180087aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180087838(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong in_stack_ffffffffffffff30;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x218) == 0) {
    iVar5 = func_0x0001801bad48(&local_58,*(undefined4 *)(param_1 + 0x2c));
    if (*(char *)(param_1 + 0x248) != '\0') {
      lVar3 = 0x40;
      if (iVar5 == 0x15) {
        lVar3 = 0x50;
      }
      uStack_54 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3);
      lVar3 = 0x38;
      if (iVar5 == 0x15) {
        lVar3 = 0x48;
      }
      local_58 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3);
    }
    iVar5 = *(int *)(param_1 + 0x34);
    lVar3 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar3 = 0x38;
    }
    uVar7 = 4;
    if (iVar5 == 1) {
      uVar7 = 0;
    }
    FUN_180082d80(param_1 + 0x200,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),
                  *(undefined4 *)(param_1 + lVar3),iVar5,1,local_58,uStack_54,
                  in_stack_ffffffffffffff30 & 0xffffffff00000000,0,0,8,0,uVar7,0,iVar5 != 1,0);
    *(undefined1 *)(param_1 + 0x16b) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(longlong *)(param_1 + 0x218) == 0) goto LAB_180087a68;
  if (*(char *)(param_1 + 0x16b) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x34);
    lVar3 = param_1 + 0x158;
    if (uVar4 == 0) {
LAB_180087a0c:
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      (**(code **)(*plVar6 + 0x178))
                (plVar6,*(longlong *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x78));
      if (uVar4 != 0) {
        uVar9 = 0;
        do {
          uVar1 = (int)uVar9 + 0x40;
          uVar8 = 0xffffffffffffffff >> (0x40 - (ulonglong)uVar4 & 0x3f);
          if (uVar1 <= uVar4) {
            uVar8 = 0xffffffffffffffff;
          }
          *(ulonglong *)(lVar3 + (uVar9 >> 6) * 8) =
               *(ulonglong *)(lVar3 + (uVar9 >> 6) * 8) | uVar8;
          uVar9 = (ulonglong)uVar1;
        } while (uVar1 < uVar4);
      }
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      do {
        if (uVar9 != 0) goto LAB_180087988;
        uVar1 = (int)uVar8 + 0x40;
        uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar4 & 0x3f) & 0xffffffff;
        if (uVar1 <= uVar4) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar9 = *(ulonglong *)(lVar3 + (uVar8 >> 6) * 8) & uVar9;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < uVar4);
      if (uVar9 == 0) goto LAB_180087a0c;
LAB_180087988:
      uVar9 = 0;
      do {
        if ((*(byte *)(param_1 + ((uVar9 >> 6) + 0x2b) * 8 + (uVar9 >> 3 & 7)) >> (uVar9 & 7) & 1)
            == 0) {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
          (**(code **)(*plVar6 + 0x170))
                    (plVar6,*(undefined8 *)(param_1 + 0x218),uVar9,0,0,0,
                     *(undefined8 *)(param_1 + 0x78),uVar9,0);
          lVar2 = lVar3 + (uVar9 >> 6) * 8;
          uVar8 = uVar9 >> 3 & 7;
          *(byte *)(lVar2 + uVar8) = *(byte *)(lVar2 + uVar8) | (byte)(1 << (uVar9 & 7));
        }
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < uVar4);
    }
    *(undefined1 *)(param_1 + 0x16b) = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x228);
LAB_180087a68:
  if (((param_2 & 1) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_180083430(param_1 + 0x200,0);
    uVar10 = *(undefined8 *)(param_1 + 0x238);
  }
  return uVar10;
}

