/*
 * FUN_180094100 at 180094100
 * undefined FUN_180094100(void)
 * Address ranges: 180094100-180094463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180094100(longlong param_1,uint param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  
  if (*(longlong *)(param_1 + 0x74) != 0) {
    return '\x01';
  }
  if ((param_3 & 1) != 0) {
    FUN_180101df0(*(longlong *)(param_1 + 0x58) + 0x12c0);
  }
  uVar6 = func_0x0001801bad48(&local_70,*(undefined4 *)(param_1 + 0x2c));
  if (uVar6 - 0x15 < 0xb) {
LAB_180094198:
    iVar12 = 1;
    if (*(int *)(param_1 + 0x34) != 1) goto LAB_1800941ac;
  }
  else {
    uVar9 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar9 = 5;
    }
    if ((*(uint *)(&DAT_180231470 + (ulonglong)uVar6 * 4) <= uVar9) &&
       (*(int *)(param_1 + 0x38) == 0)) goto LAB_180094198;
  }
  iVar12 = 0;
LAB_1800941ac:
  puVar2 = (uint *)(param_1 + 0x34);
  uVar4 = local_70._4_4_;
  uVar7 = *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar6 * 4);
  cVar5 = FUN_180090aa8(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),*puVar2,1,
                        local_70 & 0xffffffff,local_70._4_4_,local_68,uVar7,0,uStack_64,0,
                        (byte)(*(uint *)(param_1 + 0x40) >> 1) & 1,1,0,0);
  if (cVar5 != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508);
      if ((param_3 & 1) != 0) {
        local_78 = *(undefined8 *)(param_1 + 0x74);
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x1b500);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar15 + 0x28);
        bVar3 = true;
        lVar8 = FUN_1800f2540(lVar15,&local_78);
        if (lVar8 != 0) {
          uVar10 = (ulonglong)*(uint *)(lVar8 + 0x18);
          do {
            if ((int)uVar10 == 0) break;
            uVar6 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar6;
            if (uVar6 < *(uint *)(lVar8 + 0x18)) {
              piVar11 = (int *)(*(longlong *)(lVar8 + 0x10) + uVar10 * 0x30 + 0x24);
            }
            else {
              piVar11 = (int *)&DAT_0000001c;
            }
            if (*piVar11 != 0) {
              bVar3 = false;
            }
          } while (bVar3);
        }
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar15 + 0x28);
        if (bVar3) {
          uVar14 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1518);
        }
        else {
          FUN_180101df0(*(longlong *)(param_1 + 0x58) + 0x12c0);
        }
      }
      uVar6 = 0;
      if (*puVar2 != 0) {
        local_78 = CONCAT44(local_78._4_4_,iVar12);
        do {
          uVar9 = *(uint *)(param_1 + 0x30);
          if (uVar9 != 0) {
            uVar13 = 0;
            do {
              local_70 = 0;
              uStack_64 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar13 & 0x1f);
              if (uStack_64 == 0) {
                uStack_64 = 1;
              }
              local_68 = 0;
              local_60 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar13 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              uStack_5c = 1;
              puVar1 = (undefined8 *)
                       (*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar13 + uVar9 * uVar6) * 0x10);
              FUN_1800ebbb8(uVar14,*(undefined8 *)(param_1 + 0x74),
                            uVar13 + *(int *)(param_1 + 0x3c) * uVar6,
                            *(longlong *)(param_1 + 0x58) + 0x16d0,&local_70,*puVar1,
                            *(undefined4 *)(puVar1 + 1),0);
              uVar9 = *(uint *)(param_1 + 0x30);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar9);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *puVar2);
        iVar12 = (int)local_78;
      }
    }
    if (((param_2 & 1) != 0) && (iVar12 != 0)) {
      cVar5 = FUN_180091088(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),uVar4,0,uVar7);
      uVar6 = 0;
      if (*puVar2 != 0) {
        do {
          uVar9 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            do {
              FUN_1800a2b98(param_1,*(undefined4 *)(param_1 + 0x28),uVar9);
              uVar7 = FUN_1800a2b50(param_1,*(undefined4 *)(param_1 + 0x24));
              (*__imp_USER32_dll_SetRect)
                        (((ulonglong)(uVar9 + *(int *)(param_1 + 0x3c) * uVar6) << 5 | 0x10) +
                         *(longlong *)(param_1 + 0x164),0,0,uVar7);
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(param_1 + 0x30));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *puVar2);
      }
      if (cVar5 == '\0') {
        FUN_180091218(param_1 + 0x60,1,1);
      }
    }
  }
  return cVar5;
}

