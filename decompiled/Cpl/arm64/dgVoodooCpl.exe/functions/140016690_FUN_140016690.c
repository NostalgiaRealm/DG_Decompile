/*
 * FUN_140016690 at 140016690
 * byte __cdecl FUN_140016690(longlong param_1)
 * Address ranges: 140016690-14001690b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_140016690(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  uint uVar7;
  
  bVar1 = FUN_140016a50(param_1);
  bVar2 = 0;
  if (bVar1) {
    bVar2 = FUN_140016308(param_1);
    iVar5 = *(int *)(param_1 + 0x68);
    if (iVar5 != 5) {
      bVar2 = 0;
    }
    if (bVar2 != 0) {
      bVar1 = false;
      do {
        if (*(char *)(param_1 + 0x50) != '\0' || bVar1) break;
        if (iVar5 == 0) {
          bVar2 = FUN_140016308(param_1);
          uVar7 = *(uint *)(param_1 + 0x68);
          if ((6 < uVar7) || ((0x5bU >> (ulonglong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_140016724;
          if (bVar2 != 0) {
            if (uVar7 == 0) {
              bVar3 = FUN_140016cd8(param_1,0x1000,*(uint *)(param_1 + 100));
              bVar2 = bVar3 & bVar2;
              goto LAB_1400167e0;
            }
            if (uVar7 == 1) {
              bVar3 = FUN_140016cd8(param_1,0x1000,*(uint *)(param_1 + 100));
              bVar4 = FUN_140016cd8(param_1,0,*(uint *)(param_1 + 0x60));
              bVar2 = bVar4 & bVar2 & bVar3;
            }
            else if (uVar7 == 6) {
              bVar3 = FUN_140016e20(param_1,extraout_x1,*(uint *)(param_1 + 100));
              bVar2 = bVar3 & bVar2;
              iVar5 = FUN_140016f80(param_1,*(undefined8 **)(param_1 + 0x58),
                                    *(uint *)(param_1 + 0x60));
              if (iVar5 == -1) {
                bVar2 = 0;
              }
              else {
                *(int *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                             (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
                           (ulonglong)*(uint *)(param_1 + 0x84) * 0x28 + 0x18) +
                         (ulonglong)*(uint *)(param_1 + 0x88) * 8 + 4) = iVar5;
              }
            }
            else if ((uVar7 == 3) || (uVar7 == 4)) {
              uVar7 = *(uint *)(param_1 + 100);
              uVar6 = 0x1000;
              goto LAB_1400167b0;
            }
          }
        }
        else {
          if (iVar5 == 1) {
LAB_140016704:
            bVar2 = FUN_140016308(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if ((uVar7 != 2 && uVar7 < 0x80000000) && (int)uVar7 < 5) {
joined_r0x00014001679c:
              if (uVar7 == 0) {
LAB_1400167e0:
                thunk_FUN_140001000(*(undefined8 **)(param_1 + 0x58) + 0x200,
                                    *(undefined8 **)(param_1 + 0x58),
                                    (ulonglong)*(uint *)(param_1 + 0x60));
                *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
              }
              else if (uVar7 == 1) {
                uVar7 = *(uint *)(param_1 + 0x60);
                uVar6 = 0;
LAB_1400167b0:
                bVar3 = FUN_140016cd8(param_1,uVar6,uVar7);
                bVar2 = bVar3 & bVar2;
              }
              goto LAB_140016728;
            }
          }
          else if (iVar5 == 4) {
            bVar2 = FUN_140016308(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if (uVar7 < 2) goto joined_r0x00014001679c;
          }
          else {
            if (iVar5 != 5) {
              if (iVar5 != 6) goto LAB_140016728;
              goto LAB_140016704;
            }
            bVar2 = FUN_140016308(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            if ((uVar7 & 0xfffffffc) == 0 && uVar7 != 2) goto joined_r0x00014001679c;
          }
LAB_140016724:
          bVar2 = 0;
        }
LAB_140016728:
        iVar5 = *(int *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x50) == '\0') {
          bVar1 = **(char **)(param_1 + 0x40) == '\r' || **(char **)(param_1 + 0x40) == '\n';
        }
      } while (bVar2 != 0);
      if ((iVar5 == 0) && (*(uint *)(param_1 + 100) != 0)) {
        bVar1 = FUN_140016cd8(param_1,0x1000,*(uint *)(param_1 + 100));
        bVar2 = bVar1 & bVar2;
      }
    }
  }
  return bVar2;
}

