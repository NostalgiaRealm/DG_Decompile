/*
 * FUN_1801f4270 at 1801f4270
 * undefined FUN_1801f4270(void)
 * Address ranges: 1801f4270-1801f43cf;1801f43dc-1801f44eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1801f4270(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  
  cVar4 = FUN_1801f4630();
  bVar5 = 0;
  if (cVar4 != '\0') {
    bVar5 = FUN_1801f3ee8(param_1);
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 != 5) {
      bVar5 = 0;
    }
    if (bVar5 != 0) {
      bVar3 = false;
      do {
        if (*(char *)(param_1 + 0x50) != '\0' || bVar3) break;
        if (iVar9 == 0) {
          bVar5 = FUN_1801f3ee8(param_1);
          uVar1 = *(uint *)(param_1 + 0x68);
          if ((6 < uVar1) || ((0x5bU >> (ulonglong)(uVar1 & 0x1f) & 1) == 0)) goto LAB_1801f4304;
          if (bVar5 != 0) {
            if (uVar1 == 0) {
              uVar7 = FUN_1801f48c8(param_1,0x1000,*(undefined4 *)(param_1 + 100));
              goto LAB_1801f43c0;
            }
            if (uVar1 == 1) {
              bVar6 = FUN_1801f48c8(param_1,0x1000,*(undefined4 *)(param_1 + 100));
              bVar8 = FUN_1801f48c8(param_1,0,*(undefined4 *)(param_1 + 0x60));
              bVar5 = bVar8 & bVar5 & bVar6;
            }
            else if (uVar1 == 6) {
              bVar6 = FUN_1801f49a8(param_1,extraout_x1,*(undefined4 *)(param_1 + 100));
              bVar5 = bVar6 & bVar5;
              iVar9 = FUN_1801f4b08(param_1,*(undefined8 *)(param_1 + 0x58),
                                    *(undefined4 *)(param_1 + 0x60));
              if (iVar9 == -1) {
                bVar5 = 0;
              }
              else {
                *(int *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x90) +
                             (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
                           (ulonglong)*(uint *)(param_1 + 0x84) * 0x28 + 0x18) +
                         (ulonglong)*(uint *)(param_1 + 0x88) * 8 + 4) = iVar9;
              }
            }
            else if ((uVar1 == 3) || (uVar1 == 4)) {
              uVar2 = *(undefined4 *)(param_1 + 100);
              uVar10 = 0x1000;
              goto LAB_1801f4390;
            }
          }
        }
        else {
          if (iVar9 == 1) {
LAB_1801f42e4:
            bVar5 = FUN_1801f3ee8(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if ((uVar1 != 2 && uVar1 < 0x80000000) && (int)uVar1 < 5) {
joined_r0x0001801f437c:
              uVar7 = 0;
              if (uVar1 == 0) {
LAB_1801f43c0:
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(uVar7,*(longlong *)(param_1 + 0x58) + 0x1000,
                                    *(longlong *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
              }
              if (uVar1 == 1) {
                uVar2 = *(undefined4 *)(param_1 + 0x60);
                uVar10 = 0;
LAB_1801f4390:
                bVar6 = FUN_1801f48c8(param_1,uVar10,uVar2);
                bVar5 = bVar6 & bVar5;
              }
              goto LAB_1801f4308;
            }
          }
          else if (iVar9 == 4) {
            bVar5 = FUN_1801f3ee8(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if (uVar1 < 2) goto joined_r0x0001801f437c;
          }
          else {
            if (iVar9 != 5) {
              if (iVar9 != 6) goto LAB_1801f4308;
              goto LAB_1801f42e4;
            }
            bVar5 = FUN_1801f3ee8(param_1);
            uVar1 = *(uint *)(param_1 + 0x68);
            if ((uVar1 & 0xfffffffc) == 0 && uVar1 != 2) goto joined_r0x0001801f437c;
          }
LAB_1801f4304:
          bVar5 = 0;
        }
LAB_1801f4308:
        iVar9 = *(int *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x50) == '\0') {
          bVar3 = **(char **)(param_1 + 0x40) == '\r' || **(char **)(param_1 + 0x40) == '\n';
        }
      } while (bVar5 != 0);
      if ((iVar9 == 0) && (*(int *)(param_1 + 100) != 0)) {
        bVar6 = FUN_1801f48c8(param_1,0x1000);
        bVar5 = bVar6 & bVar5;
      }
    }
  }
  return bVar5;
}

