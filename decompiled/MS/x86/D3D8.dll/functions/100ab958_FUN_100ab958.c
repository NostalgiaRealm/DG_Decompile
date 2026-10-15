/*
 * FUN_100ab958 at 100ab958
 * undefined __thiscall FUN_100ab958(void * this, undefined8 * param_1, int param_2, int param_3)
 * Address ranges: 100ab958-100abb71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100ab958(void *this,undefined8 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_30;
  DWORD local_20 [2];
  uint local_18;
  byte local_14;
  undefined1 local_13;
  byte local_12;
  byte local_11;
  
  local_20[0] = 0;
  BVar4 = VirtualProtect(param_1,0x10,0x40,local_20);
  if (BVar4 != 0) {
    iVar9 = 0x100;
    local_20[1] = 2;
    local_18 = 0;
    do {
      if ((char)((uint)iVar9 >> 8) == '\0') {
        return;
      }
      local_11 = 0;
      local_12 = 0;
      bVar1 = (&DAT_100b1360)[*(byte *)(local_18 + (int)param_1)];
      while ((char)bVar1 < '\0') {
        local_11 = local_11 | *(char *)(local_18 + (int)param_1) == 'f';
        local_12 = (byte)iVar9 | *(char *)(local_18 + (int)param_1) == 'g';
        iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),local_12);
        iVar6 = local_18 + 1;
        local_18 = local_18 + 1;
        bVar1 = (&DAT_100b1360)[*(byte *)(iVar6 + (int)param_1)];
      }
      uVar5 = (uint)CONCAT11(bVar1,~(bVar1 >> 5));
      local_14 = (byte)((uint)iVar9 >> 8) & ~(bVar1 >> 5);
      iVar6 = 0;
      uVar7 = local_18;
      if ((bVar1 & 0x40) != 0) {
        uVar7 = local_18 + 1;
        bVar2 = *(byte *)(local_18 + 1 + (int)param_1);
        uVar5 = (uint)CONCAT11(bVar1,bVar2);
        if ((bVar2 & 0xc0) == 0) {
          cVar3 = (char)(uVar5 & 0xffffff07);
          local_13 = cVar3 == '\x04';
          uVar5 = CONCAT31((int3)((uVar5 & 0xffffff07) >> 8),local_13);
          if (cVar3 == '\x05') {
            iVar6 = 4;
            if (local_12 != 0) {
              iVar6 = 2;
            }
          }
          else {
            iVar6 = 0;
          }
        }
        else if ((bVar2 & 0xc0) == 0x40) {
          uVar5 = CONCAT31((int3)((uVar5 & 0xffffff07) >> 8),(char)(uVar5 & 0xffffff07) == '\x04');
          iVar6 = 1;
        }
        else {
          if ((bVar2 & 0xc0) != 0x80) {
            iVar6 = 0;
            goto LAB_100aba6e;
          }
          iVar6 = 4;
          if (local_12 != 0) {
            iVar6 = 2;
          }
          uVar5 = CONCAT11(bVar1,bVar2) & 0xffffff07;
          uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 == '\x04');
        }
        if ((char)uVar5 != '\0') {
          uVar7 = local_18 + 2;
        }
      }
LAB_100aba6e:
      uVar5 = uVar5 >> 8 & 0x1f;
      if (uVar5 == 1) {
        iVar8 = 1;
      }
      else if (uVar5 == 2) {
        iVar8 = 2;
      }
      else if (uVar5 == 3) {
        iVar8 = 3;
      }
      else {
        if (uVar5 == 4) {
LAB_100aba92:
          iVar8 = 4;
          iVar9 = 2;
        }
        else {
          if (uVar5 != 0xc) {
            iVar8 = 0;
            if (uVar5 != 0x14) goto LAB_100abab4;
            goto LAB_100aba92;
          }
          iVar8 = 6;
          iVar9 = 4;
        }
        if (local_11 != 0) {
          iVar8 = iVar9;
        }
      }
LAB_100abab4:
      iVar9 = (uint)local_14 << 8;
      local_18 = uVar7 + 1 + iVar8 + iVar6;
    } while (local_18 < 5);
    if (local_14 != 0) {
      *(uint *)(param_2 + 8 + param_3 * 4) = local_18;
      *(undefined8 **)(param_2 + param_3 * 4) = param_1;
      iVar9 = DAT_100b708c;
      iVar8 = param_3 * 0x80;
      *(int *)(DAT_100b7078 + iVar8 + 0x20 + param_2) = (int)this + 0xc;
      iVar6 = iVar8 + iVar9;
      *(int *)(DAT_100b707c + iVar8 + 0x20 + param_2) = param_2 + 0x10;
      FUN_100adac0((undefined4 *)(param_2 + 0x20 + iVar6),(undefined4 *)param_1,local_18);
      iVar6 = local_18 + iVar6;
      *(undefined1 *)(iVar6 + 0x20 + param_2) = 0xe9;
      *(uint *)(iVar6 + 0x21 + param_2) =
           (int)param_1 + (((param_3 * -0x80 - iVar9) - local_18) - param_2) + -0x20;
      local_30._5_3_ = (undefined3)((ulonglong)*param_1 >> 0x28);
      local_30._0_5_ = CONCAT41((iVar8 - (int)param_1) + 0x1b + param_2,0xe9);
      *param_1 = local_30;
    }
  }
  return;
}

