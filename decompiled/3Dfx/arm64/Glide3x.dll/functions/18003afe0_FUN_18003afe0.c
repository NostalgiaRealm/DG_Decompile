/*
 * FUN_18003afe0 at 18003afe0
 * uint __cdecl FUN_18003afe0(longlong param_1)
 * Address ranges: 18003afe0-18003b25b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003afe0(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  uint uVar7;
  uint uVar8;
  
  bVar1 = FUN_18003b3a0(param_1);
  uVar8 = (uint)bVar1;
  if (bVar1) {
    bVar2 = FUN_18003ac58(param_1);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar8 = (uint)bVar2;
    if (iVar4 != 5) {
      uVar8 = 0;
    }
    if (uVar8 != 0) {
      bVar1 = false;
      do {
        if (*(char *)(param_1 + 0x50) != '\0' || bVar1) break;
        if (iVar4 == 0) {
          bVar2 = FUN_18003ac58(param_1);
          uVar7 = *(uint *)(param_1 + 0x68);
          uVar8 = (uint)bVar2;
          if ((6 < uVar7) || ((0x5bU >> (ulonglong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_18003b074;
          if (uVar8 != 0) {
            if (uVar7 == 0) {
              uVar5 = FUN_18003b628(param_1,0x1000,*(uint *)(param_1 + 100));
              uVar8 = (uint)uVar5 & 0xff & uVar8;
              goto LAB_18003b130;
            }
            if (uVar7 == 1) {
              uVar5 = FUN_18003b628(param_1,0x1000,*(uint *)(param_1 + 100));
              uVar6 = FUN_18003b628(param_1,0,*(uint *)(param_1 + 0x60));
              uVar8 = (uint)uVar6 & 0xff & uVar8 & (uint)uVar5 & 0xff;
            }
            else if (uVar7 == 6) {
              bVar3 = FUN_18003b708(param_1,extraout_x1,*(uint *)(param_1 + 100));
              uVar8 = (uint)(bVar3 & bVar2);
              iVar4 = FUN_18003b868(param_1,*(undefined8 **)(param_1 + 0x58),
                                    *(uint *)(param_1 + 0x60));
              if (iVar4 == -1) {
                uVar8 = 0;
              }
              else {
                *(int *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                             (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
                           (ulonglong)*(uint *)(param_1 + 0x84) * 0x28 + 0x18) +
                         (ulonglong)*(uint *)(param_1 + 0x88) * 8 + 4) = iVar4;
              }
            }
            else if ((uVar7 == 3) || (uVar7 == 4)) {
              uVar7 = *(uint *)(param_1 + 100);
              uVar5 = 0x1000;
              goto LAB_18003b100;
            }
          }
        }
        else {
          if (iVar4 == 1) {
LAB_18003b054:
            bVar2 = FUN_18003ac58(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if ((uVar7 != 2 && uVar7 < 0x80000000) && (int)uVar7 < 5) {
joined_r0x00018003b0ec:
              uVar8 = (uint)bVar2;
              if (uVar7 == 0) {
LAB_18003b130:
                thunk_FUN_1800010d8(*(undefined8 **)(param_1 + 0x58) + 0x200,
                                    *(undefined8 **)(param_1 + 0x58),
                                    (ulonglong)*(uint *)(param_1 + 0x60));
                *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
              }
              else if (uVar7 == 1) {
                uVar7 = *(uint *)(param_1 + 0x60);
                uVar5 = 0;
LAB_18003b100:
                uVar5 = FUN_18003b628(param_1,uVar5,uVar7);
                uVar8 = (uint)uVar5 & 0xff & uVar8;
              }
              goto LAB_18003b078;
            }
          }
          else if (iVar4 == 4) {
            bVar2 = FUN_18003ac58(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if (uVar7 < 2) goto joined_r0x00018003b0ec;
          }
          else {
            if (iVar4 != 5) {
              if (iVar4 != 6) goto LAB_18003b078;
              goto LAB_18003b054;
            }
            bVar2 = FUN_18003ac58(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if ((uVar7 & 0xfffffffc) == 0 && uVar7 != 2) goto joined_r0x00018003b0ec;
          }
LAB_18003b074:
          uVar8 = 0;
        }
LAB_18003b078:
        iVar4 = *(int *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x50) == '\0') {
          bVar1 = **(char **)(param_1 + 0x40) == '\r' || **(char **)(param_1 + 0x40) == '\n';
        }
      } while (uVar8 != 0);
      if ((iVar4 == 0) && (*(uint *)(param_1 + 100) != 0)) {
        uVar5 = FUN_18003b628(param_1,0x1000,*(uint *)(param_1 + 100));
        uVar8 = (uint)uVar5 & 0xff & uVar8;
      }
    }
  }
  return uVar8;
}

