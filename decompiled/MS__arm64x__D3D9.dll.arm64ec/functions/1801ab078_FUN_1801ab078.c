/*
 * FUN_1801ab078 at 1801ab078
 * undefined FUN_1801ab078(void)
 * Address ranges: 1801ab078-1801ab3c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801ab078(longlong param_1,uint param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  
  local_70 = param_2 & 0xff;
  if (*(longlong *)(param_1 + 0x74) != 0) {
    return '\x01';
  }
  if ((param_3 & 1) != 0) {
    FUN_180221ec0(*(longlong *)(param_1 + 0x58) + 0x12c0);
  }
  uVar5 = FUN_1801bad48(&local_60,*(undefined4 *)(param_1 + 0x2c));
  if (uVar5 - 0x15 < 0xb) {
LAB_1801ab10c:
    iVar13 = 1;
    if (*(int *)(param_1 + 0x34) != 1) goto LAB_1801ab120;
  }
  else {
    uVar8 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar8 = 5;
    }
    if ((*(uint *)(&DAT_18022e050 + (ulonglong)uVar5 * 4) <= uVar8) &&
       (*(int *)(param_1 + 0x38) == 0)) goto LAB_1801ab10c;
  }
  iVar13 = 0;
LAB_1801ab120:
  local_6c = *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar5 * 4);
  puVar2 = (uint *)(param_1 + 0x34);
  uStack_68 = local_60._4_4_;
  cVar4 = FUN_1801a7528(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),*puVar2,1,
                        local_60 & 0xffffffff,local_60._4_4_,local_58,local_6c,0,uStack_54,0,
                        (byte)(*(uint *)(param_1 + 0x40) >> 1) & 1,1,0,0);
  if (cVar4 != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508);
      if ((param_3 & 1) != 0) {
        local_78 = *(undefined8 *)(param_1 + 0x74);
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x1b500);
        thunk_FUN_1802236f8(lVar14 + 0x28);
        bVar3 = true;
        lVar7 = FUN_18020ec30(lVar14,&local_78);
        if (lVar7 != 0) {
          uVar9 = (ulonglong)*(uint *)(lVar7 + 0x18);
          do {
            if ((int)uVar9 == 0) break;
            uVar5 = (int)uVar9 - 1;
            uVar9 = (ulonglong)uVar5;
            if (uVar5 < *(uint *)(lVar7 + 0x18)) {
              piVar10 = (int *)(*(longlong *)(lVar7 + 0x10) + uVar9 * 0x30 + 0x24);
            }
            else {
              piVar10 = (int *)&DAT_0000001c;
            }
            if (*piVar10 != 0) {
              bVar3 = false;
            }
          } while (bVar3);
        }
        thunk_FUN_18022370c(lVar14 + 0x28);
        if (bVar3) {
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1518);
        }
        else {
          FUN_180221ec0(*(longlong *)(param_1 + 0x58) + 0x12c0);
        }
      }
      uVar5 = 0;
      if (*puVar2 != 0) {
        local_78 = CONCAT44(local_78._4_4_,iVar13);
        do {
          uVar8 = *(uint *)(param_1 + 0x30);
          if (uVar8 != 0) {
            uVar11 = 0;
            do {
              local_60 = 0;
              uStack_54 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar11 & 0x1f);
              if (uStack_54 == 0) {
                uStack_54 = 1;
              }
              local_58 = 0;
              local_50 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar11 & 0x1f);
              if (local_50 == 0) {
                local_50 = 1;
              }
              uStack_4c = 1;
              puVar1 = (undefined8 *)
                       (*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar11 + uVar8 * uVar5) * 0x10);
              FUN_18020b680(uVar12,*(undefined8 *)(param_1 + 0x74),
                            uVar11 + *(int *)(param_1 + 0x3c) * uVar5,
                            *(longlong *)(param_1 + 0x58) + 0x16d0,&local_60,*puVar1,
                            *(undefined4 *)(puVar1 + 1),0);
              uVar8 = *(uint *)(param_1 + 0x30);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar8);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar2);
        iVar13 = (int)local_78;
      }
    }
    if ((local_70 != 0) && (iVar13 != 0)) {
      cVar4 = FUN_1801a7bc8(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),uStack_68,0,local_6c);
      uVar5 = 0;
      if (*puVar2 != 0) {
        do {
          uVar8 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar8);
              uVar6 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
              thunk_FUN_180223c20(((ulonglong)(uVar8 + *(int *)(param_1 + 0x3c) * uVar5) << 5 | 0x10
                                  ) + *(longlong *)(param_1 + 0x164),0,0,uVar6);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(param_1 + 0x30));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar2);
      }
      if (cVar4 == '\0') {
        FUN_1801a7d98(param_1 + 0x60,1,1);
      }
    }
  }
  return cVar4;
}

