/*
 * FUN_1800d7ef0 at 1800d7ef0
 * undefined FUN_1800d7ef0(void)
 * Address ranges: 1800d7ef0-1800d816b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800d7ef0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  
  cVar4 = FUN_1800d82b0();
  bVar5 = 0;
  if (cVar4 != '\0') {
    bVar5 = FUN_1800d7b68(param_1);
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 != 5) {
      bVar5 = 0;
    }
    if (bVar5 != 0) {
      bVar3 = false;
      do {
        if (*(char *)(param_1 + 0x50) != '\0' || bVar3) break;
        if (iVar8 == 0) {
          bVar5 = FUN_1800d7b68(param_1);
          uVar1 = *(uint *)(param_1 + 0x68);
          if ((6 < uVar1) || ((0x5bU >> (ulonglong)(uVar1 & 0x1f) & 1) == 0)) goto LAB_1800d7f84;
          if (bVar5 != 0) {
            if (uVar1 == 0) {
              bVar6 = FUN_1800d8538(param_1,0x1000,*(undefined4 *)(param_1 + 100));
              bVar5 = bVar6 & bVar5;
              goto LAB_1800d8040;
            }
            if (uVar1 == 1) {
              bVar6 = FUN_1800d8538(param_1,0x1000,*(undefined4 *)(param_1 + 100));
              bVar7 = FUN_1800d8538(param_1,0,*(undefined4 *)(param_1 + 0x60));
              bVar5 = bVar7 & bVar5 & bVar6;
            }
            else if (uVar1 == 6) {
              bVar6 = FUN_1800d8618(param_1,extraout_x1,*(undefined4 *)(param_1 + 100));
              bVar5 = bVar6 & bVar5;
              iVar8 = FUN_1800d8778(param_1,*(undefined8 *)(param_1 + 0x58),
                                    *(undefined4 *)(param_1 + 0x60));
              if (iVar8 == -1) {
                bVar5 = 0;
              }
              else {
                *(int *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                             (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
                           (ulonglong)*(uint *)(param_1 + 0x84) * 0x28 + 0x18) +
                         (ulonglong)*(uint *)(param_1 + 0x88) * 8 + 4) = iVar8;
              }
            }
            else if ((uVar1 == 3) || (uVar1 == 4)) {
              uVar2 = *(undefined4 *)(param_1 + 100);
              uVar9 = 0x1000;
              goto LAB_1800d8010;
            }
          }
        }
        else {
          if (iVar8 == 1) {
LAB_1800d7f64:
            bVar5 = FUN_1800d7b68(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if ((uVar1 != 2 && uVar1 < 0x80000000) && (int)uVar1 < 5) {
joined_r0x0001800d7ffc:
              if (uVar1 == 0) {
LAB_1800d8040:
                thunk_FUN_180001218(*(longlong *)(param_1 + 0x58) + 0x1000,
                                    *(longlong *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
                *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
              }
              else if (uVar1 == 1) {
                uVar2 = *(undefined4 *)(param_1 + 0x60);
                uVar9 = 0;
LAB_1800d8010:
                bVar6 = FUN_1800d8538(param_1,uVar9,uVar2);
                bVar5 = bVar6 & bVar5;
              }
              goto LAB_1800d7f88;
            }
          }
          else if (iVar8 == 4) {
            bVar5 = FUN_1800d7b68(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if (uVar1 < 2) goto joined_r0x0001800d7ffc;
          }
          else {
            if (iVar8 != 5) {
              if (iVar8 != 6) goto LAB_1800d7f88;
              goto LAB_1800d7f64;
            }
            bVar5 = FUN_1800d7b68(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if ((uVar1 & 0xfffffffc) == 0 && uVar1 != 2) goto joined_r0x0001800d7ffc;
          }
LAB_1800d7f84:
          bVar5 = 0;
        }
LAB_1800d7f88:
        iVar8 = *(int *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x50) == '\0') {
          bVar3 = **(char **)(param_1 + 0x40) == '\r' || **(char **)(param_1 + 0x40) == '\n';
        }
      } while (bVar5 != 0);
      if ((iVar8 == 0) && (*(int *)(param_1 + 100) != 0)) {
        bVar6 = FUN_1800d8538(param_1,0x1000);
        bVar5 = bVar6 & bVar5;
      }
    }
  }
  return bVar5;
}

