/*
 * FUN_100031d7 at 100031d7
 * undefined4 __fastcall FUN_100031d7(int param_1)
 * Address ranges: 100031d7-1000347a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100031d7(int param_1)

{
  int iVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  SIZE_T SVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *this;
  uint *puVar10;
  bool bVar11;
  uint local_40;
  uint local_3c;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    local_20 = param_1;
    FUN_10001f3b();
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_100ba2b4 + 0x7bc);
    FUN_10023614();
    LOCK();
    iVar7 = DAT_100ba2b8 + 1;
    UNLOCK();
    bVar11 = DAT_100ba2b8 == 0;
    DAT_100ba2b8 = iVar7;
    if (bVar11) {
      DAT_100ba2c0 = AddVectoredExceptionHandler(1,FUN_100235b3);
      DAT_100ba2c4 = AddVectoredContinueHandler(1,FUN_100235b3);
    }
    this = (int *)(param_1 + 0x48);
    local_34 = 0;
    do {
      uVar8 = local_34;
      if (((&DAT_100ba908)[local_34 * 0x228] != '\0') &&
         (cVar2 = FUN_100225dd((void *)(param_1 + 4),local_34), cVar2 != '\0')) {
        FUN_10003787(this,&local_34);
      }
      uVar8 = uVar8 + 1;
      local_34 = uVar8;
    } while (uVar8 < 0x20);
    local_3c = 0;
    local_34 = *(uint *)(local_20 + 0x4c);
    iVar7 = local_20;
    if (local_34 != 0) {
      do {
        local_30 = *this;
        uVar8 = 0;
        local_2c = 0;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_24 = 0;
        local_c = 0;
        local_40 = 0x7fffffff;
        if (local_34 != 0) {
          uVar6 = 0;
          iVar7 = *(int *)(local_30 + local_3c * 4);
          local_28 = iVar7 * 0x228;
          local_1c = (undefined4 *)(&DAT_100ba730)[iVar7 * 0x8a];
          uVar9 = 0;
          do {
            local_24 = uVar9;
            iVar1 = *(int *)(local_30 + uVar8 * 4);
            uVar9 = local_24;
            if (local_1c == (undefined4 *)(&DAT_100ba730)[iVar1 * 0x8a]) {
              local_10 = local_10 + 1;
              if ((uint)(&DAT_100ba734)[iVar1 * 0x8a] < local_40) {
                local_2c = uVar8;
              }
              uVar3 = (&DAT_100ba734)[iVar1 * 0x8a];
              if (local_40 <= (uint)(&DAT_100ba734)[iVar1 * 0x8a]) {
                uVar3 = local_40;
              }
              uVar9 = local_24 + 1;
              if ((uint)(&DAT_100ba734)[iVar7 * 0x8a] <= (uint)(&DAT_100ba734)[iVar1 * 0x8a]) {
                uVar9 = local_24;
              }
              local_40 = uVar3;
              local_18 = local_2c;
              local_14 = uVar9;
              if (local_3c != uVar8) {
                uVar6 = uVar6 | 1 << (uVar8 & 0x1f);
                local_c = uVar6;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
          this = (int *)(local_20 + 0x48);
          iVar7 = local_20;
        }
        iVar1 = *(int *)(iVar7 + 0x5c);
        if (*(int *)(iVar7 + 0x58) == iVar1) {
          if (iVar1 == 0) {
            uVar8 = 0x10;
          }
          else {
            uVar8 = iVar1 * 2;
          }
          SVar4 = (SIZE_T)((ulonglong)uVar8 * 0x10);
          if ((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) {
            SVar4 = 0xffffffff;
          }
          local_1c = (undefined4 *)FUN_100ad4a9(SVar4);
          if (local_1c != (undefined4 *)0x0) {
            FUN_100adac0(local_1c,*(undefined4 **)(iVar7 + 0x54),*(int *)(iVar7 + 0x5c) << 4);
            thunk_FUN_100ad48c(*(LPVOID *)(iVar7 + 0x54));
            *(undefined4 **)(iVar7 + 0x54) = local_1c;
            *(uint *)(iVar7 + 0x5c) = uVar8;
            goto LAB_100033e0;
          }
        }
        else {
LAB_100033e0:
          puVar10 = (uint *)(*(int *)(iVar7 + 0x58) * 0x10 + *(int *)(iVar7 + 0x54));
          *puVar10 = local_18;
          puVar10[1] = local_14;
          puVar10[2] = local_10;
          puVar10[3] = local_c;
          *(int *)(iVar7 + 0x58) = *(int *)(iVar7 + 0x58) + 1;
          this = (int *)(iVar7 + 0x48);
        }
        local_34 = *(uint *)(iVar7 + 0x4c);
        local_3c = local_3c + 1;
      } while (local_3c < local_34);
      uVar8 = local_34;
      if (local_34 != 0) {
        uVar9 = 0;
        if (local_34 != 0) {
          do {
            bVar11 = FUN_10022a57(*(int *)(*this + uVar9 * 4));
            if ((!bVar11) ||
               (uVar5 = FUN_100231af(*(int *)(*this + uVar9 * 4)), (char)uVar5 == '\0')) break;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(iVar7 + 0x4c));
        }
        if ((uVar9 == *(uint *)(iVar7 + 0x4c)) &&
           (uVar8 = FUN_1001345b((int *)(iVar7 + 0xc)), (char)uVar8 != '\0')) {
          *(undefined1 *)(iVar7 + 0x24) = 1;
          return CONCAT31((int3)(uVar8 >> 8),1);
        }
        for (; uVar8 = local_34, uVar9 != 0; uVar9 = uVar9 - 1) {
          FUN_100227e1(*(int *)(*this + -4 + uVar9 * 4));
        }
      }
    }
    local_34 = uVar8;
    in_EAX = FUN_10023a2f();
  }
  return in_EAX & 0xffffff00;
}

